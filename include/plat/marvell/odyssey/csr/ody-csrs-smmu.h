#ifndef __ODY_CSRS_SMMU_H__
#define __ODY_CSRS_SMMU_H__
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
 * SMMU.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration smmu_bar_e
 *
 * SMMU Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_SMMU_BAR_E_SMMUX_PF_BAR0(a) (0x830000000000ll + 0x1000000000ll * (a))
#define ODY_SMMU_BAR_E_SMMUX_PF_BAR0_SIZE 0x200000ull

/**
 * Enumeration smmu_cerror_e
 *
 * SMMU Command Queue Error Enumeration
 */
#define ODY_SMMU_CERROR_E_ABT (2)
#define ODY_SMMU_CERROR_E_CERROR_ATC_INV_SYNC (3)
#define ODY_SMMU_CERROR_E_ILL (1)
#define ODY_SMMU_CERROR_E_NONE (0)

/**
 * Enumeration smmu_cmd_e
 *
 * SMMU Command Queue Codes Enumeration
 */
#define ODY_SMMU_CMD_E_ATC_INV (0x40)
#define ODY_SMMU_CMD_E_CFGI_CD (5)
#define ODY_SMMU_CMD_E_CFGI_CD_ALL (6)
#define ODY_SMMU_CMD_E_CFGI_STE (3)
#define ODY_SMMU_CMD_E_CFGI_STE_RANGE (4)
#define ODY_SMMU_CMD_E_CFGI_VMS_PIDM (7)
#define ODY_SMMU_CMD_E_PREFETCH_ADDR (2)
#define ODY_SMMU_CMD_E_PREFETCH_CONFIG (1)
#define ODY_SMMU_CMD_E_PRI_RESP (0x41)
#define ODY_SMMU_CMD_E_RESUME (0x44)
#define ODY_SMMU_CMD_E_STALL_TERM (0x45)
#define ODY_SMMU_CMD_E_SYNC (0x46)
#define ODY_SMMU_CMD_E_TLBI_EL2_ALL (0x20)
#define ODY_SMMU_CMD_E_TLBI_EL2_ASID (0x21)
#define ODY_SMMU_CMD_E_TLBI_EL2_VA (0x22)
#define ODY_SMMU_CMD_E_TLBI_EL2_VAA (0x23)
#define ODY_SMMU_CMD_E_TLBI_EL3_ALL (0x18)
#define ODY_SMMU_CMD_E_TLBI_EL3_VA (0x1a)
#define ODY_SMMU_CMD_E_TLBI_NH_ALL (0x10)
#define ODY_SMMU_CMD_E_TLBI_NH_ASID (0x11)
#define ODY_SMMU_CMD_E_TLBI_NH_VA (0x12)
#define ODY_SMMU_CMD_E_TLBI_NH_VAA (0x13)
#define ODY_SMMU_CMD_E_TLBI_NSNH_ALL (0x30)
#define ODY_SMMU_CMD_E_TLBI_S12_VMALL (0x28)
#define ODY_SMMU_CMD_E_TLBI_S2_IPA (0x2a)
#define ODY_SMMU_CMD_E_TLBI_SNH_ALL (0x60)
#define ODY_SMMU_CMD_E_TLBI_S_EL2_ALL (0x50)
#define ODY_SMMU_CMD_E_TLBI_S_EL2_ASID (0x51)
#define ODY_SMMU_CMD_E_TLBI_S_EL2_VA (0x52)
#define ODY_SMMU_CMD_E_TLBI_S_EL2_VAA (0x53)
#define ODY_SMMU_CMD_E_TLBI_S_S12_VMALL (0x58)
#define ODY_SMMU_CMD_E_TLBI_S_S2_IPA (0x5a)

/**
 * Enumeration smmu_event_e
 *
 * SMMU Event Record Codes Enumeration
 * Enumerates event record types.
 */
#define ODY_SMMU_EVENT_E_C_BAD_CD (0xa)
#define ODY_SMMU_EVENT_E_C_BAD_STE (4)
#define ODY_SMMU_EVENT_E_C_BAD_STREAMID (2)
#define ODY_SMMU_EVENT_E_C_BAD_SUBSTREAMID (8)
#define ODY_SMMU_EVENT_E_E_PAGE_REQUEST (0x24)
#define ODY_SMMU_EVENT_E_F_ACCESS (0x12)
#define ODY_SMMU_EVENT_E_F_ADDR_SIZE (0x11)
#define ODY_SMMU_EVENT_E_F_BAD_ATS_TREQ (5)
#define ODY_SMMU_EVENT_E_F_CD_FETCH (9)
#define ODY_SMMU_EVENT_E_F_CFG_CONFLICT (0x21)
#define ODY_SMMU_EVENT_E_F_PERMISSION (0x13)
#define ODY_SMMU_EVENT_E_F_STE_FETCH (3)
#define ODY_SMMU_EVENT_E_F_STREAM_DISABLED (6)
#define ODY_SMMU_EVENT_E_F_TLB_CONFLICT (0x20)
#define ODY_SMMU_EVENT_E_F_TRANSLATION (0x10)
#define ODY_SMMU_EVENT_E_F_TRANSL_FORBIDDEN (7)
#define ODY_SMMU_EVENT_E_F_UUT (1)
#define ODY_SMMU_EVENT_E_F_VMS_FETCH (0x25)
#define ODY_SMMU_EVENT_E_F_WALK_EABT (0xb)
#define ODY_SMMU_EVENT_E_INTERNAL_ERR (0xfd)
#define ODY_SMMU_EVENT_E_INV_REQ (0xff)
#define ODY_SMMU_EVENT_E_INV_STAGE (0xfe)

/**
 * Enumeration smmu_pmcg_e
 *
 * SMMU PMCG Events Enumeration
 * Enumerates counter types.
 */
#define ODY_SMMU_PMCG_E_ACTIVE_CLOCKS (0x80)
#define ODY_SMMU_PMCG_E_ATS_TR (6)
#define ODY_SMMU_PMCG_E_ATS_TT (7)
#define ODY_SMMU_PMCG_E_CFG_DOUBLE_HIT (0x9a)
#define ODY_SMMU_PMCG_E_CFG_HIT (0x98)
#define ODY_SMMU_PMCG_E_CFG_MISS (3)
#define ODY_SMMU_PMCG_E_CFG_READ (5)
#define ODY_SMMU_PMCG_E_CLOCKS (0)
#define ODY_SMMU_PMCG_E_TLB_FXL_TTD2B (0x93)
#define ODY_SMMU_PMCG_E_TLB_FXL_TTD2T (0x92)
#define ODY_SMMU_PMCG_E_TLB_FXL_TTD3P (0x91)
#define ODY_SMMU_PMCG_E_TLB_FXL_TTDNONE (0x97)
#define ODY_SMMU_PMCG_E_TLB_MISS (2)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD0T (0x86)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD1B (0x85)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD1T (0x84)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD2B (0x83)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD2T (0x82)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTD3P (0x81)
#define ODY_SMMU_PMCG_E_TLB_WLK_TTDNONE (0x87)
#define ODY_SMMU_PMCG_E_TRANSLATION_REQUESTS (1)
#define ODY_SMMU_PMCG_E_TTD_READ (4)
#define ODY_SMMU_PMCG_E_UTLB_HIT (0x9b)

/**
 * Register (NCB32b) smmu#_agbpa
 *
 * SMMU Alternate Global Bypass Attribute Register
 * This register is intended to allow an implementation to apply an additional non
 * architected attributes or tag to bypassing transactions, for example a traffic
 * routing identifier.
 *
 * If this field is unsupported by an implementation, it is RES0.  It is not
 * intended for this register to be used to further modify existing architected
 * bypass attributes which are controlled using GPBA.
 */
union ody_smmux_agbpa {
	uint32_t u;
	struct ody_smmux_agbpa_s {
		uint32_t qos                         : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_smmux_agbpa_s cn; */
};
typedef union ody_smmux_agbpa ody_smmux_agbpa_t;

static inline uint64_t ODY_SMMUX_AGBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_AGBPA(uint64_t a)
{
	if (a <= 3)
		return 0x830000000048ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_AGBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_AGBPA(a) ody_smmux_agbpa_t
#define bustype_ODY_SMMUX_AGBPA(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_AGBPA(a) "SMMUX_AGBPA"
#define device_bar_ODY_SMMUX_AGBPA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_AGBPA(a) (a)
#define arguments_ODY_SMMUX_AGBPA(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_aidr
 *
 * SMMU Auxiliary Identification Register
 * This register identifies the SMMU architecture version to which the implementation conforms.
 */
union ody_smmux_aidr {
	uint32_t u;
	struct ody_smmux_aidr_s {
		uint32_t archminorrev                : 4;
		uint32_t archmajorrev                : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_aidr_s cn; */
};
typedef union ody_smmux_aidr ody_smmux_aidr_t;

static inline uint64_t ODY_SMMUX_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_AIDR(uint64_t a)
{
	if (a <= 3)
		return 0x83000000001cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_AIDR(a) ody_smmux_aidr_t
#define bustype_ODY_SMMUX_AIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_AIDR(a) "SMMUX_AIDR"
#define device_bar_ODY_SMMUX_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_AIDR(a) (a)
#define arguments_ODY_SMMUX_AIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cidr0
 *
 * SMMU Component Identification Register 0
 */
union ody_smmux_cidr0 {
	uint32_t u;
	struct ody_smmux_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_cidr0_s cn; */
};
typedef union ody_smmux_cidr0 ody_smmux_cidr0_t;

static inline uint64_t ODY_SMMUX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CIDR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000ff0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CIDR0(a) ody_smmux_cidr0_t
#define bustype_ODY_SMMUX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CIDR0(a) "SMMUX_CIDR0"
#define device_bar_ODY_SMMUX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CIDR0(a) (a)
#define arguments_ODY_SMMUX_CIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cidr1
 *
 * SMMU Component Identification Register 1
 */
union ody_smmux_cidr1 {
	uint32_t u;
	struct ody_smmux_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t component_class             : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_cidr1_s cn; */
};
typedef union ody_smmux_cidr1 ody_smmux_cidr1_t;

static inline uint64_t ODY_SMMUX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CIDR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000000ff4ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CIDR1(a) ody_smmux_cidr1_t
#define bustype_ODY_SMMUX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CIDR1(a) "SMMUX_CIDR1"
#define device_bar_ODY_SMMUX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CIDR1(a) (a)
#define arguments_ODY_SMMUX_CIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cidr2
 *
 * SMMU Component Identification Register 2
 */
union ody_smmux_cidr2 {
	uint32_t u;
	struct ody_smmux_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_cidr2_s cn; */
};
typedef union ody_smmux_cidr2 ody_smmux_cidr2_t;

static inline uint64_t ODY_SMMUX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CIDR2(uint64_t a)
{
	if (a <= 3)
		return 0x830000000ff8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CIDR2(a) ody_smmux_cidr2_t
#define bustype_ODY_SMMUX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CIDR2(a) "SMMUX_CIDR2"
#define device_bar_ODY_SMMUX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CIDR2(a) (a)
#define arguments_ODY_SMMUX_CIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cidr3
 *
 * SMMU Component Identification Register 3
 */
union ody_smmux_cidr3 {
	uint32_t u;
	struct ody_smmux_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_cidr3_s cn; */
};
typedef union ody_smmux_cidr3 ody_smmux_cidr3_t;

static inline uint64_t ODY_SMMUX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CIDR3(uint64_t a)
{
	if (a <= 3)
		return 0x830000000ffcll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CIDR3(a) ody_smmux_cidr3_t
#define bustype_ODY_SMMUX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CIDR3(a) "SMMUX_CIDR3"
#define device_bar_ODY_SMMUX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CIDR3(a) (a)
#define arguments_ODY_SMMUX_CIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_cmdq_base
 *
 * SMMU Command Queue Base Register
 */
union ody_smmux_cmdq_base {
	uint64_t u;
	struct ody_smmux_cmdq_base_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t ra                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_cmdq_base_s cn; */
};
typedef union ody_smmux_cmdq_base ody_smmux_cmdq_base_t;

static inline uint64_t ODY_SMMUX_CMDQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x830000000090ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_BASE(a) ody_smmux_cmdq_base_t
#define bustype_ODY_SMMUX_CMDQ_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_CMDQ_BASE(a) "SMMUX_CMDQ_BASE"
#define device_bar_ODY_SMMUX_CMDQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_BASE(a) (a)
#define arguments_ODY_SMMUX_CMDQ_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cmdq_cons
 *
 * SMMU Command Queue Consumer Register
 */
union ody_smmux_cmdq_cons {
	uint32_t u;
	struct ody_smmux_cmdq_cons_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_23              : 4;
		uint32_t errx                        : 7;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_smmux_cmdq_cons_s cn; */
};
typedef union ody_smmux_cmdq_cons ody_smmux_cmdq_cons_t;

static inline uint64_t ODY_SMMUX_CMDQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_CONS(uint64_t a)
{
	if (a <= 3)
		return 0x83000000009cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_CONS(a) ody_smmux_cmdq_cons_t
#define bustype_ODY_SMMUX_CMDQ_CONS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CMDQ_CONS(a) "SMMUX_CMDQ_CONS"
#define device_bar_ODY_SMMUX_CMDQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_CONS(a) (a)
#define arguments_ODY_SMMUX_CMDQ_CONS(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_cmdq_control_page_base#
 *
 * SMMU CMDQ Control Page Base Register
 * Provides information about the Enhanced Command queue interface for the SMMU Non-
 * secure programming interface.
 */
union ody_smmux_cmdq_control_page_basex {
	uint64_t u;
	struct ody_smmux_cmdq_control_page_basex_s {
		uint64_t cmdq_control_page_preset    : 1;
		uint64_t cmdqgs                      : 2;
		uint64_t reserved_3_15               : 13;
		uint64_t addr                        : 36;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_cmdq_control_page_basex_s cn; */
};
typedef union ody_smmux_cmdq_control_page_basex ody_smmux_cmdq_control_page_basex_t;

static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b == 0))
		return 0x830000004000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_CONTROL_PAGE_BASEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) ody_smmux_cmdq_control_page_basex_t
#define bustype_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) "SMMUX_CMDQ_CONTROL_PAGE_BASEX"
#define device_bar_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) (a)
#define arguments_ODY_SMMUX_CMDQ_CONTROL_PAGE_BASEX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_cmdq_control_page_cfg#
 *
 * SMMU CMDQ Control Page Configuration Register
 * Control for Enhanced Command queue interface for the SMMU Non-secure programming interface.
 */
union ody_smmux_cmdq_control_page_cfgx {
	uint32_t u;
	struct ody_smmux_cmdq_control_page_cfgx_s {
		uint32_t en                          : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_cmdq_control_page_cfgx_s cn; */
};
typedef union ody_smmux_cmdq_control_page_cfgx ody_smmux_cmdq_control_page_cfgx_t;

static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b == 0))
		return 0x830000004008ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_CONTROL_PAGE_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) ody_smmux_cmdq_control_page_cfgx_t
#define bustype_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) "SMMUX_CMDQ_CONTROL_PAGE_CFGX"
#define device_bar_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) (a)
#define arguments_ODY_SMMUX_CMDQ_CONTROL_PAGE_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_cmdq_control_page_status#
 *
 * SMMU CMDQ Control Page Status Register
 * Status of Enhanced Command queue interface for the SMMU Non-secure programming interface.
 */
union ody_smmux_cmdq_control_page_statusx {
	uint32_t u;
	struct ody_smmux_cmdq_control_page_statusx_s {
		uint32_t enack                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_cmdq_control_page_statusx_s cn; */
};
typedef union ody_smmux_cmdq_control_page_statusx ody_smmux_cmdq_control_page_statusx_t;

static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b == 0))
		return 0x83000000400cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_CONTROL_PAGE_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) ody_smmux_cmdq_control_page_statusx_t
#define bustype_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) "SMMUX_CMDQ_CONTROL_PAGE_STATUSX"
#define device_bar_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) (a)
#define arguments_ODY_SMMUX_CMDQ_CONTROL_PAGE_STATUSX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_cmdq_prod
 *
 * SMMU Command Queue Producer Register
 */
union ody_smmux_cmdq_prod {
	uint32_t u;
	struct ody_smmux_cmdq_prod_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_smmux_cmdq_prod_s cn; */
};
typedef union ody_smmux_cmdq_prod ody_smmux_cmdq_prod_t;

static inline uint64_t ODY_SMMUX_CMDQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CMDQ_PROD(uint64_t a)
{
	if (a <= 3)
		return 0x830000000098ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CMDQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CMDQ_PROD(a) ody_smmux_cmdq_prod_t
#define bustype_ODY_SMMUX_CMDQ_PROD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CMDQ_PROD(a) "SMMUX_CMDQ_PROD"
#define device_bar_ODY_SMMUX_CMDQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CMDQ_PROD(a) (a)
#define arguments_ODY_SMMUX_CMDQ_PROD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cr0
 *
 * SMMU Control 0 Register
 * Each field in this register has a corresponding field in SMMU()_CR0ACK. An
 * individual field is said to be "updated" after the value of the field observed in
 * SMMU()_CR0ACK matches the value that was written to the field in
 * SMMU()_CR0. Reserved fields in SMMU()_CR0 are not reflected in SMMU()_CR0ACK. To
 * ensure a field change has taken effect, software must poll the equivalent field in
 * SMMU()_CR0ACK after writing the field in this register.
 *
 * Each field in this register is independent and unaffected by ongoing update
 * procedures of adjacent fields.
 *
 * Update of a field must complete in reasonable time, but is not required to occur
 * immediately.  The update process may have side effects which are guaranteed to be
 * complete by the time update completes. See below for details of any side effects.
 *
 * A field that has been written is considered to be in a transitional state until
 * update has completed. Anything depending on its value observes the old value until
 * the new value takes effect at an unpredictable point before update completes
 * whereupon the new value is guaranteed to be used, therefore:
 *
 * A written field cannot be assumed to have taken the new value until update completes.
 *
 * A written field cannot be assumed not to have taken the new value after the write is
 * observed by the SMMU.
 *
 * Anywhere behavior depending on a field value (for example, a rule of the form "REG
 * must only be changed if SMMUEN=0"), it is the post-update value that is referred
 * to. In this example, the rule would be broken were REG to be changed after the point
 * that SMMU()_(S_)SMMUEN has been written to one even if update has not
 * completed. Similarly, a field that has been written and is still in a transitional
 * state (pre-update completion) must be considered to still have the old value for the
 * purposes of constraints the old value places upon software. For example,
 * SMMU()_CMDQ_CONS must not be written when CMDQEN=1, or during an as -yet incomplete
 * transition to 0 (as [CMDQEN] must still be considered to be one).
 *
 * After altering a field value, software must not alter the field's value again before
 * the initial alteration's update is complete. Behavior on doing so is constrained
 * unpredictable and one of the following occurs: The new value is stored and the
 * update completes with any of the values written.
 *
 * The effective field value in use might not match that read back from this register.
 * The new value is ignored and update completes using the first value (reflected in
 * SMMU()_CR0ACK).  Cease update if the new value is the same as the original value
 * before the first write.  This means no update side effects would occur.
 *
 * A write with the same value (i.e. not altered) is permitted; this might occur when
 * altering an unrelated field in the same register whilst an earlier field update is
 * in process.
 */
union ody_smmux_cr0 {
	uint32_t u;
	struct ody_smmux_cr0_s {
		uint32_t smmuen                      : 1;
		uint32_t priqen                      : 1;
		uint32_t eventqen                    : 1;
		uint32_t cmdqen                      : 1;
		uint32_t atschk                      : 1;
		uint32_t reserved_5                  : 1;
		uint32_t vmw                         : 3;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_smmux_cr0_s cn; */
};
typedef union ody_smmux_cr0 ody_smmux_cr0_t;

static inline uint64_t ODY_SMMUX_CR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000020ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CR0(a) ody_smmux_cr0_t
#define bustype_ODY_SMMUX_CR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CR0(a) "SMMUX_CR0"
#define device_bar_ODY_SMMUX_CR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CR0(a) (a)
#define arguments_ODY_SMMUX_CR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cr0ack
 *
 * SMMU Control 0 Acknowledgement Register
 * This register is a read-only copy of SMMU()_CR0.
 */
union ody_smmux_cr0ack {
	uint32_t u;
	struct ody_smmux_cr0ack_s {
		uint32_t smmuen                      : 1;
		uint32_t priqen                      : 1;
		uint32_t eventqen                    : 1;
		uint32_t cmdqen                      : 1;
		uint32_t atschk                      : 1;
		uint32_t reserved_5                  : 1;
		uint32_t vmw                         : 3;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_smmux_cr0ack_s cn; */
};
typedef union ody_smmux_cr0ack ody_smmux_cr0ack_t;

static inline uint64_t ODY_SMMUX_CR0ACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CR0ACK(uint64_t a)
{
	if (a <= 3)
		return 0x830000000024ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CR0ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CR0ACK(a) ody_smmux_cr0ack_t
#define bustype_ODY_SMMUX_CR0ACK(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CR0ACK(a) "SMMUX_CR0ACK"
#define device_bar_ODY_SMMUX_CR0ACK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CR0ACK(a) (a)
#define arguments_ODY_SMMUX_CR0ACK(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cr1
 *
 * SMMU Control 1 Register
 */
union ody_smmux_cr1 {
	uint32_t u;
	struct ody_smmux_cr1_s {
		uint32_t queue_ic                    : 2;
		uint32_t queue_oc                    : 2;
		uint32_t queue_sh                    : 2;
		uint32_t table_ic                    : 2;
		uint32_t table_oc                    : 2;
		uint32_t table_sh                    : 2;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_smmux_cr1_s cn; */
};
typedef union ody_smmux_cr1 ody_smmux_cr1_t;

static inline uint64_t ODY_SMMUX_CR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000000028ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CR1(a) ody_smmux_cr1_t
#define bustype_ODY_SMMUX_CR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CR1(a) "SMMUX_CR1"
#define device_bar_ODY_SMMUX_CR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CR1(a) (a)
#define arguments_ODY_SMMUX_CR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_cr2
 *
 * SMMU Control 2 Register
 */
union ody_smmux_cr2 {
	uint32_t u;
	struct ody_smmux_cr2_s {
		uint32_t e2h                         : 1;
		uint32_t recinvsid                   : 1;
		uint32_t ptm                         : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_cr2_s cn; */
};
typedef union ody_smmux_cr2 ody_smmux_cr2_t;

static inline uint64_t ODY_SMMUX_CR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_CR2(uint64_t a)
{
	if (a <= 3)
		return 0x83000000002cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_CR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_CR2(a) ody_smmux_cr2_t
#define bustype_ODY_SMMUX_CR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_CR2(a) "SMMUX_CR2"
#define device_bar_ODY_SMMUX_CR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_CR2(a) (a)
#define arguments_ODY_SMMUX_CR2(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_ecmdq_base#
 *
 * SMMU Enhanced Command Queue Base Register
 * Configuration of the Command queue base address.
 */
union ody_smmux_ecmdq_basex {
	uint64_t u;
	struct ody_smmux_ecmdq_basex_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t ra                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_ecmdq_basex_s cn; */
};
typedef union ody_smmux_ecmdq_basex ody_smmux_ecmdq_basex_t;

static inline uint64_t ODY_SMMUX_ECMDQ_BASEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_ECMDQ_BASEX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 127))
		return 0x830000180000ll + 0x1000000000ll * ((a) & 0x3) + 0x200ll * ((b) & 0x7f);
	__ody_csr_fatal("SMMUX_ECMDQ_BASEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_ECMDQ_BASEX(a, b) ody_smmux_ecmdq_basex_t
#define bustype_ODY_SMMUX_ECMDQ_BASEX(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_ECMDQ_BASEX(a, b) "SMMUX_ECMDQ_BASEX"
#define device_bar_ODY_SMMUX_ECMDQ_BASEX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_ECMDQ_BASEX(a, b) (a)
#define arguments_ODY_SMMUX_ECMDQ_BASEX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_ecmdq_cons#
 *
 * SMMU Enhanced Command Queue Consumer Register
 * Command queue consumer read index.
 */
union ody_smmux_ecmdq_consx {
	uint32_t u;
	struct ody_smmux_ecmdq_consx_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_22              : 3;
		uint32_t errx                        : 1;
		uint32_t err_reason                  : 3;
		uint32_t reserved_27_30              : 4;
		uint32_t enack                       : 1;
	} s;
	/* struct ody_smmux_ecmdq_consx_s cn; */
};
typedef union ody_smmux_ecmdq_consx ody_smmux_ecmdq_consx_t;

static inline uint64_t ODY_SMMUX_ECMDQ_CONSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_ECMDQ_CONSX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 127))
		return 0x83000018000cll + 0x1000000000ll * ((a) & 0x3) + 0x200ll * ((b) & 0x7f);
	__ody_csr_fatal("SMMUX_ECMDQ_CONSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_ECMDQ_CONSX(a, b) ody_smmux_ecmdq_consx_t
#define bustype_ODY_SMMUX_ECMDQ_CONSX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_ECMDQ_CONSX(a, b) "SMMUX_ECMDQ_CONSX"
#define device_bar_ODY_SMMUX_ECMDQ_CONSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_ECMDQ_CONSX(a, b) (a)
#define arguments_ODY_SMMUX_ECMDQ_CONSX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_ecmdq_prod#
 *
 * SMMU Enhanced Command Queue Producer Register
 * Allows Command queue producer to update the write index.
 */
union ody_smmux_ecmdq_prodx {
	uint32_t u;
	struct ody_smmux_ecmdq_prodx_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_22              : 3;
		uint32_t errack                      : 1;
		uint32_t reserved_24_30              : 7;
		uint32_t en                          : 1;
	} s;
	/* struct ody_smmux_ecmdq_prodx_s cn; */
};
typedef union ody_smmux_ecmdq_prodx ody_smmux_ecmdq_prodx_t;

static inline uint64_t ODY_SMMUX_ECMDQ_PRODX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_ECMDQ_PRODX(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 127))
		return 0x830000180008ll + 0x1000000000ll * ((a) & 0x3) + 0x200ll * ((b) & 0x7f);
	__ody_csr_fatal("SMMUX_ECMDQ_PRODX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_ECMDQ_PRODX(a, b) ody_smmux_ecmdq_prodx_t
#define bustype_ODY_SMMUX_ECMDQ_PRODX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_ECMDQ_PRODX(a, b) "SMMUX_ECMDQ_PRODX"
#define device_bar_ODY_SMMUX_ECMDQ_PRODX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_ECMDQ_PRODX(a, b) (a)
#define arguments_ODY_SMMUX_ECMDQ_PRODX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_eventq_base
 *
 * SMMU Event Queue Base Register
 */
union ody_smmux_eventq_base {
	uint64_t u;
	struct ody_smmux_eventq_base_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t wa                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_eventq_base_s cn; */
};
typedef union ody_smmux_eventq_base ody_smmux_eventq_base_t;

static inline uint64_t ODY_SMMUX_EVENTQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000a0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_BASE(a) ody_smmux_eventq_base_t
#define bustype_ODY_SMMUX_EVENTQ_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_EVENTQ_BASE(a) "SMMUX_EVENTQ_BASE"
#define device_bar_ODY_SMMUX_EVENTQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_BASE(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_eventq_cons
 *
 * SMMU Event Queue Consumer Register
 */
union ody_smmux_eventq_cons {
	uint32_t u;
	struct ody_smmux_eventq_cons_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovackflg                    : 1;
	} s;
	/* struct ody_smmux_eventq_cons_s cn; */
};
typedef union ody_smmux_eventq_cons ody_smmux_eventq_cons_t;

static inline uint64_t ODY_SMMUX_EVENTQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_CONS(uint64_t a)
{
	if (a <= 3)
		return 0x8300000100acll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_CONS(a) ody_smmux_eventq_cons_t
#define bustype_ODY_SMMUX_EVENTQ_CONS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_EVENTQ_CONS(a) "SMMUX_EVENTQ_CONS"
#define device_bar_ODY_SMMUX_EVENTQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_CONS(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_CONS(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_eventq_irq_cfg0
 *
 * SMMU Event Queue Interrupt Configuration 0 Register
 */
union ody_smmux_eventq_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_eventq_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_eventq_irq_cfg0_s cn; */
};
typedef union ody_smmux_eventq_irq_cfg0 ody_smmux_eventq_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000b0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) ody_smmux_eventq_irq_cfg0_t
#define bustype_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) "SMMUX_EVENTQ_IRQ_CFG0"
#define device_bar_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_eventq_irq_cfg1
 *
 * SMMU Event Queue Interrupt Configuration 1 Register
 */
union ody_smmux_eventq_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_eventq_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_eventq_irq_cfg1_s cn; */
};
typedef union ody_smmux_eventq_irq_cfg1 ody_smmux_eventq_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000b8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) ody_smmux_eventq_irq_cfg1_t
#define bustype_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) "SMMUX_EVENTQ_IRQ_CFG1"
#define device_bar_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_eventq_irq_cfg2
 *
 * SMMU Event Queue Interrupt Configuration 2 Register
 */
union ody_smmux_eventq_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_eventq_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_smmux_eventq_irq_cfg2_s cn; */
};
typedef union ody_smmux_eventq_irq_cfg2 ody_smmux_eventq_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_IRQ_CFG2(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000bcll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) ody_smmux_eventq_irq_cfg2_t
#define bustype_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) "SMMUX_EVENTQ_IRQ_CFG2"
#define device_bar_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_IRQ_CFG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_eventq_prod
 *
 * SMMU Event Queue Producer Register
 */
