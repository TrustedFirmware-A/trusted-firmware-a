/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * NoC error configuration data for the Lemans (QCS9075) platform.
 * Provides nocerr_config_info, consumed by drivers/qti/icb/common/noc_error.c.
 */

#include <drivers/qti/chipinfo/chipinfo.h>

#include "noc_error.h"
#include "noc_error_hwio.h"
#include "noc_hw_type.h"

/* Lemans NOC configuration data - 11 NOC instances                          */
static struct nocerr_info_type nocerr_cfgdata[] = {
	/* [0] AGGRE1_NOC */
	{
		.name          = "AGGRE1_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)A1NOC_ERL_BASE,
		.intr_vector   = 201U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)A1NOC_SBM_BASE,
		},
		.num_tos       = 0U,
		.to_addrs      = NULL,
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [1] AGGRE2_NOC */
	{
		.name          = "AGGRE2_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)A2NOC_ERL_BASE,
		.intr_vector   = 234U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)A2NOC_SBM_BASE,
		},
		.num_tos       = 4U,
		.to_addrs      = (void *[]){
			(void *)A2NOC_REFGEN_0_REFCTL0,
			(void *)A2NOC_REFGEN_0_MAINCTL,
			(void *)A2NOC_REFGEN_1_REFCTL0,
			(void *)A2NOC_REFGEN_1_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [2] PCIE_ANOC */
	{
		.name          = "PCIE_ANOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)PCIE_ANOC_ERL_BASE,
		.intr_vector   = 638U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)PCIE_ANOC_SBM_BASE,
		},
		.num_tos       = 4U,
		.to_addrs      = (void *[]){
			(void *)PCIE_ANOC_REFGEN_0_REFCTL0,
			(void *)PCIE_ANOC_REFGEN_0_MAINCTL,
			(void *)PCIE_ANOC_REFGEN_1_REFCTL0,
			(void *)PCIE_ANOC_REFGEN_1_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [3] GPDSP_ANOC */
	{
		.name          = "GPDSP_ANOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)DSP_ANOC_ERL_BASE,
		.intr_vector   = 639U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)DSP_ANOC_SBM_BASE,
		},
		.num_tos       = 0U,
		.to_addrs      = NULL,
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [4] CONFIG_NOC */
	{
		.name          = "CONFIG_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)CNOC_ERL_BASE,
		.intr_vector   = 226U,
		.num_sbms      = 2U,
		.sb_hw         = (struct noc_sideband_hw *[]){
			&qnoc_sb_4_0_2l, &qnoc_sb_4_0_2l,
		},
		.sb_base_addrs = (void *[]){
			(void *)CNOC_CHILD_SBM_BASE,
			(void *)CNOC_MAIN_SBM_BASE,
		},
		.num_tos       = 75U,
		.to_addrs      = (void *[]){
			/* REFGEN REFCTLn, n=0..63 */
			(void *)CNOC_REFGEN_REFCTLn(0),
			(void *)CNOC_REFGEN_REFCTLn(1),
			(void *)CNOC_REFGEN_REFCTLn(2),
			(void *)CNOC_REFGEN_REFCTLn(3),
			(void *)CNOC_REFGEN_REFCTLn(4),
			(void *)CNOC_REFGEN_REFCTLn(5),
			(void *)CNOC_REFGEN_REFCTLn(6),
			(void *)CNOC_REFGEN_REFCTLn(7),
			(void *)CNOC_REFGEN_REFCTLn(8),
			(void *)CNOC_REFGEN_REFCTLn(9),
			(void *)CNOC_REFGEN_REFCTLn(10),
			(void *)CNOC_REFGEN_REFCTLn(11),
			(void *)CNOC_REFGEN_REFCTLn(12),
			(void *)CNOC_REFGEN_REFCTLn(13),
			(void *)CNOC_REFGEN_REFCTLn(14),
			(void *)CNOC_REFGEN_REFCTLn(15),
			(void *)CNOC_REFGEN_REFCTLn(16),
			(void *)CNOC_REFGEN_REFCTLn(17),
			(void *)CNOC_REFGEN_REFCTLn(18),
			(void *)CNOC_REFGEN_REFCTLn(19),
			(void *)CNOC_REFGEN_REFCTLn(20),
			(void *)CNOC_REFGEN_REFCTLn(21),
			(void *)CNOC_REFGEN_REFCTLn(22),
			(void *)CNOC_REFGEN_REFCTLn(23),
			(void *)CNOC_REFGEN_REFCTLn(24),
			(void *)CNOC_REFGEN_REFCTLn(25),
			(void *)CNOC_REFGEN_REFCTLn(26),
			(void *)CNOC_REFGEN_REFCTLn(27),
			(void *)CNOC_REFGEN_REFCTLn(28),
			(void *)CNOC_REFGEN_REFCTLn(29),
			(void *)CNOC_REFGEN_REFCTLn(30),
			(void *)CNOC_REFGEN_REFCTLn(31),
			(void *)CNOC_REFGEN_REFCTLn(32),
			(void *)CNOC_REFGEN_REFCTLn(33),
			(void *)CNOC_REFGEN_REFCTLn(34),
			(void *)CNOC_REFGEN_REFCTLn(35),
			(void *)CNOC_REFGEN_REFCTLn(36),
			(void *)CNOC_REFGEN_REFCTLn(37),
			(void *)CNOC_REFGEN_REFCTLn(38),
			(void *)CNOC_REFGEN_REFCTLn(39),
			(void *)CNOC_REFGEN_REFCTLn(40),
			(void *)CNOC_REFGEN_REFCTLn(41),
			(void *)CNOC_REFGEN_REFCTLn(42),
			(void *)CNOC_REFGEN_REFCTLn(43),
			(void *)CNOC_REFGEN_REFCTLn(44),
			(void *)CNOC_REFGEN_REFCTLn(45),
			(void *)CNOC_REFGEN_REFCTLn(46),
			(void *)CNOC_REFGEN_REFCTLn(47),
			(void *)CNOC_REFGEN_REFCTLn(48),
			(void *)CNOC_REFGEN_REFCTLn(49),
			(void *)CNOC_REFGEN_REFCTLn(50),
			(void *)CNOC_REFGEN_REFCTLn(51),
			(void *)CNOC_REFGEN_REFCTLn(52),
			(void *)CNOC_REFGEN_REFCTLn(53),
			(void *)CNOC_REFGEN_REFCTLn(54),
			(void *)CNOC_REFGEN_REFCTLn(55),
			(void *)CNOC_REFGEN_REFCTLn(56),
			(void *)CNOC_REFGEN_REFCTLn(57),
			(void *)CNOC_REFGEN_REFCTLn(58),
			(void *)CNOC_REFGEN_REFCTLn(59),
			(void *)CNOC_REFGEN_REFCTLn(60),
			(void *)CNOC_REFGEN_REFCTLn(61),
			(void *)CNOC_REFGEN_REFCTLn(62),
			(void *)CNOC_REFGEN_REFCTLn(63),
			/* REFGEN_1 REFCTLn, n=0..8 */
			(void *)CNOC_REFGEN1_REFCTLn(0),
			(void *)CNOC_REFGEN1_REFCTLn(1),
			(void *)CNOC_REFGEN1_REFCTLn(2),
			(void *)CNOC_REFGEN1_REFCTLn(3),
			(void *)CNOC_REFGEN1_REFCTLn(4),
			(void *)CNOC_REFGEN1_REFCTLn(5),
			(void *)CNOC_REFGEN1_REFCTLn(6),
			(void *)CNOC_REFGEN1_REFCTLn(7),
			(void *)CNOC_REFGEN1_REFCTLn(8),
			/* MAINCTL registers */
			(void *)CNOC_REFGEN_MAINCTL,
			(void *)CNOC_REFGEN1_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0}, {0} },
		},
	},
	/* [5] DC_NOC */
	{
		.name          = "DC_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)DC_NOC_ERL_BASE,
		.intr_vector   = 290U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)DC_NOC_SBM_BASE,
		},
		.num_tos       = 9U,
		.to_addrs      = (void *[]){
			(void *)DC_NOC_REFGEN_REFCTLn(0),
			(void *)DC_NOC_REFGEN_REFCTLn(1),
			(void *)DC_NOC_REFGEN_REFCTLn(2),
			(void *)DC_NOC_REFGEN_REFCTLn(3),
			(void *)DC_NOC_REFGEN_REFCTLn(4),
			(void *)DC_NOC_REFGEN_REFCTLn(5),
			(void *)DC_NOC_REFGEN_REFCTLn(6),
			(void *)DC_NOC_REFGEN_REFCTLn(7),
			(void *)DC_NOC_REFGEN_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [6] GEM_NOC */
	{
		.name          = "GEM_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = NULL, /* No OBS error logger; uses PoC */
		.intr_vector   = 796U,
		.num_sbms      = 2U,
		.sb_hw         = (struct noc_sideband_hw *[]){
			&qnoc_sb_4_0_l, &qnoc_sb_4_0_l,
		},
		.sb_base_addrs = (void *[]){
			(void *)GEM_NOC_FAULT_SBM_BASE,
			(void *)GEM_NOC_TIMEOUT_SBM_BASE,
		},
		.num_tos       = 14U,
		.to_addrs      = (void *[]){
			(void *)GEM_NOC_REFGEN_REFCTLn(0),
			(void *)GEM_NOC_REFGEN_REFCTLn(1),
			(void *)GEM_NOC_REFGEN_REFCTLn(2),
			(void *)GEM_NOC_REFGEN_REFCTLn(3),
			(void *)GEM_NOC_REFGEN_REFCTLn(4),
			(void *)GEM_NOC_REFGEN_REFCTLn(5),
			(void *)GEM_NOC_REFGEN_REFCTLn(6),
			(void *)GEM_NOC_REFGEN_REFCTLn(7),
			(void *)GEM_NOC_REFGEN_REFCTLn(8),
			(void *)GEM_NOC_REFGEN_MAINCTL,
			(void *)GEM_NOC_TRCHECK0_REFCTL0,
			(void *)GEM_NOC_TRCHECK0_MAINCTL,
			(void *)GEM_NOC_TRCHECK1_REFCTL0,
			(void *)GEM_NOC_TRCHECK1_MAINCTL,
		},
		.num_poc       = 8U,
		.poc_hw        = (struct noc_poc_hw *[]){
			&qnoc_poc_1_0, &qnoc_poc_1_0,
			&qnoc_poc_1_0, &qnoc_poc_1_0,
			&qnoc_poc_1_0, &qnoc_poc_1_0,
			&qnoc_poc_1_0, &qnoc_poc_1_0,
		},
		.poc_base_addrs = (void *[]){
			(void *)GEM_NOC_QNS_LLCC0_POC,
			(void *)GEM_NOC_QNS_LLCC1_POC,
			(void *)GEM_NOC_QNS_LLCC2_POC,
			(void *)GEM_NOC_QNS_LLCC3_POC,
			(void *)GEM_NOC_QNS_LLCC4_POC,
			(void *)GEM_NOC_QNS_LLCC5_POC,
			(void *)GEM_NOC_QNS_CNOC_POC,
			(void *)GEM_NOC_QNS_PCIE_POC,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0}, {0} },
			.poc      = (struct nocerr_poc_syndrome []){
				{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0},
			},
		},
	},
	/* [7] SYSTEM_NOC */
	{
		.name          = "SYSTEM_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)SNOC_ERL_BASE,
		.intr_vector   = 200U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)SNOC_SBM_BASE,
		},
		.num_tos       = 4U,
		.to_addrs      = (void *[]){
			(void *)SNOC_REFGEN_0_REFCTL0,
			(void *)SNOC_REFGEN_0_MAINCTL,
			(void *)SNOC_REFGEN_1_REFCTL0,
			(void *)SNOC_REFGEN_1_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [8] MMSS_NOC_HF */
	{
		.name          = "MMSS_NOC_HF",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)MNOC_HF_ERL_BASE,
		.intr_vector   = 186U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)MNOC_HF_SBM_BASE,
		},
		.num_tos       = 5U,
		.to_addrs      = (void *[]){
			(void *)MNOC_HF_REFGEN_HF1_REFCTL0,
			(void *)MNOC_HF_REFGEN_HF0_REFCTL0,
			(void *)MNOC_HF_REFGEN_HF0_REFCTL1,
			(void *)MNOC_HF_REFGEN_HF1_MAINCTL,
			(void *)MNOC_HF_REFGEN_HF0_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [9] MMSS_NOC_SF */
	{
		.name          = "MMSS_NOC_SF",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)MNOC_SF_ERL_BASE,
		.intr_vector   = 640U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)MNOC_SF_SBM_BASE,
		},
		.num_tos       = 4U,
		.to_addrs      = (void *[]){
			(void *)MNOC_SF_REFGEN_SF0_REFCTL0,
			(void *)MNOC_SF_REFGEN_SF1_REFCTL0,
			(void *)MNOC_SF_REFGEN_SF0_MAINCTL,
			(void *)MNOC_SF_REFGEN_SF1_MAINCTL,
		},
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
	/* [10] LPASS_AG_NOC */
	{
		.name          = "LPASS_AG_NOC",
		.hw            = &qnoc_4_0,
		.base_addr     = (void *)LPASS_AG_NOC_ERL_BASE,
		.intr_vector   = 323U,
		.num_sbms      = 1U,
		.sb_hw         = (struct noc_sideband_hw *[]){ &qnoc_sb_4_0_l },
		.sb_base_addrs = (void *[]){
			(void *)LPASS_AG_NOC_SBM_BASE,
		},
		.num_tos       = 0U,
		.to_addrs      = NULL,
		.syndrome      = {
			.sbms     = (struct nocerr_sbm_syndrome []){ {0} },
		},
	},
};

