/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Clock register descriptor types and field definitions for the QTI clock
 * driver.
 */

#ifndef QTI_CLOCK_DESCRIPTORS_H
#define QTI_CLOCK_DESCRIPTORS_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>

/* Branch (CBCR) register fields. */
#define HAL_CLK_BRANCH_CTRL_REG_CLK_OFF_FMSK	0x80000000U
#define HAL_CLK_BRANCH_CTRL_REG_CLK_HW_CTL_FMSK	0x00000002U
#define HAL_CLK_BRANCH_CTRL_REG_CLK_ENABLE_FMSK	0x00000001U

/* GDSCR (power domain) register fields. */
#define HAL_CLK_GDSCR_SW_COLLAPSE_FMSK		0x00000001U

/*
 * CFG_GDSCR fields — architecturally fixed at GDSCR+4 across all GDSCs.
 * Used to poll sequencer completion instead of the legacy PWR_ON bit.
 */
#define HAL_CLK_CFG_GDSCR_OFFSET			0x00000004U
#define HAL_CLK_CFG_GDSCR_POWER_UP_COMPLETE_FMSK	0x00010000U
#define HAL_CLK_CFG_GDSCR_POWER_DOWN_COMPLETE_FMSK	0x00008000U

/* PLL mode register fields. */
#define HAL_CLK_PLL_MODE_PLL_LOCK_DET_BMSK	0x80000000U

/* Clock source enumeration. */
enum clock_source_id {
	CLOCK_SOURCE_XO			= 0,
	CLOCK_SOURCE_GPLL0		= 1,
	CLOCK_SOURCE_TOTAL
};

/* Register address/mask pair (vote register). */
struct clock_register_mask {
	uint32_t	addr;
	uint32_t	mask;
};

/* PLL source descriptor. */
struct clock_source_desc {
	uintptr_t			mode_addr;
	struct clock_register_mask	vote_reg;
};

/* Clock (CBCR) descriptor. */
struct clock_desc {
	uintptr_t			cbcr_addr;
	struct clock_register_mask	vote_reg;
	bool				tfa_enabled;
	enum chipinfo_part		part;        /* CHIPINFO_PART_UNKNOWN = always enabled */
	uint32_t			part_idx;    /* 0 for first/only instance */
};

/* Power domain (GDSCR) descriptor. */
struct clock_power_domain_desc {
	uintptr_t			gdscr_addr; /* SW_COLLAPSE GDSCR; CFG_GDSCR is at +4 */
	struct clock_register_mask	vote_reg;   /* if set, vote-based enable (GDS_HW) */
	bool				tfa_enabled;
	enum chipinfo_part		part;
	uint32_t			part_idx;
};

#endif /* QTI_CLOCK_DESCRIPTORS_H */
