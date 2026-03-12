/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <arch.h>
#include <arch_helpers.h>
#include <common/bl_common.h>
#include <common/desc_image_load.h>
#include <drivers/console.h>
#include <drivers/generic_delay_timer.h>
#include <drivers/renesas/rza/console/console.h>
#include <drivers/renesas/rza/cpg/cpg.h>
#include <drivers/renesas/rza/ddr/ddr.h>
#include <drivers/renesas/rza/pfc/pfc.h>
#include <drivers/renesas/rza/syc/syc.h>
#include <lib/mmio.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <plat/common/common_def.h>
#include "scif.h"

#include <platform_def.h>
#include <rza_ipl_version.h>
#include <rza_private.h>

#define SYS_REG_LSI_MODE		0x11020A00
#define SYS_REG_LSI_MODE_STAT_DEBUGEN	BIT(9)
#define WAIT_CNT			0x1000000

/* Table of regions to map using the MMU. */
const mmap_region_t plat_mmap[] = {
	MAP_REGION_FLAT(0x00000000, 0x00200000, MT_MEMORY | MT_RW | MT_SECURE),
	MAP_REGION_FLAT(0x10000000, 0x10000000, MT_DEVICE | MT_RW | MT_SECURE),
	MAP_REGION_FLAT(0x20000000, 0x10000000, MT_MEMORY | MT_RW | MT_SECURE),
	MAP_REGION_FLAT(0x40000000, 0x40000000, MT_MEMORY | MT_RW | MT_SECURE),
	{ 0 }
};

static void software_delay(uint32_t delay)
{
	while (delay--)
		asm volatile("nop");
}

/* Check if a debugger is being connected for debugging. If yes, give it a while before halting
 * the core.
 */
static void handle_debug_mode(void)
{
	/* check DEBUGEN */
	uint32_t val = mmio_read_32(SYS_REG_LSI_MODE);

	/* skip wait if DEBUGEN == 0 */
	if ((val & SYS_REG_LSI_MODE_STAT_DEBUGEN) == 0u) {
		return;
	}

	software_delay(WAIT_CNT);
}

int bl2_plat_handle_pre_image_load(unsigned int image_id)
{
	return 0;
}

int bl2_plat_handle_post_image_load(unsigned int image_id)
{
	static struct bl2_to_bl31_params_mem *params;
	bl_mem_params_node_t *bl_mem_params;

	if (!params) {
		params = (struct bl2_to_bl31_params_mem *)PARAMS_BASE;
		memset((void *)PARAMS_BASE, 0, sizeof(*params));
	}

	bl_mem_params = get_bl_mem_params_node(image_id);

	switch (image_id) {
	case BL32_IMAGE_ID:
		memcpy(&params->bl32_ep_info, &bl_mem_params->ep_info,
		       sizeof(entry_point_info_t));
		break;
	case BL33_IMAGE_ID:
		memcpy(&params->bl33_ep_info, &bl_mem_params->ep_info,
		       sizeof(entry_point_info_t));
		break;
	default:
		/* Do nothing in default case */
		break;
	}

	return 0;
}

void bl2_early_platform_setup2(u_register_t arg1, u_register_t arg2,
				  u_register_t arg3, u_register_t arg4)
{
	/* check if a debugger is being connected */
	handle_debug_mode();

	/* early setup Clock and Reset */
	cpg_early_setup();

	/* initialize SYC */
	syc_init(PLAT_SYC_INCK_HZ);

	/* initialize Timer */
	generic_delay_timer_init();

	/* setup PFC */
	pfc_setup();

	/* setup Clock and Reset */
	cpg_setup();

	/* initialize console driver */
	console_renesas_register(PLAT_SCIF0_BASE, PLAT_UART_INCK_HZ,
				 PLAT_UART_BARDRATE, CONSOLE_FLAG_BOOT | CONSOLE_FLAG_CRASH);

	NOTICE("Initial Program Loader %s\n", RZA_IPL_VERSION_STRING);
}

void bl2_plat_arch_setup(void)
{
	const mmap_region_t bl_regions[] = {
		MAP_REGION_FLAT(BL2_BASE, BL2_END - BL2_BASE,
				MT_MEMORY | MT_RW | MT_SECURE),
		MAP_REGION_FLAT(BL_CODE_BASE, BL_CODE_END - BL_CODE_BASE,
				MT_CODE | MT_SECURE),
		MAP_REGION_FLAT(BL_RO_DATA_BASE,
				BL_RO_DATA_END - BL_RO_DATA_BASE,
				MT_RO_DATA | MT_SECURE),
		{ 0 },
	};

	setup_page_tables(bl_regions, plat_mmap);

	enable_mmu_el3(0);
}

void bl2_platform_setup(void)
{
#if USE_SDRAM
	/* initialize DDR */
	ddr_setup();
#endif /* USE_SDRAM */

	rza_io_setup();

#if (APPLOAD == RZ_NOFIP)
	rza_load_fsp();
#endif /* (APPLOAD == RZ_NOFIP) */

	rza_print_descs();
}
