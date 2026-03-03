/*
 * Copyright (c) 2021-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __DDR_INTERNAL_H__
#define __DDR_INTERNAL_H__

#include <lib/mmio.h>
#include <ddr_mc_if.h>
#include <ddr_phy_regs.h>

#define MC_PHYSET_NUM		(4)
#define SWIZZLE_MC_NUM		(9)
#define SIZZLE_PHY_NUM		(16)

static inline uint32_t read_mc_reg(uint32_t offset)
{
	return mmio_read_32(DDR_MC_BASE + offset);
}

static inline void write_mc_reg(uint32_t offset, uint32_t val)
{
	mmio_write_32(DDR_MC_BASE + offset, val);
}

static inline void rmw_mc_reg(uint32_t offset, uint32_t mask, uint32_t val)
{
	write_mc_reg(offset, (read_mc_reg(offset) & mask) | val);
}

static inline uint32_t read_phy_reg(uint32_t offset)
{
	return mmio_read_32(DDR_PHY_BASE + offset);
}

static inline void write_phy_reg(uint32_t offset, uint32_t val)
{
	mmio_write_32(DDR_PHY_BASE + offset, val);
}

static inline void rmw_phy_reg(uint32_t offset, uint32_t mask, uint32_t val)
{
	write_phy_reg(offset, (read_phy_reg(offset) & mask) | val);
}

static inline void ddr_ctrl_reten_en_n(bool en)
{
	write_phy_reg(DDRPHY_R79, en ? BIT(1) : 0);
}

extern const uint32_t mc_init_tbl[MC_INIT_NUM][2];
extern const uint32_t mc_odt_pins_tbl[4];
extern const uint32_t mc_mr1_tbl[2];
extern const uint32_t mc_mr2_tbl[2];
extern const uint32_t mc_mr5_tbl[2];
extern const uint32_t mc_mr6_tbl[2];
extern const uint32_t mc_phy_settings_tbl[MC_PHYSET_NUM][2];
extern const uint32_t swizzle_mc_tbl[SWIZZLE_MC_NUM][2];
extern const uint32_t swizzle_phy_tbl[SIZZLE_PHY_NUM][2];
extern const char ddr_an_version[];

#endif	/* __DDR_INTERNAL_H__ */
