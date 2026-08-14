/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * ICB configuration query data for the Lemans (QCS9075) platform.
 * Provides icbcfg_info, consumed by the ICB configuration driver.
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>
#include "icbcfg_hwio.h"
#include "icbcfg_query.h"
#include <lib/utils_def.h>

/*
 * One-time register configuration data.
 * Refer to HSRs for Project Sunshine / Lemans.
 */
static struct icbcfg_data icbcfg_data_lemans_v1[] = {
	/* GEM_NOC: log-user override enable (Project Sunshine HSR) */
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_HF0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_HF1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_SF0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_SF1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC0_0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC0_1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC1_0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC1_1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),

	/* MMSS_NOC HF: log-user override enable */
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_HF0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP0_0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP1_0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP0_1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP1_1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),

	/* MMSS_NOC SF: log-user override enable */
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_ICP_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_SF0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO0_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO1_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO_CVP_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO_V_CPU_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),

	/* SYSTEM_NOC: log-user override enable */
	ICBCFG_HWIO_DW(SYSTEM_NOC_QHM_GIC_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(SYSTEM_NOC_QNM_LPASS_NOC_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),
	ICBCFG_HWIO_DW(SYSTEM_NOC_XM_GIC_DYNATTR_LOGUSEROV_LOW,
		       0x0000000cU),

	/* GEM_NOC: log-user override value */
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_HF0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_HF1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_SF0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_MNOC_SF1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC0_0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC0_1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC1_0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(GEM_NOC_QNM_NSP_NOC1_1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),

	/* MMSS_NOC HF: log-user override value */
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_HF0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP0_0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP1_0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP0_1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_MDP1_1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),

	/* MMSS_NOC SF: log-user override value */
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_ICP_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_CAMNOC_SF0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO0_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO1_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO_CVP_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(MMSS_NOC_QNM_VIDEO_V_CPU_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),

	/* SYSTEM_NOC: log-user override value */
	ICBCFG_HWIO_DW(SYSTEM_NOC_QHM_GIC_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(SYSTEM_NOC_QNM_LPASS_NOC_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),
	ICBCFG_HWIO_DW(SYSTEM_NOC_XM_GIC_DYNATTR_LOGUSERVAL_LOW,
		       0x00000000U),

	/* SYSTEM_NOC: XM_GIC transaction-type LUT and main-control (SNOC HSR) */
	ICBCFG_HWIO_DW(SYSTEM_NOC_XM_GIC_DYNATTR_TRTYPELUT_LOW, 0x00044210U),
	ICBCFG_HWIO_DW(SYSTEM_NOC_XM_GIC_DYNATTR_MAINCTL_LOW,   0x00000100U),

	/* GEM_NOC: ALM TCU cache-index and main-control (GEMNOC HSR) */
	ICBCFG_HWIO_DW(GEM_NOC_ALM_GPU_TCU_DYNATTR_CACHEINDEXVAL_LOW,
		       0x0000000bU),
	ICBCFG_HWIO_DW(GEM_NOC_ALM_GPU_TCU_DYNATTR_MAINCTL_LOW,  0x00100000U),
	ICBCFG_HWIO_DW(GEM_NOC_ALM_PCIE_TCU_DYNATTR_CACHEINDEXVAL_LOW,
		       0x0000000dU),
	ICBCFG_HWIO_DW(GEM_NOC_ALM_PCIE_TCU_DYNATTR_MAINCTL_LOW, 0x00100000U),
	ICBCFG_HWIO_DW(GEM_NOC_ALM_SYS_TCU_DYNATTR_CACHEINDEXVAL_LOW,
		       0x0000000dU),
	ICBCFG_HWIO_DW(GEM_NOC_ALM_SYS_TCU_DYNATTR_MAINCTL_LOW,  0x00100000U),

	/* LPASS_AG_NOC: main-control and TrType LUT (LPASS AGNOC HSR) */
	ICBCFG_HWIO_DW(LPASS_AG_NOC_QNM_LPASS_HW_AF_DYNATTR_MAINCTL_LOW,
		       0x00000100U),
	ICBCFG_HWIO_DW(LPASS_AG_NOC_QNM_LPASS_HW_AF_DYNATTR_TRTYPELUT_LOW,
		       0x00043213U),
	ICBCFG_HWIO_DW(LPASS_AG_NOC_QXM_LPASS_DSP_DYNATTR_MAINCTL_LOW,
		       0x00000010U),
};

static struct icbcfg_prop icbcfg_prop_lemans_v1 = {
	.len  = ARRAY_SIZE(icbcfg_data_lemans_v1),
	.data = icbcfg_data_lemans_v1,
};

/* 6-channel variant (default, no fuse check) */
static struct icbcfg_device_config lemans_v1 = {
	.family               = (uint32_t)CHIPINFO_FAMILY_LEMANSAU,
	.match                = false,
	.version              = CHIPINFO_VERSION(1, 0),
	.prop_data            = &icbcfg_prop_lemans_v1,
	.post_prop_data       = NULL,
};

/* 4-channel variant: DDR_CH_SEL_MODE == 1 */
static struct icbcfg_device_config lemans_v1_4ch = {
	.family               = (uint32_t)CHIPINFO_FAMILY_LEMANSAU,
	.match                = false,
	.version              = CHIPINFO_VERSION(1, 0),
	.reg_addr             = (const uint32_t *)TCSR_TIMEOUT_INTR_CH2_CH4_OR_CH6_STATUS,
	.reg_mask             = TCSR_DDR_CH_SEL_MODE_BMSK,
	.reg_val              = 0x1U, /* DDR_CH_SEL_MODE = 1 for 4-channel */
	.prop_data            = &icbcfg_prop_lemans_v1,
	.post_prop_data       = NULL,
};

/* 2-channel variant: DDR_CH_SEL_MODE == 3 */
static struct icbcfg_device_config lemans_v1_2ch = {
	.family               = (uint32_t)CHIPINFO_FAMILY_LEMANSAU,
	.match                = false,
	.version              = CHIPINFO_VERSION(1, 0),
	.reg_addr             = (const uint32_t *)TCSR_TIMEOUT_INTR_CH2_CH4_OR_CH6_STATUS,
	.reg_mask             = TCSR_DDR_CH_SEL_MODE_BMSK,
	.reg_val              = 0x3U, /* DDR_CH_SEL_MODE = 3 for 2-channel */
	.prop_data            = &icbcfg_prop_lemans_v1,
	.post_prop_data       = NULL,
};

/*
 * Target configuration list.
 * Ordered from most-constrained (fuse-matched) to least-constrained
 * (fallback), so the driver selects the first matching entry.
 */
static struct icbcfg_device_config *configs_lemans[] = {
	[0] = &lemans_v1_2ch,
	[1] = &lemans_v1_4ch,
	[2] = &lemans_v1,
};

static struct icbcfg_info icbcfg_info = {
	.num_configs = ARRAY_SIZE(configs_lemans),
	.configs     = configs_lemans,
};

struct icbcfg_info *icbcfg_target_get_info(void)
{
	return &icbcfg_info;
}
