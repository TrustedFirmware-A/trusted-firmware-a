/*
 * Copyright (c) 2025-2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <bl31/interrupt_mgmt.h>
#include <lib/extensions/ras.h>
#include <plat/arm/css/common/css_pm.h>
#include <plat/common/platform.h>

#include <cper.h>
#include <platform_def.h>
#include <rdaspen_ras.h>

#define CORE_RAM_ERR_RECORD		U(1)

void plat_handle_uncontainable_ea(void)
{
	uint64_t esr = read_esr_el3();

	INFO("RAS: Uncontainable RAS Error Handler (EL3)\n");
	VERBOSE("RAS: ESR_EL3 = 0x%lx (EC = 0x%lx, FSC = 0x%lx)\n",
		esr, (esr >> 26) & 0x3F, esr & 0x3F);
	/* There is no mitigation to UC errors and platform must panic */
	panic();
}

/* Initialise CPU RAS features for FHI configuration */
static void rdaspen_setup_cpu_ras_config(void)
{
	uint64_t reg_erxctlr_el1 = 0;
	unsigned int core_pos = plat_my_core_pos();

	/* Select Error Record 1, Error record 0 is for the DSU */
	write_errselr_el1(CORE_RAM_ERR_RECORD);
	reg_erxctlr_el1 = read_erxctlr_el1();

	/* Enable FI, CFI, UI for all configuration */
	reg_erxctlr_el1 |= ERX_CTRL_UI_ENABLE | ERX_CTRL_FI_ENABLE | ERX_CTRL_CFI_ENABLE |
			   ERX_CTRL_ED_ENABLE;

	write_erxctlr_el1(reg_erxctlr_el1);
	VERBOSE("RAS: Platform RAS Init on CPU %u : ERXCTLR_EL1=0x%lx successful\n",
		core_pos, reg_erxctlr_el1);
}

/*
 * Initialization function for the framework.
 *
 * Registers RAS config provided by the platform and then configures and
 * enables interrupt for each registered error.
 */
void rdaspen_ras_init_per_cpu(void)
{
	rdaspen_setup_cpu_ras_config();
}

/*
 * Extend default CPU power-on behavior.
 *
 * Wraps the default CSS pwr_domain_on_finish handler to ensure
 * platform-specific RAS initialization is performed on each CPU as it comes
 * online via PSCI.
 *
 */
void rdaspen_css_pwr_domain_on_finish(const psci_power_state_t *target_state)
{
	css_pwr_domain_on_finish(target_state);
	rdaspen_ras_init_per_cpu();
}

/*
 * Rising-edge SPI: clear any stale pending,
 * then set to trigger a new edge.
 */
static void rdaspen_set_error_notification_irq(unsigned int irq)
{
	plat_ic_clear_interrupt_pending(irq);
	plat_ic_set_interrupt_pending(irq);
	VERBOSE("RAS: IRQ %u triggered to EL1\n", irq);
}

static int rdaspen_ras_cpu_intr_handler(
	const struct err_record_info *err_rec,
	int probe_data,
	const struct err_handler_data *const data)
{
	uint32_t errx_status;
	(void)err_rec;
	(void)probe_data;

	if (data == NULL)
		return -1;

	WARN("CPU RAS: Interrupt Received ID: 0x%x\n", data->interrupt);

	/* Warning: Incase Error Record is already cleared this prevents queued interrupts */
	if ((read_erxstatus_el1() & (ERX_STATUS_V)) == 0) {
		WARN("CPU RAS: Spurious RAS interrupt observed %x\n", data->interrupt);
		plat_ic_end_of_interrupt(data->interrupt);
		return -1;
	}

	WARN("CPU RAS: Error Status value : 0x%lx\n", read_erxstatus_el1());

	size_t esb_len =
		cper_write_cpu_record((void *)RDASPEN_CPER_BUF_BASE, RDASPEN_CPER_BUF_SIZE);

	if (esb_len) {
		print_cper((const void *)RDASPEN_CPER_BUF_BASE);
		flush_dcache_range(RDASPEN_CPER_BUF_BASE, esb_len);
		VERBOSE("RAS: ESB written len=%zu @0x%lx\n",
				esb_len, (unsigned long)RDASPEN_CPER_BUF_BASE);
	}

	/* Clear the Inband Error. Inband Errors are CE and DE */
	errx_status = read_erxstatus_el1();
	write_erxstatus_el1(errx_status);
	clear_cpu_erx_misc0_register();

#if FAULT_INJECTION_SUPPORT
	/* Pseudo generation registers are cleared to avoid interrupt flood from NS */
	clear_cpu_pfg_ctrl_register();
	/* Injected Errors cannot be stopped until these registers are cleared */
	clear_cpu_pfg_cdn_register();
#endif /* FAULT_INJECTION_SUPPORT */

	WARN("CPU RAS: Error Status Clear Value  : 0x%lx\n", read_erxstatus_el1());

	plat_ic_end_of_interrupt(data->interrupt);
	rdaspen_set_error_notification_irq(ERROR_NOTIFICATION_IRQ);
	return 0;
}

/* RAS error record list definition, used by the common RAS framework. */
static struct err_record_info plat_err_records[] = {
	ERR_RECORD_SYSREG_V1(0, 1, NULL, &rdaspen_ras_cpu_intr_handler, 0),
};

/* RAS error interrupt list definition, used by the common RAS framework. */
static struct ras_interrupt plat_ras_interrupts[] = {
	{
		/* This Fault IRQ is common for all Arm platforms - PPI 17 */
		.intr_number = CPU_FAULT_IRQ,
		.err_record = &plat_err_records[0],
	},
};

/* Registers the RAS error record list with common RAS framework. */
REGISTER_ERR_RECORD_INFO(plat_err_records);
/* Registers the RAS error interrupt info list with common RAS framework. */
REGISTER_RAS_INTERRUPTS(plat_ras_interrupts);
