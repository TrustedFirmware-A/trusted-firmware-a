/*
 * Copyright (C) 2018 Marvell International Ltd.
 * Copyright (C) 2025-2026 Free Mobile / Freebox
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef PHY_PORTING_LAYER_H
#define PHY_PORTING_LAYER_H

#define MAX_LANE_NR		6

/*
 * XFI (10G) parameters - not used by NBX during boot.
 * 10G interfaces will be configured by Linux kernel if needed.
 * All lanes set to defaults (no tuning).
 */
static const struct xfi_params
	xfi_static_values_tab[AP_NUM][CP_NUM][MAX_LANE_NR] = {
	/* AP0 */
	{
		/* CP 0 */
		{
			{ 0 }, /* Comphy0 */
			{ 0 }, /* Comphy1 */
			{ 0 }, /* Comphy2 */
			{ 0 }, /* Comphy3 */
			{ 0 }, /* Comphy4 */
			{ 0 }, /* Comphy5 */
		},

		/* CP 1 */
		{
			{ 0 }, /* Comphy0 */
			{ 0 }, /* Comphy1 */
			{ 0 }, /* Comphy2 */
			{ 0 }, /* Comphy3 */
			{ 0 }, /* Comphy4 */
			{ 0 }, /* Comphy5 */
		},
	},
};

/*
 * SATA parameters - not used by NBX.
 * NBX boots from eMMC, no SATA interfaces.
 * All lanes set to defaults (no tuning).
 */
static const struct sata_params
	sata_static_values_tab[AP_NUM][CP_NUM][MAX_LANE_NR] = {
	/* AP0 */
	{
		/* CP 0 */
		{
			{ 0 }, /* Comphy0 */
			{ 0 }, /* Comphy1 */
			{ 0 }, /* Comphy2 */
			{ 0 }, /* Comphy3 */
			{ 0 }, /* Comphy4 */
			{ 0 }, /* Comphy5 */
		},

		/* CP 1 */
		{
			{ 0 }, /* Comphy0 */
			{ 0 }, /* Comphy1 */
			{ 0 }, /* Comphy2 */
			{ 0 }, /* Comphy3 */
			{ 0 }, /* Comphy4 */
			{ 0 }, /* Comphy5 */
		},
	},
};

static const struct usb_params
	usb_static_values_tab[AP_NUM][CP_NUM][MAX_LANE_NR] = {
	[0 ... AP_NUM-1][0 ... CP_NUM-1][0 ... MAX_LANE_NR-1] = {
		.polarity_invert = COMPHY_POLARITY_NO_INVERT
	},
};
#endif /* PHY_PORTING_LAYER_H */