/* External timeout clock registers                                          */
static void *clock_reg_addrs[] = {
	(void *)GCC_NOC_BUS_TIMEOUT_EXTREF_CBCR,
	(void *)GCC_NOC_BUS_TIMEOUT_EXTREF_DIV_CDIVR,
	(void *)GCC_NOC_BUS_TIMEOUT_EXTREF_DIV512_CDIVR,
};

static struct nocerr_config_info nocerr_config_info = {
	.num_configs = 1U,
	.configs = (struct nocerr_propdata_type []){
		{
			.family         = (uint32_t)CHIPINFO_FAMILY_LEMANSAU,
			.match          = false,
			.version        = CHIPINFO_VERSION(1, 0),
			.len            = sizeof(nocerr_cfgdata) /
					  sizeof(nocerr_cfgdata[0]),
			.noc_info  = nocerr_cfgdata,
			.num_clock_regs = sizeof(clock_reg_addrs) /
					  sizeof(clock_reg_addrs[0]),
			.clock_reg_addrs = clock_reg_addrs,
			.num_filters    = 0U,
			.filters        = NULL,
			.reg_addr       = NULL,
			.reg_mask       = 0U,
			.reg_val        = 0U,
		},
	},
};

struct nocerr_config_info *nocerr_target_get_config_info(void)
{
	return &nocerr_config_info;
}
