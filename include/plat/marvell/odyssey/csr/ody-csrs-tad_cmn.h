#ifndef __ODY_CSRS_TAD_CMN_H__
#define __ODY_CSRS_TAD_CMN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * TAD_CMN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tad_cmn_bar_e
 *
 * TAD Common Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0 (0x87e053000000ll)
#define ODY_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration tad_cmn_mpam_err_e
 *
 * MPAM Error Code Enumeration
 * Error codes to be reported in MPAMF_ESR (if TAD_CMN_MPAMF_IDR_NS/S[HAS_ESR]==1)
 */
#define ODY_TAD_CMN_MPAM_ERR_E_INTPARTID_RANGE (6)
#define ODY_TAD_CMN_MPAM_ERR_E_MONITOR_RANGE (5)
#define ODY_TAD_CMN_MPAM_ERR_E_MSMONCFG_ID_RANGE (3)
#define ODY_TAD_CMN_MPAM_ERR_E_NO_ERROR (0)
#define ODY_TAD_CMN_MPAM_ERR_E_PARTID_SEL_RANGE (1)
#define ODY_TAD_CMN_MPAM_ERR_E_REQ_PARTID_RANGE (2)
#define ODY_TAD_CMN_MPAM_ERR_E_REQ_PMG_RANGE (4)
#define ODY_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_12 (0xc)
#define ODY_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_13 (0xd)
#define ODY_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_14 (0xe)
#define ODY_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_15 (0xf)
#define ODY_TAD_CMN_MPAM_ERR_E_RIS_NO_CONTROL (9)
#define ODY_TAD_CMN_MPAM_ERR_E_RIS_NO_MONITOR (0xb)
#define ODY_TAD_CMN_MPAM_ERR_E_UNDEFINED_RIS_MON_SEL (0xa)
#define ODY_TAD_CMN_MPAM_ERR_E_UNDEFINED_RIS_PART_SEL (8)
#define ODY_TAD_CMN_MPAM_ERR_E_UNEXPECTED_INTERNAL (7)

/**
 * Enumeration tad_cmn_mpam_ris_e
 *
 * MPAM Resource Instance Enumeration
 * Resource instances
 */
#define ODY_TAD_CMN_MPAM_RIS_E_DTG (2)
#define ODY_TAD_CMN_MPAM_RIS_E_LTG (1)
#define ODY_TAD_CMN_MPAM_RIS_E_MSC (0)

/**
 * Register (RSL) tad_cmn_cache_flush
 *
 * TAD Common Cache Flush Register
 * Controls TAD cache flush behavior.
 */
union ody_tad_cmn_cache_flush {
	uint64_t u;
	struct ody_tad_cmn_cache_flush_s {
		uint64_t start                       : 1;
		uint64_t flush_type                  : 2;
		uint64_t reserved_3_20               : 18;
		uint64_t noltg                       : 1;
		uint64_t nodtg                       : 1;
		uint64_t reserved_23_63              : 41;
	} s;
	/* struct ody_tad_cmn_cache_flush_s cn; */
};
typedef union ody_tad_cmn_cache_flush ody_tad_cmn_cache_flush_t;

#define ODY_TAD_CMN_CACHE_FLUSH ODY_TAD_CMN_CACHE_FLUSH_FUNC()
static inline uint64_t ODY_TAD_CMN_CACHE_FLUSH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_CACHE_FLUSH_FUNC(void)
{
	return 0x87e053000010ll;
}

#define typedef_ODY_TAD_CMN_CACHE_FLUSH ody_tad_cmn_cache_flush_t
#define bustype_ODY_TAD_CMN_CACHE_FLUSH CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_CACHE_FLUSH "TAD_CMN_CACHE_FLUSH"
#define device_bar_ODY_TAD_CMN_CACHE_FLUSH 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_CACHE_FLUSH 0
#define arguments_ODY_TAD_CMN_CACHE_FLUSH -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_cbusy
 *
 * TAD Common CBUSY Control Register
 * Controls CBUSY behavior.
 */
union ody_tad_cmn_cbusy {
	uint64_t u;
	struct ody_tad_cmn_cbusy_s {
		uint64_t tad_cbusy_en                : 2;
		uint64_t ddr_cbusy_en                : 2;
		uint64_t tad_cbusy0_free_trsh        : 7;
		uint64_t tad_cbusy0_busy_trsh        : 7;
		uint64_t tad_cbusy1_free_trsh        : 7;
		uint64_t tad_cbusy1_busy_trsh        : 7;
		uint64_t ddr_timeout                 : 32;
	} s;
	/* struct ody_tad_cmn_cbusy_s cn; */
};
typedef union ody_tad_cmn_cbusy ody_tad_cmn_cbusy_t;

#define ODY_TAD_CMN_CBUSY ODY_TAD_CMN_CBUSY_FUNC()
static inline uint64_t ODY_TAD_CMN_CBUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_CBUSY_FUNC(void)
{
	return 0x87e053000020ll;
}

#define typedef_ODY_TAD_CMN_CBUSY ody_tad_cmn_cbusy_t
#define bustype_ODY_TAD_CMN_CBUSY CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_CBUSY "TAD_CMN_CBUSY"
#define device_bar_ODY_TAD_CMN_CBUSY 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_CBUSY 0
#define arguments_ODY_TAD_CMN_CBUSY -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_const
 *
 * TAD Constants Register
 * This register contains TAD constants for software discovery.
 */
union ody_tad_cmn_const {
	uint64_t u;
	struct ody_tad_cmn_const_s {
		uint64_t num_cols                    : 4;
		uint64_t num_rows                    : 4;
		uint64_t num_tads                    : 8;
		uint64_t ltgsets                     : 12;
		uint64_t ltgways                     : 8;
		uint64_t dtgsets                     : 12;
		uint64_t dtgways                     : 8;
		uint64_t reserved_56_63              : 8;
	} s;
	/* struct ody_tad_cmn_const_s cn; */
};
typedef union ody_tad_cmn_const ody_tad_cmn_const_t;

#define ODY_TAD_CMN_CONST ODY_TAD_CMN_CONST_FUNC()
static inline uint64_t ODY_TAD_CMN_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_CONST_FUNC(void)
{
	return 0x87e053000028ll;
}

#define typedef_ODY_TAD_CMN_CONST ody_tad_cmn_const_t
#define bustype_ODY_TAD_CMN_CONST CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_CONST "TAD_CMN_CONST"
#define device_bar_ODY_TAD_CMN_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_CONST 0
#define arguments_ODY_TAD_CMN_CONST -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_ctl
 *
 * TAD Common Control Register
 * Controls TAD behavior.
 */
