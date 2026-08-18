/*
 * Copyright (c) 2015-2025, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#if MEASURED_BOOT
#include "./include/rpi3_measured_boot.h"
#endif

#include <arch_helpers.h>
#include <common/bl_common.h>
#include <common/debug.h>
#include <common/desc_image_load.h>
#include <lib/xlat_tables/xlat_mmu_helpers.h>
#include <lib/xlat_tables/xlat_tables_defs.h>
#include <drivers/generic_delay_timer.h>
#include <drivers/rpi3/gpio/rpi3_gpio.h>
#if TRANSFER_LIST
#include <transfer_list.h>
#endif /* TRANSFER_LIST */

#include <drivers/rpi3/sdhost/rpi3_sdhost.h>
#include <platform_def.h>
#include <rpi_shared.h>

/* Data structure which holds the extents of the trusted SRAM for BL2 */
static meminfo_t bl2_tzram_layout __aligned(CACHE_WRITEBACK_GRANULE);

/* Data structure which holds the MMC info */
static struct mmc_device_info mmc_info;

/* Variables that hold the eventlog addr and size for use in BL2 Measured Boot */
static uint8_t *event_log_start;
static size_t event_log_size;

static void rpi3_sdhost_setup(void)
{
	struct rpi3_sdhost_params params;

	memset(&params, 0, sizeof(struct rpi3_sdhost_params));
	params.reg_base = RPI3_SDHOST_BASE;
	params.bus_width = MMC_BUS_WIDTH_1;
	params.clk_rate = 50000000;
	params.clk_rate_initial = (RPI3_SDHOST_MAX_CLOCK / HC_CLOCKDIVISOR_MAXVAL);
	mmc_info.mmc_dev_type = MMC_IS_SD_HC;
	mmc_info.ocr_voltage = OCR_3_2_3_3 | OCR_3_3_3_4;
	rpi3_sdhost_init(&params, &mmc_info);
}

void rpi3_mboot_fetch_eventlog_info(uint8_t **eventlog_addr, size_t *eventlog_size)
{
	*eventlog_addr = event_log_start;
	*eventlog_size = event_log_size;
}

/*******************************************************************************
 * BL1 has passed the extents of the trusted SRAM that should be visible to BL2
 * in x0. This memory layout is sitting at the base of the free trusted SRAM.
 * Copy it to a safe location before its reclaimed by later BL2 functionality.
 ******************************************************************************/

void bl2_early_platform_setup2(u_register_t arg0, u_register_t arg1,
			       u_register_t arg2, u_register_t arg3)
{
	meminfo_t *mem_layout = (meminfo_t *) arg1;

	/* Initialize the console to provide early debug support */
	rpi3_console_init();

	/* Enable arch timer */
	generic_delay_timer_init();

	/* Setup GPIO driver */
	rpi3_gpio_init();

	/* Setup the BL2 memory layout */
	bl2_tzram_layout = *mem_layout;

	/* Setup SDHost driver */
	rpi3_sdhost_setup();
	/* When TRANSFER_LIST is used, BL1 already set handoff args:
	 * arg3 = transfer list header; event log is inside TL.
	 * When legacy path, arg2/arg3 carry event log base/size.
	 */
#if TRANSFER_LIST
	(void)rpi_bl2_transfer_list_init(arg3);
#else
	event_log_start = (uint8_t *)(uintptr_t)arg2;
	event_log_size = arg3;
#endif

	plat_rpi3_io_setup();
}

void bl2_platform_setup(void)
{
	/*
	 * This is where a TrustZone address space controller and other
	 * security related peripherals would be configured.
	 */

#if defined(SPD_spmd) && defined(PLAT_RPI3_SPMC_SP_MANIFEST_SIZE)
	rpi_bl2_prepare_spmd_manifest(PLAT_RPI3_SPMC_SP_MANIFEST_SIZE);
#endif /* defined(SPD_spmd) && defined(PLAT_RPI3_SPMC_SP_MANIFEST_SIZE) */
}

