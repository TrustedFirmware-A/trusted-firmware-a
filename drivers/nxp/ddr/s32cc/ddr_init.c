/*
 * Copyright 2020-2023, 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <ddr_init.h>

/* Ensure optimal phy pll settings for selected frequency. */
void set_optimal_pll(uint16_t frequency)
{
	/* Configure phy pll registers */
	mmio_write_32(MASTER_PLLCTRL1, PLLCTRL1_VALUE);
	mmio_write_32(MASTER_PLLTESTMODE, PLLTESTMODE_VALUE);
	mmio_write_32(MASTER_PLLCTRL4, PLLCTRL4_VALUE);
	mmio_write_32(MASTER_PLLCTRL2, pllctrl2_value(frequency));

	mmio_setbits_32(MASTER_CALMISC2, (CALMISC2 << CALMISC2_OFFSET));

	mmio_clrsetbits_32(MASTER_CALOFFSET,
			   CALDRV_MASK, ((CALDRV << CALDRV_OFFSET) | (CALDRV << CALDRV2_OFFSET)));
}