union ody_tad_cmn_ctl {
	uint64_t u;
	struct ody_tad_cmn_ctl_s {
		uint64_t frcnalc                     : 1;
		uint64_t disdwt                      : 1;
		uint64_t disdct                      : 1;
		uint64_t disdmt                      : 1;
		uint64_t dispsn                      : 1;
		uint64_t discor                      : 1;
		uint64_t reserved_6_7                : 2;
		uint64_t maxifb                      : 5;
		uint64_t dismultmpam                 : 1;
		uint64_t disearlydq                  : 1;
		uint64_t iobchiso                    : 1;
		uint64_t distagscrub                 : 1;
		uint64_t disexmsysevent              : 1;
		uint64_t enaexmpocevent              : 1;
		uint64_t row_bcst_thresh             : 4;
		uint64_t mpam_upd_wr                 : 1;
		uint64_t reserved_24_44              : 21;
		uint64_t omon_cclk_dis               : 1;
		uint64_t chn_cclk_dis                : 1;
		uint64_t mn_cclk_dis                 : 1;
		uint64_t req_cclk_dis                : 1;
		uint64_t sam_cclk_dis                : 1;
		uint64_t lnk_rx_cclk_dis             : 1;
		uint64_t lnk_tx_cclk_dis             : 1;
		uint64_t csr_cclk_dis                : 1;
		uint64_t rxtbl_cclk_dis              : 1;
		uint64_t txreq_cclk_dis              : 1;
		uint64_t txsnp_cclk_dis              : 1;
		uint64_t snp_cclk_dis                : 1;
		uint64_t rsp_cclk_dis                : 1;
		uint64_t dat_cclk_dis                : 1;
		uint64_t ctldat_cclk_dis             : 1;
		uint64_t dtg_cclk_dis                : 1;
		uint64_t ltg_cclk_dis                : 1;
		uint64_t tag_cclk_dis                : 1;
		uint64_t cclk_dis                    : 1;
	} s;
	struct ody_tad_cmn_ctl_cn {
		uint64_t frcnalc                     : 1;
		uint64_t disdwt                      : 1;
		uint64_t disdct                      : 1;
		uint64_t disdmt                      : 1;
		uint64_t dispsn                      : 1;
		uint64_t discor                      : 1;
		uint64_t reserved_6                  : 1;
		uint64_t reserved_7                  : 1;
		uint64_t maxifb                      : 5;
		uint64_t dismultmpam                 : 1;
		uint64_t disearlydq                  : 1;
		uint64_t iobchiso                    : 1;
		uint64_t distagscrub                 : 1;
		uint64_t disexmsysevent              : 1;
		uint64_t enaexmpocevent              : 1;
		uint64_t row_bcst_thresh             : 4;
		uint64_t mpam_upd_wr                 : 1;
		uint64_t reserved_24_44              : 21;
		uint64_t omon_cclk_dis               : 1;
		uint64_t chn_cclk_dis                : 1;
		uint64_t mn_cclk_dis                 : 1;
		uint64_t req_cclk_dis                : 1;
		uint64_t sam_cclk_dis                : 1;
		uint64_t lnk_rx_cclk_dis             : 1;
		uint64_t lnk_tx_cclk_dis             : 1;
		uint64_t csr_cclk_dis                : 1;
		uint64_t rxtbl_cclk_dis              : 1;
		uint64_t txreq_cclk_dis              : 1;
		uint64_t txsnp_cclk_dis              : 1;
		uint64_t snp_cclk_dis                : 1;
		uint64_t rsp_cclk_dis                : 1;
		uint64_t dat_cclk_dis                : 1;
		uint64_t ctldat_cclk_dis             : 1;
		uint64_t dtg_cclk_dis                : 1;
		uint64_t ltg_cclk_dis                : 1;
		uint64_t tag_cclk_dis                : 1;
		uint64_t cclk_dis                    : 1;
	} cn;
};
typedef union ody_tad_cmn_ctl ody_tad_cmn_ctl_t;

#define ODY_TAD_CMN_CTL ODY_TAD_CMN_CTL_FUNC()
static inline uint64_t ODY_TAD_CMN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_CTL_FUNC(void)
{
	return 0x87e053000008ll;
}

#define typedef_ODY_TAD_CMN_CTL ody_tad_cmn_ctl_t
#define bustype_ODY_TAD_CMN_CTL CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_CTL "TAD_CMN_CTL"
#define device_bar_ODY_TAD_CMN_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_CTL 0
#define arguments_ODY_TAD_CMN_CTL -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mn_ctl
 *
 * TAD Common Miscellaneous Node Control Register
 * Controls TAD MN (DVMOps) settings.
 */
union ody_tad_cmn_mn_ctl {
	uint64_t u;
	struct ody_tad_cmn_mn_ctl_s {
		uint64_t reserved_0_2                : 3;
		uint64_t dev_ncb                     : 3;
		uint64_t comp_qos                    : 4;
		uint64_t snp_qos                     : 4;
		uint64_t iob_has_smmu                : 8;
		uint64_t reserved_22_63              : 42;
	} s;
	/* struct ody_tad_cmn_mn_ctl_s cn; */
};
typedef union ody_tad_cmn_mn_ctl ody_tad_cmn_mn_ctl_t;

#define ODY_TAD_CMN_MN_CTL ODY_TAD_CMN_MN_CTL_FUNC()
static inline uint64_t ODY_TAD_CMN_MN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MN_CTL_FUNC(void)
{
	return 0x87e053000030ll;
}

#define typedef_ODY_TAD_CMN_MN_CTL ody_tad_cmn_mn_ctl_t
#define bustype_ODY_TAD_CMN_MN_CTL CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MN_CTL "TAD_CMN_MN_CTL"
#define device_bar_ODY_TAD_CMN_MN_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MN_CTL 0
#define arguments_ODY_TAD_CMN_MN_CTL -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_cpbm_ns
 *
 * MPAM Cache Portion Bitmap Partition Configuration Register
 * The TAD_CMN_MPAMCFG_CPBM register is a read-write register that configures the cache
 * portions that a
 * PARTID is allowed to allocate. After setting TAD_CMN_MPAMCFG_PART_SEL with a PARTID, software
 * (usually a hypervisor) writes to the TAD_CMN_MPAMCFG_CPBM register to configure
 * which cache portions
 * the PARTID is allowed to allocate.
 * TAD_CMN_MPAMCFG_CPBM_NS controls the cache portions for the
 * Non-secure PARTID selected by the Non-secure instance of TAD_CMN_MPAMCFG_PART_SEL.
 */
