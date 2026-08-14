/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * NoC error OEM configuration data for the Lemans (QCS9075) platform.
 * Provides nocerr_config_info_oem, consumed by drivers/qti/icb/noc_error.c.
 */

#include <drivers/qti/chipinfo/chipinfo.h>

#include "noc_error.h"

/* Lemans OEM NOC configuration data - 11 NOC instances                      */
static struct nocerr_info_type_oem nocerr_cfgdata_oem[] = {
	/* [0] AGGRE1_NOC */
	{
		.name        = "AGGRE1_NOC",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x7U },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x5U },
		},
		.to_reg_vals = NULL,
	},
	/* [1] AGGRE2_NOC */
	{
		.name        = "AGGRE2_NOC",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x7U },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x5U },
		},
		.to_reg_vals = (uint32_t []){
			0x10FU, /* REFGEN_0_REFCTL0_LOW */
			0x1U,   /* REFGEN_0_MAINCTL_LOW */
			0x10FU, /* REFGEN_1_REFCTL0_LOW */
			0x1U,   /* REFGEN_1_MAINCTL_LOW */
		},
	},
	/* [2] PCIE_ANOC */
	{
		.name        = "PCIE_ANOC",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x7U },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x5U },
		},
		.to_reg_vals = (uint32_t []){
			0x10FU, /* REFGEN_0_REFCTL0_LOW */
			0x1U,   /* REFGEN_0_MAINCTL_LOW */
			0x10FU, /* REFGEN_1_REFCTL0_LOW */
			0x1U,   /* REFGEN_1_MAINCTL_LOW */
		},
	},
	/* [3] GPDSP_ANOC */
	{
		.name        = "GPDSP_ANOC",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0xFU },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x9U },
		},
		.to_reg_vals = NULL,
	},
	/* [4] CONFIG_NOC */
	{
		.name        = "CONFIG_NOC",
		.intr_enable = true,
		.error_fatal = true,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{
				.faultin_en0_low  = 0xFFFFAFEFU,
				.faultin_en0_high = 0xFFFFFFFFU,
				.faultin_en1_low  = 0x17FF7U,
			},
			{
				.faultin_en0_low  = 0xFEFFFFFFU,
				.faultin_en0_high = 0xFBFFFFFEU,
				.faultin_en1_low  = 0x1FFFU,
			},
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ 0 },
			{ .faultin_en0_low = 0x1BU },
		},
		.to_reg_vals = (uint32_t []){
			/* REFGEN REFCTLn, n=0..63 */
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U, 0x100U,
			0x100U, 0x100U, 0x100U, 0x100U,
			/* REFGEN_1 REFCTLn, n=0..8 */
			0x100U, /* REFGEN1 REFCTL0 - xs_pcie_tcu_cfg */
			0x100U, /* REFGEN1 REFCTL1 */
			0x100U, /* REFGEN1 REFCTL2 */
			0x104U, /* REFGEN1 REFCTL3 - xs_pcie_0 */
			0x104U, /* REFGEN1 REFCTL4 - xs_pcie_1 */
			0x100U, /* REFGEN1 REFCTL5 */
			0x100U, /* REFGEN1 REFCTL6 - qxs_pimem */
			0x100U, /* REFGEN1 REFCTL7 */
			0x100U, /* REFGEN1 REFCTL8 */
			/* MAINCTL registers */
			0x1U,   /* REFGEN MAINCTL */
			0x1U,   /* REFGEN1 MAINCTL */
		},
	},
	/* [5] DC_NOC */
	{
		.name        = "DC_NOC",
		.intr_enable = true,
		.error_fatal = true,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0xBFFFFFU },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x1U },
		},
		.to_reg_vals = (uint32_t []){
			0x100U, /* REFCTL0 */
			0x100U, /* REFCTL1 */
			0x100U, /* REFCTL2 */
			0x100U, /* REFCTL3 */
			0x100U, /* REFCTL4 */
			0x100U, /* REFCTL5 */
			0x100U, /* REFCTL6 */
			0x100U, /* REFCTL7 */
			0x1U,   /* MAINCTL */
		},
	},
	/* [6] GEM_NOC */
	{
		.name        = "GEM_NOC",
		.intr_enable = true,
		.error_fatal = true,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0xFFFFFU },
			{ .faultin_en0_low = 0xFFFU },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x100U },
			{ .faultin_en0_low = 0x800U },
		},
		.to_reg_vals = (uint32_t []){
			0x10FU, /* REFCTL0 - PD_GEMNOC - DebugChainProbe */
			0x10FU, /* REFCTL1 - CNOC */
			0x10FU, /* REFCTL2 - LLCC0 */
			0x10FU, /* REFCTL3 - LLCC1 */
			0x10FU, /* REFCTL4 - LLCC2 */
			0x10FU, /* REFCTL5 - LLCC3 */
			0x10FU, /* REFCTL6 - LLCC4 */
			0x10FU, /* REFCTL7 - LLCC5 */
			0x113U, /* REFCTL8 - PCIe, 218ms */
			0x1U,   /* MAINCTL */
			0x10FU, /* TRCHECK_0 REFCTL0 */
			0x1U,   /* TRCHECK_0 MAINCTL */
			0x10FU, /* TRCHECK_1 REFCTL0 */
			0x1U,   /* TRCHECK_1 MAINCTL */
		},
		.poc         = (struct nocerr_pos_info_oem []){
			{ .enable = true },  /* LLCC0 */
			{ .enable = true },  /* LLCC1 */
			{ .enable = true },  /* LLCC2 */
			{ .enable = true },  /* LLCC3 */
			{ .enable = true },  /* LLCC4 */
			{ .enable = true },  /* LLCC5 */
			{ .enable = true },  /* CNOC */
			{ .enable = true },  /* PCIE */
		},
	},
	/* [7] SYSTEM_NOC */
	{
		.name        = "SYSTEM_NOC",
		.intr_enable = true,
		.error_fatal = true,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0xFU },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x3U },
		},
		.to_reg_vals = (uint32_t []){
			0x10FU, /* REFGEN_0 REFCTL0 */
			0x1U,   /* REFGEN_0 MAINCTL */
			0x10FU, /* REFGEN_1 REFCTL0 */
			0x1U,   /* REFGEN_1 MAINCTL */
		},
	},
	/* [8] MMSS_NOC_HF */
	{
		.name        = "MMSS_NOC_HF",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x5U },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x9U },
		},
		.to_reg_vals = (uint32_t []){
			0x0U, /* HF1 REFCTL0 - disabled */
			0x0U, /* HF0 REFCTL0 - disabled */
			0x0U, /* HF0 REFCTL1 - disabled */
			0x0U, /* HF1 MAINCTL - disabled */
			0x0U, /* HF0 MAINCTL - disabled */
		},
	},
	/* [9] MMSS_NOC_SF */
	{
		.name        = "MMSS_NOC_SF",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x5U },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x9U },
		},
		.to_reg_vals = (uint32_t []){
			0x0U, /* SF0 REFCTL0 - disabled */
			0x0U, /* SF1 REFCTL0 - disabled */
			0x0U, /* SF0 MAINCTL - disabled */
			0x0U, /* SF1 MAINCTL - disabled */
		},
	},
	/* [10] LPASS_AG_NOC */
	{
		.name        = "LPASS_AG_NOC",
		.intr_enable = true,
		.error_fatal = false,
		.sbms        = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x3FFU },
		},
		.obs_mask    = (struct nocerr_sbm_info_oem []){
			{ .faultin_en0_low = 0x1U },
		},
		.to_reg_vals = NULL,
	},
};