/*******************************************************************************
 * Perform the very early platform specific architectural setup here.
 ******************************************************************************/
void bl2_plat_arch_setup(void)
{
	rpi3_setup_page_tables(bl2_tzram_layout.total_base,
			       bl2_tzram_layout.total_size,
			       BL_CODE_BASE, BL_CODE_END,
			       BL_RO_DATA_BASE, BL_RO_DATA_END
#if USE_COHERENT_MEM
			       , BL_COHERENT_RAM_BASE, BL_COHERENT_RAM_END
#endif
			      );

	enable_mmu_el1(0);
}

/*******************************************************************************
 * This function can be used by the platforms to update/use image
 * information for given `image_id`.
 ******************************************************************************/
int bl2_plat_handle_post_image_load(unsigned int image_id)
{
	int err = 0;
	bl_mem_params_node_t *bl_mem_params = get_bl_mem_params_node(image_id);
#if TRANSFER_LIST
	struct transfer_list_header *ns_tl;
#endif
	assert(bl_mem_params != NULL);

	switch (image_id) {
#if TRANSFER_LIST
	case TOS_FW_CONFIG_ID:
		/*
		 * Refresh the now stale checksum following loading of
		 * HW_CONFIG or TOS_FW_CONFIG into the TL.
		 */
		rpi3_bl2_sync_transfer_list();
		break;
	case BL31_IMAGE_ID:
		/*
		 * arg0 is a bl_params_t reserved for bl31_early_platform_setup2
		 * we just need arg1 and arg3 for BL31 to update the TL from S
		 * to NS memory before it exits
		 */
		if (GET_RW(bl_mem_params->ep_info.spsr) == MODE_RW_64) {
			bl_mem_params->ep_info.args.arg1 =
				TRANSFER_LIST_HANDOFF_X1_VALUE(REGISTER_CONVENTION_VERSION);
		}
		bl_mem_params->ep_info.args.arg3 =
			(uintptr_t)rpi_bl2_get_transfer_list();
		break;
#endif
	case BL32_IMAGE_ID:
#if defined(SPD_opteed) || defined(SPD_spmd)
		err = rpi_bl2_parse_optee_header(bl_mem_params);
#endif /* defined(SPD_opteed) || defined(SPD_spmd) */
		bl_mem_params->ep_info.spsr = rpi3_get_spsr_for_bl32_entry();
#if defined(SPD_spmd)
		bl_mem_params->ep_info.args.arg3 =
			(uintptr_t)rpi_bl2_get_transfer_list();
#endif /* defined(SPD_spmd) */
		break;

	case BL33_IMAGE_ID:
		/* BL33 expects to receive the primary CPU MPID (through r0) */

		bl_mem_params->ep_info.spsr = rpi3_get_spsr_for_bl33_entry();

#if TRANSFER_LIST
		ns_tl = rpi_bl2_relocate_transfer_list();
#ifdef FW_NS_HANDOFF_BASE
		if (ns_tl == NULL) {
			ERROR("Relocate TL to 0x%lx failed\n",
			      (unsigned long)FW_NS_HANDOFF_BASE);
			return -1;
		}
		INFO("TL relocated to ns region\n");
#endif
		if (!transfer_list_set_handoff_args(ns_tl,
						    &bl_mem_params->ep_info)) {
			WARN("Invalid TL, fallback to default arguments\n");
			bl_mem_params->ep_info.args.arg0 = 0xffff &
							   read_mpidr();
		}
#else
		/* BL33 expects to receive the primary CPU MPID (through r0) */
		bl_mem_params->ep_info.args.arg0 = 0xffff & read_mpidr();
#endif

		/* Shutting down the SDHost driver to let BL33 drives SDHost.*/
		rpi3_sdhost_stop();
		break;

	default:
		/* Do nothing in default case */
		break;
	}

	return err;
}
