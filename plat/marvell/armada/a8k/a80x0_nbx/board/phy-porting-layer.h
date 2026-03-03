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
 * XFI (10G) SerDes PHY tuning parameters for NBX SFI interfaces.
 *
 * These are hardware-specific calibration values for the high-speed serial
 * links (10.3125 Gbps). Each board requires tuning based on PCB trace length,
 * impedance characteristics, and SFP+ cage design. Values are from the a80x0
 * reference board and should work for most designs.
 *
 * U-Boot applies these settings via SMC call to TF-A:
 *   comphy_smc(MV_SIP_COMPHY_POWER_ON, base, lane, mode)
 *
 * NBX SerDes lane assignment:
 *   CP0 Comphy4: SFI0 - 10G Ethernet (SFP+ cage)
 *   CP1 Comphy4: SFI0 - 10G Ethernet (SFP+ cage)
 */
static const struct xfi_params
	xfi_static_values_tab[AP_NUM][CP_NUM][MAX_LANE_NR] = {
	[0] = {	/* AP0 */
		[0] = {	/* CP0 */
			[0] = { 0 }, /* Comphy0 - unused */
			[1] = { 0 }, /* Comphy1 - unused */
			[2] = { 0 }, /* Comphy2 - unused */
			[3] = { 0 }, /* Comphy3 - unused */
			[4] = {	/* Comphy4 - SFI0 10G */
				/* FFE: Feed-Forward Equalizer */
				.g1_ffe_res_sel = 0x3,	/* resistor sel */
				.g1_ffe_cap_sel = 0xf,	/* capacitor sel */

				/* Clock recovery */
				.align90 = 0x5f,	/* 90 deg phase align */

				/* DFE: Decision Feedback Equalizer */
				.g1_dfe_res = 0x2,	/* resolution */

				/* TX parameters */
				.g1_amp = 0x1c,		/* output amplitude */
				.g1_emph = 0xe,		/* pre-emphasis level */
				.g1_emph_en = 0x1,	/* pre-emphasis enable */
				.g1_tx_amp_adj = 0x1,	/* amplitude adjust */
				.g1_tx_emph_en = 0x1,	/* emphasis enable */
				.g1_tx_emph = 0x0,	/* emphasis value */

				/* RX analog MUX filter coefficients */
				.g1_rx_selmuff = 0x1,	/* F coefficient */
				.g1_rx_selmufi = 0x0,	/* I coefficient */
				.g1_rx_selmupf = 0x2,	/* P coefficient */
				.g1_rx_selmupi = 0x2,	/* P/I coefficient */
				.valid = 0x1,
			},
			[5] = { 0 }, /* Comphy5 - SGMII2 (no XFI tuning) */
		},
		[1] = {	/* CP1 */
			[0] = { 0 }, /* Comphy0 - PCIe (no XFI tuning) */
			[1] = { 0 }, /* Comphy1 - USB3 (no XFI tuning) */
			[2] = { 0 }, /* Comphy2 - unused */
			[3] = { 0 }, /* Comphy3 - unused */
			[4] = {	/* Comphy4 - SFI0 10G */
				/* FFE: Feed-Forward Equalizer */
				.g1_ffe_res_sel = 0x3,	/* resistor sel */
				.g1_ffe_cap_sel = 0xf,	/* capacitor sel */

				/* Clock recovery */
				.align90 = 0x5f,	/* 90 deg phase align */

				/* DFE: Decision Feedback Equalizer */
				.g1_dfe_res = 0x2,	/* resolution */

				/* TX parameters */
				.g1_amp = 0x1c,		/* output amplitude */
				.g1_emph = 0xe,		/* pre-emphasis level */
				.g1_emph_en = 0x1,	/* pre-emphasis enable */
				.g1_tx_amp_adj = 0x1,	/* amplitude adjust */
				.g1_tx_emph_en = 0x1,	/* emphasis enable */
				.g1_tx_emph = 0x0,	/* emphasis value */

				/* RX analog MUX filter coefficients */
				.g1_rx_selmuff = 0x1,	/* F coefficient */
				.g1_rx_selmufi = 0x0,	/* I coefficient */
				.g1_rx_selmupf = 0x2,	/* P coefficient */
				.g1_rx_selmupi = 0x2,	/* P/I coefficient */
				.valid = 0x1,
			},
			[5] = { 0 }, /* Comphy5 - unused */
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
	[0] = {	/* AP0 */
		[0] = {	/* CP0 */
			[0] = { 0 }, /* Comphy0 */
			[1] = { 0 }, /* Comphy1 */
			[2] = { 0 }, /* Comphy2 */
			[3] = { 0 }, /* Comphy3 */
			[4] = { 0 }, /* Comphy4 */
			[5] = { 0 }, /* Comphy5 */
		},
		[1] = {	/* CP1 */
			[0] = { 0 }, /* Comphy0 */
			[1] = { 0 }, /* Comphy1 */
			[2] = { 0 }, /* Comphy2 */
			[3] = { 0 }, /* Comphy3 */
			[4] = { 0 }, /* Comphy4 */
			[5] = { 0 }, /* Comphy5 */
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
