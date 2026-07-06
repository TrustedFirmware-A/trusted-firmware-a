/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch_helpers.h>
#include <common/bl_common.h>
#include <drivers/generic_delay_timer.h>
#include <lib/mmio.h>
#include <lib/xlat_tables/xlat_mmu_helpers.h>
#include <lib/xlat_tables/xlat_tables_defs.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

static meminfo_t bl1_tzram_layout;

meminfo_t *bl1_plat_sec_mem_layout(void)
{
	return &bl1_tzram_layout;
}

static void ldelay(register_t delay)
{
	__asm__ volatile (
		"1:\tcbz %0, 2f\n\t"
		"sub %0, %0, #1\n\t"
		"b 1b\n"
		"2:"
		: "=&r" (delay) : "0" (delay)
	);
}

static void rpi4_staged_setup_local_timer(void)
{
	/*
	 * Use the 19.2 MHz crystal as the local timer source. Some early
	 * firmware revisions also need a short delay after the prescaler write.
	 */
	mmio_write_32(RPI4_LOCAL_CONTROL_BASE_ADDRESS, 0);
	mmio_write_32(RPI4_LOCAL_CONTROL_PRESCALER, 0x80000000);
	ldelay(100000);
}

void bl1_early_platform_setup(void)
{
	rpi4_staged_setup_local_timer();

	rpi3_console_init();

	write_cntfrq_el0(plat_get_syscnt_freq2());
	generic_delay_timer_init();

	bl1_tzram_layout.total_base = BL_RAM_BASE;
	bl1_tzram_layout.total_size = BL_RAM_SIZE;

#if TRANSFER_LIST
	(void)rpi_bl1_transfer_list_init();
#endif
}

void bl1_plat_arch_setup(void)
{
	rpi3_setup_page_tables(bl1_tzram_layout.total_base,
			      bl1_tzram_layout.total_size,
			      BL_CODE_BASE, BL1_CODE_END,
			      BL1_RO_DATA_BASE, BL1_RO_DATA_END
#if USE_COHERENT_MEM
			      , BL_COHERENT_RAM_BASE, BL_COHERENT_RAM_END
#endif
			     );

	enable_mmu_el3(0);
}

void bl1_platform_setup(void)
{
#if TRANSFER_LIST
	rpi_bl1_set_bl2_transfer_list();
#endif

	plat_rpi3_io_setup();
}
