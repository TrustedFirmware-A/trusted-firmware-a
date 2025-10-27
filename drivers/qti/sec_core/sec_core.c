/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/qti/sec_core/sec_core.h>
#include <lib/mmio.h>

#include <sec_core_defs.h>

void qti_sec_core_remap(uintptr_t entrypoint)
{
	mmio_write_32(APSS_SHARED_KRYO_RVBARADDR_LO_ADDR,
		      (uint32_t)(entrypoint >> 2));
	mmio_write_32(APSS_SHARED_KRYO_RVBARADDR_HI_ADDR,
		      (uint32_t)(entrypoint >> 34));
}

/*
 * ACPS: security configuration.
 *  - CPU Clock control/distribution (acc).
 *  - Global CPU Clock control/distribution (gcc)
 *  - General Purpose Timer(s) (tmr configured as general purpose)
 *  - Debug Timer (tmr configured for debug)
 *  - Watch Dog timer(s) (wdt)
 *  - System Interrupt Controller (SIC or QGIC or External)
 *  - Test Interface Controller (tic).
 *  - AHB Bus Interface and decoder (ahb).
 *  - Per CPU voltage control (avs)
 *  - Per CPU power control (spm)
 */
void qti_sec_core_init(void)
{
	uintptr_t addr = APSS_ALIAS_0_APC_SECURE_ADDR;
	int i = 0;

	mmio_write_32(APSS_WDT_TMR1_WDOG_SECURE_ADDR,
		      APSS_WDT_TMR1_WDOG_SECURE_RMSK);

	for (i = 0; i < APSS_ALIASn_APC_SECURE_MAX_INDEX + 1; i++) {
		mmio_write_32(addr, APSS_ALIAS_0_APC_SECURE_RMSK);
		addr += APSS_ALIASn_APC_SECURE_OFFSET_TO_NEXT;
	}

	mmio_write_32(APSS_CL_SECURE_ADDR, APSS_CL_SECURE_RMSK);
	mmio_write_32(APSS_BANKED_APC_SECURE_ADDR, APSS_BANKED_APC_SECURE_RMSK);
	mmio_write_32(APSS_SHARED_SHR_SECURE_ADDR, 0x0);
	mmio_write_32(GOLD_SAW4_SECURE_ADDR, GOLD_SAW4_SECURE_RMSK);
	mmio_write_32(SILVER_SAW4_SECURE_ADDR, SILVER_SAW4_SECURE_RMSK);
	mmio_write_32(APSS_PWR_APM_SECURE_ADDR, APSS_PWR_APM_SECURE_RMSK);
	mmio_write_32(APSS_PWR_MAS_SECURE_ADDR, APSS_PWR_MAS_SECURE_RMSK);
	mmio_write_32(GOLD_PLL_SECURE_ADDR, GOLD_PLL_SECURE_RMSK);
	mmio_write_32(SILVER_PLL_SECURE_ADDR, SILVER_PLL_SECURE_RMSK);
	mmio_write_32(L3_PLL_SECURE_ADDR, L3_PLL_SECURE_RMSK);
	mmio_write_32(APSS_MISC_CLK_SECURE_ADDR, APSS_MISC_CLK_SECURE_RMSK);

	dsbsy();
	isb();
}