union ody_smmux_eventq_prod {
	uint32_t u;
	struct ody_smmux_eventq_prod_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovflg                       : 1;
	} s;
	/* struct ody_smmux_eventq_prod_s cn; */
};
typedef union ody_smmux_eventq_prod ody_smmux_eventq_prod_t;

static inline uint64_t ODY_SMMUX_EVENTQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_EVENTQ_PROD(uint64_t a)
{
	if (a <= 3)
		return 0x8300000100a8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_EVENTQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_EVENTQ_PROD(a) ody_smmux_eventq_prod_t
#define bustype_ODY_SMMUX_EVENTQ_PROD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_EVENTQ_PROD(a) "SMMUX_EVENTQ_PROD"
#define device_bar_ODY_SMMUX_EVENTQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_EVENTQ_PROD(a) (a)
#define arguments_ODY_SMMUX_EVENTQ_PROD(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_gatos_addr
 *
 * SMMU GATOS Address Register
 */
union ody_smmux_gatos_addr {
	uint64_t u;
	struct ody_smmux_gatos_addr_s {
		uint64_t reserved_0_3                : 4;
		uint64_t ns_ind                      : 1;
		uint64_t reserved_5                  : 1;
		uint64_t httui                       : 1;
		uint64_t ind                         : 1;
		uint64_t rnw                         : 1;
		uint64_t pnu                         : 1;
		uint64_t rtype                       : 2;
		uint64_t addr                        : 52;
	} s;
	/* struct ody_smmux_gatos_addr_s cn; */
};
typedef union ody_smmux_gatos_addr ody_smmux_gatos_addr_t;

static inline uint64_t ODY_SMMUX_GATOS_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GATOS_ADDR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000110ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GATOS_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GATOS_ADDR(a) ody_smmux_gatos_addr_t
#define bustype_ODY_SMMUX_GATOS_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_GATOS_ADDR(a) "SMMUX_GATOS_ADDR"
#define device_bar_ODY_SMMUX_GATOS_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GATOS_ADDR(a) (a)
#define arguments_ODY_SMMUX_GATOS_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gatos_ctrl
 *
 * SMMU GATOS Control Register
 */
union ody_smmux_gatos_ctrl {
	uint32_t u;
	struct ody_smmux_gatos_ctrl_s {
		uint32_t run                         : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_gatos_ctrl_s cn; */
};
typedef union ody_smmux_gatos_ctrl ody_smmux_gatos_ctrl_t;

static inline uint64_t ODY_SMMUX_GATOS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GATOS_CTRL(uint64_t a)
{
	if (a <= 3)
		return 0x830000000100ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GATOS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GATOS_CTRL(a) ody_smmux_gatos_ctrl_t
#define bustype_ODY_SMMUX_GATOS_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GATOS_CTRL(a) "SMMUX_GATOS_CTRL"
#define device_bar_ODY_SMMUX_GATOS_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GATOS_CTRL(a) (a)
#define arguments_ODY_SMMUX_GATOS_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_gatos_par
 *
 * SMMU GATOS Address Register
 */
union ody_smmux_gatos_par {
	uint64_t u;
	struct ody_smmux_gatos_par_s {
		uint64_t par                         : 64;
	} s;
	/* struct ody_smmux_gatos_par_s cn; */
};
typedef union ody_smmux_gatos_par ody_smmux_gatos_par_t;

static inline uint64_t ODY_SMMUX_GATOS_PAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GATOS_PAR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000118ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GATOS_PAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GATOS_PAR(a) ody_smmux_gatos_par_t
#define bustype_ODY_SMMUX_GATOS_PAR(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_GATOS_PAR(a) "SMMUX_GATOS_PAR"
#define device_bar_ODY_SMMUX_GATOS_PAR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GATOS_PAR(a) (a)
#define arguments_ODY_SMMUX_GATOS_PAR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_gatos_sid
 *
 * SMMU GATOS SID Register
 */
union ody_smmux_gatos_sid {
	uint64_t u;
	struct ody_smmux_gatos_sid_s {
		uint64_t streamid                    : 22;
		uint64_t reserved_22_31              : 10;
		uint64_t substreamid                 : 20;
		uint64_t ssid_valid                  : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_smmux_gatos_sid_s cn; */
};
typedef union ody_smmux_gatos_sid ody_smmux_gatos_sid_t;

static inline uint64_t ODY_SMMUX_GATOS_SID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GATOS_SID(uint64_t a)
{
	if (a <= 3)
		return 0x830000000108ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GATOS_SID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GATOS_SID(a) ody_smmux_gatos_sid_t
#define bustype_ODY_SMMUX_GATOS_SID(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_GATOS_SID(a) "SMMUX_GATOS_SID"
#define device_bar_ODY_SMMUX_GATOS_SID(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GATOS_SID(a) (a)
#define arguments_ODY_SMMUX_GATOS_SID(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gbpa
 *
 * SMMU Global Bypass Attribute Register
 */
union ody_smmux_gbpa {
	uint32_t u;
	struct ody_smmux_gbpa_s {
		uint32_t memattr                     : 4;
		uint32_t mtcfg                       : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t alloccfg                    : 4;
		uint32_t shcfg                       : 2;
		uint32_t reserved_14_15              : 2;
		uint32_t privcfg                     : 2;
		uint32_t instcfg                     : 2;
		uint32_t abrt                        : 1;
		uint32_t reserved_21_30              : 10;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_gbpa_s cn; */
};
typedef union ody_smmux_gbpa ody_smmux_gbpa_t;

static inline uint64_t ODY_SMMUX_GBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GBPA(uint64_t a)
{
	if (a <= 3)
		return 0x830000000044ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GBPA(a) ody_smmux_gbpa_t
#define bustype_ODY_SMMUX_GBPA(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GBPA(a) "SMMUX_GBPA"
#define device_bar_ODY_SMMUX_GBPA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GBPA(a) (a)
#define arguments_ODY_SMMUX_GBPA(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gbpmpam
 *
 * SMMU Global Bypass MPAM Configuration for Non-secure state Register
 */
union ody_smmux_gbpmpam {
	uint32_t u;
	struct ody_smmux_gbpmpam_s {
		uint32_t gbp_partid                  : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t gbp_pmg                     : 1;
		uint32_t reserved_17_30              : 14;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_gbpmpam_s cn; */
};
typedef union ody_smmux_gbpmpam ody_smmux_gbpmpam_t;

static inline uint64_t ODY_SMMUX_GBPMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GBPMPAM(uint64_t a)
{
	if (a <= 3)
		return 0x83000000013cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GBPMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GBPMPAM(a) ody_smmux_gbpmpam_t
#define bustype_ODY_SMMUX_GBPMPAM(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GBPMPAM(a) "SMMUX_GBPMPAM"
#define device_bar_ODY_SMMUX_GBPMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GBPMPAM(a) (a)
#define arguments_ODY_SMMUX_GBPMPAM(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gerror
 *
 * SMMU Global Error Register
 * This register, in conjunction with SMMU()_(S_)GERRORN, indicates whether global error
 * conditions exist.
 *
 * The SMMU toggles SMMU()_(S_)GERROR[x] when an error becomes active. Software is
 * expected to toggle SMMU()_(S_)GERRORN[x] in response, to acknowledge the error.
 *
 * The SMMU does not toggle a bit when an error is already active. An error is only
 * activated if it is in an inactive state (i.e. a prior error has been
 * acknowledged/de-activated).
 *
 * Software is not intended to trigger interrupts by arranging for SMMU()_GERRORN\<x\> to differ
 * from SMMU()_GERROR\<x\>.
 */
union ody_smmux_gerror {
	uint32_t u;
	struct ody_smmux_gerror_s {
		uint32_t cmdq_err                    : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_abt_err              : 1;
		uint32_t priq_abt_err                : 1;
		uint32_t msi_cmdq_abt_err            : 1;
		uint32_t msi_eventq_abt_err          : 1;
		uint32_t msi_priq_abt_err            : 1;
		uint32_t msi_gerror_abt_err          : 1;
		uint32_t sfm_err                     : 1;
		uint32_t cmdqp_err                   : 1;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_gerror_s cn; */
};
typedef union ody_smmux_gerror ody_smmux_gerror_t;

static inline uint64_t ODY_SMMUX_GERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GERROR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000060ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GERROR(a) ody_smmux_gerror_t
#define bustype_ODY_SMMUX_GERROR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GERROR(a) "SMMUX_GERROR"
#define device_bar_ODY_SMMUX_GERROR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GERROR(a) (a)
#define arguments_ODY_SMMUX_GERROR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_gerror_irq_cfg0
 *
 * SMMU Global Error IRQ Configuration 0 Register
 * Registers SMMU()_S_GERROR_IRQ_CFG0/1/2 are guarded by the respective
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN] and must only be modified when
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN]=0.
 */
union ody_smmux_gerror_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_gerror_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_gerror_irq_cfg0_s cn; */
};
typedef union ody_smmux_gerror_irq_cfg0 ody_smmux_gerror_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000068ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GERROR_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GERROR_IRQ_CFG0(a) ody_smmux_gerror_irq_cfg0_t
#define bustype_ODY_SMMUX_GERROR_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_GERROR_IRQ_CFG0(a) "SMMUX_GERROR_IRQ_CFG0"
#define device_bar_ODY_SMMUX_GERROR_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GERROR_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_GERROR_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gerror_irq_cfg1
 *
 * SMMU Global Error IRQ Configuration 1 Register
 */
union ody_smmux_gerror_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_gerror_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_gerror_irq_cfg1_s cn; */
};
typedef union ody_smmux_gerror_irq_cfg1 ody_smmux_gerror_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x830000000070ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GERROR_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GERROR_IRQ_CFG1(a) ody_smmux_gerror_irq_cfg1_t
#define bustype_ODY_SMMUX_GERROR_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GERROR_IRQ_CFG1(a) "SMMUX_GERROR_IRQ_CFG1"
#define device_bar_ODY_SMMUX_GERROR_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GERROR_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_GERROR_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gerror_irq_cfg2
 *
 * SMMU Global Error IRQ Configuration 2 Register
 */
union ody_smmux_gerror_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_gerror_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_smmux_gerror_irq_cfg2_s cn; */
};
typedef union ody_smmux_gerror_irq_cfg2 ody_smmux_gerror_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GERROR_IRQ_CFG2(uint64_t a)
{
	if (a <= 3)
		return 0x830000000074ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GERROR_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GERROR_IRQ_CFG2(a) ody_smmux_gerror_irq_cfg2_t
#define bustype_ODY_SMMUX_GERROR_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GERROR_IRQ_CFG2(a) "SMMUX_GERROR_IRQ_CFG2"
#define device_bar_ODY_SMMUX_GERROR_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GERROR_IRQ_CFG2(a) (a)
#define arguments_ODY_SMMUX_GERROR_IRQ_CFG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gerrorn
 *
 * SMMU Global Error Acknowledge Register
 * Same fields as SMMU()_GERROR.
 *
 * Software must not toggle fields in this register that correspond to errors that are
 * inactive.  It is constrained unpredictable whether or not an SMMU activates errors
 * if this is done.
 *
 * The SMMU does not alter fields in this register.
 *
 * Software might maintain an internal copy of the last value written to this register,
 * for comparison against values read from SMMU()_GERROR when probing for errors.
 */
union ody_smmux_gerrorn {
	uint32_t u;
	struct ody_smmux_gerrorn_s {
		uint32_t cmdq_err                    : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_abt_err              : 1;
		uint32_t priq_abt_err                : 1;
		uint32_t msi_cmdq_abt_err            : 1;
		uint32_t msi_eventq_abt_err          : 1;
		uint32_t msi_priq_abt_err            : 1;
		uint32_t msi_gerror_abt_err          : 1;
		uint32_t sfm_err                     : 1;
		uint32_t cmdqp_err                   : 1;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_gerrorn_s cn; */
};
typedef union ody_smmux_gerrorn ody_smmux_gerrorn_t;

static inline uint64_t ODY_SMMUX_GERRORN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GERRORN(uint64_t a)
{
	if (a <= 3)
		return 0x830000000064ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GERRORN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GERRORN(a) ody_smmux_gerrorn_t
#define bustype_ODY_SMMUX_GERRORN(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GERRORN(a) "SMMUX_GERRORN"
#define device_bar_ODY_SMMUX_GERRORN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GERRORN(a) (a)
#define arguments_ODY_SMMUX_GERRORN(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_gmpam
 *
 * SMMU Global MPAM Configuration for Non-secure state Register
 */
union ody_smmux_gmpam {
	uint32_t u;
	struct ody_smmux_gmpam_s {
		uint32_t so_partid                   : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t so_pmg                      : 1;
		uint32_t reserved_17_30              : 14;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_gmpam_s cn; */
};
typedef union ody_smmux_gmpam ody_smmux_gmpam_t;

static inline uint64_t ODY_SMMUX_GMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_GMPAM(uint64_t a)
{
	if (a <= 3)
		return 0x830000000138ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_GMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_GMPAM(a) ody_smmux_gmpam_t
#define bustype_ODY_SMMUX_GMPAM(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_GMPAM(a) "SMMUX_GMPAM"
#define device_bar_ODY_SMMUX_GMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_GMPAM(a) (a)
#define arguments_ODY_SMMUX_GMPAM(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr0
 *
 * SMMU Identification 0 Register
 */
union ody_smmux_idr0 {
	uint32_t u;
	struct ody_smmux_idr0_s {
		uint32_t s2p                         : 1;
		uint32_t s1p                         : 1;
		uint32_t ttf                         : 2;
		uint32_t cohacc                      : 1;
		uint32_t btm                         : 1;
		uint32_t httu                        : 2;
		uint32_t dormhint                    : 1;
		uint32_t hyp                         : 1;
		uint32_t ats                         : 1;
		uint32_t ns1ats                      : 1;
		uint32_t asid16                      : 1;
		uint32_t msi                         : 1;
		uint32_t sev                         : 1;
		uint32_t atos                        : 1;
		uint32_t pri                         : 1;
		uint32_t vmw                         : 1;
		uint32_t vmid16                      : 1;
		uint32_t cd2l                        : 1;
		uint32_t vatos                       : 1;
		uint32_t ttendian                    : 2;
		uint32_t atsrecerr                   : 1;
		uint32_t stall_model                 : 2;
		uint32_t term_model                  : 1;
		uint32_t st_level                    : 2;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_smmux_idr0_s cn; */
};
typedef union ody_smmux_idr0 ody_smmux_idr0_t;

static inline uint64_t ODY_SMMUX_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR0(a) ody_smmux_idr0_t
#define bustype_ODY_SMMUX_IDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR0(a) "SMMUX_IDR0"
#define device_bar_ODY_SMMUX_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR0(a) (a)
#define arguments_ODY_SMMUX_IDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr1
 *
 * SMMU Identification 1 Register
 */
union ody_smmux_idr1 {
	uint32_t u;
	struct ody_smmux_idr1_s {
		uint32_t sidsize                     : 6;
		uint32_t ssidsize                    : 5;
		uint32_t priqs                       : 5;
		uint32_t eventqs                     : 5;
		uint32_t cmdqs                       : 5;
		uint32_t attr_perms_ovr              : 1;
		uint32_t attr_types_ovr              : 1;
		uint32_t rel                         : 1;
		uint32_t queues_preset               : 1;
		uint32_t tables_preset               : 1;
		uint32_t ecmdq                       : 1;
	} s;
	/* struct ody_smmux_idr1_s cn; */
};
typedef union ody_smmux_idr1 ody_smmux_idr1_t;

static inline uint64_t ODY_SMMUX_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000000004ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR1(a) ody_smmux_idr1_t
#define bustype_ODY_SMMUX_IDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR1(a) "SMMUX_IDR1"
#define device_bar_ODY_SMMUX_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR1(a) (a)
#define arguments_ODY_SMMUX_IDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr2
 *
 * SMMU Identification 2 Register
 */
union ody_smmux_idr2 {
	uint32_t u;
	struct ody_smmux_idr2_s {
		uint32_t ba_vatos                    : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_idr2_s cn; */
};
typedef union ody_smmux_idr2 ody_smmux_idr2_t;

static inline uint64_t ODY_SMMUX_IDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR2(uint64_t a)
{
	if (a <= 3)
		return 0x830000000008ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR2(a) ody_smmux_idr2_t
#define bustype_ODY_SMMUX_IDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR2(a) "SMMUX_IDR2"
#define device_bar_ODY_SMMUX_IDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR2(a) (a)
#define arguments_ODY_SMMUX_IDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr3
 *
 * SMMU Identification 3 Register
 */
union ody_smmux_idr3 {
	uint32_t u;
	struct ody_smmux_idr3_s {
		uint32_t reserved_0_1                : 2;
		uint32_t had                         : 1;
		uint32_t pbha                        : 1;
		uint32_t xnx                         : 1;
		uint32_t pps                         : 1;
		uint32_t reserved_6                  : 1;
		uint32_t mpam                        : 1;
		uint32_t fwb                         : 1;
		uint32_t stt                         : 1;
		uint32_t ril                         : 1;
		uint32_t bbml                        : 2;
		uint32_t e0pd                        : 1;
		uint32_t ptwnnc                      : 1;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_smmux_idr3_s cn; */
};
typedef union ody_smmux_idr3 ody_smmux_idr3_t;

static inline uint64_t ODY_SMMUX_IDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR3(uint64_t a)
{
	if (a <= 3)
		return 0x83000000000cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR3(a) ody_smmux_idr3_t
#define bustype_ODY_SMMUX_IDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR3(a) "SMMUX_IDR3"
#define device_bar_ODY_SMMUX_IDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR3(a) (a)
#define arguments_ODY_SMMUX_IDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr4
 *
 * SMMU Identification 4 Register
 * The contents of this register are implementation-defined and can be used to identify
 * the presence of other implementation-defined register regions elsewhere in the
 * memory map.
 */
union ody_smmux_idr4 {
	uint32_t u;
	struct ody_smmux_idr4_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_idr4_s cn; */
};
typedef union ody_smmux_idr4 ody_smmux_idr4_t;

static inline uint64_t ODY_SMMUX_IDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR4(uint64_t a)
{
	if (a <= 3)
		return 0x830000000010ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR4(a) ody_smmux_idr4_t
#define bustype_ODY_SMMUX_IDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR4(a) "SMMUX_IDR4"
#define device_bar_ODY_SMMUX_IDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR4(a) (a)
#define arguments_ODY_SMMUX_IDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr5
 *
 * SMMU Identification 5 Register
 */
union ody_smmux_idr5 {
	uint32_t u;
	struct ody_smmux_idr5_s {
		uint32_t oas                         : 3;
		uint32_t reserved_3                  : 1;
		uint32_t gran4k                      : 1;
		uint32_t gran16k                     : 1;
		uint32_t gran64k                     : 1;
		uint32_t reserved_7_9                : 3;
		uint32_t vax                         : 2;
		uint32_t reserved_12_15              : 4;
		uint32_t stall_max                   : 16;
	} s;
	/* struct ody_smmux_idr5_s cn; */
};
typedef union ody_smmux_idr5 ody_smmux_idr5_t;

static inline uint64_t ODY_SMMUX_IDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR5(uint64_t a)
{
	if (a <= 3)
		return 0x830000000014ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR5(a) ody_smmux_idr5_t
#define bustype_ODY_SMMUX_IDR5(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR5(a) "SMMUX_IDR5"
#define device_bar_ODY_SMMUX_IDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR5(a) (a)
#define arguments_ODY_SMMUX_IDR5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_idr6
 *
 * SMMU Identification 6 Register
 */
union ody_smmux_idr6 {
	uint32_t u;
	struct ody_smmux_idr6_s {
		uint32_t reserved_0_15               : 16;
		uint32_t cmdq_control_page_log2numq  : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t cmdq_control_page_log2nump  : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_smmux_idr6_s cn; */
};
typedef union ody_smmux_idr6 ody_smmux_idr6_t;

static inline uint64_t ODY_SMMUX_IDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IDR6(uint64_t a)
{
	if (a <= 3)
		return 0x830000000190ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IDR6(a) ody_smmux_idr6_t
#define bustype_ODY_SMMUX_IDR6(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IDR6(a) "SMMUX_IDR6"
#define device_bar_ODY_SMMUX_IDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IDR6(a) (a)
#define arguments_ODY_SMMUX_IDR6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_iidr
 *
 * SMMU Implementation Identification Register
 * Provides information about the implementation/implementer of the SMMU and
 * architecture version supported.
 */
union ody_smmux_iidr {
	uint32_t u;
	struct ody_smmux_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 12;
	} s;
	/* struct ody_smmux_iidr_s cn; */
};
typedef union ody_smmux_iidr ody_smmux_iidr_t;

static inline uint64_t ODY_SMMUX_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IIDR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000018ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IIDR(a) ody_smmux_iidr_t
#define bustype_ODY_SMMUX_IIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IIDR(a) "SMMUX_IIDR"
#define device_bar_ODY_SMMUX_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IIDR(a) (a)
#define arguments_ODY_SMMUX_IIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_imp_actlr
 *
 * SMMU Auxiliary Control Register
 */
union ody_smmux_imp_actlr {
	uint32_t u;
	struct ody_smmux_imp_actlr_s {
		uint32_t qos                         : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_smmux_imp_actlr_s cn; */
};
typedef union ody_smmux_imp_actlr ody_smmux_imp_actlr_t;

static inline uint64_t ODY_SMMUX_IMP_ACTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IMP_ACTLR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000e10ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IMP_ACTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IMP_ACTLR(a) ody_smmux_imp_actlr_t
#define bustype_ODY_SMMUX_IMP_ACTLR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IMP_ACTLR(a) "SMMUX_IMP_ACTLR"
#define device_bar_ODY_SMMUX_IMP_ACTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IMP_ACTLR(a) (a)
#define arguments_ODY_SMMUX_IMP_ACTLR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_imp_const0
 *
 * SMMU Constant Register
 */
union ody_smmux_imp_const0 {
	uint64_t u;
	struct ody_smmux_imp_const0_s {
		uint64_t tlb                         : 16;
		uint64_t reserved_16_47              : 32;
		uint64_t cfc                         : 16;
	} s;
	/* struct ody_smmux_imp_const0_s cn; */
};
typedef union ody_smmux_imp_const0 ody_smmux_imp_const0_t;

static inline uint64_t ODY_SMMUX_IMP_CONST0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IMP_CONST0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000e08ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IMP_CONST0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IMP_CONST0(a) ody_smmux_imp_const0_t
#define bustype_ODY_SMMUX_IMP_CONST0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_IMP_CONST0(a) "SMMUX_IMP_CONST0"
#define device_bar_ODY_SMMUX_IMP_CONST0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IMP_CONST0(a) (a)
#define arguments_ODY_SMMUX_IMP_CONST0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_imp_error_cause
 *
 * SMMU cause for error event Register
 * This register contains debug information.
 */
union ody_smmux_imp_error_cause {
	uint32_t u;
	struct ody_smmux_imp_error_cause_s {
		uint32_t ste_valid                   : 1;
		uint32_t ste_sel2                    : 1;
		uint32_t ste_strw                    : 1;
		uint32_t ste_s1stalld                : 1;
		uint32_t ste_s1contextptr            : 1;
		uint32_t ste_s2s                     : 1;
		uint32_t ste_s2tg                    : 1;
		uint32_t ste_aarch                   : 1;
		uint32_t ste_httu                    : 1;
		uint32_t ste_s2ttb                   : 1;
		uint32_t ste_s2t0sz                  : 1;
		uint32_t ste_s2_walk_cfg             : 1;
		uint32_t cd_valid                    : 1;
		uint32_t cd_s                        : 1;
		uint32_t cd_streamworld              : 1;
		uint32_t cd_aarch                    : 1;
		uint32_t cd_httu                     : 1;
		uint32_t cd_txsz                     : 1;
		uint32_t cd_ttbx                     : 1;
		uint32_t cd_tgx                      : 1;
		uint32_t reserved_20_23              : 4;
		uint32_t ttd_valid                   : 1;
		uint32_t crs_endianness              : 1;
		uint32_t crs_compr_err_on_httu_upd_resp : 1;
		uint32_t crs_unexp_err_on_httu_upd_resp : 1;
		uint32_t wlk_crs_miss_dbm_upd_needed : 1;
		uint32_t wlk_crs_miss_httu_upd_needed : 1;
		uint32_t bus_poison                  : 1;
		uint32_t bus_error                   : 1;
	} s;
	/* struct ody_smmux_imp_error_cause_s cn; */
};
typedef union ody_smmux_imp_error_cause ody_smmux_imp_error_cause_t;

static inline uint64_t ODY_SMMUX_IMP_ERROR_CAUSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IMP_ERROR_CAUSE(uint64_t a)
{
	if (a <= 3)
		return 0x830000000e20ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IMP_ERROR_CAUSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IMP_ERROR_CAUSE(a) ody_smmux_imp_error_cause_t
#define bustype_ODY_SMMUX_IMP_ERROR_CAUSE(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IMP_ERROR_CAUSE(a) "SMMUX_IMP_ERROR_CAUSE"
#define device_bar_ODY_SMMUX_IMP_ERROR_CAUSE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IMP_ERROR_CAUSE(a) (a)
#define arguments_ODY_SMMUX_IMP_ERROR_CAUSE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_imp_status
 *
 * SMMU Debug Registers
 * This register contains debug information.
 */
union ody_smmux_imp_status {
	uint32_t u;
	struct ody_smmux_imp_status_s {
		uint32_t inflight                    : 16;
		uint32_t walker                      : 5;
		uint32_t cfgwalker                   : 5;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_smmux_imp_status_s cn; */
};
typedef union ody_smmux_imp_status ody_smmux_imp_status_t;

static inline uint64_t ODY_SMMUX_IMP_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IMP_STATUS(uint64_t a)
{
	if (a <= 3)
		return 0x830000000e18ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IMP_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IMP_STATUS(a) ody_smmux_imp_status_t
#define bustype_ODY_SMMUX_IMP_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IMP_STATUS(a) "SMMUX_IMP_STATUS"
#define device_bar_ODY_SMMUX_IMP_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IMP_STATUS(a) (a)
#define arguments_ODY_SMMUX_IMP_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_irq_ctrl
 *
 * SMMU Interrupt Request Control Register
 * Each field in this register has a corresponding field in SMMU()_IRQ_CTRLACK, with
 * the same "update" semantic as fields in SMMU()_CR0 versus SMMU()_CR0ACK.
 *
 * This register contains IRQ enable flags for GERROR/PRIQ/EVENTQ interrupt
 * sources. These enables allow/inhibit both edge-triggered wired outputs (if
 * implemented) and MSI writes (if implemented).
 *
 * IRQ enable flags guard the MSI address/payload registers, which must only be changed
 * when their respective enable flag is zero. See SMMU()_GERROR_IRQ_CFG0 for details.
 *
 * Completion of an update of x_IRQEN from zero to one guarantees that the MSI configuration
 * in SMMU()_x_IRQ_CFG{0,1,2} will be used for all future MSIs generated from source `x'.
 * An update of x_IRQEN from one to zero completes when all prior MSIs have become visible
 * to their shareability domain (have completed). Completion of this update guarantees
 * that no new MSI writes or wired edge events will later become visible from source
 * `x'.
 */
union ody_smmux_irq_ctrl {
	uint32_t u;
	struct ody_smmux_irq_ctrl_s {
		uint32_t gerror_irqen                : 1;
		uint32_t priq_irqen                  : 1;
		uint32_t eventq_irqen                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_irq_ctrl_s cn; */
};
typedef union ody_smmux_irq_ctrl ody_smmux_irq_ctrl_t;

static inline uint64_t ODY_SMMUX_IRQ_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IRQ_CTRL(uint64_t a)
{
	if (a <= 3)
		return 0x830000000050ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IRQ_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IRQ_CTRL(a) ody_smmux_irq_ctrl_t
#define bustype_ODY_SMMUX_IRQ_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IRQ_CTRL(a) "SMMUX_IRQ_CTRL"
#define device_bar_ODY_SMMUX_IRQ_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IRQ_CTRL(a) (a)
#define arguments_ODY_SMMUX_IRQ_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_irq_ctrlack
 *
 * SMMU Interrupt Control Acknowledgement Register
 * This register is a read-only copy of SMMU()_IRQ_CTRL.
 */
union ody_smmux_irq_ctrlack {
	uint32_t u;
	struct ody_smmux_irq_ctrlack_s {
		uint32_t gerror_irqen                : 1;
		uint32_t priq_irqen                  : 1;
		uint32_t eventq_irqen                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_irq_ctrlack_s cn; */
};
typedef union ody_smmux_irq_ctrlack ody_smmux_irq_ctrlack_t;

static inline uint64_t ODY_SMMUX_IRQ_CTRLACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_IRQ_CTRLACK(uint64_t a)
{
	if (a <= 3)
		return 0x830000000054ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_IRQ_CTRLACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_IRQ_CTRLACK(a) ody_smmux_irq_ctrlack_t
#define bustype_ODY_SMMUX_IRQ_CTRLACK(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_IRQ_CTRLACK(a) "SMMUX_IRQ_CTRLACK"
#define device_bar_ODY_SMMUX_IRQ_CTRLACK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_IRQ_CTRLACK(a) (a)
#define arguments_ODY_SMMUX_IRQ_CTRLACK(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_mpamidr
 *
 * MPAM capability identification for Non-secure state Register
 */
union ody_smmux_mpamidr {
	uint32_t u;
	struct ody_smmux_mpamidr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_smmux_mpamidr_s cn; */
};
typedef union ody_smmux_mpamidr ody_smmux_mpamidr_t;

static inline uint64_t ODY_SMMUX_MPAMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_MPAMIDR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000130ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_MPAMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_MPAMIDR(a) ody_smmux_mpamidr_t
#define bustype_ODY_SMMUX_MPAMIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_MPAMIDR(a) "SMMUX_MPAMIDR"
#define device_bar_ODY_SMMUX_MPAMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_MPAMIDR(a) (a)
#define arguments_ODY_SMMUX_MPAMIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr0
 *
 * SMMU Peripheral Identification Register 0
 */
union ody_smmux_pidr0 {
	uint32_t u;
	struct ody_smmux_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pidr0_s cn; */
};
typedef union ody_smmux_pidr0 ody_smmux_pidr0_t;

static inline uint64_t ODY_SMMUX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fe0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR0(a) ody_smmux_pidr0_t
#define bustype_ODY_SMMUX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR0(a) "SMMUX_PIDR0"
#define device_bar_ODY_SMMUX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR0(a) (a)
#define arguments_ODY_SMMUX_PIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr1
 *
 * SMMU Peripheral Identification Register 1
 */
union ody_smmux_pidr1 {
	uint32_t u;
	struct ody_smmux_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pidr1_s cn; */
};
typedef union ody_smmux_pidr1 ody_smmux_pidr1_t;

static inline uint64_t ODY_SMMUX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fe4ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR1(a) ody_smmux_pidr1_t
#define bustype_ODY_SMMUX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR1(a) "SMMUX_PIDR1"
#define device_bar_ODY_SMMUX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR1(a) (a)
#define arguments_ODY_SMMUX_PIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr2
 *
 * SMMU Peripheral Identification Register 2
 */
union ody_smmux_pidr2 {
	uint32_t u;
	struct ody_smmux_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pidr2_s cn; */
};
typedef union ody_smmux_pidr2 ody_smmux_pidr2_t;

static inline uint64_t ODY_SMMUX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR2(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fe8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR2(a) ody_smmux_pidr2_t
#define bustype_ODY_SMMUX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR2(a) "SMMUX_PIDR2"
#define device_bar_ODY_SMMUX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR2(a) (a)
#define arguments_ODY_SMMUX_PIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr3
 *
 * SMMU Peripheral Identification Register 3
 */
union ody_smmux_pidr3 {
	uint32_t u;
	struct ody_smmux_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pidr3_s cn; */
};
typedef union ody_smmux_pidr3 ody_smmux_pidr3_t;

static inline uint64_t ODY_SMMUX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR3(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fecll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR3(a) ody_smmux_pidr3_t
#define bustype_ODY_SMMUX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR3(a) "SMMUX_PIDR3"
#define device_bar_ODY_SMMUX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR3(a) (a)
#define arguments_ODY_SMMUX_PIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr4
 *
 * SMMU Peripheral Identification Register 4
 */
union ody_smmux_pidr4 {
	uint32_t u;
	struct ody_smmux_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pidr4_s cn; */
};
typedef union ody_smmux_pidr4 ody_smmux_pidr4_t;

static inline uint64_t ODY_SMMUX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR4(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fd0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR4(a) ody_smmux_pidr4_t
#define bustype_ODY_SMMUX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR4(a) "SMMUX_PIDR4"
#define device_bar_ODY_SMMUX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR4(a) (a)
#define arguments_ODY_SMMUX_PIDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr5
 *
 * SMMU Peripheral Identification Register 5
 */
union ody_smmux_pidr5 {
	uint32_t u;
	struct ody_smmux_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pidr5_s cn; */
};
typedef union ody_smmux_pidr5 ody_smmux_pidr5_t;

static inline uint64_t ODY_SMMUX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR5(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fd4ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR5(a) ody_smmux_pidr5_t
#define bustype_ODY_SMMUX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR5(a) "SMMUX_PIDR5"
#define device_bar_ODY_SMMUX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR5(a) (a)
#define arguments_ODY_SMMUX_PIDR5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr6
 *
 * SMMU Peripheral Identification Register 6
 */
union ody_smmux_pidr6 {
	uint32_t u;
	struct ody_smmux_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pidr6_s cn; */
};
typedef union ody_smmux_pidr6 ody_smmux_pidr6_t;

static inline uint64_t ODY_SMMUX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR6(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fd8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR6(a) ody_smmux_pidr6_t
#define bustype_ODY_SMMUX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR6(a) "SMMUX_PIDR6"
#define device_bar_ODY_SMMUX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR6(a) (a)
#define arguments_ODY_SMMUX_PIDR6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pidr7
 *
 * SMMU Peripheral Identification Register 7
 */
union ody_smmux_pidr7 {
	uint32_t u;
	struct ody_smmux_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pidr7_s cn; */
};
typedef union ody_smmux_pidr7 ody_smmux_pidr7_t;

static inline uint64_t ODY_SMMUX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PIDR7(uint64_t a)
{
	if (a <= 3)
		return 0x830000000fdcll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PIDR7(a) ody_smmux_pidr7_t
#define bustype_ODY_SMMUX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PIDR7(a) "SMMUX_PIDR7"
#define device_bar_ODY_SMMUX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PIDR7(a) (a)
#define arguments_ODY_SMMUX_PIDR7(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_aidr
 *
 * SMMU PMCG Architecture Identification Register
 */
union ody_smmux_pmcgx_aidr {
	uint32_t u;
	struct ody_smmux_pmcgx_aidr_s {
		uint32_t archminorrev                : 4;
		uint32_t archmajorrev                : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_aidr_s cn; */
};
typedef union ody_smmux_pmcgx_aidr ody_smmux_pmcgx_aidr_t;

static inline uint64_t ODY_SMMUX_PMCGX_AIDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_AIDR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e70ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_AIDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_AIDR(a, b) ody_smmux_pmcgx_aidr_t
#define bustype_ODY_SMMUX_PMCGX_AIDR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_AIDR(a, b) "SMMUX_PMCGX_AIDR"
#define device_bar_ODY_SMMUX_PMCGX_AIDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_AIDR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_AIDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_capr
 *
 * SMMU PMCG Counter Shadow Value Register
 */
union ody_smmux_pmcgx_capr {
	uint32_t u;
	struct ody_smmux_pmcgx_capr_s {
		uint32_t capture                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_pmcgx_capr_s cn; */
};
typedef union ody_smmux_pmcgx_capr ody_smmux_pmcgx_capr_t;

static inline uint64_t ODY_SMMUX_PMCGX_CAPR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CAPR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100d88ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CAPR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CAPR(a, b) ody_smmux_pmcgx_capr_t
#define bustype_ODY_SMMUX_PMCGX_CAPR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CAPR(a, b) "SMMUX_PMCGX_CAPR"
#define device_bar_ODY_SMMUX_PMCGX_CAPR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CAPR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CAPR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_ceid0
 *
 * SMMU PMCG Common Event ID bitmap, Lower Register
 */
union ody_smmux_pmcgx_ceid0 {
	uint64_t u;
	struct ody_smmux_pmcgx_ceid0_s {
		uint64_t bitmap                      : 64;
	} s;
	/* struct ody_smmux_pmcgx_ceid0_s cn; */
};
typedef union ody_smmux_pmcgx_ceid0 ody_smmux_pmcgx_ceid0_t;

static inline uint64_t ODY_SMMUX_PMCGX_CEID0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CEID0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e20ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CEID0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CEID0(a, b) ody_smmux_pmcgx_ceid0_t
#define bustype_ODY_SMMUX_PMCGX_CEID0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_CEID0(a, b) "SMMUX_PMCGX_CEID0"
#define device_bar_ODY_SMMUX_PMCGX_CEID0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CEID0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CEID0(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_ceid1
 *
 * SMMU PMCG Common Event ID bitmap, Upper Register
 */
union ody_smmux_pmcgx_ceid1 {
	uint64_t u;
	struct ody_smmux_pmcgx_ceid1_s {
		uint64_t bitmap                      : 64;
	} s;
	/* struct ody_smmux_pmcgx_ceid1_s cn; */
};
typedef union ody_smmux_pmcgx_ceid1 ody_smmux_pmcgx_ceid1_t;

static inline uint64_t ODY_SMMUX_PMCGX_CEID1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CEID1(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e28ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CEID1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CEID1(a, b) ody_smmux_pmcgx_ceid1_t
#define bustype_ODY_SMMUX_PMCGX_CEID1(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_CEID1(a, b) "SMMUX_PMCGX_CEID1"
#define device_bar_ODY_SMMUX_PMCGX_CEID1(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CEID1(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CEID1(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cfgr
 *
 * SMMU PMCG Configuration Register
 */
union ody_smmux_pmcgx_cfgr {
	uint32_t u;
	struct ody_smmux_pmcgx_cfgr_s {
		uint32_t nctr                        : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t size                        : 6;
		uint32_t reserved_14_19              : 6;
		uint32_t reloc_ctrs                  : 1;
		uint32_t msi                         : 1;
		uint32_t capture                     : 1;
		uint32_t sid_filter_type             : 1;
		uint32_t mpam                        : 1;
		uint32_t filter_partid_pmg           : 1;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_smmux_pmcgx_cfgr_s cn; */
};
typedef union ody_smmux_pmcgx_cfgr ody_smmux_pmcgx_cfgr_t;

static inline uint64_t ODY_SMMUX_PMCGX_CFGR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CFGR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e00ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CFGR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CFGR(a, b) ody_smmux_pmcgx_cfgr_t
#define bustype_ODY_SMMUX_PMCGX_CFGR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CFGR(a, b) "SMMUX_PMCGX_CFGR"
#define device_bar_ODY_SMMUX_PMCGX_CFGR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CFGR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CFGR(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cidr0
 *
 * SMMU Component Identification Register 0
 */
union ody_smmux_pmcgx_cidr0 {
	uint32_t u;
	struct ody_smmux_pmcgx_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_cidr0_s cn; */
};
typedef union ody_smmux_pmcgx_cidr0 ody_smmux_pmcgx_cidr0_t;

static inline uint64_t ODY_SMMUX_PMCGX_CIDR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CIDR0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100ff0ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CIDR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CIDR0(a, b) ody_smmux_pmcgx_cidr0_t
#define bustype_ODY_SMMUX_PMCGX_CIDR0(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CIDR0(a, b) "SMMUX_PMCGX_CIDR0"
#define device_bar_ODY_SMMUX_PMCGX_CIDR0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CIDR0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CIDR0(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cidr1
 *
 * SMMU PMCG Component Identification Register 1
 */
union ody_smmux_pmcgx_cidr1 {
	uint32_t u;
	struct ody_smmux_pmcgx_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t component_class             : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_cidr1_s cn; */
};
typedef union ody_smmux_pmcgx_cidr1 ody_smmux_pmcgx_cidr1_t;

static inline uint64_t ODY_SMMUX_PMCGX_CIDR1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CIDR1(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100ff4ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CIDR1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CIDR1(a, b) ody_smmux_pmcgx_cidr1_t
#define bustype_ODY_SMMUX_PMCGX_CIDR1(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CIDR1(a, b) "SMMUX_PMCGX_CIDR1"
#define device_bar_ODY_SMMUX_PMCGX_CIDR1(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CIDR1(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CIDR1(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cidr2
 *
 * SMMU PMCG Component Identification Register 2
 */
union ody_smmux_pmcgx_cidr2 {
	uint32_t u;
	struct ody_smmux_pmcgx_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_cidr2_s cn; */
};
typedef union ody_smmux_pmcgx_cidr2 ody_smmux_pmcgx_cidr2_t;

static inline uint64_t ODY_SMMUX_PMCGX_CIDR2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CIDR2(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100ff8ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CIDR2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CIDR2(a, b) ody_smmux_pmcgx_cidr2_t
#define bustype_ODY_SMMUX_PMCGX_CIDR2(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CIDR2(a, b) "SMMUX_PMCGX_CIDR2"
#define device_bar_ODY_SMMUX_PMCGX_CIDR2(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CIDR2(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CIDR2(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cidr3
 *
 * SMMU PMCG Component Identification Register 3
 */
union ody_smmux_pmcgx_cidr3 {
	uint32_t u;
	struct ody_smmux_pmcgx_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_cidr3_s cn; */
};
typedef union ody_smmux_pmcgx_cidr3 ody_smmux_pmcgx_cidr3_t;

static inline uint64_t ODY_SMMUX_PMCGX_CIDR3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CIDR3(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100ffcll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CIDR3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CIDR3(a, b) ody_smmux_pmcgx_cidr3_t
#define bustype_ODY_SMMUX_PMCGX_CIDR3(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CIDR3(a, b) "SMMUX_PMCGX_CIDR3"
#define device_bar_ODY_SMMUX_PMCGX_CIDR3(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CIDR3(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CIDR3(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_cntenclr0
 *
 * SMMU PMCG Counter Enable Clear Register
 */
union ody_smmux_pmcgx_cntenclr0 {
	uint64_t u;
	struct ody_smmux_pmcgx_cntenclr0_s {
		uint64_t cnten                       : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_cntenclr0_s cn; */
};
typedef union ody_smmux_pmcgx_cntenclr0 ody_smmux_pmcgx_cntenclr0_t;

static inline uint64_t ODY_SMMUX_PMCGX_CNTENCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CNTENCLR0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100c20ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CNTENCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) ody_smmux_pmcgx_cntenclr0_t
#define bustype_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) "SMMUX_PMCGX_CNTENCLR0"
#define device_bar_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CNTENCLR0(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_cntenset0
 *
 * SMMU PMCG Counter Enable Set Register
 */
union ody_smmux_pmcgx_cntenset0 {
	uint64_t u;
	struct ody_smmux_pmcgx_cntenset0_s {
		uint64_t cnten                       : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_cntenset0_s cn; */
};
typedef union ody_smmux_pmcgx_cntenset0 ody_smmux_pmcgx_cntenset0_t;

static inline uint64_t ODY_SMMUX_PMCGX_CNTENSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CNTENSET0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100c00ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CNTENSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CNTENSET0(a, b) ody_smmux_pmcgx_cntenset0_t
#define bustype_ODY_SMMUX_PMCGX_CNTENSET0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_CNTENSET0(a, b) "SMMUX_PMCGX_CNTENSET0"
#define device_bar_ODY_SMMUX_PMCGX_CNTENSET0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CNTENSET0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CNTENSET0(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_cr
 *
 * SMMU PMCG Global Counter Enable Register
 */
union ody_smmux_pmcgx_cr {
	uint32_t u;
	struct ody_smmux_pmcgx_cr_s {
		uint32_t enable                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_pmcgx_cr_s cn; */
};
typedef union ody_smmux_pmcgx_cr ody_smmux_pmcgx_cr_t;

static inline uint64_t ODY_SMMUX_PMCGX_CR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_CR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e04ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_CR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_CR(a, b) ody_smmux_pmcgx_cr_t
#define bustype_ODY_SMMUX_PMCGX_CR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_CR(a, b) "SMMUX_PMCGX_CR"
#define device_bar_ODY_SMMUX_PMCGX_CR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_CR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_CR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_evcntr#
 *
 * SMMU PMCG Event Counter Register
 */
union ody_smmux_pmcgx_evcntrx {
	uint64_t u;
	struct ody_smmux_pmcgx_evcntrx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_smmux_pmcgx_evcntrx_s cn; */
};
typedef union ody_smmux_pmcgx_evcntrx ody_smmux_pmcgx_evcntrx_t;

static inline uint64_t ODY_SMMUX_PMCGX_EVCNTRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_EVCNTRX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 3) && (b <= 3) && (c <= 3))
		return 0x830000110000ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_EVCNTRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) ody_smmux_pmcgx_evcntrx_t
#define bustype_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) "SMMUX_PMCGX_EVCNTRX"
#define device_bar_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) (a)
#define arguments_ODY_SMMUX_PMCGX_EVCNTRX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB32b) smmu#_pmcg#_evtyper#
 *
 * SMMU PMCG Event Type Configuration Register
 */
union ody_smmux_pmcgx_evtyperx {
	uint32_t u;
	struct ody_smmux_pmcgx_evtyperx_s {
		uint32_t evnt                        : 8;
		uint32_t reserved_8_28               : 21;
		uint32_t filter_sid_span             : 1;
		uint32_t filter_sec_sid              : 1;
		uint32_t ovfcap                      : 1;
	} s;
	/* struct ody_smmux_pmcgx_evtyperx_s cn; */
};
typedef union ody_smmux_pmcgx_evtyperx ody_smmux_pmcgx_evtyperx_t;

static inline uint64_t ODY_SMMUX_PMCGX_EVTYPERX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_EVTYPERX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 3) && (b <= 3) && (c <= 3))
		return 0x830000100400ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3) + 4ll * ((c) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_EVTYPERX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) ody_smmux_pmcgx_evtyperx_t
#define bustype_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) "SMMUX_PMCGX_EVTYPERX"
#define device_bar_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) (a)
#define arguments_ODY_SMMUX_PMCGX_EVTYPERX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) smmu#_pmcg#_intenclr0
 *
 * SMMU PMCG Interrupt Enable Clear Register
 */
union ody_smmux_pmcgx_intenclr0 {
	uint64_t u;
	struct ody_smmux_pmcgx_intenclr0_s {
		uint64_t inten                       : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_intenclr0_s cn; */
};
typedef union ody_smmux_pmcgx_intenclr0 ody_smmux_pmcgx_intenclr0_t;

static inline uint64_t ODY_SMMUX_PMCGX_INTENCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_INTENCLR0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100c60ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_INTENCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_INTENCLR0(a, b) ody_smmux_pmcgx_intenclr0_t
#define bustype_ODY_SMMUX_PMCGX_INTENCLR0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_INTENCLR0(a, b) "SMMUX_PMCGX_INTENCLR0"
#define device_bar_ODY_SMMUX_PMCGX_INTENCLR0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_INTENCLR0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_INTENCLR0(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_intenset0
 *
 * SMMU PMCG Interrupt Enable Set Register
 */
union ody_smmux_pmcgx_intenset0 {
	uint64_t u;
	struct ody_smmux_pmcgx_intenset0_s {
		uint64_t inten                       : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_intenset0_s cn; */
};
typedef union ody_smmux_pmcgx_intenset0 ody_smmux_pmcgx_intenset0_t;

static inline uint64_t ODY_SMMUX_PMCGX_INTENSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_INTENSET0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100c40ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_INTENSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_INTENSET0(a, b) ody_smmux_pmcgx_intenset0_t
#define bustype_ODY_SMMUX_PMCGX_INTENSET0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_INTENSET0(a, b) "SMMUX_PMCGX_INTENSET0"
#define device_bar_ODY_SMMUX_PMCGX_INTENSET0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_INTENSET0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_INTENSET0(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_irq_cfg0
 *
 * SMMU PMCG MSI Configuration Register
 */
union ody_smmux_pmcgx_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_pmcgx_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_pmcgx_irq_cfg0_s cn; */
};
typedef union ody_smmux_pmcgx_irq_cfg0 ody_smmux_pmcgx_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e58ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) ody_smmux_pmcgx_irq_cfg0_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) "SMMUX_PMCGX_IRQ_CFG0"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_CFG0(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_cfg1
 *
 * SMMU PMCG MSI Configuration Register
 */
union ody_smmux_pmcgx_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_pmcgx_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_pmcgx_irq_cfg1_s cn; */
};
typedef union ody_smmux_pmcgx_irq_cfg1 ody_smmux_pmcgx_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG1(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e60ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) ody_smmux_pmcgx_irq_cfg1_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) "SMMUX_PMCGX_IRQ_CFG1"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_CFG1(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_cfg2
 *
 * SMMU PMCG MSI Configuration Register
 */
union ody_smmux_pmcgx_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_pmcgx_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_smmux_pmcgx_irq_cfg2_s cn; */
};
typedef union ody_smmux_pmcgx_irq_cfg2 ody_smmux_pmcgx_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CFG2(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e64ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) ody_smmux_pmcgx_irq_cfg2_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) "SMMUX_PMCGX_IRQ_CFG2"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_CFG2(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_ctrl
 *
 * SMMU PMCG IRQ Enable Register
 */
union ody_smmux_pmcgx_irq_ctrl {
	uint32_t u;
	struct ody_smmux_pmcgx_irq_ctrl_s {
		uint32_t irqen                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_pmcgx_irq_ctrl_s cn; */
};
typedef union ody_smmux_pmcgx_irq_ctrl ody_smmux_pmcgx_irq_ctrl_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CTRL(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e50ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) ody_smmux_pmcgx_irq_ctrl_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) "SMMUX_PMCGX_IRQ_CTRL"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_CTRL(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_ctrlack
 *
 * SMMU PMCG IRQ Enable Ack Register
 * This register is a read-only copy of SMMU()_PMCG()_IRQ_CTRL.
 */
union ody_smmux_pmcgx_irq_ctrlack {
	uint32_t u;
	struct ody_smmux_pmcgx_irq_ctrlack_s {
		uint32_t irqen                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_pmcgx_irq_ctrlack_s cn; */
};
typedef union ody_smmux_pmcgx_irq_ctrlack ody_smmux_pmcgx_irq_ctrlack_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CTRLACK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_CTRLACK(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e54ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_CTRLACK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) ody_smmux_pmcgx_irq_ctrlack_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) "SMMUX_PMCGX_IRQ_CTRLACK"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_CTRLACK(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_status
 *
 * SMMU PMCG MSI Status Register
 */
union ody_smmux_pmcgx_irq_status {
	uint32_t u;
	struct ody_smmux_pmcgx_irq_status_s {
		uint32_t irq_abt                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_pmcgx_irq_status_s cn; */
};
typedef union ody_smmux_pmcgx_irq_status ody_smmux_pmcgx_irq_status_t;

static inline uint64_t ODY_SMMUX_PMCGX_IRQ_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_IRQ_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e68ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_IRQ_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) ody_smmux_pmcgx_irq_status_t
#define bustype_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) "SMMUX_PMCGX_IRQ_STATUS"
#define device_bar_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_IRQ_STATUS(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_mpamidr
 *
 * PMCG MPAM capability identification Register
 */
union ody_smmux_pmcgx_mpamidr {
	uint32_t u;
	struct ody_smmux_pmcgx_mpamidr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_smmux_pmcgx_mpamidr_s cn; */
};
typedef union ody_smmux_pmcgx_mpamidr ody_smmux_pmcgx_mpamidr_t;

static inline uint64_t ODY_SMMUX_PMCGX_MPAMIDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_MPAMIDR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100e74ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_MPAMIDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_MPAMIDR(a, b) ody_smmux_pmcgx_mpamidr_t
#define bustype_ODY_SMMUX_PMCGX_MPAMIDR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_MPAMIDR(a, b) "SMMUX_PMCGX_MPAMIDR"
#define device_bar_ODY_SMMUX_PMCGX_MPAMIDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_MPAMIDR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_MPAMIDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_ovsclr0
 *
 * SMMU PMCG Overflow Status Clear Register
 */
union ody_smmux_pmcgx_ovsclr0 {
	uint64_t u;
	struct ody_smmux_pmcgx_ovsclr0_s {
		uint64_t ovs                         : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_ovsclr0_s cn; */
};
typedef union ody_smmux_pmcgx_ovsclr0 ody_smmux_pmcgx_ovsclr0_t;

static inline uint64_t ODY_SMMUX_PMCGX_OVSCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_OVSCLR0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000110c80ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_OVSCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_OVSCLR0(a, b) ody_smmux_pmcgx_ovsclr0_t
#define bustype_ODY_SMMUX_PMCGX_OVSCLR0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_OVSCLR0(a, b) "SMMUX_PMCGX_OVSCLR0"
#define device_bar_ODY_SMMUX_PMCGX_OVSCLR0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_OVSCLR0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_OVSCLR0(a, b) (a), (b), -1, -1

/**
 * Register (NCB) smmu#_pmcg#_ovsset0
 *
 * SMMU PMCG Overflow Status Set Register
 */
union ody_smmux_pmcgx_ovsset0 {
	uint64_t u;
	struct ody_smmux_pmcgx_ovsset0_s {
		uint64_t ovs                         : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_smmux_pmcgx_ovsset0_s cn; */
};
typedef union ody_smmux_pmcgx_ovsset0 ody_smmux_pmcgx_ovsset0_t;

static inline uint64_t ODY_SMMUX_PMCGX_OVSSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_OVSSET0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000110cc0ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_OVSSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_OVSSET0(a, b) ody_smmux_pmcgx_ovsset0_t
#define bustype_ODY_SMMUX_PMCGX_OVSSET0(a, b) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_OVSSET0(a, b) "SMMUX_PMCGX_OVSSET0"
#define device_bar_ODY_SMMUX_PMCGX_OVSSET0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_OVSSET0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_OVSSET0(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr0
 *
 * SMMU Peripheral Identification Register 0
 */
union ody_smmux_pmcgx_pidr0 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pidr0_s cn; */
};
typedef union ody_smmux_pmcgx_pidr0 ody_smmux_pmcgx_pidr0_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR0(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fe0ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR0(a, b) ody_smmux_pmcgx_pidr0_t
#define bustype_ODY_SMMUX_PMCGX_PIDR0(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR0(a, b) "SMMUX_PMCGX_PIDR0"
#define device_bar_ODY_SMMUX_PMCGX_PIDR0(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR0(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR0(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr1
 *
 * SMMU Peripheral Identification Register 1
 */
union ody_smmux_pmcgx_pidr1 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pidr1_s cn; */
};
typedef union ody_smmux_pmcgx_pidr1 ody_smmux_pmcgx_pidr1_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR1(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fe4ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR1(a, b) ody_smmux_pmcgx_pidr1_t
#define bustype_ODY_SMMUX_PMCGX_PIDR1(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR1(a, b) "SMMUX_PMCGX_PIDR1"
#define device_bar_ODY_SMMUX_PMCGX_PIDR1(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR1(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR1(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr2
 *
 * SMMU Peripheral Identification Register 2
 */
union ody_smmux_pmcgx_pidr2 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pidr2_s cn; */
};
typedef union ody_smmux_pmcgx_pidr2 ody_smmux_pmcgx_pidr2_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR2(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fe8ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR2(a, b) ody_smmux_pmcgx_pidr2_t
#define bustype_ODY_SMMUX_PMCGX_PIDR2(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR2(a, b) "SMMUX_PMCGX_PIDR2"
#define device_bar_ODY_SMMUX_PMCGX_PIDR2(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR2(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR2(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr3
 *
 * SMMU Peripheral Identification Register 3
 */
union ody_smmux_pmcgx_pidr3 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pidr3_s cn; */
};
typedef union ody_smmux_pmcgx_pidr3 ody_smmux_pmcgx_pidr3_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR3(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fecll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR3(a, b) ody_smmux_pmcgx_pidr3_t
#define bustype_ODY_SMMUX_PMCGX_PIDR3(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR3(a, b) "SMMUX_PMCGX_PIDR3"
#define device_bar_ODY_SMMUX_PMCGX_PIDR3(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR3(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR3(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr4
 *
 * SMMU Peripheral Identification Register 4
 */
union ody_smmux_pmcgx_pidr4 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pidr4_s cn; */
};
typedef union ody_smmux_pmcgx_pidr4 ody_smmux_pmcgx_pidr4_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR4(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fd0ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR4(a, b) ody_smmux_pmcgx_pidr4_t
#define bustype_ODY_SMMUX_PMCGX_PIDR4(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR4(a, b) "SMMUX_PMCGX_PIDR4"
#define device_bar_ODY_SMMUX_PMCGX_PIDR4(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR4(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR4(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr5
 *
 * SMMU Peripheral Identification Register 5
 */
union ody_smmux_pmcgx_pidr5 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pmcgx_pidr5_s cn; */
};
typedef union ody_smmux_pmcgx_pidr5 ody_smmux_pmcgx_pidr5_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR5(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fd4ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR5(a, b) ody_smmux_pmcgx_pidr5_t
#define bustype_ODY_SMMUX_PMCGX_PIDR5(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR5(a, b) "SMMUX_PMCGX_PIDR5"
#define device_bar_ODY_SMMUX_PMCGX_PIDR5(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR5(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR5(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr6
 *
 * SMMU Peripheral Identification Register 6
 */
union ody_smmux_pmcgx_pidr6 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pmcgx_pidr6_s cn; */
};
typedef union ody_smmux_pmcgx_pidr6 ody_smmux_pmcgx_pidr6_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR6(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fd8ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR6(a, b) ody_smmux_pmcgx_pidr6_t
#define bustype_ODY_SMMUX_PMCGX_PIDR6(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR6(a, b) "SMMUX_PMCGX_PIDR6"
#define device_bar_ODY_SMMUX_PMCGX_PIDR6(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR6(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR6(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pidr7
 *
 * SMMU Peripheral Identification Register 7
 */
union ody_smmux_pmcgx_pidr7 {
	uint32_t u;
	struct ody_smmux_pmcgx_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pmcgx_pidr7_s cn; */
};
typedef union ody_smmux_pmcgx_pidr7 ody_smmux_pmcgx_pidr7_t;

static inline uint64_t ODY_SMMUX_PMCGX_PIDR7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PIDR7(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fdcll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PIDR7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PIDR7(a, b) ody_smmux_pmcgx_pidr7_t
#define bustype_ODY_SMMUX_PMCGX_PIDR7(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PIDR7(a, b) "SMMUX_PMCGX_PIDR7"
#define device_bar_ODY_SMMUX_PMCGX_PIDR7(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PIDR7(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PIDR7(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pmauthstatus
 *
 * Performance Monitor Authentication Status Register
 */
union ody_smmux_pmcgx_pmauthstatus {
	uint32_t u;
	struct ody_smmux_pmcgx_pmauthstatus_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_pmcgx_pmauthstatus_s cn; */
};
typedef union ody_smmux_pmcgx_pmauthstatus ody_smmux_pmcgx_pmauthstatus_t;

static inline uint64_t ODY_SMMUX_PMCGX_PMAUTHSTATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PMAUTHSTATUS(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fb8ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PMAUTHSTATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) ody_smmux_pmcgx_pmauthstatus_t
#define bustype_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) "SMMUX_PMCGX_PMAUTHSTATUS"
#define device_bar_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PMAUTHSTATUS(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pmdevarch
 *
 * Performance Monitor Device Architecture Register
 */
union ody_smmux_pmcgx_pmdevarch {
	uint32_t u;
	struct ody_smmux_pmcgx_pmdevarch_s {
		uint32_t archid                      : 16;
		uint32_t revision                    : 4;
		uint32_t present                     : 1;
		uint32_t architect                   : 11;
	} s;
	/* struct ody_smmux_pmcgx_pmdevarch_s cn; */
};
typedef union ody_smmux_pmcgx_pmdevarch ody_smmux_pmcgx_pmdevarch_t;

static inline uint64_t ODY_SMMUX_PMCGX_PMDEVARCH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PMDEVARCH(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fbcll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PMDEVARCH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) ody_smmux_pmcgx_pmdevarch_t
#define bustype_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) "SMMUX_PMCGX_PMDEVARCH"
#define device_bar_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PMDEVARCH(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_pmdevtype
 *
 * Performance Monitor Device Type Register
 */
union ody_smmux_pmcgx_pmdevtype {
	uint32_t u;
	struct ody_smmux_pmcgx_pmdevtype_s {
		uint32_t device_class                : 4;
		uint32_t subtype                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_pmcgx_pmdevtype_s cn; */
};
typedef union ody_smmux_pmcgx_pmdevtype ody_smmux_pmcgx_pmdevtype_t;

static inline uint64_t ODY_SMMUX_PMCGX_PMDEVTYPE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_PMDEVTYPE(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100fccll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_PMDEVTYPE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) ody_smmux_pmcgx_pmdevtype_t
#define bustype_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) "SMMUX_PMCGX_PMDEVTYPE"
#define device_bar_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_PMDEVTYPE(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_scr
 *
 * SMMU PMCG Secure Control Register
 */
union ody_smmux_pmcgx_scr {
	uint32_t u;
	struct ody_smmux_pmcgx_scr_s {
		uint32_t so                          : 1;
		uint32_t nsra                        : 1;
		uint32_t nsmsi                       : 1;
		uint32_t msi_mpam_ns                 : 1;
		uint32_t reserved_4_30               : 27;
		uint32_t valid                       : 1;
	} s;
	/* struct ody_smmux_pmcgx_scr_s cn; */
};
typedef union ody_smmux_pmcgx_scr ody_smmux_pmcgx_scr_t;

static inline uint64_t ODY_SMMUX_PMCGX_SCR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_SCR(uint64_t a, uint64_t b)
{
	if ((a <= 3) && (b <= 3))
		return 0x830000100df8ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_SCR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_SCR(a, b) ody_smmux_pmcgx_scr_t
#define bustype_ODY_SMMUX_PMCGX_SCR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_SCR(a, b) "SMMUX_PMCGX_SCR"
#define device_bar_ODY_SMMUX_PMCGX_SCR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_SCR(a, b) (a)
#define arguments_ODY_SMMUX_PMCGX_SCR(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) smmu#_pmcg#_smr#
 *
 * SMMU PMCG Counter Stream Match Filter Register
 */
union ody_smmux_pmcgx_smrx {
	uint32_t u;
	struct ody_smmux_pmcgx_smrx_s {
		uint32_t streamid                    : 22;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_smmux_pmcgx_smrx_s cn; */
};
typedef union ody_smmux_pmcgx_smrx ody_smmux_pmcgx_smrx_t;

static inline uint64_t ODY_SMMUX_PMCGX_SMRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_SMRX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 3) && (b <= 3) && (c == 0))
		return 0x830000100a00ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_SMRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_SMRX(a, b, c) ody_smmux_pmcgx_smrx_t
#define bustype_ODY_SMMUX_PMCGX_SMRX(a, b, c) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PMCGX_SMRX(a, b, c) "SMMUX_PMCGX_SMRX"
#define device_bar_ODY_SMMUX_PMCGX_SMRX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_SMRX(a, b, c) (a)
#define arguments_ODY_SMMUX_PMCGX_SMRX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) smmu#_pmcg#_svr#
 *
 * SMMU PMCG Counter Shadow Value Register
 */
union ody_smmux_pmcgx_svrx {
	uint64_t u;
	struct ody_smmux_pmcgx_svrx_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_smmux_pmcgx_svrx_s cn; */
};
typedef union ody_smmux_pmcgx_svrx ody_smmux_pmcgx_svrx_t;

static inline uint64_t ODY_SMMUX_PMCGX_SVRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PMCGX_SVRX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 3) && (b <= 3) && (c == 0))
		return 0x830000100600ll + 0x1000000000ll * ((a) & 0x3) + 0x20000ll * ((b) & 0x3);
	__ody_csr_fatal("SMMUX_PMCGX_SVRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PMCGX_SVRX(a, b, c) ody_smmux_pmcgx_svrx_t
#define bustype_ODY_SMMUX_PMCGX_SVRX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PMCGX_SVRX(a, b, c) "SMMUX_PMCGX_SVRX"
#define device_bar_ODY_SMMUX_PMCGX_SVRX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PMCGX_SVRX(a, b, c) (a)
#define arguments_ODY_SMMUX_PMCGX_SVRX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) smmu#_priq_base
 *
 * SMMU PRI Queue Base Register
 */
union ody_smmux_priq_base {
	uint64_t u;
	struct ody_smmux_priq_base_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t wa                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_priq_base_s cn; */
};
typedef union ody_smmux_priq_base ody_smmux_priq_base_t;

static inline uint64_t ODY_SMMUX_PRIQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000c0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_BASE(a) ody_smmux_priq_base_t
#define bustype_ODY_SMMUX_PRIQ_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PRIQ_BASE(a) "SMMUX_PRIQ_BASE"
#define device_bar_ODY_SMMUX_PRIQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_BASE(a) (a)
#define arguments_ODY_SMMUX_PRIQ_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_priq_cons
 *
 * SMMU PRI Queue Consumer Register
 */
union ody_smmux_priq_cons {
	uint32_t u;
	struct ody_smmux_priq_cons_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovackflg                    : 1;
	} s;
	/* struct ody_smmux_priq_cons_s cn; */
};
typedef union ody_smmux_priq_cons ody_smmux_priq_cons_t;

static inline uint64_t ODY_SMMUX_PRIQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_CONS(uint64_t a)
{
	if (a <= 3)
		return 0x8300000100ccll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_CONS(a) ody_smmux_priq_cons_t
#define bustype_ODY_SMMUX_PRIQ_CONS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PRIQ_CONS(a) "SMMUX_PRIQ_CONS"
#define device_bar_ODY_SMMUX_PRIQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_CONS(a) (a)
#define arguments_ODY_SMMUX_PRIQ_CONS(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_priq_irq_cfg0
 *
 * SMMU PRI Queue Interrupt Configuration 0 Register
 */
union ody_smmux_priq_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_priq_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_priq_irq_cfg0_s cn; */
};
typedef union ody_smmux_priq_irq_cfg0 ody_smmux_priq_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000d0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_IRQ_CFG0(a) ody_smmux_priq_irq_cfg0_t
#define bustype_ODY_SMMUX_PRIQ_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_PRIQ_IRQ_CFG0(a) "SMMUX_PRIQ_IRQ_CFG0"
#define device_bar_ODY_SMMUX_PRIQ_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_PRIQ_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_priq_irq_cfg1
 *
 * SMMU PRI Queue Interrupt Configuration 1 Register
 */
union ody_smmux_priq_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_priq_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_priq_irq_cfg1_s cn; */
};
typedef union ody_smmux_priq_irq_cfg1 ody_smmux_priq_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000d8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_IRQ_CFG1(a) ody_smmux_priq_irq_cfg1_t
#define bustype_ODY_SMMUX_PRIQ_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PRIQ_IRQ_CFG1(a) "SMMUX_PRIQ_IRQ_CFG1"
#define device_bar_ODY_SMMUX_PRIQ_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_PRIQ_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_priq_irq_cfg2
 *
 * SMMU PRI Queue Interrupt Configuration 2 Register
 */
union ody_smmux_priq_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_priq_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_30               : 25;
		uint32_t lo                          : 1;
	} s;
	/* struct ody_smmux_priq_irq_cfg2_s cn; */
};
typedef union ody_smmux_priq_irq_cfg2 ody_smmux_priq_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_IRQ_CFG2(uint64_t a)
{
	if (a <= 3)
		return 0x8300000000dcll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_IRQ_CFG2(a) ody_smmux_priq_irq_cfg2_t
#define bustype_ODY_SMMUX_PRIQ_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PRIQ_IRQ_CFG2(a) "SMMUX_PRIQ_IRQ_CFG2"
#define device_bar_ODY_SMMUX_PRIQ_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_IRQ_CFG2(a) (a)
#define arguments_ODY_SMMUX_PRIQ_IRQ_CFG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_priq_prod
 *
 * SMMU PRI Queue Producer Register
 */
union ody_smmux_priq_prod {
	uint32_t u;
	struct ody_smmux_priq_prod_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovflg                       : 1;
	} s;
	/* struct ody_smmux_priq_prod_s cn; */
};
typedef union ody_smmux_priq_prod ody_smmux_priq_prod_t;

static inline uint64_t ODY_SMMUX_PRIQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_PRIQ_PROD(uint64_t a)
{
	if (a <= 3)
		return 0x8300000100c8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_PRIQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_PRIQ_PROD(a) ody_smmux_priq_prod_t
#define bustype_ODY_SMMUX_PRIQ_PROD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_PRIQ_PROD(a) "SMMUX_PRIQ_PROD"
#define device_bar_ODY_SMMUX_PRIQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_PRIQ_PROD(a) (a)
#define arguments_ODY_SMMUX_PRIQ_PROD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_agbpa
 *
 * SMMU Secure Alternate Global Bypass Attribute Register
 * This register is intended to allow an implementation to apply an additional non
 * architected attributes or tag to bypassing transactions, for example a traffic
 * routing identifier.
 *
 * If this field is unsupported by an implementation, it is RES0.  It is not
 * intended for this register to be used to further modify existing architected
 * bypass attributes which are controlled using GPBA.
 */
union ody_smmux_s_agbpa {
	uint32_t u;
	struct ody_smmux_s_agbpa_s {
		uint32_t qos                         : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_smmux_s_agbpa_s cn; */
};
typedef union ody_smmux_s_agbpa ody_smmux_s_agbpa_t;

static inline uint64_t ODY_SMMUX_S_AGBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_AGBPA(uint64_t a)
{
	if (a <= 3)
		return 0x830000008048ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_AGBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_AGBPA(a) ody_smmux_s_agbpa_t
#define bustype_ODY_SMMUX_S_AGBPA(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_AGBPA(a) "SMMUX_S_AGBPA"
#define device_bar_ODY_SMMUX_S_AGBPA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_AGBPA(a) (a)
#define arguments_ODY_SMMUX_S_AGBPA(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_cmdq_base
 *
 * SMMU Secure Command Queue Base Register
 */
union ody_smmux_s_cmdq_base {
	uint64_t u;
	struct ody_smmux_s_cmdq_base_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t ra                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_s_cmdq_base_s cn; */
};
typedef union ody_smmux_s_cmdq_base ody_smmux_s_cmdq_base_t;

static inline uint64_t ODY_SMMUX_S_CMDQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CMDQ_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x830000008090ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CMDQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CMDQ_BASE(a) ody_smmux_s_cmdq_base_t
#define bustype_ODY_SMMUX_S_CMDQ_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_CMDQ_BASE(a) "SMMUX_S_CMDQ_BASE"
#define device_bar_ODY_SMMUX_S_CMDQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CMDQ_BASE(a) (a)
#define arguments_ODY_SMMUX_S_CMDQ_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cmdq_cons
 *
 * SMMU Secure Command Queue Consumer Register
 */
union ody_smmux_s_cmdq_cons {
	uint32_t u;
	struct ody_smmux_s_cmdq_cons_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_23              : 4;
		uint32_t errx                        : 7;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_smmux_s_cmdq_cons_s cn; */
};
typedef union ody_smmux_s_cmdq_cons ody_smmux_s_cmdq_cons_t;

static inline uint64_t ODY_SMMUX_S_CMDQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CMDQ_CONS(uint64_t a)
{
	if (a <= 3)
		return 0x83000000809cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CMDQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CMDQ_CONS(a) ody_smmux_s_cmdq_cons_t
#define bustype_ODY_SMMUX_S_CMDQ_CONS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CMDQ_CONS(a) "SMMUX_S_CMDQ_CONS"
#define device_bar_ODY_SMMUX_S_CMDQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CMDQ_CONS(a) (a)
#define arguments_ODY_SMMUX_S_CMDQ_CONS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cmdq_prod
 *
 * SMMU Secure Command Queue Producer Register
 */
union ody_smmux_s_cmdq_prod {
	uint32_t u;
	struct ody_smmux_s_cmdq_prod_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_smmux_s_cmdq_prod_s cn; */
};
typedef union ody_smmux_s_cmdq_prod ody_smmux_s_cmdq_prod_t;

static inline uint64_t ODY_SMMUX_S_CMDQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CMDQ_PROD(uint64_t a)
{
	if (a <= 3)
		return 0x830000008098ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CMDQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CMDQ_PROD(a) ody_smmux_s_cmdq_prod_t
#define bustype_ODY_SMMUX_S_CMDQ_PROD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CMDQ_PROD(a) "SMMUX_S_CMDQ_PROD"
#define device_bar_ODY_SMMUX_S_CMDQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CMDQ_PROD(a) (a)
#define arguments_ODY_SMMUX_S_CMDQ_PROD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cr0
 *
 * SMMU Secure Control 0 Register
 * An update to a field in SMMU()_S_CR0 is not considered complete, along with any
 * side effects, until the respective field in SMMU()_S_CR0ACK is observed to take the
 * new value.
 */
union ody_smmux_s_cr0 {
	uint32_t u;
	struct ody_smmux_s_cr0_s {
		uint32_t smmuen                      : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventqen                    : 1;
		uint32_t cmdqen                      : 1;
		uint32_t reserved_4                  : 1;
		uint32_t sif                         : 1;
		uint32_t vmw                         : 3;
		uint32_t nsstalld                    : 1;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_s_cr0_s cn; */
};
typedef union ody_smmux_s_cr0 ody_smmux_s_cr0_t;

static inline uint64_t ODY_SMMUX_S_CR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000008020ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CR0(a) ody_smmux_s_cr0_t
#define bustype_ODY_SMMUX_S_CR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CR0(a) "SMMUX_S_CR0"
#define device_bar_ODY_SMMUX_S_CR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CR0(a) (a)
#define arguments_ODY_SMMUX_S_CR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cr0ack
 *
 * SMMU Secure Control 0 Acknowledgement Register
 * This register is a read-only copy of SMMU()_S_CR0.
 */
union ody_smmux_s_cr0ack {
	uint32_t u;
	struct ody_smmux_s_cr0ack_s {
		uint32_t smmuen                      : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventqen                    : 1;
		uint32_t cmdqen                      : 1;
		uint32_t reserved_4                  : 1;
		uint32_t sif                         : 1;
		uint32_t vmw                         : 3;
		uint32_t nsstalld                    : 1;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_s_cr0ack_s cn; */
};
typedef union ody_smmux_s_cr0ack ody_smmux_s_cr0ack_t;

static inline uint64_t ODY_SMMUX_S_CR0ACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CR0ACK(uint64_t a)
{
	if (a <= 3)
		return 0x830000008024ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CR0ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CR0ACK(a) ody_smmux_s_cr0ack_t
#define bustype_ODY_SMMUX_S_CR0ACK(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CR0ACK(a) "SMMUX_S_CR0ACK"
#define device_bar_ODY_SMMUX_S_CR0ACK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CR0ACK(a) (a)
#define arguments_ODY_SMMUX_S_CR0ACK(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cr1
 *
 * SMMU Secure Control 1 Register
 */
union ody_smmux_s_cr1 {
	uint32_t u;
	struct ody_smmux_s_cr1_s {
		uint32_t queue_ic                    : 2;
		uint32_t queue_oc                    : 2;
		uint32_t queue_sh                    : 2;
		uint32_t table_ic                    : 2;
		uint32_t table_oc                    : 2;
		uint32_t table_sh                    : 2;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_smmux_s_cr1_s cn; */
};
typedef union ody_smmux_s_cr1 ody_smmux_s_cr1_t;

static inline uint64_t ODY_SMMUX_S_CR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000008028ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CR1(a) ody_smmux_s_cr1_t
#define bustype_ODY_SMMUX_S_CR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CR1(a) "SMMUX_S_CR1"
#define device_bar_ODY_SMMUX_S_CR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CR1(a) (a)
#define arguments_ODY_SMMUX_S_CR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_cr2
 *
 * SMMU Secure Control 2 Register
 */
union ody_smmux_s_cr2 {
	uint32_t u;
	struct ody_smmux_s_cr2_s {
		uint32_t e2h                         : 1;
		uint32_t recinvsid                   : 1;
		uint32_t ptm                         : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_cr2_s cn; */
};
typedef union ody_smmux_s_cr2 ody_smmux_s_cr2_t;

static inline uint64_t ODY_SMMUX_S_CR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_CR2(uint64_t a)
{
	if (a <= 3)
		return 0x83000000802cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_CR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_CR2(a) ody_smmux_s_cr2_t
#define bustype_ODY_SMMUX_S_CR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_CR2(a) "SMMUX_S_CR2"
#define device_bar_ODY_SMMUX_S_CR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_CR2(a) (a)
#define arguments_ODY_SMMUX_S_CR2(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_eventq_base
 *
 * SMMU Secure Event Queue Base Register
 */
union ody_smmux_s_eventq_base {
	uint64_t u;
	struct ody_smmux_s_eventq_base_s {
		uint64_t log2size                    : 5;
		uint64_t addr                        : 47;
		uint64_t reserved_52_61              : 10;
		uint64_t wa                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_s_eventq_base_s cn; */
};
typedef union ody_smmux_s_eventq_base ody_smmux_s_eventq_base_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080a0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_BASE(a) ody_smmux_s_eventq_base_t
#define bustype_ODY_SMMUX_S_EVENTQ_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_EVENTQ_BASE(a) "SMMUX_S_EVENTQ_BASE"
#define device_bar_ODY_SMMUX_S_EVENTQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_BASE(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_eventq_cons
 *
 * SMMU Secure Event Queue Consumer Register
 */
union ody_smmux_s_eventq_cons {
	uint32_t u;
	struct ody_smmux_s_eventq_cons_s {
		uint32_t rd                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovackflg                    : 1;
	} s;
	/* struct ody_smmux_s_eventq_cons_s cn; */
};
typedef union ody_smmux_s_eventq_cons ody_smmux_s_eventq_cons_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_CONS(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080acll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_CONS(a) ody_smmux_s_eventq_cons_t
#define bustype_ODY_SMMUX_S_EVENTQ_CONS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_EVENTQ_CONS(a) "SMMUX_S_EVENTQ_CONS"
#define device_bar_ODY_SMMUX_S_EVENTQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_CONS(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_CONS(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_eventq_irq_cfg0
 *
 * SMMU Secure Event Queue IRQ Configuration 0 Register
 */
union ody_smmux_s_eventq_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_s_eventq_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_s_eventq_irq_cfg0_s cn; */
};
typedef union ody_smmux_s_eventq_irq_cfg0 ody_smmux_s_eventq_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080b0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) ody_smmux_s_eventq_irq_cfg0_t
#define bustype_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) "SMMUX_S_EVENTQ_IRQ_CFG0"
#define device_bar_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_eventq_irq_cfg1
 *
 * SMMU Secure Event Queue IRQ Configuration 1 Register
 */
union ody_smmux_s_eventq_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_s_eventq_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_s_eventq_irq_cfg1_s cn; */
};
typedef union ody_smmux_s_eventq_irq_cfg1 ody_smmux_s_eventq_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080b8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) ody_smmux_s_eventq_irq_cfg1_t
#define bustype_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) "SMMUX_S_EVENTQ_IRQ_CFG1"
#define device_bar_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_eventq_irq_cfg2
 *
 * SMMU Secure Event Queue IRQ Configuration 2 Register
 */
union ody_smmux_s_eventq_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_s_eventq_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_smmux_s_eventq_irq_cfg2_s cn; */
};
typedef union ody_smmux_s_eventq_irq_cfg2 ody_smmux_s_eventq_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_IRQ_CFG2(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080bcll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) ody_smmux_s_eventq_irq_cfg2_t
#define bustype_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) "SMMUX_S_EVENTQ_IRQ_CFG2"
#define device_bar_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_IRQ_CFG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_eventq_prod
 *
 * SMMU Secure Event Queue Producer Register
 */
union ody_smmux_s_eventq_prod {
	uint32_t u;
	struct ody_smmux_s_eventq_prod_s {
		uint32_t wr                          : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t ovflg                       : 1;
	} s;
	/* struct ody_smmux_s_eventq_prod_s cn; */
};
typedef union ody_smmux_s_eventq_prod ody_smmux_s_eventq_prod_t;

static inline uint64_t ODY_SMMUX_S_EVENTQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_EVENTQ_PROD(uint64_t a)
{
	if (a <= 3)
		return 0x8300000080a8ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_EVENTQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_EVENTQ_PROD(a) ody_smmux_s_eventq_prod_t
#define bustype_ODY_SMMUX_S_EVENTQ_PROD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_EVENTQ_PROD(a) "SMMUX_S_EVENTQ_PROD"
#define device_bar_ODY_SMMUX_S_EVENTQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_EVENTQ_PROD(a) (a)
#define arguments_ODY_SMMUX_S_EVENTQ_PROD(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_gatos_addr
 *
 * SMMU GATOS Address Register
 */
union ody_smmux_s_gatos_addr {
	uint64_t u;
	struct ody_smmux_s_gatos_addr_s {
		uint64_t reserved_0_3                : 4;
		uint64_t ns_ind                      : 1;
		uint64_t reserved_5                  : 1;
		uint64_t httui                       : 1;
		uint64_t ind                         : 1;
		uint64_t rnw                         : 1;
		uint64_t pnu                         : 1;
		uint64_t rtype                       : 2;
		uint64_t addr                        : 52;
	} s;
	/* struct ody_smmux_s_gatos_addr_s cn; */
};
typedef union ody_smmux_s_gatos_addr ody_smmux_s_gatos_addr_t;

static inline uint64_t ODY_SMMUX_S_GATOS_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GATOS_ADDR(uint64_t a)
{
	if (a <= 3)
		return 0x830000008110ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GATOS_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GATOS_ADDR(a) ody_smmux_s_gatos_addr_t
#define bustype_ODY_SMMUX_S_GATOS_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_GATOS_ADDR(a) "SMMUX_S_GATOS_ADDR"
#define device_bar_ODY_SMMUX_S_GATOS_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GATOS_ADDR(a) (a)
#define arguments_ODY_SMMUX_S_GATOS_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gatos_ctrl
 *
 * SMMU Secure GATOS Control Register
 */
union ody_smmux_s_gatos_ctrl {
	uint32_t u;
	struct ody_smmux_s_gatos_ctrl_s {
		uint32_t run                         : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_s_gatos_ctrl_s cn; */
};
typedef union ody_smmux_s_gatos_ctrl ody_smmux_s_gatos_ctrl_t;

static inline uint64_t ODY_SMMUX_S_GATOS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GATOS_CTRL(uint64_t a)
{
	if (a <= 3)
		return 0x830000008100ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GATOS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GATOS_CTRL(a) ody_smmux_s_gatos_ctrl_t
#define bustype_ODY_SMMUX_S_GATOS_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GATOS_CTRL(a) "SMMUX_S_GATOS_CTRL"
#define device_bar_ODY_SMMUX_S_GATOS_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GATOS_CTRL(a) (a)
#define arguments_ODY_SMMUX_S_GATOS_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_gatos_par
 *
 * SMMU GATOS Address Register
 */
union ody_smmux_s_gatos_par {
	uint64_t u;
	struct ody_smmux_s_gatos_par_s {
		uint64_t par                         : 64;
	} s;
	/* struct ody_smmux_s_gatos_par_s cn; */
};
typedef union ody_smmux_s_gatos_par ody_smmux_s_gatos_par_t;

static inline uint64_t ODY_SMMUX_S_GATOS_PAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GATOS_PAR(uint64_t a)
{
	if (a <= 3)
		return 0x830000008118ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GATOS_PAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GATOS_PAR(a) ody_smmux_s_gatos_par_t
#define bustype_ODY_SMMUX_S_GATOS_PAR(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_GATOS_PAR(a) "SMMUX_S_GATOS_PAR"
#define device_bar_ODY_SMMUX_S_GATOS_PAR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GATOS_PAR(a) (a)
#define arguments_ODY_SMMUX_S_GATOS_PAR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_gatos_sid
 *
 * SMMU GATOS SID Register
 */
union ody_smmux_s_gatos_sid {
	uint64_t u;
	struct ody_smmux_s_gatos_sid_s {
		uint64_t streamid                    : 22;
		uint64_t reserved_22_31              : 10;
		uint64_t substreamid                 : 20;
		uint64_t ssid_valid                  : 1;
		uint64_t ssec                        : 1;
		uint64_t reserved_54_63              : 10;
	} s;
	/* struct ody_smmux_s_gatos_sid_s cn; */
};
typedef union ody_smmux_s_gatos_sid ody_smmux_s_gatos_sid_t;

static inline uint64_t ODY_SMMUX_S_GATOS_SID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GATOS_SID(uint64_t a)
{
	if (a <= 3)
		return 0x830000008108ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GATOS_SID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GATOS_SID(a) ody_smmux_s_gatos_sid_t
#define bustype_ODY_SMMUX_S_GATOS_SID(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_GATOS_SID(a) "SMMUX_S_GATOS_SID"
#define device_bar_ODY_SMMUX_S_GATOS_SID(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GATOS_SID(a) (a)
#define arguments_ODY_SMMUX_S_GATOS_SID(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gbpa
 *
 * SMMU Secure Global Bypass Attribute Register
 */
union ody_smmux_s_gbpa {
	uint32_t u;
	struct ody_smmux_s_gbpa_s {
		uint32_t memattr                     : 4;
		uint32_t mtcfg                       : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t alloccfg                    : 4;
		uint32_t shcfg                       : 2;
		uint32_t nscfg                       : 2;
		uint32_t privcfg                     : 2;
		uint32_t instcfg                     : 2;
		uint32_t abrt                        : 1;
		uint32_t reserved_21_30              : 10;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_s_gbpa_s cn; */
};
typedef union ody_smmux_s_gbpa ody_smmux_s_gbpa_t;

static inline uint64_t ODY_SMMUX_S_GBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GBPA(uint64_t a)
{
	if (a <= 3)
		return 0x830000008044ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GBPA(a) ody_smmux_s_gbpa_t
#define bustype_ODY_SMMUX_S_GBPA(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GBPA(a) "SMMUX_S_GBPA"
#define device_bar_ODY_SMMUX_S_GBPA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GBPA(a) (a)
#define arguments_ODY_SMMUX_S_GBPA(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gbpmpam
 *
 * SMMU Global Bypass MPAM Configuration for secure state Register
 */
union ody_smmux_s_gbpmpam {
	uint32_t u;
	struct ody_smmux_s_gbpmpam_s {
		uint32_t gbp_partid                  : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t gbp_pmg                     : 1;
		uint32_t reserved_17_23              : 7;
		uint32_t mpam_ns                     : 1;
		uint32_t reserved_25_30              : 6;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_s_gbpmpam_s cn; */
};
typedef union ody_smmux_s_gbpmpam ody_smmux_s_gbpmpam_t;

static inline uint64_t ODY_SMMUX_S_GBPMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GBPMPAM(uint64_t a)
{
	if (a <= 3)
		return 0x83000000813cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GBPMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GBPMPAM(a) ody_smmux_s_gbpmpam_t
#define bustype_ODY_SMMUX_S_GBPMPAM(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GBPMPAM(a) "SMMUX_S_GBPMPAM"
#define device_bar_ODY_SMMUX_S_GBPMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GBPMPAM(a) (a)
#define arguments_ODY_SMMUX_S_GBPMPAM(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gerror
 *
 * SMMU Secure GERROR Register
 */
union ody_smmux_s_gerror {
	uint32_t u;
	struct ody_smmux_s_gerror_s {
		uint32_t cmdq_err                    : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_abt_err              : 1;
		uint32_t reserved_3                  : 1;
		uint32_t msi_cmdq_abt_err            : 1;
		uint32_t msi_eventq_abt_err          : 1;
		uint32_t reserved_6                  : 1;
		uint32_t msi_gerror_abt_err          : 1;
		uint32_t sfm_err                     : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_smmux_s_gerror_s cn; */
};
typedef union ody_smmux_s_gerror ody_smmux_s_gerror_t;

static inline uint64_t ODY_SMMUX_S_GERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GERROR(uint64_t a)
{
	if (a <= 3)
		return 0x830000008060ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GERROR(a) ody_smmux_s_gerror_t
#define bustype_ODY_SMMUX_S_GERROR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GERROR(a) "SMMUX_S_GERROR"
#define device_bar_ODY_SMMUX_S_GERROR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GERROR(a) (a)
#define arguments_ODY_SMMUX_S_GERROR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_gerror_irq_cfg0
 *
 * SMMU Secure GERROR IRQ Configuration 0 Register
 * Registers SMMU()_S_GERROR_IRQ_CFG0/1/2 are guarded by the respective
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN] and must only be modified when
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN]=0.
 */
union ody_smmux_s_gerror_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_s_gerror_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_s_gerror_irq_cfg0_s cn; */
};
typedef union ody_smmux_s_gerror_irq_cfg0 ody_smmux_s_gerror_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x830000008068ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GERROR_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) ody_smmux_s_gerror_irq_cfg0_t
#define bustype_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) "SMMUX_S_GERROR_IRQ_CFG0"
#define device_bar_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_S_GERROR_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gerror_irq_cfg1
 *
 * SMMU Secure GERROR IRQ Configuration 1 Register
 */
union ody_smmux_s_gerror_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_s_gerror_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_s_gerror_irq_cfg1_s cn; */
};
typedef union ody_smmux_s_gerror_irq_cfg1 ody_smmux_s_gerror_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x830000008070ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GERROR_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) ody_smmux_s_gerror_irq_cfg1_t
#define bustype_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) "SMMUX_S_GERROR_IRQ_CFG1"
#define device_bar_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_S_GERROR_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gerror_irq_cfg2
 *
 * SMMU Secure GERROR IRQ Configuration 2 Register
 */
union ody_smmux_s_gerror_irq_cfg2 {
	uint32_t u;
	struct ody_smmux_s_gerror_irq_cfg2_s {
		uint32_t memattr                     : 4;
		uint32_t sh                          : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_smmux_s_gerror_irq_cfg2_s cn; */
};
typedef union ody_smmux_s_gerror_irq_cfg2 ody_smmux_s_gerror_irq_cfg2_t;

static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GERROR_IRQ_CFG2(uint64_t a)
{
	if (a <= 3)
		return 0x830000008074ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GERROR_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) ody_smmux_s_gerror_irq_cfg2_t
#define bustype_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) "SMMUX_S_GERROR_IRQ_CFG2"
#define device_bar_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) (a)
#define arguments_ODY_SMMUX_S_GERROR_IRQ_CFG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gerrorn
 *
 * SMMU Secure GERRORN Register
 */
union ody_smmux_s_gerrorn {
	uint32_t u;
	struct ody_smmux_s_gerrorn_s {
		uint32_t cmdq_err                    : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_abt_err              : 1;
		uint32_t reserved_3                  : 1;
		uint32_t msi_cmdq_abt_err            : 1;
		uint32_t msi_eventq_abt_err          : 1;
		uint32_t reserved_6                  : 1;
		uint32_t msi_gerror_abt_err          : 1;
		uint32_t sfm_err                     : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_smmux_s_gerrorn_s cn; */
};
typedef union ody_smmux_s_gerrorn ody_smmux_s_gerrorn_t;

static inline uint64_t ODY_SMMUX_S_GERRORN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GERRORN(uint64_t a)
{
	if (a <= 3)
		return 0x830000008064ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GERRORN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GERRORN(a) ody_smmux_s_gerrorn_t
#define bustype_ODY_SMMUX_S_GERRORN(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GERRORN(a) "SMMUX_S_GERRORN"
#define device_bar_ODY_SMMUX_S_GERRORN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GERRORN(a) (a)
#define arguments_ODY_SMMUX_S_GERRORN(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_gmpam
 *
 * SMMU Global MPAM Configuration for secure state Register
 */
union ody_smmux_s_gmpam {
	uint32_t u;
	struct ody_smmux_s_gmpam_s {
		uint32_t so_partid                   : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t so_pmg                      : 1;
		uint32_t reserved_17_23              : 7;
		uint32_t mpam_ns                     : 1;
		uint32_t reserved_25_30              : 6;
		uint32_t update                      : 1;
	} s;
	/* struct ody_smmux_s_gmpam_s cn; */
};
typedef union ody_smmux_s_gmpam ody_smmux_s_gmpam_t;

static inline uint64_t ODY_SMMUX_S_GMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_GMPAM(uint64_t a)
{
	if (a <= 3)
		return 0x830000008138ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_GMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_GMPAM(a) ody_smmux_s_gmpam_t
#define bustype_ODY_SMMUX_S_GMPAM(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_GMPAM(a) "SMMUX_S_GMPAM"
#define device_bar_ODY_SMMUX_S_GMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_GMPAM(a) (a)
#define arguments_ODY_SMMUX_S_GMPAM(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_idr0
 *
 * SMMU Secure IDR0 Register
 */
union ody_smmux_s_idr0 {
	uint32_t u;
	struct ody_smmux_s_idr0_s {
		uint32_t reserved_0_12               : 13;
		uint32_t msi                         : 1;
		uint32_t reserved_14_23              : 10;
		uint32_t stall_model                 : 2;
		uint32_t reserved_26_30              : 5;
		uint32_t ecmdq                       : 1;
	} s;
	/* struct ody_smmux_s_idr0_s cn; */
};
typedef union ody_smmux_s_idr0 ody_smmux_s_idr0_t;

static inline uint64_t ODY_SMMUX_S_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IDR0(uint64_t a)
{
	if (a <= 3)
		return 0x830000008000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IDR0(a) ody_smmux_s_idr0_t
#define bustype_ODY_SMMUX_S_IDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IDR0(a) "SMMUX_S_IDR0"
#define device_bar_ODY_SMMUX_S_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IDR0(a) (a)
#define arguments_ODY_SMMUX_S_IDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_idr1
 *
 * SMMU Secure IDR1 Register
 */
union ody_smmux_s_idr1 {
	uint32_t u;
	struct ody_smmux_s_idr1_s {
		uint32_t s_sidsize                   : 6;
		uint32_t reserved_6_28               : 23;
		uint32_t sel2                        : 1;
		uint32_t reserved_30                 : 1;
		uint32_t secure_impl                 : 1;
	} s;
	/* struct ody_smmux_s_idr1_s cn; */
};
typedef union ody_smmux_s_idr1 ody_smmux_s_idr1_t;

static inline uint64_t ODY_SMMUX_S_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IDR1(uint64_t a)
{
	if (a <= 3)
		return 0x830000008004ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IDR1(a) ody_smmux_s_idr1_t
#define bustype_ODY_SMMUX_S_IDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IDR1(a) "SMMUX_S_IDR1"
#define device_bar_ODY_SMMUX_S_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IDR1(a) (a)
#define arguments_ODY_SMMUX_S_IDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_idr2
 *
 * SMMU Secure IDR2 Register
 */
union ody_smmux_s_idr2 {
	uint32_t u;
	struct ody_smmux_s_idr2_s {
		uint32_t ba_s_vatos                  : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_smmux_s_idr2_s cn; */
};
typedef union ody_smmux_s_idr2 ody_smmux_s_idr2_t;

static inline uint64_t ODY_SMMUX_S_IDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IDR2(uint64_t a)
{
	if (a <= 3)
		return 0x830000008008ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IDR2(a) ody_smmux_s_idr2_t
#define bustype_ODY_SMMUX_S_IDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IDR2(a) "SMMUX_S_IDR2"
#define device_bar_ODY_SMMUX_S_IDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IDR2(a) (a)
#define arguments_ODY_SMMUX_S_IDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_idr3
 *
 * SMMU Secure IDR3 Register
 */
union ody_smmux_s_idr3 {
	uint32_t u;
	struct ody_smmux_s_idr3_s {
		uint32_t reserved_0_5                : 6;
		uint32_t sams                        : 1;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_smmux_s_idr3_s cn; */
};
typedef union ody_smmux_s_idr3 ody_smmux_s_idr3_t;

static inline uint64_t ODY_SMMUX_S_IDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IDR3(uint64_t a)
{
	if (a <= 3)
		return 0x83000000800cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IDR3(a) ody_smmux_s_idr3_t
#define bustype_ODY_SMMUX_S_IDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IDR3(a) "SMMUX_S_IDR3"
#define device_bar_ODY_SMMUX_S_IDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IDR3(a) (a)
#define arguments_ODY_SMMUX_S_IDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_idr4
 *
 * SMMU Secure IDR4 Register
 */
union ody_smmux_s_idr4 {
	uint32_t u;
	struct ody_smmux_s_idr4_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_smmux_s_idr4_s cn; */
};
typedef union ody_smmux_s_idr4 ody_smmux_s_idr4_t;

static inline uint64_t ODY_SMMUX_S_IDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IDR4(uint64_t a)
{
	if (a <= 3)
		return 0x830000008010ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IDR4(a) ody_smmux_s_idr4_t
#define bustype_ODY_SMMUX_S_IDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IDR4(a) "SMMUX_S_IDR4"
#define device_bar_ODY_SMMUX_S_IDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IDR4(a) (a)
#define arguments_ODY_SMMUX_S_IDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_actlr
 *
 * SMMU Auxiliary Control Register
 */
union ody_smmux_s_imp_actlr {
	uint32_t u;
	struct ody_smmux_s_imp_actlr_s {
		uint32_t qos                         : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_smmux_s_imp_actlr_s cn; */
};
typedef union ody_smmux_s_imp_actlr ody_smmux_s_imp_actlr_t;

static inline uint64_t ODY_SMMUX_S_IMP_ACTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_ACTLR(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e10ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_ACTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_ACTLR(a) ody_smmux_s_imp_actlr_t
#define bustype_ODY_SMMUX_S_IMP_ACTLR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_ACTLR(a) "SMMUX_S_IMP_ACTLR"
#define device_bar_ODY_SMMUX_S_IMP_ACTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_ACTLR(a) (a)
#define arguments_ODY_SMMUX_S_IMP_ACTLR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_chicken_bits
 *
 * SMMU chicken bits Register
 */
union ody_smmux_s_imp_chicken_bits {
	uint32_t u;
	struct ody_smmux_s_imp_chicken_bits_s {
		uint32_t httu_chicken_bits           : 2;
		uint32_t wlk_dup_dis                 : 1;
		uint32_t dwb_all                     : 1;
		uint32_t ind_pnu_zero_enable         : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t pem_enable                  : 4;
		uint32_t reserved_12_31              : 20;
	} s;
	struct ody_smmux_s_imp_chicken_bits_cn {
		uint32_t httu_chicken_bits           : 2;
		uint32_t wlk_dup_dis                 : 1;
		uint32_t dwb_all                     : 1;
		uint32_t ind_pnu_zero_enable         : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t pem_enable                  : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t reserved_16_31              : 16;
	} cn;
};
typedef union ody_smmux_s_imp_chicken_bits ody_smmux_s_imp_chicken_bits_t;

static inline uint64_t ODY_SMMUX_S_IMP_CHICKEN_BITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_CHICKEN_BITS(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e78ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_CHICKEN_BITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) ody_smmux_s_imp_chicken_bits_t
#define bustype_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) "SMMUX_S_IMP_CHICKEN_BITS"
#define device_bar_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) (a)
#define arguments_ODY_SMMUX_S_IMP_CHICKEN_BITS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_diag_ctl
 *
 * SMMU Secure Diagnostic Control Register
 */
union ody_smmux_s_imp_diag_ctl {
	uint32_t u;
	struct ody_smmux_s_imp_diag_ctl_s {
		uint32_t walkers                     : 6;
		uint32_t dis_wcs2                    : 2;
		uint32_t dis_wcs1                    : 2;
		uint32_t dis_tlb                     : 1;
		uint32_t dis_cfc                     : 1;
		uint32_t force_clks_active           : 1;
		uint32_t force_tlb_clk_active        : 1;
		uint32_t force_wlk_clk_active        : 1;
		uint32_t force_out_clk_active        : 1;
		uint32_t force_cmd_clk_active        : 1;
		uint32_t force_crs_clk_active        : 1;
		uint32_t force_csr_clk_active        : 1;
		uint32_t force_cra_clk_active        : 1;
		uint32_t force_inp_clk_active        : 1;
		uint32_t force_fxl_clk_active        : 1;
		uint32_t force_pri_clk_active        : 1;
		uint32_t force_atc_clk_active        : 1;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_smmux_s_imp_diag_ctl_s cn; */
};
typedef union ody_smmux_s_imp_diag_ctl ody_smmux_s_imp_diag_ctl_t;

static inline uint64_t ODY_SMMUX_S_IMP_DIAG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_DIAG_CTL(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e14ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_DIAG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_DIAG_CTL(a) ody_smmux_s_imp_diag_ctl_t
#define bustype_ODY_SMMUX_S_IMP_DIAG_CTL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_DIAG_CTL(a) "SMMUX_S_IMP_DIAG_CTL"
#define device_bar_ODY_SMMUX_S_IMP_DIAG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_DIAG_CTL(a) (a)
#define arguments_ODY_SMMUX_S_IMP_DIAG_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_fifo_threshold
 *
 * SMMU FIFO Threshold Register
 */
union ody_smmux_s_imp_fifo_threshold {
	uint32_t u;
	struct ody_smmux_s_imp_fifo_threshold_s {
		uint32_t rpb_safety_threshold        : 7;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_smmux_s_imp_fifo_threshold_s cn; */
};
typedef union ody_smmux_s_imp_fifo_threshold ody_smmux_s_imp_fifo_threshold_t;

static inline uint64_t ODY_SMMUX_S_IMP_FIFO_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_FIFO_THRESHOLD(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e60ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_FIFO_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) ody_smmux_s_imp_fifo_threshold_t
#define bustype_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) "SMMUX_S_IMP_FIFO_THRESHOLD"
#define device_bar_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) (a)
#define arguments_ODY_SMMUX_S_IMP_FIFO_THRESHOLD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_long_rbi
 *
 * SMMU Range-based TLBI To Slow TLBI Conversion Register
 * This register controls conversion of a range-based TLBI into a slow TLBI.
 */
union ody_smmux_s_imp_long_rbi {
	uint32_t u;
	struct ody_smmux_s_imp_long_rbi_s {
		uint32_t cmd_long_rbi_log2limit      : 5;
		uint32_t cmd_long_rbi_force_dis      : 1;
		uint32_t cmd_long_rbi_force_en       : 1;
		uint32_t reserved_7_15               : 9;
		uint32_t dvm_long_rbi_log2limit      : 5;
		uint32_t dvm_long_rbi_force_dis      : 1;
		uint32_t dvm_long_rbi_force_en       : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_smmux_s_imp_long_rbi_s cn; */
};
typedef union ody_smmux_s_imp_long_rbi ody_smmux_s_imp_long_rbi_t;

static inline uint64_t ODY_SMMUX_S_IMP_LONG_RBI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_LONG_RBI(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e70ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_LONG_RBI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_LONG_RBI(a) ody_smmux_s_imp_long_rbi_t
#define bustype_ODY_SMMUX_S_IMP_LONG_RBI(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_LONG_RBI(a) "SMMUX_S_IMP_LONG_RBI"
#define device_bar_ODY_SMMUX_S_IMP_LONG_RBI(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_LONG_RBI(a) (a)
#define arguments_ODY_SMMUX_S_IMP_LONG_RBI(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_prefetch_addr_cap
 *
 * SMMU Prepeftc Addr Cap Register
 */
union ody_smmux_s_imp_prefetch_addr_cap {
	uint32_t u;
	struct ody_smmux_s_imp_prefetch_addr_cap_s {
		uint32_t prefetch_addr_cap           : 5;
		uint32_t prefetch_addr_cap_valid     : 1;
		uint32_t fxl_prefetch_dis            : 1;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_smmux_s_imp_prefetch_addr_cap_s cn; */
};
typedef union ody_smmux_s_imp_prefetch_addr_cap ody_smmux_s_imp_prefetch_addr_cap_t;

static inline uint64_t ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e88ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_PREFETCH_ADDR_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) ody_smmux_s_imp_prefetch_addr_cap_t
#define bustype_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) "SMMUX_S_IMP_PREFETCH_ADDR_CAP"
#define device_bar_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) (a)
#define arguments_ODY_SMMUX_S_IMP_PREFETCH_ADDR_CAP(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_imp_ras_ctl
 *
 * SMMU RAS Control Register
 */
union ody_smmux_s_imp_ras_ctl {
	uint64_t u;
	struct ody_smmux_s_imp_ras_ctl_s {
		uint64_t rd_psn_ign                  : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_smmux_s_imp_ras_ctl_s cn; */
};
typedef union ody_smmux_s_imp_ras_ctl ody_smmux_s_imp_ras_ctl_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_CTL(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e50ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_CTL(a) ody_smmux_s_imp_ras_ctl_t
#define bustype_ODY_SMMUX_S_IMP_RAS_CTL(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_IMP_RAS_CTL(a) "SMMUX_S_IMP_RAS_CTL"
#define device_bar_ODY_SMMUX_S_IMP_RAS_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_CTL(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int
 *
 * SMMU RAS Interrupt Register
 */
union ody_smmux_s_imp_ras_int {
	uint32_t u;
	struct ody_smmux_s_imp_ras_int_s {
		uint32_t ns_cmdq_psn                 : 1;
		uint32_t s_cmdq_psn                  : 1;
		uint32_t fetch_psn                   : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_imp_ras_int_s cn; */
};
typedef union ody_smmux_s_imp_ras_int ody_smmux_s_imp_ras_int_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e20ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_INT(a) ody_smmux_s_imp_ras_int_t
#define bustype_ODY_SMMUX_S_IMP_RAS_INT(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_RAS_INT(a) "SMMUX_S_IMP_RAS_INT"
#define device_bar_ODY_SMMUX_S_IMP_RAS_INT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_INT(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_INT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_ena_w1c
 *
 * SMMU RAS Interrupt Enable Set Register
 * This register clears interrupt enable bits.
 */
union ody_smmux_s_imp_ras_int_ena_w1c {
	uint32_t u;
	struct ody_smmux_s_imp_ras_int_ena_w1c_s {
		uint32_t ns_cmdq_psn                 : 1;
		uint32_t s_cmdq_psn                  : 1;
		uint32_t fetch_psn                   : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_imp_ras_int_ena_w1c_s cn; */
};
typedef union ody_smmux_s_imp_ras_int_ena_w1c ody_smmux_s_imp_ras_int_ena_w1c_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e38ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) ody_smmux_s_imp_ras_int_ena_w1c_t
#define bustype_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) "SMMUX_S_IMP_RAS_INT_ENA_W1C"
#define device_bar_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_ena_w1s
 *
 * SMMU RAS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_smmux_s_imp_ras_int_ena_w1s {
	uint32_t u;
	struct ody_smmux_s_imp_ras_int_ena_w1s_s {
		uint32_t ns_cmdq_psn                 : 1;
		uint32_t s_cmdq_psn                  : 1;
		uint32_t fetch_psn                   : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_imp_ras_int_ena_w1s_s cn; */
};
typedef union ody_smmux_s_imp_ras_int_ena_w1s ody_smmux_s_imp_ras_int_ena_w1s_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e30ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) ody_smmux_s_imp_ras_int_ena_w1s_t
#define bustype_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) "SMMUX_S_IMP_RAS_INT_ENA_W1S"
#define device_bar_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_w1s
 *
 * SMMU RAS Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_smmux_s_imp_ras_int_w1s {
	uint32_t u;
	struct ody_smmux_s_imp_ras_int_w1s_s {
		uint32_t ns_cmdq_psn                 : 1;
		uint32_t s_cmdq_psn                  : 1;
		uint32_t fetch_psn                   : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_imp_ras_int_w1s_s cn; */
};
typedef union ody_smmux_s_imp_ras_int_w1s ody_smmux_s_imp_ras_int_w1s_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_INT_W1S(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e28ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) ody_smmux_s_imp_ras_int_w1s_t
#define bustype_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) "SMMUX_S_IMP_RAS_INT_W1S"
#define device_bar_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_imp_ras_irq_cfg0
 *
 * SMMU RAS Interrupt 0 Register
 */
union ody_smmux_s_imp_ras_irq_cfg0 {
	uint64_t u;
	struct ody_smmux_s_imp_ras_irq_cfg0_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 50;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_smmux_s_imp_ras_irq_cfg0_s cn; */
};
typedef union ody_smmux_s_imp_ras_irq_cfg0 ody_smmux_s_imp_ras_irq_cfg0_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e40ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) ody_smmux_s_imp_ras_irq_cfg0_t
#define bustype_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) "SMMUX_S_IMP_RAS_IRQ_CFG0"
#define device_bar_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_IRQ_CFG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_ras_irq_cfg1
 *
 * SMMU RAS Interrupt 1 Register
 */
union ody_smmux_s_imp_ras_irq_cfg1 {
	uint32_t u;
	struct ody_smmux_s_imp_ras_irq_cfg1_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_smmux_s_imp_ras_irq_cfg1_s cn; */
};
typedef union ody_smmux_s_imp_ras_irq_cfg1 ody_smmux_s_imp_ras_irq_cfg1_t;

static inline uint64_t ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e48ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_RAS_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) ody_smmux_s_imp_ras_irq_cfg1_t
#define bustype_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) "SMMUX_S_IMP_RAS_IRQ_CFG1"
#define device_bar_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) (a)
#define arguments_ODY_SMMUX_S_IMP_RAS_IRQ_CFG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_txn_arb_weight
 *
 * SMMU Translation Arbitration Weight Register
 * This register contains weight values of arbitration between translation sources.
 */
union ody_smmux_s_imp_txn_arb_weight {
	uint32_t u;
	struct ody_smmux_s_imp_txn_arb_weight_s {
		uint32_t txn_iob                     : 16;
		uint32_t imp_txn_src_weight          : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_smmux_s_imp_txn_arb_weight_s cn; */
};
typedef union ody_smmux_s_imp_txn_arb_weight ody_smmux_s_imp_txn_arb_weight_t;

static inline uint64_t ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e68ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_TXN_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) ody_smmux_s_imp_txn_arb_weight_t
#define bustype_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) "SMMUX_S_IMP_TXN_ARB_WEIGHT"
#define device_bar_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) (a)
#define arguments_ODY_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_txreq_arb_weight
 *
 * SMMU Fetches Arbitration Weight Register
 * This register contains weight values of arbitration between SMMU fetches and store to
 * external memory.
 */
union ody_smmux_s_imp_txreq_arb_weight {
	uint32_t u;
	struct ody_smmux_s_imp_txreq_arb_weight_s {
		uint32_t imp_event_store             : 2;
		uint32_t imp_cmd_fetch               : 2;
		uint32_t imp_walker_fetch            : 2;
		uint32_t imp_pri_store               : 2;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_smmux_s_imp_txreq_arb_weight_s cn; */
};
typedef union ody_smmux_s_imp_txreq_arb_weight ody_smmux_s_imp_txreq_arb_weight_t;

static inline uint64_t ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e6cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_TXREQ_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) ody_smmux_s_imp_txreq_arb_weight_t
#define bustype_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) "SMMUX_S_IMP_TXREQ_ARB_WEIGHT"
#define device_bar_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) (a)
#define arguments_ODY_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_typ_arb_weight
 *
 * SMMU Translations Type Arbitration Weight Register
 * This register contains weight values of arbitration between translation types.
 */
union ody_smmux_s_imp_typ_arb_weight {
	uint32_t u;
	struct ody_smmux_s_imp_typ_arb_weight_s {
		uint32_t imp_prefetch_s_prio         : 3;
		uint32_t imp_prefetch_ns_prio        : 3;
		uint32_t imp_gatos_s_prio            : 3;
		uint32_t imp_gatos_ns_prio           : 3;
		uint32_t imp_replay_prio             : 3;
		uint32_t imp_txn_prio                : 3;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_smmux_s_imp_typ_arb_weight_s cn; */
};
typedef union ody_smmux_s_imp_typ_arb_weight ody_smmux_s_imp_typ_arb_weight_t;

static inline uint64_t ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e64ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_TYP_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) ody_smmux_s_imp_typ_arb_weight_t
#define bustype_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) "SMMUX_S_IMP_TYP_ARB_WEIGHT"
#define device_bar_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) (a)
#define arguments_ODY_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_wlk_dis
 *
 * SMMU Walker Disable Register
 */
union ody_smmux_s_imp_wlk_dis {
	uint32_t u;
	struct ody_smmux_s_imp_wlk_dis_s {
		uint32_t wlk_dis                     : 32;
	} s;
	/* struct ody_smmux_s_imp_wlk_dis_s cn; */
};
typedef union ody_smmux_s_imp_wlk_dis ody_smmux_s_imp_wlk_dis_t;

static inline uint64_t ODY_SMMUX_S_IMP_WLK_DIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_WLK_DIS(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e80ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_WLK_DIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_WLK_DIS(a) ody_smmux_s_imp_wlk_dis_t
#define bustype_ODY_SMMUX_S_IMP_WLK_DIS(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_WLK_DIS(a) "SMMUX_S_IMP_WLK_DIS"
#define device_bar_ODY_SMMUX_S_IMP_WLK_DIS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_WLK_DIS(a) (a)
#define arguments_ODY_SMMUX_S_IMP_WLK_DIS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_imp_wlk_skip_lu
 *
 * SMMU Walker Skip Look Up Register
 */
union ody_smmux_s_imp_wlk_skip_lu {
	uint32_t u;
	struct ody_smmux_s_imp_wlk_skip_lu_s {
		uint32_t skip                        : 31;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_smmux_s_imp_wlk_skip_lu_s cn; */
};
typedef union ody_smmux_s_imp_wlk_skip_lu ody_smmux_s_imp_wlk_skip_lu_t;

static inline uint64_t ODY_SMMUX_S_IMP_WLK_SKIP_LU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IMP_WLK_SKIP_LU(uint64_t a)
{
	if (a <= 3)
		return 0x830000008e84ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IMP_WLK_SKIP_LU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) ody_smmux_s_imp_wlk_skip_lu_t
#define bustype_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) "SMMUX_S_IMP_WLK_SKIP_LU"
#define device_bar_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) (a)
#define arguments_ODY_SMMUX_S_IMP_WLK_SKIP_LU(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_init
 *
 * SMMU Secure INIT Register
 */
union ody_smmux_s_init {
	uint32_t u;
	struct ody_smmux_s_init_s {
		uint32_t inv_all                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_s_init_s cn; */
};
typedef union ody_smmux_s_init ody_smmux_s_init_t;

static inline uint64_t ODY_SMMUX_S_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_INIT(uint64_t a)
{
	if (a <= 3)
		return 0x83000000803cll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_INIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_INIT(a) ody_smmux_s_init_t
#define bustype_ODY_SMMUX_S_INIT(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_INIT(a) "SMMUX_S_INIT"
#define device_bar_ODY_SMMUX_S_INIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_INIT(a) (a)
#define arguments_ODY_SMMUX_S_INIT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_irq_ctrl
 *
 * SMMU Secure IRQ Control Register
 * An update to a field in SMMU()_S_IRQ_CTRL is not considered complete, along with any
 * side-effects, until the respective field in SMMU()_S_IRQ_CTRLACK is observed to take
 * the new value.
 */
union ody_smmux_s_irq_ctrl {
	uint32_t u;
	struct ody_smmux_s_irq_ctrl_s {
		uint32_t gerror_irqen                : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_irqen                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_irq_ctrl_s cn; */
};
typedef union ody_smmux_s_irq_ctrl ody_smmux_s_irq_ctrl_t;

static inline uint64_t ODY_SMMUX_S_IRQ_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IRQ_CTRL(uint64_t a)
{
	if (a <= 3)
		return 0x830000008050ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IRQ_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IRQ_CTRL(a) ody_smmux_s_irq_ctrl_t
#define bustype_ODY_SMMUX_S_IRQ_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IRQ_CTRL(a) "SMMUX_S_IRQ_CTRL"
#define device_bar_ODY_SMMUX_S_IRQ_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IRQ_CTRL(a) (a)
#define arguments_ODY_SMMUX_S_IRQ_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_irq_ctrlack
 *
 * SMMU Secure IRQ Control Acknowledgement Register
 * This register is a read-only copy of SMMU()_S_IRQ_CTRL.
 */
union ody_smmux_s_irq_ctrlack {
	uint32_t u;
	struct ody_smmux_s_irq_ctrlack_s {
		uint32_t gerror_irqen                : 1;
		uint32_t reserved_1                  : 1;
		uint32_t eventq_irqen                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_smmux_s_irq_ctrlack_s cn; */
};
typedef union ody_smmux_s_irq_ctrlack ody_smmux_s_irq_ctrlack_t;

static inline uint64_t ODY_SMMUX_S_IRQ_CTRLACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_IRQ_CTRLACK(uint64_t a)
{
	if (a <= 3)
		return 0x830000008054ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_IRQ_CTRLACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_IRQ_CTRLACK(a) ody_smmux_s_irq_ctrlack_t
#define bustype_ODY_SMMUX_S_IRQ_CTRLACK(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_IRQ_CTRLACK(a) "SMMUX_S_IRQ_CTRLACK"
#define device_bar_ODY_SMMUX_S_IRQ_CTRLACK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_IRQ_CTRLACK(a) (a)
#define arguments_ODY_SMMUX_S_IRQ_CTRLACK(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_mpamidr
 *
 * MPAM capability identification for secure state Register
 */
union ody_smmux_s_mpamidr {
	uint32_t u;
	struct ody_smmux_s_mpamidr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t reserved_24                 : 1;
		uint32_t has_mpam_ns                 : 1;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_smmux_s_mpamidr_s cn; */
};
typedef union ody_smmux_s_mpamidr ody_smmux_s_mpamidr_t;

static inline uint64_t ODY_SMMUX_S_MPAMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_MPAMIDR(uint64_t a)
{
	if (a <= 3)
		return 0x830000008130ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_MPAMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_MPAMIDR(a) ody_smmux_s_mpamidr_t
#define bustype_ODY_SMMUX_S_MPAMIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_MPAMIDR(a) "SMMUX_S_MPAMIDR"
#define device_bar_ODY_SMMUX_S_MPAMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_MPAMIDR(a) (a)
#define arguments_ODY_SMMUX_S_MPAMIDR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_s_strtab_base
 *
 * SMMU Secure STRTAB Base Register
 */
union ody_smmux_s_strtab_base {
	uint64_t u;
	struct ody_smmux_s_strtab_base_s {
		uint64_t reserved_0_5                : 6;
		uint64_t addr                        : 46;
		uint64_t reserved_52_61              : 10;
		uint64_t ra                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_s_strtab_base_s cn; */
};
typedef union ody_smmux_s_strtab_base ody_smmux_s_strtab_base_t;

static inline uint64_t ODY_SMMUX_S_STRTAB_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_STRTAB_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x830000008080ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_STRTAB_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_STRTAB_BASE(a) ody_smmux_s_strtab_base_t
#define bustype_ODY_SMMUX_S_STRTAB_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_S_STRTAB_BASE(a) "SMMUX_S_STRTAB_BASE"
#define device_bar_ODY_SMMUX_S_STRTAB_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_STRTAB_BASE(a) (a)
#define arguments_ODY_SMMUX_S_STRTAB_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_s_strtab_base_cfg
 *
 * SMMU Secure Command Queue Base Register
 * SMMU()_S_STRTAB_BASE_CFG is guarded by the respective SMMU()_S_CR0[SMMUEN] and
 * must only be modified when SMMU()_S_CR0[SMMUEN]=0. A write whilst
 * SMMU()_S_CR0[SMMUEN]=1 is constrained unpredictable and has one of the following
 * behaviors:
 *
 * * The register takes on any value, which might cause STEs to be fetched from an unpredictable
 *   address.
 *
 * * The write is ignored.
 *
 * A read following such a write will return an unknown value.
 *
 * Use of any reserved value or unsupported value combination in this register (for
 * example, selection of a two-level table when unsupported where
 * SMMU()_IDR0[ST_LEVEL]=0x0) causes the stream table to become inaccessible; a
 * transaction causing a lookup of an STE is terminated with abort and a SMMU_C_BAD_STREAMID_S
 * event recorded.
 */
union ody_smmux_s_strtab_base_cfg {
	uint32_t u;
	struct ody_smmux_s_strtab_base_cfg_s {
		uint32_t log2size                    : 6;
		uint32_t split                       : 5;
		uint32_t reserved_11_15              : 5;
		uint32_t fmt                         : 2;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_smmux_s_strtab_base_cfg_s cn; */
};
typedef union ody_smmux_s_strtab_base_cfg ody_smmux_s_strtab_base_cfg_t;

static inline uint64_t ODY_SMMUX_S_STRTAB_BASE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_S_STRTAB_BASE_CFG(uint64_t a)
{
	if (a <= 3)
		return 0x830000008088ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_S_STRTAB_BASE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_S_STRTAB_BASE_CFG(a) ody_smmux_s_strtab_base_cfg_t
#define bustype_ODY_SMMUX_S_STRTAB_BASE_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_S_STRTAB_BASE_CFG(a) "SMMUX_S_STRTAB_BASE_CFG"
#define device_bar_ODY_SMMUX_S_STRTAB_BASE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_S_STRTAB_BASE_CFG(a) (a)
#define arguments_ODY_SMMUX_S_STRTAB_BASE_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_statusr
 *
 * SMMU Status Register
 */
union ody_smmux_statusr {
	uint32_t u;
	struct ody_smmux_statusr_s {
		uint32_t dormant                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_smmux_statusr_s cn; */
};
typedef union ody_smmux_statusr ody_smmux_statusr_t;

static inline uint64_t ODY_SMMUX_STATUSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_STATUSR(uint64_t a)
{
	if (a <= 3)
		return 0x830000000040ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_STATUSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_STATUSR(a) ody_smmux_statusr_t
#define bustype_ODY_SMMUX_STATUSR(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_STATUSR(a) "SMMUX_STATUSR"
#define device_bar_ODY_SMMUX_STATUSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_STATUSR(a) (a)
#define arguments_ODY_SMMUX_STATUSR(a) (a), -1, -1, -1

/**
 * Register (NCB) smmu#_strtab_base
 *
 * SMMU Stream Table Base Register
 */
union ody_smmux_strtab_base {
	uint64_t u;
	struct ody_smmux_strtab_base_s {
		uint64_t reserved_0_5                : 6;
		uint64_t addr                        : 46;
		uint64_t reserved_52_61              : 10;
		uint64_t ra                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_smmux_strtab_base_s cn; */
};
typedef union ody_smmux_strtab_base ody_smmux_strtab_base_t;

static inline uint64_t ODY_SMMUX_STRTAB_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_STRTAB_BASE(uint64_t a)
{
	if (a <= 3)
		return 0x830000000080ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_STRTAB_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_STRTAB_BASE(a) ody_smmux_strtab_base_t
#define bustype_ODY_SMMUX_STRTAB_BASE(a) CSR_TYPE_NCB
#define basename_ODY_SMMUX_STRTAB_BASE(a) "SMMUX_STRTAB_BASE"
#define device_bar_ODY_SMMUX_STRTAB_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_STRTAB_BASE(a) (a)
#define arguments_ODY_SMMUX_STRTAB_BASE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_strtab_base_cfg
 *
 * SMMU Stream Table Base Configuration Register
 * SMMU()_S_STRTAB_BASE_CFG is guarded by the respective SMMU()_S_CR0[SMMUEN] and
 * must only be modified when SMMU()_S_CR0[SMMUEN]=0. A write whilst
 * SMMU()_S_CR0[SMMUEN]=1 is constrained unpredictable and has one of the following
 * behaviors:
 *
 * * The register takes on any value, which might cause STEs to be fetched from an unpredictable
 *   address.
 *
 * * The write is ignored.
 *
 * A read following such a write will return an unknown value.
 *
 * Use of any reserved value or unsupported value combination in this register (for
 * example, selection of a two-level table when unsupported where
 * SMMU()_IDR0[ST_LEVEL]=0x0) causes the stream table to become inaccessible; a
 * transaction causing a lookup of an STE is terminated with abort and a SMMU_C_BAD_STREAMID_S
 * event recorded.
 */
union ody_smmux_strtab_base_cfg {
	uint32_t u;
	struct ody_smmux_strtab_base_cfg_s {
		uint32_t log2size                    : 6;
		uint32_t split                       : 5;
		uint32_t reserved_11_15              : 5;
		uint32_t fmt                         : 2;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_smmux_strtab_base_cfg_s cn; */
};
typedef union ody_smmux_strtab_base_cfg ody_smmux_strtab_base_cfg_t;

static inline uint64_t ODY_SMMUX_STRTAB_BASE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_STRTAB_BASE_CFG(uint64_t a)
{
	if (a <= 3)
		return 0x830000000088ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_STRTAB_BASE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_STRTAB_BASE_CFG(a) ody_smmux_strtab_base_cfg_t
#define bustype_ODY_SMMUX_STRTAB_BASE_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_STRTAB_BASE_CFG(a) "SMMUX_STRTAB_BASE_CFG"
#define device_bar_ODY_SMMUX_STRTAB_BASE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_STRTAB_BASE_CFG(a) (a)
#define arguments_ODY_SMMUX_STRTAB_BASE_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) smmu#_vatos_sel
 *
 * SMMU VATOS SEL Register
 */
union ody_smmux_vatos_sel {
	uint32_t u;
	struct ody_smmux_vatos_sel_s {
		uint32_t vmid                        : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_smmux_vatos_sel_s cn; */
};
typedef union ody_smmux_vatos_sel ody_smmux_vatos_sel_t;

static inline uint64_t ODY_SMMUX_VATOS_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SMMUX_VATOS_SEL(uint64_t a)
{
	if (a <= 3)
		return 0x830000000180ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("SMMUX_VATOS_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SMMUX_VATOS_SEL(a) ody_smmux_vatos_sel_t
#define bustype_ODY_SMMUX_VATOS_SEL(a) CSR_TYPE_NCB32b
#define basename_ODY_SMMUX_VATOS_SEL(a) "SMMUX_VATOS_SEL"
#define device_bar_ODY_SMMUX_VATOS_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SMMUX_VATOS_SEL(a) (a)
#define arguments_ODY_SMMUX_VATOS_SEL(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_SMMU_H__ */
