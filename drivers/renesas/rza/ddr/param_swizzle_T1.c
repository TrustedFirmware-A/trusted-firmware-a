/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#include <ddr_mc_if.h>
#include <ddr_phy_regs.h>

const uint32_t mc_odt_pins_tbl[4] = { 0x00000001, 0x00000000, 0x00000000,
				      0x00000000 };

const uint32_t mc_mr1_tbl[2] = { 0x00000266, 0x00000004 };

const uint32_t mc_mr2_tbl[2] = { 0x00000600, 0x00000000 };

const uint32_t mc_mr5_tbl[2] = { 0x00000000, 0x00000000 };

const uint32_t mc_mr6_tbl[2] = { 0x00000000, 0x00000000 };

const uint32_t mc_phy_settings_tbl[][2] = { { DDRMC_R040, 0x4F7F64A8 },
					    { DDRMC_R041, 0x00003C30 },
					    { DDRMC_R042, 0x00003C28 },
					    { DDRMC_R043, 0x00000000 } };

const uint32_t swizzle_mc_tbl[][2] = {
	{ DDRMC_R030, 0x00000C0B }, { DDRMC_R031, 0x00001C00 },
	{ DDRMC_R032, 0x17121500 }, { DDRMC_R033, 0x00140116 },
	{ DDRMC_R034, 0x180E1300 }, { DDRMC_R035, 0x0D190F1B },
	{ DDRMC_R036, 0x0A021E1A }, { DDRMC_R037, 0x21201F06 },
	{ DDRMC_R038, 0x0000001D }
};

const uint32_t swizzle_phy_tbl[][2] = {
	{ DDRPHY_R29, 0x00000000 }, { DDRPHY_R11, 0x19160018 },
	{ DDRPHY_R29, 0x00000001 }, { DDRPHY_R11, 0x05021714 },
	{ DDRPHY_R29, 0x00000002 }, { DDRPHY_R11, 0x0F1D0307 },
	{ DDRPHY_R29, 0x00000003 }, { DDRPHY_R11, 0x0E0D0C08 },
	{ DDRPHY_R29, 0x00000004 }, { DDRPHY_R11, 0x13121110 },
	{ DDRPHY_R29, 0x00000005 }, { DDRPHY_R11, 0x1B040106 },
	{ DDRPHY_R29, 0x00000006 }, { DDRPHY_R11, 0x09150A1A },
	{ DDRPHY_R29, 0x00000007 }, { DDRPHY_R11, 0x001E0B1C }
};