union ody_tad_cmn_mpamcfg_cpbm_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_cpbm_ns_s {
		uint64_t cpbm                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_tad_cmn_mpamcfg_cpbm_ns_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_cpbm_ns ody_tad_cmn_mpamcfg_cpbm_ns_t;

#define ODY_TAD_CMN_MPAMCFG_CPBM_NS ODY_TAD_CMN_MPAMCFG_CPBM_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void)
{
	return 0x87e053011000ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_CPBM_NS ody_tad_cmn_mpamcfg_cpbm_ns_t
#define bustype_ODY_TAD_CMN_MPAMCFG_CPBM_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_CPBM_NS "TAD_CMN_MPAMCFG_CPBM_NS"
#define device_bar_ODY_TAD_CMN_MPAMCFG_CPBM_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_CPBM_NS 0
#define arguments_ODY_TAD_CMN_MPAMCFG_CPBM_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_cpbm_s
 *
 * Secure MPAM Cache Portion Bitmap Partition Configuration Register
 * The TAD_CMN_MPAMCFG_CPBM register is a read-write register that configures the cache
 * portions that a
 * PARTID is allowed to allocate. After setting TAD_CMN_MPAMCFG_PART_SEL with a PARTID, software
 * (usually a hypervisor) writes to the TAD_CMN_MPAMCFG_CPBM register to configure
 * which cache portions
 * the PARTID is allowed to allocate.
 * TAD_CMN_MPAMCFG_CPBM_S controls cache portions for the Secure PARTID selected by the Secure
 * instance of TAD_CMN_MPAMCFG_PART_SEL.
 */
union ody_tad_cmn_mpamcfg_cpbm_s {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_cpbm_s_s {
		uint64_t cpbm                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_tad_cmn_mpamcfg_cpbm_s_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_cpbm_s ody_tad_cmn_mpamcfg_cpbm_s_t;

#define ODY_TAD_CMN_MPAMCFG_CPBM_S ODY_TAD_CMN_MPAMCFG_CPBM_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void)
{
	return 0x87e053021000ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_CPBM_S ody_tad_cmn_mpamcfg_cpbm_s_t
#define bustype_ODY_TAD_CMN_MPAMCFG_CPBM_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_CPBM_S "TAD_CMN_MPAMCFG_CPBM_S"
#define device_bar_ODY_TAD_CMN_MPAMCFG_CPBM_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_CPBM_S 0
#define arguments_ODY_TAD_CMN_MPAMCFG_CPBM_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_impl_pri_ns
 *
 * MPAM Implementation-Specific Optional Priority Partitioning Configuration Register
 * Controls the MPAM priority partitioning features of this MSC.
 */
union ody_tad_cmn_mpamcfg_impl_pri_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_impl_pri_ns_s {
		uint64_t mpam_qos                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_tad_cmn_mpamcfg_impl_pri_ns_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_impl_pri_ns ody_tad_cmn_mpamcfg_impl_pri_ns_t;

#define ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC(void)
{
	return 0x87e053013000ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS ody_tad_cmn_mpamcfg_impl_pri_ns_t
#define bustype_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS "TAD_CMN_MPAMCFG_IMPL_PRI_NS"
#define device_bar_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS 0
#define arguments_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_impl_pri_s
 *
 * MPAM Implementation-Specific Optional Priority Partitioning Configuration Register
 * Controls the MPAM priority partitioning features of this MSC.
 */
union ody_tad_cmn_mpamcfg_impl_pri_s {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_impl_pri_s_s {
		uint64_t mpam_qos                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_tad_cmn_mpamcfg_impl_pri_s_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_impl_pri_s ody_tad_cmn_mpamcfg_impl_pri_s_t;

#define ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC(void)
{
	return 0x87e053023000ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S ody_tad_cmn_mpamcfg_impl_pri_s_t
#define bustype_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S "TAD_CMN_MPAMCFG_IMPL_PRI_S"
#define device_bar_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S 0
#define arguments_ODY_TAD_CMN_MPAMCFG_IMPL_PRI_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_part_sel_ns
 *
 * MPAM Partition Configuration Selection Register
 * Selects a partition ID to configure. TAD_CMN_MPAMCFG_PART_SEL_NS selects a Non-
 * secure PARTID to configure.
 * After setting this register with a PARTID, software (usually a hypervisor) can perform a series of
 * accesses to TAD_CMN_MPAMCFG registers to configure parameters for MPAM resource
 * controls to use when
 * requests have that PARTID.
 */
union ody_tad_cmn_mpamcfg_part_sel_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_part_sel_ns_s {
		uint64_t partid_sel                  : 16;
		uint64_t internal                    : 1;
		uint64_t reserved_17_23              : 7;
		uint64_t ris                         : 4;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_tad_cmn_mpamcfg_part_sel_ns_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_part_sel_ns ody_tad_cmn_mpamcfg_part_sel_ns_t;

#define ODY_TAD_CMN_MPAMCFG_PART_SEL_NS ODY_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC(void)
{
	return 0x87e053010100ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS ody_tad_cmn_mpamcfg_part_sel_ns_t
#define bustype_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS "TAD_CMN_MPAMCFG_PART_SEL_NS"
#define device_bar_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS 0
#define arguments_ODY_TAD_CMN_MPAMCFG_PART_SEL_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_part_sel_s
 *
 * Secure MPAM Partition Configuration Selection Register
 * Selects a partition ID to configure. TAD_CMN_MPAMCFG_PART_SEL_S selects a Secure PARTID to
 * configure.
 * After setting this register with a PARTID, software (usually a hypervisor) can perform a series of
 * accesses to TAD_CMN_MPAMCFG registers to configure parameters for MPAM resource
 * controls to use when
 * requests have that PARTID.
 */
union ody_tad_cmn_mpamcfg_part_sel_s {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_part_sel_s_s {
		uint64_t partid_sel                  : 16;
		uint64_t internal                    : 1;
		uint64_t reserved_17_23              : 7;
		uint64_t ris                         : 4;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_tad_cmn_mpamcfg_part_sel_s_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_part_sel_s ody_tad_cmn_mpamcfg_part_sel_s_t;

#define ODY_TAD_CMN_MPAMCFG_PART_SEL_S ODY_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC(void)
{
	return 0x87e053020100ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_PART_SEL_S ody_tad_cmn_mpamcfg_part_sel_s_t
#define bustype_ODY_TAD_CMN_MPAMCFG_PART_SEL_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_PART_SEL_S "TAD_CMN_MPAMCFG_PART_SEL_S"
#define device_bar_ODY_TAD_CMN_MPAMCFG_PART_SEL_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_PART_SEL_S 0
#define arguments_ODY_TAD_CMN_MPAMCFG_PART_SEL_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_pri_ns
 *
 * MPAM Priority Partition Configuration Register
 * Controls the internal and downstream priority of requests attributed to the PARTID
 * selected by TAD_CMN_MPAMCFG_PART_SEL_NS.
 */
union ody_tad_cmn_mpamcfg_pri_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_pri_ns_s {
		uint64_t intpri                      : 16;
		uint64_t dspri                       : 16;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamcfg_pri_ns_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_pri_ns ody_tad_cmn_mpamcfg_pri_ns_t;

#define ODY_TAD_CMN_MPAMCFG_PRI_NS ODY_TAD_CMN_MPAMCFG_PRI_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PRI_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PRI_NS_FUNC(void)
{
	return 0x87e053010400ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_PRI_NS ody_tad_cmn_mpamcfg_pri_ns_t
#define bustype_ODY_TAD_CMN_MPAMCFG_PRI_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_PRI_NS "TAD_CMN_MPAMCFG_PRI_NS"
#define device_bar_ODY_TAD_CMN_MPAMCFG_PRI_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_PRI_NS 0
#define arguments_ODY_TAD_CMN_MPAMCFG_PRI_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamcfg_pri_s
 *
 * MPAM Priority Partition Configuration Register
 * Controls the internal and downstream priority of requests attributed to the PARTID
 * selected by TAD_CMN_MPAMCFG_PART_SEL_S.
 */
union ody_tad_cmn_mpamcfg_pri_s {
	uint64_t u;
	struct ody_tad_cmn_mpamcfg_pri_s_s {
		uint64_t intpri                      : 16;
		uint64_t dspri                       : 16;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamcfg_pri_s_s cn; */
};
typedef union ody_tad_cmn_mpamcfg_pri_s ody_tad_cmn_mpamcfg_pri_s_t;

#define ODY_TAD_CMN_MPAMCFG_PRI_S ODY_TAD_CMN_MPAMCFG_PRI_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PRI_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMCFG_PRI_S_FUNC(void)
{
	return 0x87e053020400ll;
}

#define typedef_ODY_TAD_CMN_MPAMCFG_PRI_S ody_tad_cmn_mpamcfg_pri_s_t
#define bustype_ODY_TAD_CMN_MPAMCFG_PRI_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMCFG_PRI_S "TAD_CMN_MPAMCFG_PRI_S"
#define device_bar_ODY_TAD_CMN_MPAMCFG_PRI_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMCFG_PRI_S 0
#define arguments_ODY_TAD_CMN_MPAMCFG_PRI_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_aidr_ns
 *
 * MPAM Architecture Identification Register
 * Identifies the version of the MPAM architecture that this MSC implements.
 * This MSC implements MPAM architecture v1.1
 */
union ody_tad_cmn_mpamf_aidr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_aidr_ns_s {
		uint64_t archminorrev                : 4;
		uint64_t archmajorrev                : 4;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_tad_cmn_mpamf_aidr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_aidr_ns ody_tad_cmn_mpamf_aidr_ns_t;

#define ODY_TAD_CMN_MPAMF_AIDR_NS ODY_TAD_CMN_MPAMF_AIDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_AIDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_AIDR_NS_FUNC(void)
{
	return 0x87e053010020ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_AIDR_NS ody_tad_cmn_mpamf_aidr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_AIDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_AIDR_NS "TAD_CMN_MPAMF_AIDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_AIDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_AIDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_AIDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_aidr_s
 *
 * MPAM Architecture Identification Register
 * Identifies the version of the MPAM architecture that this MSC implements.
 * This MSC implements MPAM architecture v1.1
 */
union ody_tad_cmn_mpamf_aidr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_aidr_s_s {
		uint64_t archminorrev                : 4;
		uint64_t archmajorrev                : 4;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_tad_cmn_mpamf_aidr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_aidr_s ody_tad_cmn_mpamf_aidr_s_t;

#define ODY_TAD_CMN_MPAMF_AIDR_S ODY_TAD_CMN_MPAMF_AIDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_AIDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_AIDR_S_FUNC(void)
{
	return 0x87e053020020ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_AIDR_S ody_tad_cmn_mpamf_aidr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_AIDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_AIDR_S "TAD_CMN_MPAMF_AIDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_AIDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_AIDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_AIDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_cpor_idr_ns
 *
 * MPAM Features Cache Portion Partitioning ID Register
 * Indicates the number of bits in TAD_CMN_MPAMCFG_CPBM for this MSC.
 * TAD_CMN_MPAMF_CPOR_IDR_NS indicates the number of bits in the Non-secure instance of
 * TAD_CMN_MPAMCFG_CPBM.
 */
union ody_tad_cmn_mpamf_cpor_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_cpor_idr_ns_s {
		uint64_t cpbm_wd                     : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_tad_cmn_mpamf_cpor_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_cpor_idr_ns ody_tad_cmn_mpamf_cpor_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_CPOR_IDR_NS ODY_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC(void)
{
	return 0x87e053010030ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS ody_tad_cmn_mpamf_cpor_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS "TAD_CMN_MPAMF_CPOR_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_CPOR_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_cpor_idr_s
 *
 * Secure MPAM Features Cache Portion Partitioning ID Register
 * Indicates the number of bits in TAD_CMN_MPAMCFG_CPBM for this MSC. TAD_CMN_MPAMF_CPOR_IDR_S
 * indicates the number of bits in the Secure instance of TAD_CMN_MPAMCFG_CPBM.
 */
union ody_tad_cmn_mpamf_cpor_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_cpor_idr_s_s {
		uint64_t cpbm_wd                     : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_tad_cmn_mpamf_cpor_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_cpor_idr_s ody_tad_cmn_mpamf_cpor_idr_s_t;

#define ODY_TAD_CMN_MPAMF_CPOR_IDR_S ODY_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC(void)
{
	return 0x87e053020030ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_CPOR_IDR_S ody_tad_cmn_mpamf_cpor_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_CPOR_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_CPOR_IDR_S "TAD_CMN_MPAMF_CPOR_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_CPOR_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_CPOR_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_CPOR_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_csumon_idr_ns
 *
 * MPAM Features Cache Storage Usage Monitoring ID Register
 * Indicates the number of cache storage usage monitors for this MSC.
 * TAD_CMN_MPAMF_CSUMON_IDR_NS indicates the number of Non-secure cache storage usage monitors.
 */
union ody_tad_cmn_mpamf_csumon_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_csumon_idr_ns_s {
		uint64_t num_mon                     : 16;
		uint64_t reserved_16_30              : 15;
		uint64_t has_capture                 : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_csumon_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_csumon_idr_ns ody_tad_cmn_mpamf_csumon_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC(void)
{
	return 0x87e053010088ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS ody_tad_cmn_mpamf_csumon_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS "TAD_CMN_MPAMF_CSUMON_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_CSUMON_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_csumon_idr_s
 *
 * MPAM Features Cache Storage Usage Monitoring ID Register
 * Indicates the number of cache storage usage monitors for this MSC.
 * TAD_CMN_MPAMF_CSUMON_IDR_S indicates the number of secure cache storage usage monitors.
 */
union ody_tad_cmn_mpamf_csumon_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_csumon_idr_s_s {
		uint64_t num_mon                     : 16;
		uint64_t reserved_16_30              : 15;
		uint64_t has_capture                 : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_csumon_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_csumon_idr_s ody_tad_cmn_mpamf_csumon_idr_s_t;

#define ODY_TAD_CMN_MPAMF_CSUMON_IDR_S ODY_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC(void)
{
	return 0x87e053020088ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S ody_tad_cmn_mpamf_csumon_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S "TAD_CMN_MPAMF_CSUMON_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_CSUMON_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_idr_ns
 *
 * MPAM Features Identification Register
 * Indicates which memory partitioning and monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_IDR_NS indicates the MPAM features accessed from the Non-secure MPAM feature page.
 */
union ody_tad_cmn_mpamf_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_idr_ns_s {
		uint64_t partid_max                  : 16;
		uint64_t pmg_max                     : 8;
		uint64_t has_ccap_part               : 1;
		uint64_t has_cpor_part               : 1;
		uint64_t has_mbw_part                : 1;
		uint64_t has_pri_part                : 1;
		uint64_t ext                         : 1;
		uint64_t has_impl_idr                : 1;
		uint64_t has_msmon                   : 1;
		uint64_t has_partid_nrw              : 1;
		uint64_t has_ris                     : 1;
		uint64_t reserved_33_35              : 3;
		uint64_t no_impl_part                : 1;
		uint64_t no_impl_msmon               : 1;
		uint64_t has_extd_esr                : 1;
		uint64_t has_esr                     : 1;
		uint64_t reserved_40_55              : 16;
		uint64_t ris_max                     : 4;
		uint64_t reserved_60_63              : 4;
	} s;
	/* struct ody_tad_cmn_mpamf_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_idr_ns ody_tad_cmn_mpamf_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_IDR_NS ODY_TAD_CMN_MPAMF_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IDR_NS_FUNC(void)
{
	return 0x87e053010000ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IDR_NS ody_tad_cmn_mpamf_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IDR_NS "TAD_CMN_MPAMF_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_idr_s
 *
 * MPAM Features Identification Register
 * Indicates which memory partitioning and monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_IDR_S indicates the MPAM features accessed from the Secure MPAM feature page.
 */
union ody_tad_cmn_mpamf_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_idr_s_s {
		uint64_t partid_max                  : 16;
		uint64_t pmg_max                     : 8;
		uint64_t has_ccap_part               : 1;
		uint64_t has_cpor_part               : 1;
		uint64_t has_mbw_part                : 1;
		uint64_t has_pri_part                : 1;
		uint64_t ext                         : 1;
		uint64_t has_impl_idr                : 1;
		uint64_t has_msmon                   : 1;
		uint64_t has_partid_nrw              : 1;
		uint64_t has_ris                     : 1;
		uint64_t reserved_33_35              : 3;
		uint64_t no_impl_part                : 1;
		uint64_t no_impl_msmon               : 1;
		uint64_t has_extd_esr                : 1;
		uint64_t has_esr                     : 1;
		uint64_t reserved_40_55              : 16;
		uint64_t ris_max                     : 4;
		uint64_t reserved_60_63              : 4;
	} s;
	/* struct ody_tad_cmn_mpamf_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_idr_s ody_tad_cmn_mpamf_idr_s_t;

#define ODY_TAD_CMN_MPAMF_IDR_S ODY_TAD_CMN_MPAMF_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IDR_S_FUNC(void)
{
	return 0x87e053020000ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IDR_S ody_tad_cmn_mpamf_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IDR_S "TAD_CMN_MPAMF_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_iidr_ns
 *
 * MPAM Implementation Identification Register
 * Uniquely identifies the MSC implementation by the combination of implementer, product ID,
 * variant and revision.
 */
union ody_tad_cmn_mpamf_iidr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_iidr_ns_s {
		uint64_t implementer                 : 12;
		uint64_t revision                    : 4;
		uint64_t variant                     : 4;
		uint64_t productid                   : 12;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_iidr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_iidr_ns ody_tad_cmn_mpamf_iidr_ns_t;

#define ODY_TAD_CMN_MPAMF_IIDR_NS ODY_TAD_CMN_MPAMF_IIDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IIDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IIDR_NS_FUNC(void)
{
	return 0x87e053010018ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IIDR_NS ody_tad_cmn_mpamf_iidr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_IIDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IIDR_NS "TAD_CMN_MPAMF_IIDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_IIDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IIDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_IIDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_iidr_s
 *
 * MPAM Implementation Identification Register
 * Uniquely identifies the MSC implementation by the combination of implementer, product ID,
 * variant and revision.
 */
union ody_tad_cmn_mpamf_iidr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_iidr_s_s {
		uint64_t implementer                 : 12;
		uint64_t revision                    : 4;
		uint64_t variant                     : 4;
		uint64_t productid                   : 12;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_iidr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_iidr_s ody_tad_cmn_mpamf_iidr_s_t;

#define ODY_TAD_CMN_MPAMF_IIDR_S ODY_TAD_CMN_MPAMF_IIDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IIDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IIDR_S_FUNC(void)
{
	return 0x87e053020018ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IIDR_S ody_tad_cmn_mpamf_iidr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_IIDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IIDR_S "TAD_CMN_MPAMF_IIDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_IIDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IIDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_IIDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_impl_idr_ns
 *
 * MPAM Implementation-Specific Partitioning Feature Identification Register
 * Indicates the implementation-defined partitioning and monitoring features and
 * parameters of this MSC.
 */
union ody_tad_cmn_mpamf_impl_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_impl_idr_ns_s {
		uint64_t has_pri                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_tad_cmn_mpamf_impl_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_impl_idr_ns ody_tad_cmn_mpamf_impl_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_IMPL_IDR_NS ODY_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC(void)
{
	return 0x87e053010028ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS ody_tad_cmn_mpamf_impl_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS "TAD_CMN_MPAMF_IMPL_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_IMPL_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_impl_idr_s
 *
 * MPAM Implementation-Specific Partitioning Feature Identification Register
 * Indicates the implementation-defined partitioning and monitoring features and
 * parameters of this MSC.
 */
union ody_tad_cmn_mpamf_impl_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_impl_idr_s_s {
		uint64_t has_pri                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_tad_cmn_mpamf_impl_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_impl_idr_s ody_tad_cmn_mpamf_impl_idr_s_t;

#define ODY_TAD_CMN_MPAMF_IMPL_IDR_S ODY_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC(void)
{
	return 0x87e053020028ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_IMPL_IDR_S ody_tad_cmn_mpamf_impl_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_IMPL_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_IMPL_IDR_S "TAD_CMN_MPAMF_IMPL_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_IMPL_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_IMPL_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_IMPL_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_msmon_idr_ns
 *
 * MPAM Resource Monitoring Identification Register
 * Indicates which MPAM monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_MSMON_IDR_NS indicates Non-secure monitoring features.
 */
union ody_tad_cmn_mpamf_msmon_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_msmon_idr_ns_s {
		uint64_t reserved_0_15               : 16;
		uint64_t msmon_csu                   : 1;
		uint64_t msmon_mbwu                  : 1;
		uint64_t reserved_18_30              : 13;
		uint64_t has_local_capt_evnt         : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_msmon_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_msmon_idr_ns ody_tad_cmn_mpamf_msmon_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_MSMON_IDR_NS ODY_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC(void)
{
	return 0x87e053010080ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS ody_tad_cmn_mpamf_msmon_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS "TAD_CMN_MPAMF_MSMON_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_MSMON_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_msmon_idr_s
 *
 * MPAM Resource Monitoring Identification Register
 * Indicates which MPAM monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_MSMON_IDR_S indicates secure monitoring features.
 */
union ody_tad_cmn_mpamf_msmon_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_msmon_idr_s_s {
		uint64_t reserved_0_15               : 16;
		uint64_t msmon_csu                   : 1;
		uint64_t msmon_mbwu                  : 1;
		uint64_t reserved_18_30              : 13;
		uint64_t has_local_capt_evnt         : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_mpamf_msmon_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_msmon_idr_s ody_tad_cmn_mpamf_msmon_idr_s_t;

#define ODY_TAD_CMN_MPAMF_MSMON_IDR_S ODY_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC(void)
{
	return 0x87e053020080ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_MSMON_IDR_S ody_tad_cmn_mpamf_msmon_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_MSMON_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_MSMON_IDR_S "TAD_CMN_MPAMF_MSMON_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_MSMON_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_MSMON_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_MSMON_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_pri_idr_ns
 *
 * MPAM Priority Partitioning Identification Register
 * Indicates which MPAM priority partitioning features are present on this MSC.
 */
union ody_tad_cmn_mpamf_pri_idr_ns {
	uint64_t u;
	struct ody_tad_cmn_mpamf_pri_idr_ns_s {
		uint64_t has_intpri                  : 1;
		uint64_t intpri_0_is_low             : 1;
		uint64_t reserved_2_3                : 2;
		uint64_t intpri_wd                   : 6;
		uint64_t reserved_10_15              : 6;
		uint64_t has_dspri                   : 1;
		uint64_t dspri_0_is_low              : 1;
		uint64_t reserved_18_19              : 2;
		uint64_t dspri_wd                    : 6;
		uint64_t reserved_26_63              : 38;
	} s;
	/* struct ody_tad_cmn_mpamf_pri_idr_ns_s cn; */
};
typedef union ody_tad_cmn_mpamf_pri_idr_ns ody_tad_cmn_mpamf_pri_idr_ns_t;

#define ODY_TAD_CMN_MPAMF_PRI_IDR_NS ODY_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC(void)
{
	return 0x87e053010048ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_PRI_IDR_NS ody_tad_cmn_mpamf_pri_idr_ns_t
#define bustype_ODY_TAD_CMN_MPAMF_PRI_IDR_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_PRI_IDR_NS "TAD_CMN_MPAMF_PRI_IDR_NS"
#define device_bar_ODY_TAD_CMN_MPAMF_PRI_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_PRI_IDR_NS 0
#define arguments_ODY_TAD_CMN_MPAMF_PRI_IDR_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_pri_idr_s
 *
 * MPAM Priority Partitioning Identification Register
 * Indicates which MPAM priority partitioning features are present on this MSC.
 */
union ody_tad_cmn_mpamf_pri_idr_s {
	uint64_t u;
	struct ody_tad_cmn_mpamf_pri_idr_s_s {
		uint64_t has_intpri                  : 1;
		uint64_t intpri_0_is_low             : 1;
		uint64_t reserved_2_3                : 2;
		uint64_t intpri_wd                   : 6;
		uint64_t reserved_10_15              : 6;
		uint64_t has_dspri                   : 1;
		uint64_t dspri_0_is_low              : 1;
		uint64_t reserved_18_19              : 2;
		uint64_t dspri_wd                    : 6;
		uint64_t reserved_26_63              : 38;
	} s;
	/* struct ody_tad_cmn_mpamf_pri_idr_s_s cn; */
};
typedef union ody_tad_cmn_mpamf_pri_idr_s ody_tad_cmn_mpamf_pri_idr_s_t;

#define ODY_TAD_CMN_MPAMF_PRI_IDR_S ODY_TAD_CMN_MPAMF_PRI_IDR_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_PRI_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_PRI_IDR_S_FUNC(void)
{
	return 0x87e053020048ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_PRI_IDR_S ody_tad_cmn_mpamf_pri_idr_s_t
#define bustype_ODY_TAD_CMN_MPAMF_PRI_IDR_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_PRI_IDR_S "TAD_CMN_MPAMF_PRI_IDR_S"
#define device_bar_ODY_TAD_CMN_MPAMF_PRI_IDR_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_PRI_IDR_S 0
#define arguments_ODY_TAD_CMN_MPAMF_PRI_IDR_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_mpamf_sidr
 *
 * MPAM Features Secure Identification Register
 * The TAD_CMN_MPAMF_SIDR is a 32-bit read-only register that indicates the maximum Secure PARTID and
 * Secure PMG on this MSC.
 */
union ody_tad_cmn_mpamf_sidr {
	uint64_t u;
	struct ody_tad_cmn_mpamf_sidr_s {
		uint64_t s_partid_max                : 16;
		uint64_t s_pmg_max                   : 8;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_tad_cmn_mpamf_sidr_s cn; */
};
typedef union ody_tad_cmn_mpamf_sidr ody_tad_cmn_mpamf_sidr_t;

#define ODY_TAD_CMN_MPAMF_SIDR ODY_TAD_CMN_MPAMF_SIDR_FUNC()
static inline uint64_t ODY_TAD_CMN_MPAMF_SIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MPAMF_SIDR_FUNC(void)
{
	return 0x87e053020008ll;
}

#define typedef_ODY_TAD_CMN_MPAMF_SIDR ody_tad_cmn_mpamf_sidr_t
#define bustype_ODY_TAD_CMN_MPAMF_SIDR CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MPAMF_SIDR "TAD_CMN_MPAMF_SIDR"
#define device_bar_ODY_TAD_CMN_MPAMF_SIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MPAMF_SIDR 0
#define arguments_ODY_TAD_CMN_MPAMF_SIDR -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_ctl_ns
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Control Register
 * Controls the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_CMN_MSMON_CFG_CSU_CTL_NS controls Non-secure cache storage usage monitor instance
 * selected by the Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union ody_tad_cmn_msmon_cfg_csu_ctl_ns {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_csu_ctl_ns_s {
		uint64_t monitor_type                : 8;
		uint64_t reserved_8_15               : 8;
		uint64_t match_partid                : 1;
		uint64_t match_pmg                   : 1;
		uint64_t reserved_18_19              : 2;
		uint64_t subtype                     : 4;
		uint64_t oflow_frz                   : 1;
		uint64_t oflow_intr                  : 1;
		uint64_t oflow_status                : 1;
		uint64_t capt_reset                  : 1;
		uint64_t capt_evnt                   : 3;
		uint64_t en                          : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_csu_ctl_ns_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_csu_ctl_ns ody_tad_cmn_msmon_cfg_csu_ctl_ns_t;

#define ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC(void)
{
	return 0x87e053010818ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS ody_tad_cmn_msmon_cfg_csu_ctl_ns_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS "TAD_CMN_MSMON_CFG_CSU_CTL_NS"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_ctl_s
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Control Register
 * Controls the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_CMN_MSMON_CFG_CSU_CTL_S controls secure cache storage usage monitor instance
 * selected by the secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union ody_tad_cmn_msmon_cfg_csu_ctl_s {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_csu_ctl_s_s {
		uint64_t monitor_type                : 8;
		uint64_t reserved_8_15               : 8;
		uint64_t match_partid                : 1;
		uint64_t match_pmg                   : 1;
		uint64_t reserved_18_19              : 2;
		uint64_t subtype                     : 4;
		uint64_t oflow_frz                   : 1;
		uint64_t oflow_intr                  : 1;
		uint64_t oflow_status                : 1;
		uint64_t capt_reset                  : 1;
		uint64_t capt_evnt                   : 3;
		uint64_t en                          : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_csu_ctl_s_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_csu_ctl_s ody_tad_cmn_msmon_cfg_csu_ctl_s_t;

#define ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC(void)
{
	return 0x87e053020818ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S ody_tad_cmn_msmon_cfg_csu_ctl_s_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S "TAD_CMN_MSMON_CFG_CSU_CTL_S"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_CSU_CTL_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_flt_ns
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Filter Register
 * Configures PARTID and PMG to measure or count in the CSU monitor selected by
 * TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_CMN_MSMON_CFG_CSU_CTL_NS sets filter conditions for the Non-secure cache storage
 * usage monitor instance
 * selected by the Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union ody_tad_cmn_msmon_cfg_csu_flt_ns {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_csu_flt_ns_s {
		uint64_t partid                      : 16;
		uint64_t pmg                         : 8;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_csu_flt_ns_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_csu_flt_ns ody_tad_cmn_msmon_cfg_csu_flt_ns_t;

#define ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC(void)
{
	return 0x87e053010810ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS ody_tad_cmn_msmon_cfg_csu_flt_ns_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS "TAD_CMN_MSMON_CFG_CSU_FLT_NS"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_flt_s
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Filter Register
 * Configures PARTID and PMG to measure or count in the CSU monitor selected by
 * TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_CMN_MSMON_CFG_CSU_CTL_S sets filter conditions for the secure cache storage
 * usage monitor instance
 * selected by the secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union ody_tad_cmn_msmon_cfg_csu_flt_s {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_csu_flt_s_s {
		uint64_t partid                      : 16;
		uint64_t pmg                         : 8;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_csu_flt_s_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_csu_flt_s ody_tad_cmn_msmon_cfg_csu_flt_s_t;

#define ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC(void)
{
	return 0x87e053020810ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S ody_tad_cmn_msmon_cfg_csu_flt_s_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S "TAD_CMN_MSMON_CFG_CSU_FLT_S"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_CSU_FLT_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_mon_sel_ns
 *
 * MPAM Monitor Instance Selection Register
 * Selects a monitor instance to access through the MSMON configuration and counter
 * registers. TAD_CMN_MSMON_CFG_MON_SEL_NS selects a Non-secure monitor instance
 * to access via the Non-secure MPAM feature page.
 *
 * To configure a monitor, set MON_SEL in this register to the index of the monitor
 * instance to configure, then write to the MSMON_CFG_x register to set the
 * configuration of the monitor. At a later time, read the monitor register (for
 * example TAD_MSMON_CSU_NS) to get the value of the monitor.
 */
union ody_tad_cmn_msmon_cfg_mon_sel_ns {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_mon_sel_ns_s {
		uint64_t mon_sel                     : 16;
		uint64_t reserved_16_23              : 8;
		uint64_t ris                         : 4;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_mon_sel_ns_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_mon_sel_ns ody_tad_cmn_msmon_cfg_mon_sel_ns_t;

#define ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC(void)
{
	return 0x87e053010800ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS ody_tad_cmn_msmon_cfg_mon_sel_ns_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS "TAD_CMN_MSMON_CFG_MON_SEL_NS"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_MON_SEL_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_cfg_mon_sel_s
 *
 * MPAM Monitor Instance Selection Register
 * Selects a monitor instance to access through the MSMON configuration and counter
 * registers. TAD_CMN_MSMON_CFG_MON_SEL_S selects a secure monitor instance
 * to access via the secure MPAM feature page.
 *
 * To configure a monitor, set MON_SEL in this register to the index of the monitor
 * instance to configure, then write to the MSMON_CFG_x register to set the
 * configuration of the monitor. At a later time, read the monitor register (for
 * example TAD_MSMON_CSU_S) to get the value of the monitor.
 */
union ody_tad_cmn_msmon_cfg_mon_sel_s {
	uint64_t u;
	struct ody_tad_cmn_msmon_cfg_mon_sel_s_s {
		uint64_t mon_sel                     : 16;
		uint64_t reserved_16_23              : 8;
		uint64_t ris                         : 4;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_tad_cmn_msmon_cfg_mon_sel_s_s cn; */
};
typedef union ody_tad_cmn_msmon_cfg_mon_sel_s ody_tad_cmn_msmon_cfg_mon_sel_s_t;

#define ODY_TAD_CMN_MSMON_CFG_MON_SEL_S ODY_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC(void)
{
	return 0x87e053020800ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S ody_tad_cmn_msmon_cfg_mon_sel_s_t
#define bustype_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S "TAD_CMN_MSMON_CFG_MON_SEL_S"
#define device_bar_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S 0
#define arguments_ODY_TAD_CMN_MSMON_CFG_MON_SEL_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_csu_ns
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_MSMON_CSU_NS is the Non-secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union ody_tad_cmn_msmon_csu_ns {
	uint64_t u;
	struct ody_tad_cmn_msmon_csu_ns_s {
		uint64_t value                       : 31;
		uint64_t nrdy                        : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_msmon_csu_ns_s cn; */
};
typedef union ody_tad_cmn_msmon_csu_ns ody_tad_cmn_msmon_csu_ns_t;

#define ODY_TAD_CMN_MSMON_CSU_NS ODY_TAD_CMN_MSMON_CSU_NS_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CSU_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CSU_NS_FUNC(void)
{
	return 0x87e053010840ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CSU_NS ody_tad_cmn_msmon_csu_ns_t
#define bustype_ODY_TAD_CMN_MSMON_CSU_NS CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CSU_NS "TAD_CMN_MSMON_CSU_NS"
#define device_bar_ODY_TAD_CMN_MSMON_CSU_NS 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CSU_NS 0
#define arguments_ODY_TAD_CMN_MSMON_CSU_NS -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_msmon_csu_s
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_MSMON_CSU_S is the secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union ody_tad_cmn_msmon_csu_s {
	uint64_t u;
	struct ody_tad_cmn_msmon_csu_s_s {
		uint64_t value                       : 31;
		uint64_t nrdy                        : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tad_cmn_msmon_csu_s_s cn; */
};
typedef union ody_tad_cmn_msmon_csu_s ody_tad_cmn_msmon_csu_s_t;

#define ODY_TAD_CMN_MSMON_CSU_S ODY_TAD_CMN_MSMON_CSU_S_FUNC()
static inline uint64_t ODY_TAD_CMN_MSMON_CSU_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_MSMON_CSU_S_FUNC(void)
{
	return 0x87e053020840ll;
}

#define typedef_ODY_TAD_CMN_MSMON_CSU_S ody_tad_cmn_msmon_csu_s_t
#define bustype_ODY_TAD_CMN_MSMON_CSU_S CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_MSMON_CSU_S "TAD_CMN_MSMON_CSU_S"
#define device_bar_ODY_TAD_CMN_MSMON_CSU_S 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_MSMON_CSU_S 0
#define arguments_ODY_TAD_CMN_MSMON_CSU_S -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_req_retry
 *
 * TAD Common Request Retry Control Register
 * Controls TAD Request retry settings.
 */
union ody_tad_cmn_req_retry {
	uint64_t u;
	struct ody_tad_cmn_req_retry_s {
		uint64_t sadr_req_low_wmark          : 6;
		uint64_t sadr_req_high_wmark         : 6;
		uint64_t sadr_pcrdtype_dis           : 4;
		uint64_t max_wait_sbf                : 7;
		uint64_t num_rsvd_sbf                : 6;
		uint64_t reserved_29_63              : 35;
	} s;
	/* struct ody_tad_cmn_req_retry_s cn; */
};
typedef union ody_tad_cmn_req_retry ody_tad_cmn_req_retry_t;

#define ODY_TAD_CMN_REQ_RETRY ODY_TAD_CMN_REQ_RETRY_FUNC()
static inline uint64_t ODY_TAD_CMN_REQ_RETRY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_REQ_RETRY_FUNC(void)
{
	return 0x87e053000018ll;
}

#define typedef_ODY_TAD_CMN_REQ_RETRY ody_tad_cmn_req_retry_t
#define bustype_ODY_TAD_CMN_REQ_RETRY CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_REQ_RETRY "TAD_CMN_REQ_RETRY"
#define device_bar_ODY_TAD_CMN_REQ_RETRY 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_REQ_RETRY 0
#define arguments_ODY_TAD_CMN_REQ_RETRY -1, -1, -1, -1

/**
 * Register (RSL) tad_cmn_scr_ctl
 *
 * TAD Common Scratchpad Control Register
 * Controls TAD Scratchpad settings.
 */
union ody_tad_cmn_scr_ctl {
	uint64_t u;
	struct ody_tad_cmn_scr_ctl_s {
		uint64_t size                        : 5;
		uint64_t disnxm                      : 1;
		uint64_t reserved_6_53               : 48;
		uint64_t chunkways                   : 5;
		uint64_t maxsize                     : 5;
	} s;
	/* struct ody_tad_cmn_scr_ctl_s cn; */
};
typedef union ody_tad_cmn_scr_ctl ody_tad_cmn_scr_ctl_t;

#define ODY_TAD_CMN_SCR_CTL ODY_TAD_CMN_SCR_CTL_FUNC()
static inline uint64_t ODY_TAD_CMN_SCR_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TAD_CMN_SCR_CTL_FUNC(void)
{
	return 0x87e053000038ll;
}

#define typedef_ODY_TAD_CMN_SCR_CTL ody_tad_cmn_scr_ctl_t
#define bustype_ODY_TAD_CMN_SCR_CTL CSR_TYPE_RSL
#define basename_ODY_TAD_CMN_SCR_CTL "TAD_CMN_SCR_CTL"
#define device_bar_ODY_TAD_CMN_SCR_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_TAD_CMN_SCR_CTL 0
#define arguments_ODY_TAD_CMN_SCR_CTL -1, -1, -1, -1

#endif /* __ODY_CSRS_TAD_CMN_H__ */
