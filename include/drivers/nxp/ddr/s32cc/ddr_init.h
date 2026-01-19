/*
 * Copyright 2020-2022,2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef DDR_INIT_H
#define DDR_INIT_H

#include <stdlib.h>
#include <string.h>
#include "ddr_utils.h"

#define APBONLY_MICRORESET   0x40380420U
#define MASTER_PLLCTRL1      0x403816F0U
#define MASTER_PLLTESTMODE   0x40381708U
#define MASTER_PLLCTRL4      0x4038171CU
#define MASTER_PLLCTRL2      0x403816DCU

#define MASTER_CALOFFSET     0x40381514U
#define MASTER_CALMISC2      0x40381660U

#define CALDRV               0x9U
#define CALDRV_OFFSET        0x6U
#define CALDRV2_OFFSET       0xAU
#define CALDRV_MASK          0x3FC0U

#define CALMISC2             0x1U
#define CALMISC2_OFFSET      0xDU

#define PLLCTRL1_VALUE       0x00000021U
#define PLLTESTMODE_VALUE    0x00000024U
#define PLLCTRL4_VALUE       0x0000017FU

static inline uint32_t pllctrl2_value(uint16_t freq)
{
	if (freq < 469U) {
		return 0x7U;
	} else if (freq < 625U) {
		return 0x6U;
	} else if (freq <= 937U) {
		return 0xbU;
	} else if (freq < 1250U) {
		return 0xaU;
	} else {
		return 0x19U;
	}
}

/*
 * Updates PHY internal PLL settings.
 * @param frequency - selected DDR frequency
 */
void set_optimal_pll(uint16_t frequency);

#endif /* DDR_INIT_H */