/* External timeout clock register values                                    */
static uint32_t clock_reg_vals[] = {
	0x1U,  /* Enable timeout reference clock (CBCR) */
	0x3U,  /* DIV4 divider -> 4.8 MHz */
	0x1FU, /* DIV32 -> 150 KHz timeout ref (6.82 ms base) */
};

static struct nocerr_config_info_oem nocerr_config_info_oem = {
	.num_configs = 1U,
	.configs = (struct nocerr_propdata_type_oem []){
		{
			.family         = (uint32_t)CHIPINFO_FAMILY_LEMANSAU,
			.match          = false,
			.version        = CHIPINFO_VERSION(1, 0),
			.len            = sizeof(nocerr_cfgdata_oem) /
					  sizeof(nocerr_cfgdata_oem[0]),
			.noc_info_oem = nocerr_cfgdata_oem,
			.num_clock_regs = sizeof(clock_reg_vals) /
					  sizeof(clock_reg_vals[0]),
			.clock_reg_vals = clock_reg_vals,
			.num_filters    = 0U,
			.filters        = NULL,
			.reg_addr       = NULL,
			.reg_mask       = 0U,
			.reg_val        = 0U,
		},
	},
};

struct nocerr_config_info_oem *nocerr_target_get_config_info_oem(void)
{
	return &nocerr_config_info_oem;
}
