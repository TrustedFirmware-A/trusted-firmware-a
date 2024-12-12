#ifndef __ODY_CSRS_DSS_H__
#define __ODY_CSRS_DSS_H__
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
 * DSS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dss_bar_e
 *
 * DSS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_DSS_BAR_E_DSSX_PF_BAR0(a) (0x87e1b0000000ll + 0x1000000ll * (a))
#define ODY_DSS_BAR_E_DSSX_PF_BAR0_SIZE 0x400000ull
#define ODY_DSS_BAR_E_DSSX_PF_BAR2(a) (0x87e1b0800000ll + 0x1000000ll * (a))
#define ODY_DSS_BAR_E_DSSX_PF_BAR2_SIZE 0x800000ull
#define ODY_DSS_BAR_E_DSSX_PF_BAR4(a) (0x87e1b0700000ll + 0x1000000ll * (a))
#define ODY_DSS_BAR_E_DSSX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration dss_chb_mpamf_err_e
 *
 * MPAM Error Code Enumeration
 * Error codes to be reported in MPAMF_ESR (if DSS_DDRCTL_REGB_CHB_MPAM_NS/S_MPAMF_IDR_32[HAS_ESR]==1)
 */
#define ODY_DSS_CHB_MPAMF_ERR_E_MONITOR_RANGE (5)
#define ODY_DSS_CHB_MPAMF_ERR_E_MSMONCFG_ID_RANGE (3)
#define ODY_DSS_CHB_MPAMF_ERR_E_NO_ERROR (0)
#define ODY_DSS_CHB_MPAMF_ERR_E_PARTID_SEL_RANGE (1)
#define ODY_DSS_CHB_MPAMF_ERR_E_REQ_PARTID_RANGE (2)
#define ODY_DSS_CHB_MPAMF_ERR_E_REQ_PMG_RANGE (4)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_10 (0xa)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_11 (0xb)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_12 (0xc)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_13 (0xd)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_14 (0xe)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_15 (0xf)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_6 (6)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_7 (7)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_8 (8)
#define ODY_DSS_CHB_MPAMF_ERR_E_RESERVED_ERRCODE_9 (9)

/**
 * Enumeration dss_int_vec_e
 *
 * DSS MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_DSS_INT_VEC_E_DSS_INT (0)
#define ODY_DSS_INT_VEC_E_DSS_MCT_INT (1)
#define ODY_DSS_INT_VEC_E_DSS_MPAM_NS_INT (4)
#define ODY_DSS_INT_VEC_E_DSS_MPAM_S_INT (3)
#define ODY_DSS_INT_VEC_E_DSS_PERF_CNT_INT (2)

/**
 * Register (RSL) dss#_cbusy_cnt_clr#
 *
 * CBUSY Counter Clear Register
 * CBUSY Counter clear register.
 */
union ody_dssx_cbusy_cnt_clrx {
	uint64_t u;
	struct ody_dssx_cbusy_cnt_clrx_s {
		uint64_t cbusy_cnt_clr               : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_cbusy_cnt_clrx_s cn; */
};
typedef union ody_dssx_cbusy_cnt_clrx ody_dssx_cbusy_cnt_clrx_t;

static inline uint64_t ODY_DSSX_CBUSY_CNT_CLRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_CBUSY_CNT_CLRX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0020320ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_CBUSY_CNT_CLRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_CBUSY_CNT_CLRX(a, b) ody_dssx_cbusy_cnt_clrx_t
#define bustype_ODY_DSSX_CBUSY_CNT_CLRX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_CBUSY_CNT_CLRX(a, b) "DSSX_CBUSY_CNT_CLRX"
#define device_bar_ODY_DSSX_CBUSY_CNT_CLRX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_CBUSY_CNT_CLRX(a, b) (a)
#define arguments_ODY_DSSX_CBUSY_CNT_CLRX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_cbusy_cnt_ctrl#
 *
 * CBUSY Counter Control Register
 * CBUSY Counter control register.
 */
union ody_dssx_cbusy_cnt_ctrlx {
	uint64_t u;
	struct ody_dssx_cbusy_cnt_ctrlx_s {
		uint64_t cbusy_cnt_en                : 1;
		uint64_t cbusy_cnt_interrupt_en      : 1;
		uint64_t cbusy_cnt_wrap_value        : 1;
		uint64_t reserved_3_9                : 7;
		uint64_t count_cbusy_value_0         : 1;
		uint64_t count_cbusy_value_1         : 1;
		uint64_t count_cbusy_value_2         : 1;
		uint64_t count_cbusy_value_3         : 1;
		uint64_t count_cbusy_from_dat_flit   : 1;
		uint64_t count_cbusy_from_rsp_flit   : 1;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_dssx_cbusy_cnt_ctrlx_s cn; */
};
typedef union ody_dssx_cbusy_cnt_ctrlx ody_dssx_cbusy_cnt_ctrlx_t;

static inline uint64_t ODY_DSSX_CBUSY_CNT_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_CBUSY_CNT_CTRLX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0020300ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_CBUSY_CNT_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) ody_dssx_cbusy_cnt_ctrlx_t
#define bustype_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) "DSSX_CBUSY_CNT_CTRLX"
#define device_bar_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) (a)
#define arguments_ODY_DSSX_CBUSY_CNT_CTRLX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_cbusy_cnt_val#
 *
 * CBUSY Counter Value Register
 * Counter value of chosen CBUSY events.
 */
union ody_dssx_cbusy_cnt_valx {
	uint64_t u;
	struct ody_dssx_cbusy_cnt_valx_s {
		uint64_t cbusy_counter_value         : 63;
		uint64_t cbusy_cnt_overflow          : 1;
	} s;
	/* struct ody_dssx_cbusy_cnt_valx_s cn; */
};
typedef union ody_dssx_cbusy_cnt_valx ody_dssx_cbusy_cnt_valx_t;

static inline uint64_t ODY_DSSX_CBUSY_CNT_VALX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_CBUSY_CNT_VALX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0020340ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_CBUSY_CNT_VALX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_CBUSY_CNT_VALX(a, b) ody_dssx_cbusy_cnt_valx_t
#define bustype_ODY_DSSX_CBUSY_CNT_VALX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_CBUSY_CNT_VALX(a, b) "DSSX_CBUSY_CNT_VALX"
#define device_bar_ODY_DSSX_CBUSY_CNT_VALX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_CBUSY_CNT_VALX(a, b) (a)
#define arguments_ODY_DSSX_CBUSY_CNT_VALX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_clk_en
 *
 * DSS Clock Enable Register
 * Control of DSS domain's clock enables.
 */
union ody_dssx_clk_en {
	uint64_t u;
	struct ody_dssx_clk_en_s {
		uint64_t s_mc_core_clk_en            : 1;
		uint64_t s_phy_ref_clk_en            : 1;
		uint64_t s_rclk_en                   : 1;
		uint64_t s_apb_clk_en                : 1;
		uint64_t s_mct_clk_en                : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_dssx_clk_en_s cn; */
};
typedef union ody_dssx_clk_en ody_dssx_clk_en_t;

static inline uint64_t ODY_DSSX_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_CLK_EN(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000020ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_CLK_EN(a) ody_dssx_clk_en_t
#define bustype_ODY_DSSX_CLK_EN(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_CLK_EN(a) "DSSX_CLK_EN"
#define device_bar_ODY_DSSX_CLK_EN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_CLK_EN(a) (a)
#define arguments_ODY_DSSX_CLK_EN(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_ctrl
 *
 * DSS Control Register
 * General control register.
 */
union ody_dssx_ctrl {
	uint64_t u;
	struct ody_dssx_ctrl_s {
		uint64_t reserved_0_2                : 3;
		uint64_t s_force_kbd_0_chi_read_buf_ram : 1;
		uint64_t ecc_dispsn                  : 1;
		uint64_t ecc_discor                  : 1;
		uint64_t dmc_mdc_dis                 : 1;
		uint64_t reserved_7_63               : 57;
	} s;
	/* struct ody_dssx_ctrl_s cn; */
};
typedef union ody_dssx_ctrl ody_dssx_ctrl_t;

static inline uint64_t ODY_DSSX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000030ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_CTRL(a) ody_dssx_ctrl_t
#define bustype_ODY_DSSX_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_CTRL(a) "DSSX_CTRL"
#define device_bar_ODY_DSSX_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_CTRL(a) (a)
#define arguments_ODY_DSSX_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_dbg_status_0
 *
 * Debug status 0 bits Register
 * Reserved.
 */
union ody_dssx_dbg_status_0 {
	uint64_t u;
	struct ody_dssx_dbg_status_0_s {
		uint64_t dbg_rd_retry_rank           : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_dbg_status_0_s cn; */
};
typedef union ody_dssx_dbg_status_0 ody_dssx_dbg_status_0_t;

static inline uint64_t ODY_DSSX_DBG_STATUS_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DBG_STATUS_0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000120ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DBG_STATUS_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DBG_STATUS_0(a) ody_dssx_dbg_status_0_t
#define bustype_ODY_DSSX_DBG_STATUS_0(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_DBG_STATUS_0(a) "DSSX_DBG_STATUS_0"
#define device_bar_ODY_DSSX_DBG_STATUS_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DBG_STATUS_0(a) (a)
#define arguments_ODY_DSSX_DBG_STATUS_0(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_dbg_status_1
 *
 * Debug status 1 bits Register
 * Reserved.
 */
union ody_dssx_dbg_status_1 {
	uint64_t u;
	struct ody_dssx_dbg_status_1_s {
		uint64_t dbg_prank_pre_pd            : 2;
		uint64_t dbg_prank_act_pd            : 2;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dssx_dbg_status_1_s cn; */
};
typedef union ody_dssx_dbg_status_1 ody_dssx_dbg_status_1_t;

static inline uint64_t ODY_DSSX_DBG_STATUS_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DBG_STATUS_1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000128ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DBG_STATUS_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DBG_STATUS_1(a) ody_dssx_dbg_status_1_t
#define bustype_ODY_DSSX_DBG_STATUS_1(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_DBG_STATUS_1(a) "DSSX_DBG_STATUS_1"
#define device_bar_ODY_DSSX_DBG_STATUS_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DBG_STATUS_1(a) (a)
#define arguments_ODY_DSSX_DBG_STATUS_1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap1
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap1 Register
 * Address Map Register 1
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap1_s {
		uint32_t addrmap_cs_bit0             : 6;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap1 ody_dssx_ddrctl_regb_addr_map0_addrmap1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230004ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) ody_dssx_ddrctl_regb_addr_map0_addrmap1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap10
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap10 Register
 * Address Map Register 10
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap10 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap10_s {
		uint32_t addrmap_row_b2              : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_row_b3              : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t addrmap_row_b4              : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t addrmap_row_b5              : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap10_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap10 ody_dssx_ddrctl_regb_addr_map0_addrmap10_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230028ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) ody_dssx_ddrctl_regb_addr_map0_addrmap10_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap11
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap11 Register
 * Address Map Register 11
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap11 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap11_s {
		uint32_t addrmap_row_b0              : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_row_b1              : 5;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap11_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap11 ody_dssx_ddrctl_regb_addr_map0_addrmap11_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b023002cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) ody_dssx_ddrctl_regb_addr_map0_addrmap11_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap12
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap12 Register
 * Address Map Register 12
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap12 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap12_s {
		uint32_t nonbinary_device_density    : 3;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap12_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap12 ody_dssx_ddrctl_regb_addr_map0_addrmap12_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230030ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) ody_dssx_ddrctl_regb_addr_map0_addrmap12_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP12(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap3
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap3 Register
 * Address Map Register 3
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap3_s {
		uint32_t addrmap_bank_b0             : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t addrmap_bank_b1             : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap3 ody_dssx_ddrctl_regb_addr_map0_addrmap3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b023000cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) ody_dssx_ddrctl_regb_addr_map0_addrmap3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap4
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap4 Register
 * Address Map Register 4
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap4_s {
		uint32_t addrmap_bg_b0               : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t addrmap_bg_b1               : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t addrmap_bg_b2               : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap4 ody_dssx_ddrctl_regb_addr_map0_addrmap4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) ody_dssx_ddrctl_regb_addr_map0_addrmap4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap5
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap5 Register
 * Address Map Register 5
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap5 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap5_s {
		uint32_t addrmap_col_b7              : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_col_b8              : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t addrmap_col_b9              : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t addrmap_col_b10             : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap5_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap5 ody_dssx_ddrctl_regb_addr_map0_addrmap5_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230014ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) ody_dssx_ddrctl_regb_addr_map0_addrmap5_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap6
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap6 Register
 * Address Map Register 6
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap6 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap6_s {
		uint32_t addrmap_col_b3              : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t addrmap_col_b4              : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t addrmap_col_b5              : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t addrmap_col_b6              : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap6_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap6 ody_dssx_ddrctl_regb_addr_map0_addrmap6_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) ody_dssx_ddrctl_regb_addr_map0_addrmap6_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap7
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap7 Register
 * Address Map Register 7
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap7 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap7_s {
		uint32_t addrmap_row_b14             : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_row_b15             : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t addrmap_row_b16             : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t addrmap_row_b17             : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap7_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap7 ody_dssx_ddrctl_regb_addr_map0_addrmap7_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b023001cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) ody_dssx_ddrctl_regb_addr_map0_addrmap7_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap8
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap8 Register
 * Address Map Register 8
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap8 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap8_s {
		uint32_t addrmap_row_b10             : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_row_b11             : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t addrmap_row_b12             : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t addrmap_row_b13             : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap8_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap8 ody_dssx_ddrctl_regb_addr_map0_addrmap8_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230020ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) ody_dssx_ddrctl_regb_addr_map0_addrmap8_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_addr_map0_addrmap9
 *
 * DSS Ddrctl Regb Addr Map0 Addrmap9 Register
 * Address Map Register 9
 */
union ody_dssx_ddrctl_regb_addr_map0_addrmap9 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_addr_map0_addrmap9_s {
		uint32_t addrmap_row_b6              : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t addrmap_row_b7              : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t addrmap_row_b8              : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t addrmap_row_b9              : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_addr_map0_addrmap9_s cn; */
};
typedef union ody_dssx_ddrctl_regb_addr_map0_addrmap9 ody_dssx_ddrctl_regb_addr_map0_addrmap9_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0230024ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) ody_dssx_ddrctl_regb_addr_map0_addrmap9_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) "DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pcfgqos0
 *
 * DSS Ddrctl Regb Arb Port0 Pcfgqos0 Register
 * Reserved.
 */
union ody_dssx_ddrctl_regb_arb_port0_pcfgqos0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pcfgqos0_s {
		uint32_t rqos_map_level1             : 4;
		uint32_t reserved_4_15               : 12;
		uint32_t rqos_map_region0            : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t rqos_map_region1            : 2;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pcfgqos0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pcfgqos0 ody_dssx_ddrctl_regb_arb_port0_pcfgqos0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220094ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) ody_dssx_ddrctl_regb_arb_port0_pcfgqos0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pcfgqos1
 *
 * DSS Ddrctl Regb Arb Port0 Pcfgqos1 Register
 * Reserved.
 */
union ody_dssx_ddrctl_regb_arb_port0_pcfgqos1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pcfgqos1_s {
		uint32_t rqos_map_timeoutb           : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t rqos_map_timeoutr           : 11;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pcfgqos1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pcfgqos1 ody_dssx_ddrctl_regb_arb_port0_pcfgqos1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220098ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) ody_dssx_ddrctl_regb_arb_port0_pcfgqos1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGQOS1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pcfgwqos0
 *
 * DSS Ddrctl Regb Arb Port0 Pcfgwqos0 Register
 * Port n Write QoS Configuration Register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0_s {
		uint32_t wqos_map_level1             : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t wqos_map_level2             : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t wqos_map_region0            : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t wqos_map_region1            : 2;
		uint32_t reserved_22_23              : 2;
		uint32_t wqos_map_region2            : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0 ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b022009cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) ody_dssx_ddrctl_regb_arb_port0_pcfgwqos0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pcfgwqos1
 *
 * DSS Ddrctl Regb Arb Port0 Pcfgwqos1 Register
 * Port n Write QoS Configuration Register 1
 */
union ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1_s {
		uint32_t wqos_map_timeout1           : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t wqos_map_timeout2           : 11;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1 ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200a0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) ody_dssx_ddrctl_regb_arb_port0_pcfgwqos1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCFGWQOS1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbcbusyh
 *
 * DSS Ddrctl Regb Arb Port0 Pchbcbusyh Register
 * CHB Port CBUSY CAM HPR Threshold register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh_s {
		uint32_t cam_busy_threshold_hpr      : 7;
		uint32_t reserved_7_9                : 3;
		uint32_t cam_free_threshold_hpr      : 7;
		uint32_t reserved_17_19              : 3;
		uint32_t cam_middle_threshold_hpr    : 7;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220920ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) ody_dssx_ddrctl_regb_arb_port0_pchbcbusyh_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYH(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbcbusyl
 *
 * DSS Ddrctl Regb Arb Port0 Pchbcbusyl Register
 * CHB Port CBUSY CAM LPR Threshold register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl_s {
		uint32_t cam_busy_threshold_lpr      : 7;
		uint32_t reserved_7_9                : 3;
		uint32_t cam_free_threshold_lpr      : 7;
		uint32_t reserved_17_19              : 3;
		uint32_t cam_middle_threshold_lpr    : 7;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220924ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) ody_dssx_ddrctl_regb_arb_port0_pchbcbusyl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbcbusyw
 *
 * DSS Ddrctl Regb Arb Port0 Pchbcbusyw Register
 * CHB Port CBUSY CAM WR Threshold register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw_s {
		uint32_t cam_busy_threshold_wr       : 7;
		uint32_t reserved_7_9                : 3;
		uint32_t cam_free_threshold_wr       : 7;
		uint32_t reserved_17_19              : 3;
		uint32_t cam_middle_threshold_wr     : 7;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220928ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) ody_dssx_ddrctl_regb_arb_port0_pchbcbusyw_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBCBUSYW(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchblctrl
 *
 * DSS Ddrctl Regb Arb Port0 Pchblctrl Register
 * CHB Port Link Control register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchblctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchblctrl_s {
		uint32_t txsactive_en                : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchblctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchblctrl ody_dssx_ddrctl_regb_arb_port0_pchblctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220900ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) ody_dssx_ddrctl_regb_arb_port0_pchblctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLCTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchblstat0
 *
 * DSS Ddrctl Regb Arb Port0 Pchblstat0 Register
 * CHB Port Link status register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_pchblstat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchblstat0_s {
		uint32_t txsactive_status            : 1;
		uint32_t rxsactive_status            : 1;
		uint32_t tx_req                      : 1;
		uint32_t tx_ack                      : 1;
		uint32_t rx_req                      : 1;
		uint32_t rx_ack                      : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchblstat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchblstat0 ody_dssx_ddrctl_regb_arb_port0_pchblstat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220980ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) ody_dssx_ddrctl_regb_arb_port0_pchblstat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBLSTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbprctmr
 *
 * DSS Ddrctl Regb Arb Port0 Pchbprctmr Register
 * CHB Port Prefetch cache eviction Timer register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbprctmr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbprctmr_s {
		uint32_t prc_exp_cnt                 : 10;
		uint32_t reserved_10_15              : 6;
		uint32_t exp_cnt_div                 : 2;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbprctmr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbprctmr ody_dssx_ddrctl_regb_arb_port0_pchbprctmr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220908ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) ody_dssx_ddrctl_regb_arb_port0_pchbprctmr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPRCTMR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbprotqctl
 *
 * DSS Ddrctl Regb Arb Port0 Pchbprotqctl Register
 * CHB Port Protocol Queue control register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl_s {
		uint32_t rpq_lpr_min                 : 7;
		uint32_t reserved_7                  : 1;
		uint32_t rpq_hpr_min                 : 7;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b022090cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) ody_dssx_ddrctl_regb_arb_port0_pchbprotqctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBPROTQCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbrlstat
 *
 * DSS Ddrctl Regb Arb Port0 Pchbrlstat Register
 * CHB Port Retry List status register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbrlstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbrlstat_s {
		uint32_t retry_list_empty            : 1;
		uint32_t retry_list_full             : 1;
		uint32_t pend_qos_type               : 5;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbrlstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbrlstat ody_dssx_ddrctl_regb_arb_port0_pchbrlstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220990ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) ody_dssx_ddrctl_regb_arb_port0_pchbrlstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRLSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbrqos0
 *
 * DSS Ddrctl Regb Arb Port0 Pchbrqos0 Register
 * CHB Port n Read QoS Configuration Register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbrqos0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbrqos0_s {
		uint32_t chb_rqos_map_level1         : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t chb_rqos_map_level2         : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t chb_rqos_map_region0        : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t chb_rqos_map_region1        : 2;
		uint32_t reserved_22_23              : 2;
		uint32_t chb_rqos_map_region2        : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbrqos0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbrqos0 ody_dssx_ddrctl_regb_arb_port0_pchbrqos0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220910ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) ody_dssx_ddrctl_regb_arb_port0_pchbrqos0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbrqos1
 *
 * DSS Ddrctl Regb Arb Port0 Pchbrqos1 Register
 * CHB Port n Read QoS Configuration Register 1
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbrqos1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbrqos1_s {
		uint32_t vpr_uncrd_timeout           : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t vpr_crd_timeout             : 11;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbrqos1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbrqos1 ody_dssx_ddrctl_regb_arb_port0_pchbrqos1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220914ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) ody_dssx_ddrctl_regb_arb_port0_pchbrqos1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBRQOS1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbtctrl
 *
 * DSS Ddrctl Regb Arb Port0 Pchbtctrl Register
 * CHB Port Transaction Control register
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbtctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbtctrl_s {
		uint32_t dis_prefetch                : 1;
		uint32_t crc_ue_rsp_sel              : 2;
		uint32_t reserved_3                  : 1;
		uint32_t dbg_force_pcrd_steal_mode   : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbtctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbtctrl ody_dssx_ddrctl_regb_arb_port0_pchbtctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220904ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) ody_dssx_ddrctl_regb_arb_port0_pchbtctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBTCTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbwqos0
 *
 * DSS Ddrctl Regb Arb Port0 Pchbwqos0 Register
 * CHB Port n Write QoS Configuration Register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbwqos0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbwqos0_s {
		uint32_t chb_wqos_map_level1         : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t chb_wqos_map_level2         : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t chb_wqos_map_region0        : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t chb_wqos_map_region1        : 2;
		uint32_t reserved_22_23              : 2;
		uint32_t chb_wqos_map_region2        : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbwqos0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbwqos0 ody_dssx_ddrctl_regb_arb_port0_pchbwqos0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220918ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) ody_dssx_ddrctl_regb_arb_port0_pchbwqos0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pchbwqos1
 *
 * DSS Ddrctl Regb Arb Port0 Pchbwqos1 Register
 * CHB Port n Write QoS Configuration Register 1
 */
union ody_dssx_ddrctl_regb_arb_port0_pchbwqos1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pchbwqos1_s {
		uint32_t vpw_uncrd_timeout           : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t vpw_crd_timeout             : 11;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pchbwqos1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pchbwqos1 ody_dssx_ddrctl_regb_arb_port0_pchbwqos1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b022091cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) ody_dssx_ddrctl_regb_arb_port0_pchbwqos1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCHBWQOS1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pctrl
 *
 * DSS Ddrctl Regb Arb Port0 Pctrl Register
 * Port  Control Register
 */
union ody_dssx_ddrctl_regb_arb_port0_pctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pctrl_s {
		uint32_t port_en                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pctrl ody_dssx_ddrctl_regb_arb_port0_pctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220090ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) ody_dssx_ddrctl_regb_arb_port0_pctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PCTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_pstat
 *
 * DSS Ddrctl Regb Arb Port0 Pstat Register
 * Port Status Register
 */
union ody_dssx_ddrctl_regb_arb_port0_pstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_pstat_s {
		uint32_t rd_port_busy_0              : 1;
		uint32_t reserved_1_15               : 15;
		uint32_t wr_port_busy_0              : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_pstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_pstat ody_dssx_ddrctl_regb_arb_port0_pstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220114ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) ody_dssx_ddrctl_regb_arb_port0_pstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) "DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_PSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbraddrlog0
 *
 * DSS Ddrctl Regb Arb Port0 Sbraddrlog0 Register
 * Lower 32 bits of last generated scrubber address
 */
union ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0_s {
		uint32_t scrub_addr_log0             : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0 ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b022011cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) ody_dssx_ddrctl_regb_arb_port0_sbraddrlog0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbraddrlog1
 *
 * DSS Ddrctl Regb Arb Port0 Sbraddrlog1 Register
 * Higher MEMC_HIF_ADDR_WIDTH-32 bits of last generated scrubber address
 */
union ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1_s {
		uint32_t scrub_addr_log1             : 3;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1 ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220120ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) ody_dssx_ddrctl_regb_arb_port0_sbraddrlog1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRLOG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbraddrrestore0
 *
 * DSS Ddrctl Regb Arb Port0 Sbraddrrestore0 Register
 * Lower 32 bits of address to be loaded to the scrubber
 */
union ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0_s {
		uint32_t scrub_restore_address0      : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0 ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220124ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbraddrrestore1
 *
 * DSS Ddrctl Regb Arb Port0 Sbraddrrestore1 Register
 * Higher MEMC_HIF_ADDR_WIDTH-32 bits of address to be loaded to the scrubber
 */
union ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1_s {
		uint32_t scrub_restore_address1      : 3;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1 ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220128ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) ody_dssx_ddrctl_regb_arb_port0_sbraddrrestore1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRADDRRESTORE1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrctl
 *
 * DSS Ddrctl Regb Arb Port0 Sbrctl Register
 * Scrubber Control Register
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrctl_s {
		uint32_t scrub_en                    : 1;
		uint32_t scrub_during_lowpower       : 1;
		uint32_t reserved_2_3                : 2;
		uint32_t scrub_burst_length_nm       : 3;
		uint32_t reserved_7                  : 1;
		uint32_t scrub_interval              : 13;
		uint32_t reserved_21_23              : 3;
		uint32_t scrub_cmd_type              : 2;
		uint32_t sbr_correction_mode         : 2;
		uint32_t scrub_burst_length_lp       : 3;
		uint32_t scrub_ue                    : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrctl ody_dssx_ddrctl_regb_arb_port0_sbrctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200e0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) ody_dssx_ddrctl_regb_arb_port0_sbrctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrlpctl
 *
 * DSS Ddrctl Regb Arb Port0 Sbrlpctl Register
 * Scrubber DDR5 low power modes control register
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrlpctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrlpctl_s {
		uint32_t perrank_dis_scrub           : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t scrub_restore               : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrlpctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrlpctl ody_dssx_ddrctl_regb_arb_port0_sbrlpctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0220118ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) ody_dssx_ddrctl_regb_arb_port0_sbrlpctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRLPCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrrange0
 *
 * DSS Ddrctl Regb Arb Port0 Sbrrange0 Register
 * Scrubber Address Range Mask Register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrrange0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrrange0_s {
		uint32_t sbr_address_range_mask_0    : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrrange0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrrange0 ody_dssx_ddrctl_regb_arb_port0_sbrrange0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200f8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) ody_dssx_ddrctl_regb_arb_port0_sbrrange0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrrange1
 *
 * DSS Ddrctl Regb Arb Port0 Sbrrange1 Register
 * Scrubber Address Range Mask Register 1
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrrange1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrrange1_s {
		uint32_t sbr_address_range_mask_1    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrrange1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrrange1 ody_dssx_ddrctl_regb_arb_port0_sbrrange1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200fcll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) ody_dssx_ddrctl_regb_arb_port0_sbrrange1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRRANGE1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrstart0
 *
 * DSS Ddrctl Regb Arb Port0 Sbrstart0 Register
 * Scrubber Start Address Mask Register 0
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrstart0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrstart0_s {
		uint32_t sbr_address_start_mask_0    : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrstart0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrstart0 ody_dssx_ddrctl_regb_arb_port0_sbrstart0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) ody_dssx_ddrctl_regb_arb_port0_sbrstart0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrstart1
 *
 * DSS Ddrctl Regb Arb Port0 Sbrstart1 Register
 * Scrubber Start Address Mask Register 1
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrstart1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrstart1_s {
		uint32_t sbr_address_start_mask_1    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrstart1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrstart1 ody_dssx_ddrctl_regb_arb_port0_sbrstart1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200f4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) ody_dssx_ddrctl_regb_arb_port0_sbrstart1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTART1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrstat
 *
 * DSS Ddrctl Regb Arb Port0 Sbrstat Register
 * Scrubber Status Register
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrstat_s {
		uint32_t scrub_busy                  : 1;
		uint32_t scrub_done                  : 1;
		uint32_t reserved_2_3                : 2;
		uint32_t scrub_drop_cnt              : 5;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrstat ody_dssx_ddrctl_regb_arb_port0_sbrstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200e4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) ody_dssx_ddrctl_regb_arb_port0_sbrstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_arb_port0_sbrwdata0
 *
 * DSS Ddrctl Regb Arb Port0 Sbrwdata0 Register
 * Scrubber Write Data Pattern0
 */
union ody_dssx_ddrctl_regb_arb_port0_sbrwdata0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_arb_port0_sbrwdata0_s {
		uint32_t scrub_pattern0              : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_arb_port0_sbrwdata0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_arb_port0_sbrwdata0 ody_dssx_ddrctl_regb_arb_port0_sbrwdata0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02200e8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) ody_dssx_ddrctl_regb_arb_port0_sbrwdata0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) "DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_ARB_PORT0_SBRWDATA0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamcfg Mbw Max Register
 * MPAM memory maximum bandwidth partitioning partition configuration register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max_s {
		uint32_t unimpl                      : 8;
		uint32_t max                         : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240208ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_max_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MAX(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamcfg Mbw Min Register
 * MPAM memory minimum bandwidth partitioning partition configuration register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min_s {
		uint32_t unimpl                      : 8;
		uint32_t min                         : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240200ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_min_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_MIN(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamcfg Mbw Winwd Register
 * MPAM memory bandwidth partitioning window width register.
 *
 *  Note: This IP uses a custom implementation to set BW accounting widow.
 * MPAMCFG_MBW_WINWD hence is not compliant to the MPAM spec. SW should not use
 * MPAMCFG_MBW_WINWD and instead rely on MPAMF_CUST_WINDW register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd_s {
		uint32_t us_frac                     : 8;
		uint32_t us_int                      : 16;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240220ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_mbw_winwd_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_MBW_WINWD(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamcfg Part Sel Register
 * MPAM partition configuration selection register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel_s {
		uint32_t partid_sel                  : 16;
		uint32_t internal                    : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240100ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamcfg_part_sel_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMCFG_PART_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_aidr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Aidr Register
 * MPAM architecture ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr_s {
		uint32_t archminorrev                : 4;
		uint32_t archmajorrev                : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240020ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_aidr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_AIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Cust Cfg Register
 * MPAM Custom Register - MPAM Disable
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg_s {
		uint32_t dis_mpam                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240a10ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_cfg_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Cust Mbwc Register
 * MPAM Custom Register - Memory Bandwitdh Counter
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc_s {
		uint32_t mbwc                        : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240a08ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_mbwc_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_MBWC(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Cust Windw Register
 * MPAM Custom Register containing the current bandwidth accounting window period
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw_s {
		uint32_t wind_cyc_count              : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240a0cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_cust_windw_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_CUST_WINDW(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_ecr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Ecr Register
 * MPAM Error Control Register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr_s {
		uint32_t inten                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02400f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_ecr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ECR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_esr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Esr Register
 * MPAM Error Status Register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr_s {
		uint32_t partidmon                   : 16;
		uint32_t mpamf_esr_pmg               : 8;
		uint32_t errcode                     : 4;
		uint32_t reserved_28_30              : 3;
		uint32_t ovrwr                       : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02400f8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_esr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_ESR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_idr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Idr Register
 * MPAM features ID register for a memory system component.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t has_ccap_part               : 1;
		uint32_t has_cport_part              : 1;
		uint32_t has_mbw_part                : 1;
		uint32_t has_pri_part                : 1;
		uint32_t ext                         : 1;
		uint32_t has_impl_part               : 1;
		uint32_t has_msmon                   : 1;
		uint32_t has_partid_nrw              : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_idr_32
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Idr 32 Register
 * Extended MPAM features ID register for a memory system component present only when
 * MPAM V1.1 Version is enabled. At this offset MPAMF_IDR[63:32] can be accessed
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32_s {
		uint32_t has_ris                     : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t has_no_impl_part            : 1;
		uint32_t has_no_impl_msmon           : 1;
		uint32_t has_extd_esr                : 1;
		uint32_t has_esr                     : 1;
		uint32_t has_err_msi                 : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32 ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240004ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_idr_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IDR_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_iidr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Iidr Register
 * MPAM implementation ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 12;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_iidr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Impl Idr Register
 * MPAMF implementation-specific partitioning feature ID register for a memory system component.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr_s {
		uint32_t mpam_cust_offset            : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240028ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_impl_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_IMPL_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Mbw Idr Register
 * MPAM features memory bandwidth partitioning ID register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr_s {
		uint32_t bwa_wd                      : 6;
		uint32_t reserved_6_9                : 4;
		uint32_t has_min                     : 1;
		uint32_t has_max                     : 1;
		uint32_t has_pbm                     : 1;
		uint32_t has_prop                    : 1;
		uint32_t windwr                      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t bwpbm_wd                    : 13;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240040ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbw_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBW_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Mbwumon Idr Register
 * MPAM Memory BandWidth Monitor ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr_s {
		uint32_t num_mon                     : 16;
		uint32_t reserved_16_25              : 10;
		uint32_t has_ofsr                    : 1;
		uint32_t reserved_27                 : 1;
		uint32_t has_rwbw                    : 1;
		uint32_t lwd                         : 1;
		uint32_t has_long                    : 1;
		uint32_t has_capture                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240090ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_mbwumon_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MBWUMON_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Mpamf Msmon Idr Register
 * MPAM Memory System Monitor ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr_s {
		uint32_t reserved_0_15               : 16;
		uint32_t msmon_csu                   : 1;
		uint32_t msmon_mbwu                  : 1;
		uint32_t reserved_18_27              : 10;
		uint32_t has_oflow_sr                : 1;
		uint32_t has_oflow_msi               : 1;
		uint32_t no_hw_oflw_intr             : 1;
		uint32_t has_local_capt_evnt         : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240080ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_mpamf_msmon_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MPAMF_MSMON_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Capt Evnt Register
 * MPAM Monitor Capture Event register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt_s {
		uint32_t now                         : 1;
		uint32_t all                         : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240808ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_capt_evnt_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CAPT_EVNT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Cfg Mbwu Ctl Register
 * MPAM MBWU Configuration Control register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl_s {
		uint32_t mon_type                    : 8;
		uint32_t reserved_8_13               : 6;
		uint32_t oflow_intr_l                : 1;
		uint32_t oflow_status_l              : 1;
		uint32_t match_partid                : 1;
		uint32_t match_pmg                   : 1;
		uint32_t reserved_18_23              : 6;
		uint32_t oflow_frz                   : 1;
		uint32_t reserved_25_26              : 2;
		uint32_t capt_reset                  : 1;
		uint32_t capt_evnt                   : 3;
		uint32_t en                          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240828ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_ctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Cfg Mbwu Flt Register
 * MPAM MBWU Configuration Filter register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt_s {
		uint32_t partid                      : 16;
		uint32_t pmg                         : 8;
		uint32_t reserved_24_29              : 6;
		uint32_t rwbw                        : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240820ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mbwu_flt_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MBWU_FLT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Cfg Mon Sel Register
 * MPAM Monitor configuration selection register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel_s {
		uint32_t mon_sel                     : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240800ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_cfg_mon_sel_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_CFG_MON_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Mbwu L Register
 * MPAM MBWU Long register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_s {
		uint32_t value                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240880ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Mbwu L 32 Register
 * MPAM MBWU Long MSB 32bits register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32_s {
		uint32_t value                       : 31;
		uint32_t nrdy                        : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32 ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240884ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Mbwu L Capture Register
 * MPAM MBWU Long Capture register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_s {
		uint32_t value                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240890ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Mbwu L Capture 32 Register
 * MPAM MBWU Long Capture MSB 32bits register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32_s {
		uint32_t value                       : 31;
		uint32_t nrdy                        : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32 ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240894ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_l_capture_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_L_CAPTURE_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Mbwu Ofsr Register
 * MPAM MBWU OFSR register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr_s {
		uint32_t ofpnd                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0240898ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_mbwu_ofsr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_MBWU_OFSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr
 *
 * DSS Ddrctl Regb Chb Mpam Ns Msmon Oflow Sr Register
 * MPAM MSMON OFLOW SR register
 */
union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr_s {
		uint32_t reserved_0_29               : 30;
		uint32_t mbwu_oflow_pnd              : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02408f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) ody_dssx_ddrctl_regb_chb_mpam_ns_msmon_oflow_sr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_NS_MSMON_OFLOW_SR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamcfg Mbw Max Register
 * MPAM memory maximum bandwidth partitioning partition configuration register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max_s {
		uint32_t unimpl                      : 8;
		uint32_t max                         : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250208ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_max_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MAX(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamcfg Mbw Min Register
 * MPAM memory minimum bandwidth partitioning partition configuration register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min_s {
		uint32_t unimpl                      : 8;
		uint32_t min                         : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250200ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_min_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_MIN(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamcfg Mbw Winwd Register
 * MPAM memory bandwidth partitioning window width register.
 *
 *  Note: This IP uses a custom implementation to set BW accounting widow.
 * MPAMCFG_MBW_WINWD hence is not compliant to the MPAM spec. SW should not use
 * MPAMCFG_MBW_WINWD and instead rely on MPAMF_CUST_WINDW register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd_s {
		uint32_t us_frac                     : 8;
		uint32_t us_int                      : 16;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250220ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_mbw_winwd_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_MBW_WINWD(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamcfg Part Sel Register
 * MPAM partition configuration selection register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel_s {
		uint32_t partid_sel                  : 16;
		uint32_t internal                    : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250100ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamcfg_part_sel_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMCFG_PART_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_aidr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Aidr Register
 * MPAM architecture ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr_s {
		uint32_t archminorrev                : 4;
		uint32_t archmajorrev                : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250020ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_aidr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_AIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Cust Cfg Register
 * MPAM Custom Register - MPAM Disable
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg_s {
		uint32_t dis_mpam                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250a10ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_cfg_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Cust Mbwc Register
 * MPAM Custom Register - Memory Bandwitdh Counter
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc_s {
		uint32_t mbwc                        : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250a08ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_mbwc_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_MBWC(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_cust_windw
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Cust Windw Register
 * MPAM Custom Register containing the current bandwidth accounting window period
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw_s {
		uint32_t wind_cyc_count              : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250a0cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_cust_windw_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_CUST_WINDW(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_ecr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Ecr Register
 * MPAM Error Control Register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr_s {
		uint32_t inten                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02500f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_ecr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ECR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_esr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Esr Register
 * MPAM Error Status Register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr_s {
		uint32_t partidmon                   : 16;
		uint32_t mpamf_esr_pmg               : 8;
		uint32_t errcode                     : 4;
		uint32_t reserved_28_30              : 3;
		uint32_t ovrwr                       : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02500f8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_esr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_ESR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_idr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Idr Register
 * MPAM features ID register for a memory system component.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t has_ccap_part               : 1;
		uint32_t has_cport_part              : 1;
		uint32_t has_mbw_part                : 1;
		uint32_t has_pri_part                : 1;
		uint32_t ext                         : 1;
		uint32_t has_impl_part               : 1;
		uint32_t has_msmon                   : 1;
		uint32_t has_partid_nrw              : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_idr_32
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Idr 32 Register
 * Extended MPAM features ID register for a memory system component present only when
 * MPAM V1.1 Version is enabled. At this offset MPAMF_IDR[63:32] can be accessed
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32_s {
		uint32_t has_ris                     : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t has_no_impl_part            : 1;
		uint32_t has_no_impl_msmon           : 1;
		uint32_t has_extd_esr                : 1;
		uint32_t has_esr                     : 1;
		uint32_t has_err_msi                 : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32 ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250004ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_idr_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IDR_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_iidr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Iidr Register
 * MPAM implementation ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 12;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_iidr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_impl_idr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Impl Idr Register
 * MPAMF implementation-specific partitioning feature ID register for a memory system component.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr_s {
		uint32_t mpam_cust_offset            : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250028ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_impl_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_IMPL_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Mbw Idr Register
 * MPAM features memory bandwidth partitioning ID register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr_s {
		uint32_t bwa_wd                      : 6;
		uint32_t reserved_6_9                : 4;
		uint32_t has_min                     : 1;
		uint32_t has_max                     : 1;
		uint32_t has_pbm                     : 1;
		uint32_t has_prop                    : 1;
		uint32_t windwr                      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t bwpbm_wd                    : 13;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250040ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbw_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBW_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Mbwumon Idr Register
 * MPAM Memory BandWidth Monitor ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr_s {
		uint32_t num_mon                     : 16;
		uint32_t reserved_16_25              : 10;
		uint32_t has_ofsr                    : 1;
		uint32_t reserved_27                 : 1;
		uint32_t has_rwbw                    : 1;
		uint32_t lwd                         : 1;
		uint32_t has_long                    : 1;
		uint32_t has_capture                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250090ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_mbwumon_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MBWUMON_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Msmon Idr Register
 * MPAM Memory System Monitor ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr_s {
		uint32_t reserved_0_15               : 16;
		uint32_t msmon_csu                   : 1;
		uint32_t msmon_mbwu                  : 1;
		uint32_t reserved_18_27              : 10;
		uint32_t has_oflow_sr                : 1;
		uint32_t has_oflow_msi               : 1;
		uint32_t no_hw_oflw_intr             : 1;
		uint32_t has_local_capt_evnt         : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250080ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_msmon_idr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_MSMON_IDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_mpamf_sidr
 *
 * DSS Ddrctl Regb Chb Mpam S Mpamf Sidr Register
 * MPAM features secure ID register.
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr_s {
		uint32_t s_partid_max                : 16;
		uint32_t s_pmg_max                   : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) ody_dssx_ddrctl_regb_chb_mpam_s_mpamf_sidr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MPAMF_SIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_capt_evnt
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Capt Evnt Register
 * MPAM Monitor Capture Event register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt_s {
		uint32_t now                         : 1;
		uint32_t all                         : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250808ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_capt_evnt_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CAPT_EVNT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Cfg Mbwu Ctl Register
 * MPAM MBWU Configuration Control register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl_s {
		uint32_t mon_type                    : 8;
		uint32_t reserved_8_13               : 6;
		uint32_t oflow_intr_l                : 1;
		uint32_t oflow_status_l              : 1;
		uint32_t match_partid                : 1;
		uint32_t match_pmg                   : 1;
		uint32_t reserved_18_23              : 6;
		uint32_t oflow_frz                   : 1;
		uint32_t reserved_25_26              : 2;
		uint32_t capt_reset                  : 1;
		uint32_t capt_evnt                   : 3;
		uint32_t en                          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250828ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_ctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Cfg Mbwu Flt Register
 * MPAM MBWU Configuration Filter register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt_s {
		uint32_t partid                      : 16;
		uint32_t pmg                         : 8;
		uint32_t reserved_24_29              : 6;
		uint32_t rwbw                        : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250820ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mbwu_flt_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MBWU_FLT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Cfg Mon Sel Register
 * MPAM Monitor configuration selection register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel_s {
		uint32_t mon_sel                     : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250800ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_cfg_mon_sel_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_CFG_MON_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_mbwu_l
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Mbwu L Register
 * MPAM MBWU Long register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_s {
		uint32_t value                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250880ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Mbwu L 32 Register
 * MPAM MBWU Long MSB 32bits register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32_s {
		uint32_t value                       : 31;
		uint32_t nrdy                        : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32 ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250884ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Mbwu L Capture Register
 * MPAM MBWU Long Capture register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_s {
		uint32_t value                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250890ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Mbwu L Capture 32 Register
 * MPAM MBWU Long Capture MSB 32bits register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32_s {
		uint32_t value                       : 31;
		uint32_t nrdy                        : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32 ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250894ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_l_capture_32_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_L_CAPTURE_32(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Mbwu Ofsr Register
 * MPAM MBWU OFSR register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr_s {
		uint32_t ofpnd                       : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0250898ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_mbwu_ofsr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_MBWU_OFSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_chb_mpam_s_msmon_oflow_sr
 *
 * DSS Ddrctl Regb Chb Mpam S Msmon Oflow Sr Register
 * MPAM MSMON OFLOW SR register
 */
union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr_s {
		uint32_t reserved_0_29               : 30;
		uint32_t mbwu_oflow_pnd              : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr_s cn; */
};
typedef union ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02508f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) ody_dssx_ddrctl_regb_chb_mpam_s_msmon_oflow_sr_t
#define bustype_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) "DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR"
#define device_bar_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_CHB_MPAM_S_MSMON_OFLOW_SR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_adveccindex
 *
 * DSS Ddrctl Regb Ddrc Ch0 Adveccindex Register
 * Advanced ECC Index Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex_s {
		uint32_t ecc_syndrome_sel            : 3;
		uint32_t ecc_err_symbol_sel          : 2;
		uint32_t ecc_poison_beats_sel        : 4;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210650ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) ody_dssx_ddrctl_regb_ddrc_ch0_adveccindex_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCINDEX(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_adveccstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Adveccstat Register
 * Advanced ECC Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat_s {
		uint32_t advecc_corrected_err        : 1;
		uint32_t advecc_uncorrected_err      : 1;
		uint32_t advecc_num_err_symbol       : 3;
		uint32_t advecc_err_symbol_pos       : 7;
		uint32_t reserved_12_15              : 4;
		uint32_t advecc_err_symbol_bits      : 8;
		uint32_t advecc_ce_kbd_stat          : 4;
		uint32_t advecc_ue_kbd_stat          : 2;
		uint32_t sbr_read_advecc_ce          : 1;
		uint32_t sbr_read_advecc_ue          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210654ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_adveccstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ADVECCSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Cmdbuf Ctrl Register
 * CA Parity Retry command buffer control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl_s {
		uint32_t capar_cmdbuf_wdata          : 16;
		uint32_t capar_cmdbuf_addr           : 6;
		uint32_t reserved_22_28              : 7;
		uint32_t capar_cmdbuf_op_mode        : 1;
		uint32_t capar_cmdbuf_rw_type        : 1;
		uint32_t capar_cmdbuf_rw_start       : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b50ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Cmdbuf Stat Register
 * CA Parity Retry command buffer status register.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat_s {
		uint32_t capar_cmdbuf_rdata          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b54ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdbuf_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDBUF_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Cmdfifo Ctrl Register
 * PASCAPAR CMDFIFO CTRL Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl_s {
		uint32_t reserved_0_15               : 16;
		uint32_t cmdfifo_rd_addr             : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210dc0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Cmdfifo Log Register
 * PASCAPAR CMDFIFO LOG Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log_s {
		uint32_t cmdfifo_window_cmd_num      : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t cmdfifo_recorded_cmd_num    : 9;
		uint32_t reserved_25_30              : 6;
		uint32_t cmdfifo_overflow            : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210dc8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_log_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_LOG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Cmdfifo Stat Register
 * PASCAPAR CMDFIFO STAT Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat_s {
		uint32_t cmdfifo_rd_data             : 13;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210dc4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_cmdfifo_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_CMDFIFO_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_dbg_stat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Dbg Stat0 Register
 * PASCAPAR DEBUG STAT0 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0_s {
		uint32_t dbg_capar_retry_mc_addr     : 6;
		uint32_t reserved_6_15               : 10;
		uint32_t dbg_capar_retry_mc_code     : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0 ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210db8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_capar_dbg_stat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Capar Dbg Stat1 Register
 * PASCAPAR DEBUG STAT1 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1_s {
		uint32_t dbg_capar_retry_state_sceu  : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dbg_capar_retry_state_mceu  : 3;
		uint32_t reserved_7                  : 1;
		uint32_t dbg_capar_retry_state_csm   : 2;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1 ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210dbcll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_capar_dbg_stat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPAR_DBG_STAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_caparpoisonctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Caparpoisonctl Register
 * CA parity poison control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl_s {
		uint32_t capar_poison_inject_en      : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t capar_poison_cmdtype        : 2;
		uint32_t reserved_10_11              : 2;
		uint32_t capar_poison_position       : 8;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210810ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_caparpoisonstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Caparpoisonstat Register
 * CA parity poison status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat_s {
		uint32_t capar_poison_complete       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210814ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_caparpoisonstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CAPARPOISONSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_chctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Chctl Register
 * Channel Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_chctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_chctl_s {
		uint32_t dual_channel_en             : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_chctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_chctl ody_dssx_ddrctl_regb_ddrc_ch0_chctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c8cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_chctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CHCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_cmdcfg
 *
 * DSS Ddrctl Regb Ddrc Ch0 Cmdcfg Register
 * Software DDR command configuration register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg_s {
		uint32_t cmd_type                    : 1;
		uint32_t multi_cyc_cs_en             : 1;
		uint32_t pde_odt_ctrl                : 1;
		uint32_t pd_mrr_nt_odt_en            : 1;
		uint32_t cmd_timer_x32               : 12;
		uint32_t mrr_grp_sel                 : 3;
		uint32_t reserved_19_20              : 2;
		uint32_t ctrlupd_retry_thr           : 4;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b00ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) ody_dssx_ddrctl_regb_ddrc_ch0_cmdcfg_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_cmdctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Cmdctl Register
 * Software DDR command control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl_s {
		uint32_t cmd_ctrl                    : 24;
		uint32_t cmd_code                    : 5;
		uint32_t cmd_seq_ongoing             : 1;
		uint32_t cmd_seq_last                : 1;
		uint32_t cmd_start                   : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b04ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_cmdctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_cmdextctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Cmdextctl Register
 * Software DDR command extended control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl_s {
		uint32_t cmd_ext_ctrl                : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b08ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_cmdextctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDEXTCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_cmdmrrdata
 *
 * DSS Ddrctl Regb Ddrc Ch0 Cmdmrrdata Register
 * Software DDR command MRR Data register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata_s {
		uint32_t cmd_mrr_data                : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b14ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) ody_dssx_ddrctl_regb_ddrc_ch0_cmdmrrdata_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_cmdstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Cmdstat Register
 * Software DDR command status register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat_s {
		uint32_t mrr_data_vld                : 1;
		uint32_t rd_data_vld                 : 1;
		uint32_t ddr5_2n_mode                : 1;
		uint32_t reserved_3_7                : 5;
		uint32_t swcmd_lock                  : 1;
		uint32_t ducmd_lock                  : 1;
		uint32_t lccmd_lock                  : 1;
		uint32_t reserved_11                 : 1;
		uint32_t cmd_rslt                    : 18;
		uint32_t cmd_err                     : 1;
		uint32_t cmd_done                    : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b0cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_cmdstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcparctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcparctl0 Register
 * CRC Parity Control Register0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0_s {
		uint32_t capar_err_intr_en           : 1;
		uint32_t capar_err_intr_clr          : 1;
		uint32_t capar_err_intr_force        : 1;
		uint32_t reserved_3                  : 1;
		uint32_t capar_err_max_reached_intr_en : 1;
		uint32_t capar_err_max_reached_intr_clr : 1;
		uint32_t capar_err_max_reached_intr_force : 1;
		uint32_t capar_err_cnt_clr           : 1;
		uint32_t wr_crc_err_intr_en          : 1;
		uint32_t wr_crc_err_intr_clr         : 1;
		uint32_t wr_crc_err_intr_force       : 1;
		uint32_t reserved_11                 : 1;
		uint32_t wr_crc_err_max_reached_intr_en : 1;
		uint32_t wr_crc_err_max_reached_intr_clr : 1;
		uint32_t wr_crc_err_max_reached_intr_force : 1;
		uint32_t wr_crc_err_cnt_clr          : 1;
		uint32_t reserved_16_19              : 4;
		uint32_t rd_crc_err_max_reached_int_en : 1;
		uint32_t rd_crc_err_max_reached_int_clr : 1;
		uint32_t rd_crc_err_cnt_clr          : 1;
		uint32_t rd_crc_err_max_reached_intr_force : 1;
		uint32_t capar_fatl_err_intr_en      : 1;
		uint32_t capar_fatl_err_intr_clr     : 1;
		uint32_t capar_fatl_err_intr_force   : 1;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0 ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210800ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcparctl1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcparctl1 Register
 * CRC Parity Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1_s {
		uint32_t parity_enable               : 1;
		uint32_t bypass_internal_crc         : 1;
		uint32_t reserved_2                  : 1;
		uint32_t rd_crc_enable               : 1;
		uint32_t wr_crc_enable               : 1;
		uint32_t reserved_5                  : 1;
		uint32_t dis_rd_crc_ecc_upr_nibble   : 1;
		uint32_t crc_inc_dm                  : 1;
		uint32_t reserved_8_14               : 7;
		uint32_t dfi_alert_async_mode        : 1;
		uint32_t capar_err_max_reached_th    : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1 ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210804ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcparctl2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcparctl2 Register
 * CRC Parity Control Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2_s {
		uint32_t wr_crc_err_max_reached_th   : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_max_reached_th   : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2 ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210808ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcparctl2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARCTL2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcparstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcparstat Register
 * CRC Parity Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat_s {
		uint32_t reserved_0_15               : 16;
		uint32_t capar_err_intr              : 1;
		uint32_t capar_err_max_reached_intr  : 1;
		uint32_t capar_fatl_err_intr         : 1;
		uint32_t reserved_19_23              : 5;
		uint32_t wr_crc_err_intr             : 1;
		uint32_t wr_crc_err_max_reached_intr : 1;
		uint32_t wr_crc_retry_limit_intr     : 1;
		uint32_t rd_retry_limit_intr         : 1;
		uint32_t capar_retry_limit_reached_intr : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021080cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcparstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPARSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcpoisonctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcpoisonctl0 Register
 * CRC poison control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0_s {
		uint32_t crc_poison_inject_en        : 1;
		uint32_t crc_poison_type             : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t crc_poison_nibble           : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t crc_poison_times            : 5;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0 ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210820ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcpoisonstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcpoisonstat Register
 * CRC poison status register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat_s {
		uint32_t crc_poison_complete         : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021082cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcpoisonstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCPOISONSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat0 Register
 * CRC Error Status Register Nibbles 0 and 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0_s {
		uint32_t rd_crc_err_cnt_nibble_0     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_cnt_nibble_1     : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210848ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat1 Register
 * CRC Error Status Register Nibbles 2 and 3
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1_s {
		uint32_t rd_crc_err_cnt_nibble_2     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_cnt_nibble_3     : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021084cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat10
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat10 Register
 * CRC Error Status 10th Registser
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10_s {
		uint32_t wr_crc_err_cnt              : 12;
		uint32_t capar_err_cnt               : 12;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210870ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat10_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT10(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat2 Register
 * CRC Error Status Register Nibbles 4 and 5
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2_s {
		uint32_t rd_crc_err_cnt_nibble_4     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_cnt_nibble_5     : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210850ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat3
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat3 Register
 * CRC Error Status Register Nibbles 6 and 7
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3_s {
		uint32_t rd_crc_err_cnt_nibble_6     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_cnt_nibble_7     : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210854ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_crcstat4
 *
 * DSS Ddrctl Regb Ddrc Ch0 Crcstat4 Register
 * CRC Error Status Register Nibbles 8 and 9
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4_s {
		uint32_t rd_crc_err_cnt_nibble_8     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rd_crc_err_cnt_nibble_9     : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4 ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210858ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) ody_dssx_ddrctl_regb_ddrc_ch0_crcstat4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) "DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_CRCSTAT4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dbictl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dbictl Register
 * DM/DBI Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dbictl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dbictl_s {
		uint32_t dm_en                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dbictl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dbictl ody_dssx_ddrctl_regb_ddrc_ch0_dbictl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c94ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_dbictl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DBICTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ddrctl_ver_number
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ddrctl Ver Number Register
 * DDRCTL Version Number Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number_s {
		uint32_t ver_number                  : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210ff8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_number_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_NUMBER(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ddrctl_ver_type
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ddrctl Ver Type Register
 * DDRCTL Version Type Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type_s {
		uint32_t ver_type                    : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210ffcll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) ody_dssx_ddrctl_regb_ddrc_ch0_ddrctl_ver_type_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DDRCTL_VER_TYPE(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratectl1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratectl1 Register
 * Temperature Derate Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1_s {
		uint32_t active_derate_byte_rank0    : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1 ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210104ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratectl1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratectl2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratectl2 Register
 * Temperature Derate Control Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2_s {
		uint32_t active_derate_byte_rank1    : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2 ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210108ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratectl2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratectl5
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratectl5 Register
 * Temperature Derate Control Register 5
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5_s {
		uint32_t derate_temp_limit_intr_en   : 1;
		uint32_t derate_temp_limit_intr_clr  : 1;
		uint32_t derate_temp_limit_intr_force : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5 ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210114ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratectl5_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratectl6
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratectl6 Register
 * Temperature Derate Control Register 6
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6_s {
		uint32_t derate_mr4_tuf_dis          : 1;
		uint32_t reserved_1_15               : 15;
		uint32_t derate_low_temp_limit       : 3;
		uint32_t reserved_19                 : 1;
		uint32_t derate_high_temp_limit      : 3;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6 ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210118ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratectl6_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATECTL6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratedbgctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratedbgctl Register
 * Temperature Derate Debug Contrl Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl_s {
		uint32_t dbg_mr4_grp_sel             : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dbg_mr4_rank_sel            : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210124ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratedbgstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratedbgstat Register
 * Temperature Derate Debug Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat_s {
		uint32_t dbg_mr4_byte0               : 8;
		uint32_t dbg_mr4_byte1               : 8;
		uint32_t dbg_mr4_byte2               : 8;
		uint32_t dbg_mr4_byte3               : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210128ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratedbgstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATEDBGSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratestat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratestat0 Register
 * Temperature Derate Status Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0_s {
		uint32_t derate_temp_limit_intr      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0 ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021011cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratestat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_deratestat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Deratestat1 Register
 * Temperature Derate Status Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1_s {
		uint32_t refresh_rate_rank0          : 3;
		uint32_t reserved_3                  : 1;
		uint32_t refresh_rate_rank1          : 3;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1 ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210120ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_deratestat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DERATESTAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dfilpcfg0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dfilpcfg0 Register
 * DFI Low Power Configuration Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0_s {
		uint32_t dfi_lp_en_pd                : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t dfi_lp_en_sr                : 1;
		uint32_t reserved_5_15               : 11;
		uint32_t dfi_lp_en_data              : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0 ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210500ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) ody_dssx_ddrctl_regb_ddrc_ch0_dfilpcfg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFILPCFG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dfimisc
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dfimisc Register
 * DFI Miscellaneous Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc_s {
		uint32_t reserved_0_1                : 2;
		uint32_t dfi_data_cs_polarity        : 1;
		uint32_t reserved_3_4                : 2;
		uint32_t dfi_init_start              : 1;
		uint32_t reserved_6_7                : 2;
		uint32_t dfi_frequency               : 5;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210510ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) ody_dssx_ddrctl_regb_ddrc_ch0_dfimisc_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIMISC(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dfistat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dfistat Register
 * DFI Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dfistat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dfistat_s {
		uint32_t dfi_init_complete           : 1;
		uint32_t dfi_lp_ctrl_ack_stat        : 1;
		uint32_t dfi_lp_data_ack_stat        : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dfistat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dfistat ody_dssx_ddrctl_regb_ddrc_ch0_dfistat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210514ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_dfistat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFISTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dfiupd0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dfiupd0 Register
 * DFI Update Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0_s {
		uint32_t reserved_0_28               : 29;
		uint32_t ctrlupd_pre_srx             : 1;
		uint32_t dis_auto_ctrlupd_srx        : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0 ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210508ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) ody_dssx_ddrctl_regb_ddrc_ch0_dfiupd0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DFIUPD0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dimmctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dimmctl Register
 * DIMM Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl_s {
		uint32_t dimm_stagger_cs_en          : 1;
		uint32_t reserved_1_9                : 9;
		uint32_t dimm_type                   : 2;
		uint32_t reserved_12_14              : 3;
		uint32_t dimm_selfref_clock_stop_mode : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c88ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_dimmctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DIMMCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dqsosccfg0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dqsosccfg0 Register
 * DQSOSC Config Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0_s {
		uint32_t dis_dqsosc_srx              : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0 ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210308ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) ody_dssx_ddrctl_regb_ddrc_ch0_dqsosccfg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCCFG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_dqsosctmg0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Dqsosctmg0 Register
 * DQS OSC timing register for DRAM timing set 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0_s {
		uint32_t t_oscs                      : 14;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0 ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021030cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) ody_dssx_ddrctl_regb_ddrc_ch0_dqsosctmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DQSOSCTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ds Dbg Ctrl0 Register
 * PASDS DEBUG CTRL Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0_s {
		uint32_t dbg_bsm_sel_ctrl            : 16;
		uint32_t dbg_lrsm_sel_ctrl           : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0 ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d80ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_ctrl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_CTRL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ds_dbg_stat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ds Dbg Stat0 Register
 * PASDS DEBUG STAT0 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0_s {
		uint32_t dbg_stat0                   : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0 ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d84ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ds_dbg_stat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ds Dbg Stat1 Register
 * PASDS DEBUG STAT1 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1_s {
		uint32_t dbg_stat1                   : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1 ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d88ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ds_dbg_stat2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ds Dbg Stat2 Register
 * PASDS DEBUG STAT2 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2_s {
		uint32_t dbg_stat2                   : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2 ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d8cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ds_dbg_stat3
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ds Dbg Stat3 Register
 * PASDS DEBUG STAT3 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3_s {
		uint32_t dbg_stat3                   : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3 ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d90ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) ody_dssx_ddrctl_regb_ddrc_ch0_ds_dbg_stat3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DS_DBG_STAT3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Cfgbuf Ctrl Register
 * DDR_UTIL config buffer control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl_s {
		uint32_t du_cfgbuf_wdata             : 16;
		uint32_t du_cfgbuf_addr              : 8;
		uint32_t du_cfgbuf_select            : 1;
		uint32_t reserved_25_28              : 4;
		uint32_t du_cfgbuf_op_mode           : 1;
		uint32_t du_cfgbuf_rw_type           : 1;
		uint32_t du_cfgbuf_rw_start          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b24ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Cfgbuf Stat Register
 * DDR_UTIL config buffer status register.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat_s {
		uint32_t du_cfgbuf_rdata             : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b28ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_cfgbuf_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CFGBUF_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Cmdbuf Ctrl Register
 * DDR_UTIL command buffer control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl_s {
		uint32_t du_cmdbuf_wdata             : 16;
		uint32_t du_cmdbuf_addr              : 8;
		uint32_t du_cmdbuf_select            : 1;
		uint32_t reserved_25_28              : 4;
		uint32_t du_cmdbuf_op_mode           : 1;
		uint32_t du_cmdbuf_rw_type           : 1;
		uint32_t du_cmdbuf_rw_start          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b2cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Cmdbuf Stat Register
 * DDR_UTIL command buffer status register.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat_s {
		uint32_t du_cmdbuf_rdata             : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b30ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_cmdbuf_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_CMDBUF_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_dbg_stat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Dbg Stat0 Register
 * PASDU DEBUG STAT0 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0_s {
		uint32_t du_cur_blk_ucode            : 16;
		uint32_t du_cur_blk_addr             : 8;
		uint32_t du_cur_blk_index            : 5;
		uint32_t du_cur_blk_set              : 1;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0 ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d94ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_du_dbg_stat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Du Dbg Stat1 Register
 * PASDU DEBUG STAT1 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1_s {
		uint32_t du_main_fsm_state           : 3;
		uint32_t reserved_3                  : 1;
		uint32_t du_sceu_fsm_state           : 3;
		uint32_t reserved_7                  : 1;
		uint32_t du_mceu_fsm_state           : 3;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1 ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d98ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_du_dbg_stat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_DU_DBG_STAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccbitmask0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccbitmask0 Register
 * ECC Corrected Data Bit Mask Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0_s {
		uint32_t ecc_corr_bit_mask_31_0      : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0 ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210628ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccbitmask1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccbitmask1 Register
 * ECC Corrected Data Bit Mask Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1_s {
		uint32_t ecc_corr_bit_mask_63_32     : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1 ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021062cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccbitmask2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccbitmask2 Register
 * ECC Corrected Data Bit Mask Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2_s {
		uint32_t ecc_corr_bit_mask_71_64     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2 ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210630ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccbitmask2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCBITMASK2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccaddr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccaddr0 Register
 * ECC Corrected Error Address Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_s {
		uint32_t ecc_corr_row                : 18;
		uint32_t reserved_18_23              : 6;
		uint32_t ecc_corr_rank               : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0 ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210614ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccaddr1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccaddr1 Register
 * ECC Corrected Error Address Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_s {
		uint32_t ecc_corr_col                : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t ecc_corr_bank               : 2;
		uint32_t reserved_18_23              : 6;
		uint32_t ecc_corr_bg                 : 3;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1 ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210618ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccdata0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccdata0 Register
 * ECC Corrected Data Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0_s {
		uint32_t ecc_corr_data_31_0          : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0 ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021066cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccdata0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCDATA0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccfg0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccfg0 Register
 * ECC Configuration Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_s {
		uint32_t ecc_mode                    : 3;
		uint32_t test_mode                   : 1;
		uint32_t ecc_type                    : 2;
		uint32_t reserved_6_22               : 17;
		uint32_t dis_scrub                   : 1;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0 ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210600ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccfg1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccfg1 Register
 * ECC Configuration Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_s {
		uint32_t data_poison_en              : 1;
		uint32_t data_poison_bit             : 1;
		uint32_t poison_chip_en              : 1;
		uint32_t reserved_3_14               : 12;
		uint32_t poison_advecc_kbd           : 1;
		uint32_t poison_num_dfi_beat         : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1 ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210604ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccfg2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccfg2 Register
 * ECC Configuration Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2_s {
		uint32_t bypass_internal_ecc         : 1;
		uint32_t kbd_en                      : 1;
		uint32_t reserved_2_15               : 14;
		uint32_t flip_bit_pos0               : 7;
		uint32_t reserved_23                 : 1;
		uint32_t flip_bit_pos1               : 7;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2 ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210668ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccfg2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccsyn0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccsyn0 Register
 * ECC Corrected Syndrome Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0_s {
		uint32_t ecc_corr_syndromes_31_0     : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0 ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021061cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccsyn1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccsyn1 Register
 * ECC Corrected Syndrome Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1_s {
		uint32_t ecc_corr_syndromes_63_32    : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1 ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210620ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecccsyn2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecccsyn2 Register
 * ECC Corrected Syndrome Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2_s {
		uint32_t ecc_corr_syndromes_71_64    : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t cb_corr_syndrome            : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2 ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210624ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecccsyn2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCSYN2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccctl Register
 * ECC Clear Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccctl_s {
		uint32_t ecc_corrected_err_clr       : 1;
		uint32_t ecc_uncorrected_err_clr     : 1;
		uint32_t ecc_corr_err_cnt_clr        : 1;
		uint32_t ecc_uncorr_err_cnt_clr      : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t ecc_corrected_err_intr_en   : 1;
		uint32_t ecc_uncorrected_err_intr_en : 1;
		uint32_t reserved_10_15              : 6;
		uint32_t ecc_corrected_err_intr_force : 1;
		uint32_t ecc_uncorrected_err_intr_force : 1;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccctl ody_dssx_ddrctl_regb_ddrc_ch0_eccctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021060cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccerrcnt
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccerrcnt Register
 * ECC Error Counter Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_s {
		uint32_t ecc_corr_err_cnt            : 16;
		uint32_t ecc_uncorr_err_cnt          : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210610ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccpoisonaddr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccpoisonaddr0 Register
 * ECC Data Poisoning Address Register 0.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0_s {
		uint32_t ecc_poison_col              : 12;
		uint32_t reserved_12_23              : 12;
		uint32_t ecc_poison_rank             : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0 ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210648ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccpoisonaddr1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccpoisonaddr1 Register
 * ECC Data Poisoning Address Register 1.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1_s {
		uint32_t ecc_poison_row              : 18;
		uint32_t reserved_18_23              : 6;
		uint32_t ecc_poison_bank             : 2;
		uint32_t reserved_26_27              : 2;
		uint32_t ecc_poison_bg               : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1 ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021064cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONADDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccpoisonpat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccpoisonpat0 Register
 * ECC Poison Pattern 0 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0_s {
		uint32_t ecc_poison_data_31_0        : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0 ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210658ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccpoisonpat2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccpoisonpat2 Register
 * ECC Poison Pattern 2 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2_s {
		uint32_t ecc_poison_data_71_64       : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2 ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210660ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccpoisonpat2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCPOISONPAT2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccstat Register
 * SECDED ECC Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccstat_s {
		uint32_t ecc_corrected_bit_num       : 7;
		uint32_t reserved_7                  : 1;
		uint32_t ecc_corrected_err           : 8;
		uint32_t ecc_uncorrected_err         : 8;
		uint32_t sbr_read_ecc_ce             : 1;
		uint32_t sbr_read_ecc_ue             : 1;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccstat ody_dssx_ddrctl_regb_ddrc_ch0_eccstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210608ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccsymbol
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccsymbol Register
 * ECC Symbol Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol_s {
		uint32_t ecc_corr_sym_71_64          : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t ecc_uncorr_sym_71_64        : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021067cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccsymbol_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSYMBOL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccuaddr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccuaddr0 Register
 * ECC Uncorrected Error Address Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0_s {
		uint32_t ecc_uncorr_row              : 18;
		uint32_t reserved_18_23              : 6;
		uint32_t ecc_uncorr_rank             : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0 ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210634ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccuaddr1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccuaddr1 Register
 * ECC Uncorrected Error Address Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1_s {
		uint32_t ecc_uncorr_col              : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t ecc_uncorr_bank             : 2;
		uint32_t reserved_18_23              : 6;
		uint32_t ecc_uncorr_bg               : 3;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1 ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210638ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccuaddr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccudata0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccudata0 Register
 * ECC Uncorrected Data Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0_s {
		uint32_t ecc_uncorr_data_31_0        : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0 ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210674ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccudata0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUDATA0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccusyn0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccusyn0 Register
 * ECC Uncorrected Syndrome Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0_s {
		uint32_t ecc_uncorr_syndromes_31_0   : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0 ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021063cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccusyn1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccusyn1 Register
 * ECC Uncorrected Syndrome Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1_s {
		uint32_t ecc_uncorr_syndromes_63_32  : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1 ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210640ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_eccusyn2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Eccusyn2 Register
 * ECC Uncorrected Syndrome Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2_s {
		uint32_t ecc_uncorr_syndromes_71_64  : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t cb_uncorr_syndrome          : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2 ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210644ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) ody_dssx_ddrctl_regb_ddrc_ch0_eccusyn2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUSYN2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecs Stat Dev Sel Register
 * ECS Transparency MRR Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel_s {
		uint32_t target_ecs_mrr_device_idx   : 5;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210af4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_dev_sel_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_DEV_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecs_stat_mr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecs Stat Mr0 Register
 * ECS Transparency MRR Data Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0_s {
		uint32_t ecs_mr16                    : 8;
		uint32_t ecs_mr17                    : 8;
		uint32_t ecs_mr18                    : 8;
		uint32_t ecs_mr19                    : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0 ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210af8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecs_stat_mr1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecs Stat Mr1 Register
 * ECS Transparency MRR Data Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1_s {
		uint32_t ecs_mr20                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1 ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210afcll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecs_stat_mr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECS_STAT_MR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_ecsctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Ecsctl Register
 * ECS Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl_s {
		uint32_t auto_ecs_refab_en           : 2;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210af0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_ecsctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ECSCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_hwlpctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Hwlpctl Register
 * Hardware Low Power Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl_s {
		uint32_t hw_lp_en                    : 1;
		uint32_t hw_lp_exit_idle_en          : 1;
		uint32_t hw_lp_ctrl                  : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210184ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_hwlpctl2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Hwlpctl2 Register
 * Hardware Low Power Control Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2_s {
		uint32_t cactive_in_mask             : 2;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2 ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210188ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) ody_dssx_ddrctl_regb_ddrc_ch0_hwlpctl2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_HWLPCTL2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_inittmg0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Inittmg0 Register
 * SDRAM Initialization Timing Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0_s {
		uint32_t reserved_0_29               : 30;
		uint32_t skip_dram_init              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0 ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d00ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) ody_dssx_ddrctl_regb_ddrc_ch0_inittmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_INITTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lc_dbg_stat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lc Dbg Stat0 Register
 * PASLC DEBUG STAT0 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0_s {
		uint32_t dbg_rank_ctrl_mc_addr_0     : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t dbg_rank_ctrl_mc_code_0     : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0 ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210d9cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lc_dbg_stat1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lc Dbg Stat1 Register
 * PASLC DEBUG STAT1 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1_s {
		uint32_t dbg_rank_ctrl_mc_addr_1     : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t dbg_rank_ctrl_mc_code_1     : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1 ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210da0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lc_dbg_stat4
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lc Dbg Stat4 Register
 * PASLC DEBUG STAT4 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4_s {
		uint32_t dbg_sceu_ctrl_state_sceu_0  : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dbg_mceu_ctrl_state_mceu_0  : 3;
		uint32_t reserved_7                  : 1;
		uint32_t dbg_rank_ctrl_state_rsm_0   : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t dbg_sceu_ctrl_state_sceu_1  : 3;
		uint32_t reserved_19                 : 1;
		uint32_t dbg_mceu_ctrl_state_mceu_1  : 3;
		uint32_t reserved_23                 : 1;
		uint32_t dbg_rank_ctrl_state_rsm_1   : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4 ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210dacll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lc_dbg_stat6
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lc Dbg Stat6 Register
 * PASLC DEBUG STAT6 Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6_s {
		uint32_t dbg_dfi_lp_state_dsm        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dbg_dfi_lp_data_ack         : 1;
		uint32_t dbg_dfi_lp_ctrl_ack         : 1;
		uint32_t reserved_6_7                : 2;
		uint32_t dbg_hw_lp_state_hsm         : 3;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6 ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210db4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) ody_dssx_ddrctl_regb_ddrc_ch0_lc_dbg_stat6_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LC_DBG_STAT6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lp Cmdbuf Ctrl Register
 * Low Power Control command buffer control register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl_s {
		uint32_t lp_cmdbuf_wdata             : 16;
		uint32_t lp_cmdbuf_addr              : 8;
		uint32_t reserved_24_28              : 5;
		uint32_t lp_cmdbuf_op_mode           : 1;
		uint32_t lp_cmdbuf_rw_type           : 1;
		uint32_t lp_cmdbuf_rw_start          : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b34ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Lp Cmdbuf Stat Register
 * Low Power Control command buffer status register.
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat_s {
		uint32_t lp_cmdbuf_rdata             : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b38ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_lp_cmdbuf_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_LP_CMDBUF_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_mstr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Mstr0 Register
 * Master Register0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_mstr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_mstr0_s {
		uint32_t ddr4                        : 1;
		uint32_t reserved_1                  : 1;
		uint32_t ddr5                        : 1;
		uint32_t reserved_3                  : 1;
		uint32_t bank_config                 : 2;
		uint32_t bg_config                   : 2;
		uint32_t burst_mode                  : 1;
		uint32_t burstchop                   : 1;
		uint32_t en_2t_timing_mode           : 1;
		uint32_t reserved_11                 : 1;
		uint32_t data_bus_width              : 2;
		uint32_t reserved_14_15              : 2;
		uint32_t burst_rdwr                  : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t active_ranks                : 2;
		uint32_t reserved_26_29              : 4;
		uint32_t device_config               : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_mstr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_mstr0 ody_dssx_ddrctl_regb_ddrc_ch0_mstr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_mstr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_odtmap
 *
 * DSS Ddrctl Regb Ddrc Ch0 Odtmap Register
 * ODT/Rank Map Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_odtmap {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_odtmap_s {
		uint32_t rank0_wr_odt                : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t rank0_rd_odt                : 2;
		uint32_t reserved_6_7                : 2;
		uint32_t rank1_wr_odt                : 2;
		uint32_t reserved_10_11              : 2;
		uint32_t rank1_rd_odt                : 2;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_odtmap_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_odtmap ody_dssx_ddrctl_regb_ddrc_ch0_odtmap_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c9cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) ody_dssx_ddrctl_regb_ddrc_ch0_odtmap_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ODTMAP(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_opctrl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Opctrl0 Register
 * Operation Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0_s {
		uint32_t dis_wc                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0 ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b80ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_opctrl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_opctrl1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Opctrl1 Register
 * Operation Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1_s {
		uint32_t reserved_0                  : 1;
		uint32_t dis_hif                     : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1 ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b84ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) ody_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_opctrlcam
 *
 * DSS Ddrctl Regb Ddrc Ch0 Opctrlcam Register
 * CAM Operation Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam_s {
		uint32_t dbg_hpr_q_depth             : 7;
		uint32_t reserved_7                  : 1;
		uint32_t dbg_lpr_q_depth             : 7;
		uint32_t reserved_15                 : 1;
		uint32_t dbg_w_q_depth               : 7;
		uint32_t reserved_23                 : 1;
		uint32_t dbg_stall                   : 1;
		uint32_t dbg_rd_q_empty              : 1;
		uint32_t dbg_wr_q_empty              : 1;
		uint32_t reserved_27                 : 1;
		uint32_t rd_data_pipeline_empty      : 1;
		uint32_t wr_data_pipeline_empty      : 1;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b88ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) ody_dssx_ddrctl_regb_ddrc_ch0_opctrlcam_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) "DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRLCAM(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_oprefctrl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Oprefctrl0 Register
 * Refresh Operation Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0_s {
		uint32_t rank0_refresh               : 1;
		uint32_t rank1_refresh               : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0 ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b98ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_oprefctrl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFCTRL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_oprefstat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Oprefstat0 Register
 * Refresh Operation Status Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0_s {
		uint32_t rank0_refresh_busy          : 1;
		uint32_t rank1_refresh_busy          : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0 ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210ba0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_oprefstat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_OPREFSTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl0 Register
 * Phase Aware Schedule Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0_s {
		uint32_t init_done                   : 1;
		uint32_t dbg_st_en                   : 1;
		uint32_t bist_st_en                  : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a00ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl1 Register
 * Phase Aware Schedule Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1_s {
		uint32_t pre_sb_enable               : 1;
		uint32_t pre_ab_enable               : 1;
		uint32_t pre_slot_config             : 2;
		uint32_t reserved_4_11               : 8;
		uint32_t rank_switch_gap_unit_sel    : 1;
		uint32_t mrr_des_timing_unit_sel     : 2;
		uint32_t reserved_15_17              : 3;
		uint32_t selfref_wo_ref_pending      : 1;
		uint32_t dfi_alert_assertion_mode    : 1;
		uint32_t speculative_ref_pri_sel     : 1;
		uint32_t dyn_pre_pri_dis             : 1;
		uint32_t fixed_pre_pri_sel           : 1;
		uint32_t reserved_23                 : 1;
		uint32_t act2rda_cnt_mask            : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a04ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl10
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl10 Register
 * Phase Aware Schedule Control Register 10
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10_s {
		uint32_t rank_blk0_trig              : 1;
		uint32_t rank_blk1_trig              : 1;
		uint32_t rank_blk2_trig              : 1;
		uint32_t rank_blk3_trig              : 1;
		uint32_t rank_blk4_trig              : 1;
		uint32_t rank_blk5_trig              : 1;
		uint32_t rank_blk6_trig              : 1;
		uint32_t rank_blk7_trig              : 1;
		uint32_t rank_blk8_trig              : 1;
		uint32_t rank_blk9_trig              : 1;
		uint32_t rank_blk10_trig             : 1;
		uint32_t rank_blk11_trig             : 1;
		uint32_t rank_blk12_trig             : 1;
		uint32_t rank_blk13_trig             : 1;
		uint32_t rank_blk14_trig             : 1;
		uint32_t rank_blk15_trig             : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a28ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl10_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL10(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl11
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl11 Register
 * Phase Aware Schedule Control Register 11
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11_s {
		uint32_t powerdown_entry_ba_0        : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t powerdown_entry_size_0      : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a2cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl11_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL11(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl12
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl12 Register
 * Phase Aware Schedule Control Register 12
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12_s {
		uint32_t powerdown_exit_ba_0         : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t powerdown_exit_size_0       : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a30ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl12_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL12(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl13
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl13 Register
 * Phase Aware Schedule Control Register 13
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13_s {
		uint32_t powerdown_entry_ba_1        : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t powerdown_entry_size_1      : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a34ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl13_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL13(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl14
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl14 Register
 * Phase Aware Schedule Control Register 14
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14_s {
		uint32_t powerdown_exit_ba_1         : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t powerdown_exit_size_1       : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a38ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl14_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL14(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl19
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl19 Register
 * Phase Aware Schedule Control Register 19
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19_s {
		uint32_t prank0_mode                 : 8;
		uint32_t prank1_mode                 : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a4cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl19_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL19(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl2 Register
 * Phase Aware Schedule Control Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2_s {
		uint32_t dyn_pre_pri_hi_win_size     : 8;
		uint32_t dyn_pre_pri_lo_wait_thr     : 8;
		uint32_t lrank_rd2rd_gap             : 3;
		uint32_t lrank_wr2wr_gap             : 3;
		uint32_t reserved_22_23              : 2;
		uint32_t refsb_hi_wait_thr           : 6;
		uint32_t t_ppd_cnt_en                : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a08ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl20
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl20 Register
 * Phase Aware Schedule Control Register 20
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20_s {
		uint32_t selfref_entry1_ba_0         : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t selfref_entry1_size_0       : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a50ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl20_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL20(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl21
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl21 Register
 * Phase Aware Schedule Control Register 21
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21_s {
		uint32_t selfref_entry2_ba_0         : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t selfref_entry2_size_0       : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a54ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl21_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL21(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl22
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl22 Register
 * Phase Aware Schedule Control Register 22
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22_s {
		uint32_t selfref_exit1_ba_0          : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t selfref_exit1_size_0        : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a58ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl22_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL22(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl23
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl23 Register
 * Phase Aware Schedule Control Register 23
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23_s {
		uint32_t selfref_exit2_ba_0          : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t selfref_exit2_size_0        : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a5cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl23_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL23(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl24
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl24 Register
 * Phase Aware Schedule Control Register 24
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24_s {
		uint32_t rfm_raa_en                  : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t rfm_raa_reset               : 2;
		uint32_t reserved_6_7                : 2;
		uint32_t rfm_raa_use_ecs_refab       : 1;
		uint32_t reserved_9_15               : 7;
		uint32_t rfm_alert_thr               : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a60ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl24_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL24(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl25
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl25 Register
 * Phase Aware Schedule Control Register 25
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25_s {
		uint32_t rfm_cmd_log                 : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a64ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl25_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL25(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl26
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl26 Register
 * Phase Aware Schedule Control Register 26
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26_s {
		uint32_t reserved_0_15               : 16;
		uint32_t capar_retry_size            : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a68ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl26_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL26(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl3
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl3 Register
 * Phase Aware Schedule Control Register 3
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3_s {
		uint32_t dimm_t_dcaw                 : 8;
		uint32_t dimm_n_dcac_m1              : 5;
		uint32_t reserved_13                 : 1;
		uint32_t dimm_dcaw_en                : 2;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a0cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl36
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl36 Register
 * Phase Aware Schedule Control Register 36
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36_s {
		uint32_t powerdown_idle_ctrl_0       : 2;
		uint32_t powerdown_idle_ctrl_1       : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a90ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl36_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL36(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl37
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl37 Register
 * Phase Aware Schedule Control Register 37
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37_s {
		uint32_t dch_sync_mode               : 1;
		uint32_t dch_ch0_mask                : 1;
		uint32_t reserved_2_15               : 14;
		uint32_t t_selfref_exit_stagger      : 5;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a94ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl37_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL37(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl38
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl38 Register
 * Phase Aware Schedule Control Register 38
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38_s {
		uint32_t bwl_win_len                 : 10;
		uint32_t bwl_en_len                  : 10;
		uint32_t reserved_20_29              : 10;
		uint32_t bwl_ctrl                    : 1;
		uint32_t bwl_en                      : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a98ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl38_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL38(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl4
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl4 Register
 * Phase Aware Schedule Control Register 4
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4_s {
		uint32_t ci_mrr_des1                 : 4;
		uint32_t ci_mrr_des2                 : 4;
		uint32_t ci_mrw_des1                 : 4;
		uint32_t ci_mrw_des2                 : 4;
		uint32_t ci_mpc_des1                 : 4;
		uint32_t ci_mpc_des2                 : 4;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a10ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl5
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl5 Register
 * Phase Aware Schedule Control Register 5
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5_s {
		uint32_t base_timer_en               : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a14ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl5_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl6
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl6 Register
 * Phase Aware Schedule Control Register 6
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6_s {
		uint32_t base_timer                  : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a18ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl6_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl7
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl7 Register
 * Phase Aware Schedule Control Register 7
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7_s {
		uint32_t glb_blk0_en                 : 1;
		uint32_t glb_blk1_en                 : 1;
		uint32_t glb_blk2_en                 : 1;
		uint32_t glb_blk3_en                 : 1;
		uint32_t glb_blk4_en                 : 1;
		uint32_t glb_blk5_en                 : 1;
		uint32_t glb_blk6_en                 : 1;
		uint32_t glb_blk7_en                 : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a1cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl7_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL7(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl8
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl8 Register
 * Phase Aware Schedule Control Register 8
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8_s {
		uint32_t rank_blk0_en                : 1;
		uint32_t rank_blk1_en                : 1;
		uint32_t rank_blk2_en                : 1;
		uint32_t rank_blk3_en                : 1;
		uint32_t rank_blk4_en                : 1;
		uint32_t rank_blk5_en                : 1;
		uint32_t rank_blk6_en                : 1;
		uint32_t rank_blk7_en                : 1;
		uint32_t rank_blk8_en                : 1;
		uint32_t rank_blk9_en                : 1;
		uint32_t rank_blk10_en               : 1;
		uint32_t rank_blk11_en               : 1;
		uint32_t rank_blk12_en               : 1;
		uint32_t rank_blk13_en               : 1;
		uint32_t rank_blk14_en               : 1;
		uint32_t rank_blk15_en               : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a20ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl8_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL8(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasctl9
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasctl9 Register
 * Phase Aware Schedule Control Register 9
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9_s {
		uint32_t glb_blk0_trig               : 1;
		uint32_t glb_blk1_trig               : 1;
		uint32_t glb_blk2_trig               : 1;
		uint32_t glb_blk3_trig               : 1;
		uint32_t glb_blk4_trig               : 1;
		uint32_t glb_blk5_trig               : 1;
		uint32_t glb_blk6_trig               : 1;
		uint32_t glb_blk7_trig               : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9 ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210a24ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasctl9_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASCTL9(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_paserrsts
 *
 * DSS Ddrctl Regb Ddrc Ch0 Paserrsts Register
 * Phase Aware Schedule Error Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts_s {
		uint32_t swcmd_err_sts               : 3;
		uint32_t reserved_3                  : 1;
		uint32_t ducmd_err_sts               : 3;
		uint32_t reserved_7                  : 1;
		uint32_t lccmd_err_sts               : 3;
		uint32_t reserved_11                 : 1;
		uint32_t caparcmd_err_sts            : 3;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b20ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) ody_dssx_ddrctl_regb_ddrc_ch0_paserrsts_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASERRSTS(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasint
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasint Register
 * Phase Aware Schedule Interrupt register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasint {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasint_s {
		uint32_t swcmd_err_intr              : 1;
		uint32_t ducmd_err_intr              : 1;
		uint32_t lccmd_err_intr              : 1;
		uint32_t ctrlupd_err_intr            : 1;
		uint32_t rfm_alert_intr              : 1;
		uint32_t caparcmd_err_intr           : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasint_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasint ody_dssx_ddrctl_regb_ddrc_ch0_pasint_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b18ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasint_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASINT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pasintctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pasintctl Register
 * Phase Aware Schedule Interrupt Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl_s {
		uint32_t swcmd_err_intr_en           : 1;
		uint32_t swcmd_err_intr_clr          : 1;
		uint32_t swcmd_err_intr_force        : 1;
		uint32_t reserved_3                  : 1;
		uint32_t ducmd_err_intr_en           : 1;
		uint32_t ducmd_err_intr_clr          : 1;
		uint32_t ducmd_err_intr_force        : 1;
		uint32_t reserved_7                  : 1;
		uint32_t lccmd_err_intr_en           : 1;
		uint32_t lccmd_err_intr_clr          : 1;
		uint32_t lccmd_err_intr_force        : 1;
		uint32_t reserved_11                 : 1;
		uint32_t ctrlupd_err_intr_en         : 1;
		uint32_t ctrlupd_err_intr_clr        : 1;
		uint32_t ctrlupd_err_intr_force      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t rfm_alert_intr_en           : 1;
		uint32_t rfm_alert_intr_clr          : 1;
		uint32_t rfm_alert_intr_force        : 1;
		uint32_t reserved_19                 : 1;
		uint32_t caparcmd_err_intr_en        : 1;
		uint32_t caparcmd_err_intr_clr       : 1;
		uint32_t caparcmd_err_intr_force     : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b1cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_pasintctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PASINTCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_pwrctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Pwrctl Register
 * Low Power Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl_s {
		uint32_t selfref_en                  : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t powerdown_en                : 2;
		uint32_t reserved_6_7                : 2;
		uint32_t actv_pd_en                  : 1;
		uint32_t en_dfi_dram_clk_disable     : 1;
		uint32_t reserved_10                 : 1;
		uint32_t selfref_sw                  : 1;
		uint32_t reserved_12_19              : 8;
		uint32_t mpsm_pd_en                  : 2;
		uint32_t reserved_22_23              : 2;
		uint32_t mpsm_deep_pd_en             : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210180ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_pwrctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_PWRCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rankctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rankctl Register
 * Rank Control Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rankctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rankctl_s {
		uint32_t max_rank_rd                 : 4;
		uint32_t reserved_4_11               : 8;
		uint32_t max_rank_wr                 : 4;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rankctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rankctl ody_dssx_ddrctl_regb_ddrc_ch0_rankctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c90ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_rankctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RANKCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rdcrcerraddr0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rdcrcerraddr0 Register
 * Read CRC Error Address Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0_s {
		uint32_t rd_crc_err_row              : 18;
		uint32_t reserved_18_23              : 6;
		uint32_t rd_crc_err_rank             : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0 ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210830ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rdcrcerraddr1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rdcrcerraddr1 Register
 * Read CRC Error Address Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1_s {
		uint32_t rd_crc_err_col              : 11;
		uint32_t reserved_11_15              : 5;
		uint32_t rd_crc_err_bank             : 2;
		uint32_t reserved_18_23              : 6;
		uint32_t rd_crc_err_bg               : 3;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1 ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210834ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerraddr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRADDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rdcrcerrstat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rdcrcerrstat0 Register
 * Read CRC Error Status Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0_s {
		uint32_t rd_crc_err_max_reached_int_nibble : 20;
		uint32_t reserved_20_30              : 11;
		uint32_t rd_crc_err_max_reached_int  : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0 ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210840ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rdcrcerrstat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RDCRCERRSTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_retryctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Retryctl0 Register
 * Retry Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0_s {
		uint32_t capar_retry_enable          : 1;
		uint32_t rd_ue_retry_enable          : 1;
		uint32_t rd_crc_retry_enable         : 1;
		uint32_t wr_crc_retry_enable         : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t wr_crc_retry_limiter        : 3;
		uint32_t rd_crc_retry_limiter        : 3;
		uint32_t rd_ue_retry_limiter         : 3;
		uint32_t capar_retry_limiter         : 3;
		uint32_t wr_crc_retry_limit_intr_en  : 1;
		uint32_t wr_crc_retry_limit_intr_clr : 1;
		uint32_t wr_crc_retry_limit_intr_force : 1;
		uint32_t rd_retry_limit_intr_en      : 1;
		uint32_t rd_retry_limit_intr_clr     : 1;
		uint32_t rd_retry_limit_intr_force   : 1;
		uint32_t capar_retry_limit_intr_en   : 1;
		uint32_t capar_retry_limit_intr_clr  : 1;
		uint32_t capar_retry_limit_intr_force : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0 ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210890ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_retryctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_retryctl1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Retryctl1 Register
 * Retry Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1_s {
		uint32_t reserved_0_28               : 29;
		uint32_t make_multi_retry_fatl_err   : 1;
		uint32_t dis_capar_selfref_retry     : 1;
		uint32_t dis_capar_powerdown_retry   : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1 ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210894ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) ody_dssx_ddrctl_regb_ddrc_ch0_retryctl1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYCTL1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_retrystat0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Retrystat0 Register
 * CRC retry State register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0_s {
		uint32_t retry_stat                  : 2;
		uint32_t reserved_2_6                : 5;
		uint32_t retry_fifo_fill_level       : 8;
		uint32_t reserved_15                 : 1;
		uint32_t rd_ue_retry_limit_reached   : 1;
		uint32_t rd_crc_retry_limit_reached  : 1;
		uint32_t reserved_18_23              : 6;
		uint32_t capar_fatl_err_code         : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0 ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02108a0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) ody_dssx_ddrctl_regb_ddrc_ch0_retrystat0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RETRYSTAT0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rfshctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rfshctl0 Register
 * Refresh Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0_s {
		uint32_t dis_auto_refresh            : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t refresh_update_level        : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0 ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210208ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rfshctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rfshmod0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rfshmod0 Register
 * Refresh Mode Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0_s {
		uint32_t refresh_burst               : 6;
		uint32_t reserved_6_15               : 10;
		uint32_t mixed_refsb_hi_thr          : 4;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0 ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210200ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rfshmod1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rfshmod1 Register
 * Refresh Mode Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1_s {
		uint32_t same_bank_refresh           : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t tcr_refab_thr               : 3;
		uint32_t reserved_7                  : 1;
		uint32_t fgr_mode                    : 3;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1 ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210204ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) ody_dssx_ddrctl_regb_ddrc_ch0_rfshmod1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RFSHMOD1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rw Cmd Ctrl Register
 * Software Read Write Buffer Command Control
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl_s {
		uint32_t wr_data_cb                  : 8;
		uint32_t wr_data_dq_mask             : 8;
		uint32_t reserved_16_19              : 4;
		uint32_t wr_data_cb_mask             : 1;
		uint32_t data_ecc_sel                : 1;
		uint32_t rw_ecc_en                   : 1;
		uint32_t wr_data_sel                 : 1;
		uint32_t buf_addr                    : 4;
		uint32_t reserved_28_29              : 2;
		uint32_t buf_rw_op_type              : 1;
		uint32_t buf_rw_start                : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b3cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) ody_dssx_ddrctl_regb_ddrc_ch0_rw_cmd_ctrl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_CMD_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rw_rd_data0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rw Rd Data0 Register
 * Software Read Command RD Data Register mapped to DQ[31:0]
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0_s {
		uint32_t rd_data_dq0                 : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0 ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b48ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rw_rd_data1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rw Rd Data1 Register
 * Software Read Command RD Data Register mapped to DQ[63:32]
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1_s {
		uint32_t rd_data_dq1                 : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1 ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b4cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) ody_dssx_ddrctl_regb_ddrc_ch0_rw_rd_data1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_RD_DATA1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rw_wr_data0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rw Wr Data0 Register
 * Software Write Command WR Data Register mapped to DQ[31:0]
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0_s {
		uint32_t wr_data_dq0                 : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0 ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b40ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_rw_wr_data1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Rw Wr Data1 Register
 * Software Write Command WR Data Register mapped to DQ[63:32]
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1_s {
		uint32_t wr_data_dq1                 : 32;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1 ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210b44ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) ody_dssx_ddrctl_regb_ddrc_ch0_rw_wr_data1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_RW_WR_DATA1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_sched0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Sched0 Register
 * Scheduler Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_sched0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_sched0_s {
		uint32_t reserved_0                  : 1;
		uint32_t prefer_write                : 1;
		uint32_t pageclose                   : 1;
		uint32_t reserved_3                  : 1;
		uint32_t opt_wrcam_fill_level        : 1;
		uint32_t dis_opt_ntt_by_act          : 1;
		uint32_t dis_opt_ntt_by_pre          : 1;
		uint32_t autopre_rmw                 : 1;
		uint32_t lpr_num_entries             : 6;
		uint32_t reserved_14_26              : 13;
		uint32_t opt_act_lat                 : 1;
		uint32_t reserved_28_30              : 3;
		uint32_t opt_vprw_sch                : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_sched0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_sched0 ody_dssx_ddrctl_regb_ddrc_ch0_sched0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210380ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) ody_dssx_ddrctl_regb_ddrc_ch0_sched0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_sched1
 *
 * DSS Ddrctl Regb Ddrc Ch0 Sched1 Register
 * Scheduler Control Register 1
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_sched1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_sched1_s {
		uint32_t reserved_0_11               : 12;
		uint32_t delay_switch_write          : 4;
		uint32_t visible_window_limit_wr     : 3;
		uint32_t reserved_19                 : 1;
		uint32_t visible_window_limit_rd     : 3;
		uint32_t reserved_23                 : 1;
		uint32_t page_hit_limit_wr           : 3;
		uint32_t reserved_27                 : 1;
		uint32_t page_hit_limit_rd           : 3;
		uint32_t opt_hit_gt_hpr              : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_sched1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_sched1 ody_dssx_ddrctl_regb_ddrc_ch0_sched1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210384ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) ody_dssx_ddrctl_regb_ddrc_ch0_sched1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_sched3
 *
 * DSS Ddrctl Regb Ddrc Ch0 Sched3 Register
 * Scheduler Control Register 3
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_sched3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_sched3_s {
		uint32_t wrcam_lowthresh             : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t wrcam_highthresh            : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t wr_pghit_num_thresh         : 6;
		uint32_t reserved_22_23              : 2;
		uint32_t rd_pghit_num_thresh         : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_sched3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_sched3 ody_dssx_ddrctl_regb_ddrc_ch0_sched3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021038cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) ody_dssx_ddrctl_regb_ddrc_ch0_sched3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_sched4
 *
 * DSS Ddrctl Regb Ddrc Ch0 Sched4 Register
 * Scheduler Control Register 4
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_sched4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_sched4_s {
		uint32_t rd_act_idle_gap             : 8;
		uint32_t wr_act_idle_gap             : 8;
		uint32_t rd_page_exp_cycles          : 8;
		uint32_t wr_page_exp_cycles          : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_sched4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_sched4 ody_dssx_ddrctl_regb_ddrc_ch0_sched4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210390ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) ody_dssx_ddrctl_regb_ddrc_ch0_sched4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SCHED4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_stat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Stat Register
 * Operating Mode Status Register
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_stat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_stat_s {
		uint32_t operating_mode              : 3;
		uint32_t reserved_3                  : 1;
		uint32_t selfref_type                : 4;
		uint32_t reserved_8_19               : 12;
		uint32_t powerdown_state             : 2;
		uint32_t reserved_22_23              : 2;
		uint32_t mpsm_state                  : 2;
		uint32_t reserved_26_29              : 4;
		uint32_t dfi_lp_state                : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_stat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_stat ody_dssx_ddrctl_regb_ddrc_ch0_stat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210014ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_stat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_STAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_stat2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Stat2 Register
 * Operating Mode Status Register2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_stat2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_stat2_s {
		uint32_t glb_blk_events_ongoing      : 8;
		uint32_t reserved_8_23               : 16;
		uint32_t selfref_ongoing             : 2;
		uint32_t reserved_26_27              : 2;
		uint32_t powerdown_ongoing           : 2;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_stat2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_stat2 ody_dssx_ddrctl_regb_ddrc_ch0_stat2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) ody_dssx_ddrctl_regb_ddrc_ch0_stat2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_STAT2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_stat3
 *
 * DSS Ddrctl Regb Ddrc Ch0 Stat3 Register
 * Operating Mode Status Register3
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_stat3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_stat3_s {
		uint32_t rank_blk_events_ongoing     : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_stat3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_stat3 ody_dssx_ddrctl_regb_ddrc_ch0_stat3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b021001cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) ody_dssx_ddrctl_regb_ddrc_ch0_stat3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) "DSSX_DDRCTL_REGB_DDRC_CH0_STAT3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_STAT3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_swctl
 *
 * DSS Ddrctl Regb Ddrc Ch0 Swctl Register
 * Software Register Programming Control Enable
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_swctl {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_swctl_s {
		uint32_t sw_done                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_swctl_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_swctl ody_dssx_ddrctl_regb_ddrc_ch0_swctl_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c80ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) ody_dssx_ddrctl_regb_ddrc_ch0_swctl_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_swctlstatic
 *
 * DSS Ddrctl Regb Ddrc Ch0 Swctlstatic Register
 * Static Registers Write Enable
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic_s {
		uint32_t sw_static_unlock            : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210ca4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) ody_dssx_ddrctl_regb_ddrc_ch0_swctlstatic_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTLSTATIC(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_swstat
 *
 * DSS Ddrctl Regb Ddrc Ch0 Swstat Register
 * Software Register Programming Control Status
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_swstat {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_swstat_s {
		uint32_t sw_done_ack                 : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_swstat_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_swstat ody_dssx_ddrctl_regb_ddrc_ch0_swstat_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210c84ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) ody_dssx_ddrctl_regb_ddrc_ch0_swstat_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) "DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_SWSTAT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_zqctl0
 *
 * DSS Ddrctl Regb Ddrc Ch0 Zqctl0 Register
 * ZQ Control Register 0
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0_s {
		uint32_t reserved_0_28               : 29;
		uint32_t zq_resistor_shared          : 1;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0 ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210280ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) ody_dssx_ddrctl_regb_ddrc_ch0_zqctl0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_ddrc_ch0_zqctl2
 *
 * DSS Ddrctl Regb Ddrc Ch0 Zqctl2 Register
 * ZQ Control Register 2
 */
union ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2_s {
		uint32_t dis_srx_zqcl                : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2 ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0210288ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) ody_dssx_ddrctl_regb_ddrc_ch0_zqctl2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) "DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_DDRC_CH0_ZQCTL2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_crcpartmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Crcpartmg0 Register
 * CRC Parity Timing 0. The register is defined in term of DRAM clock cycles
 */
union ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0_s {
		uint32_t reserved_0_15               : 16;
		uint32_t t_wr_crc_alert_pw_max       : 10;
		uint32_t reserved_26_27              : 2;
		uint32_t t_wr_crc_alert_pw_min       : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0 ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d14ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_crcpartmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Crcpartmg1 Register
 * CRC Parity Timing 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1_s {
		uint32_t t_csalt                     : 5;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1 ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d18ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_crcpartmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_CRCPARTMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfilptmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfilptmg0 Register
 * DFI Low Power Timing Register 0
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0_s {
		uint32_t dfi_lp_wakeup_pd            : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t dfi_lp_wakeup_sr            : 5;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0 ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02005a0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfilptmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfilptmg1 Register
 * DFI Low Power Timing Register 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1_s {
		uint32_t reserved_0_7                : 8;
		uint32_t dfi_tlp_resp                : 5;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1 ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02005a4ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_dfilptmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFILPTMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfitmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfitmg0 Register
 * DFI Timing Register 0
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0_s {
		uint32_t dfi_tphy_wrlat              : 7;
		uint32_t reserved_7                  : 1;
		uint32_t dfi_tphy_wrdata             : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t dfi_t_rddata_en             : 7;
		uint32_t reserved_23                 : 1;
		uint32_t dfi_t_ctrl_delay            : 5;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0 ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200580ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_dfitmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfitmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfitmg1 Register
 * DFI Timing Register 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1_s {
		uint32_t dfi_t_dram_clk_enable       : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t dfi_t_dram_clk_disable      : 5;
		uint32_t reserved_13_15              : 3;
		uint32_t dfi_t_wrdata_delay          : 5;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1 ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200584ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_dfitmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfitmg2
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfitmg2 Register
 * DFI Timing Register 2
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2_s {
		uint32_t dfi_tphy_wrcslat            : 7;
		uint32_t reserved_7                  : 1;
		uint32_t dfi_tphy_rdcslat            : 7;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2 ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200588ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) ody_dssx_ddrctl_regb_freq0_ch0_dfitmg2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfitmg7
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfitmg7 Register
 * DFI Timing Register 7
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7_s {
		uint32_t dfi_t_2n_mode_delay         : 5;
		uint32_t dfi_t_init_start            : 12;
		uint32_t dfi_t_init_complete         : 15;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7 ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020059cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) ody_dssx_ddrctl_regb_freq0_ch0_dfitmg7_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFITMG7(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dfiupdtmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dfiupdtmg0 Register
 * DFI Update Timing Register 0
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0_s {
		uint32_t dfi_t_ctrlup_min            : 10;
		uint32_t reserved_10_15              : 6;
		uint32_t dfi_t_ctrlup_max            : 10;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0 ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b02005a8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_dfiupdtmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DFIUPDTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg0 Register
 * SDRAM Timing Register 0 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0_s {
		uint32_t t_ras_min                   : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t t_faw                       : 8;
		uint32_t wr2pre                      : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg1 Register
 * SDRAM Timing Register 1 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1_s {
		uint32_t t_rc                        : 8;
		uint32_t rd2pre                      : 8;
		uint32_t t_xp                        : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200004ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg13
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg13 Register
 * SDRAM Timing Register 13 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13_s {
		uint32_t t_ppd                       : 4;
		uint32_t t_ccd_w2                    : 8;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200034ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg13_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG13(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg15
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg15 Register
 * SDRAM Timing Register 15 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15_s {
		uint32_t t_stab_x32                  : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020003cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg15_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG15(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg18
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg18 Register
 * SDRAM Timing Register 18 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18_s {
		uint32_t reserved_0_15               : 16;
		uint32_t t_mpsmx                     : 7;
		uint32_t reserved_23                 : 1;
		uint32_t t_pd                        : 7;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200048ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg18_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG18(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg2
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg2 Register
 * SDRAM Timing Register 2 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2_s {
		uint32_t wr2rd                       : 8;
		uint32_t rd2wr                       : 8;
		uint32_t read_latency                : 7;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg2_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg20
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg20 Register
 * SDRAM Timing Register 20 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20_s {
		uint32_t t_csl_srexit                : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t t_csh_srexit                : 7;
		uint32_t reserved_15                 : 1;
		uint32_t t_casrx                     : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t t_cpded                     : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200050ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg20_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG20(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg21
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg21 Register
 * SDRAM Timing Register 21 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21_s {
		uint32_t reserved_0_13               : 14;
		uint32_t t_mpc_hold                  : 3;
		uint32_t t_mpc_setup                 : 3;
		uint32_t t_mpc_cs                    : 5;
		uint32_t t_csl                       : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200054ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg21_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG21(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg22
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg22 Register
 * SDRAM Timing Register 22 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22_s {
		uint32_t t_rd2wr_dpr                 : 7;
		uint32_t t_rd2wr_dlr                 : 7;
		uint32_t t_wr2rd_dpr                 : 8;
		uint32_t t_wr2rd_dlr                 : 8;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200058ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg22_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG22(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg26
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg26 Register
 * SDRAM Timing Register 26 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26_s {
		uint32_t t_ccd_r                     : 8;
		uint32_t t_ccd_w                     : 8;
		uint32_t t_ccd_r_s                   : 8;
		uint32_t t_ccd_w_s                   : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200068ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg26_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG26(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg27
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg27 Register
 * SDRAM Timing Register 27 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27_s {
		uint32_t t_mrr2mpc                   : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t t_ecsc                      : 9;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020006cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg27_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG27(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg28
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg28 Register
 * SDRAM Timing Register 28 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28_s {
		uint32_t t_srx2srx                   : 7;
		uint32_t reserved_7                  : 1;
		uint32_t t_cpded2srx                 : 7;
		uint32_t reserved_15                 : 1;
		uint32_t t_cssr                      : 7;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200070ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg28_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG28(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg29
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg29 Register
 * SDRAM Timing Register 29 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29_s {
		uint32_t reserved_0_15               : 16;
		uint32_t t_ckact                     : 6;
		uint32_t reserved_22_23              : 2;
		uint32_t t_ckoff                     : 7;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200074ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg29_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG29(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg3
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg3 Register
 * SDRAM Timing Register 3 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3_s {
		uint32_t reserved_0_15               : 16;
		uint32_t t_mr                        : 7;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020000cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg31
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg31 Register
 * SDRAM Timing Register 31 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31_s {
		uint32_t rfm_raaimt                  : 7;
		uint32_t reserved_7_8                : 2;
		uint32_t rfm_raa_thr                 : 9;
		uint32_t reserved_18                 : 1;
		uint32_t rfm_raa_ref_decr            : 2;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020007cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg31_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG31(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg4
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg4 Register
 * SDRAM Timing Register 4 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4_s {
		uint32_t t_rp                        : 7;
		uint32_t reserved_7                  : 1;
		uint32_t t_rrd                       : 6;
		uint32_t reserved_14_23              : 10;
		uint32_t t_rcd                       : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg5
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg5 Register
 * SDRAM Timing Register 5 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5_s {
		uint32_t reserved_0_15               : 16;
		uint32_t t_cksre                     : 7;
		uint32_t reserved_23                 : 1;
		uint32_t t_cksrx                     : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200014ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg5_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg8
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg8 Register
 * SDRAM Timing Register 8 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8_s {
		uint32_t t_xs_x32                    : 7;
		uint32_t reserved_7                  : 1;
		uint32_t t_xs_dll_x32                : 7;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200020ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg8_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG8(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_dramset1tmg9
 *
 * DSS Ddrctl Regb Freq0 Ch0 Dramset1tmg9 Register
 * SDRAM Timing Register 9 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9_s {
		uint32_t wr2rd_s                     : 8;
		uint32_t t_rrd_s                     : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9 ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200024ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) ody_dssx_ddrctl_regb_freq0_ch0_dramset1tmg9_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_DRAMSET1TMG9(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_ecsset1tmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Ecsset1tmg0 Register
 * ECS Timing Register 0 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0_s {
		uint32_t t_ecs_int_x1024             : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t t_refi_ecs_offset_x1_x32    : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0 ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200640ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_ecsset1tmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ECSSET1TMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_hwlptmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Hwlptmg0 Register
 * Hardware Low Power Control Register
 */
union ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0_s {
		uint32_t reserved_0_15               : 16;
		uint32_t hw_lp_idle_x32              : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0 ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200b80ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_hwlptmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_HWLPTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_perfhpr1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Perfhpr1 Register
 * High Priority Read CAM Register 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1_s {
		uint32_t hpr_max_starve              : 16;
		uint32_t reserved_16_23              : 8;
		uint32_t hpr_xact_run_length         : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1 ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200c80ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) ody_dssx_ddrctl_regb_freq0_ch0_perfhpr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFHPR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_perflpr1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Perflpr1 Register
 * Low Priority Read CAM Register 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_perflpr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_perflpr1_s {
		uint32_t lpr_max_starve              : 16;
		uint32_t reserved_16_23              : 8;
		uint32_t lpr_xact_run_length         : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_perflpr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_perflpr1 ody_dssx_ddrctl_regb_freq0_ch0_perflpr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200c84ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) ody_dssx_ddrctl_regb_freq0_ch0_perflpr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFLPR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_perfwr1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Perfwr1 Register
 * Write CAM Register 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_perfwr1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_perfwr1_s {
		uint32_t w_max_starve                : 16;
		uint32_t reserved_16_23              : 8;
		uint32_t w_xact_run_length           : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_perfwr1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_perfwr1 ody_dssx_ddrctl_regb_freq0_ch0_perfwr1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200c88ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) ody_dssx_ddrctl_regb_freq0_ch0_perfwr1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PERFWR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_pwrtmg
 *
 * DSS Ddrctl Regb Freq0 Ch0 Pwrtmg Register
 * Low Power Timing Register
 */
union ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg_s {
		uint32_t powerdown_to_x32            : 7;
		uint32_t reserved_7_15               : 9;
		uint32_t selfref_to_x32              : 10;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d0cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) ody_dssx_ddrctl_regb_freq0_ch0_pwrtmg_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_PWRTMG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rank_switch_timing_control0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rank Switch Timing Control0 Register
 * Rank Switching Timing Control 0.
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0_s {
		uint32_t t_rd2rd_gap_r0r1            : 4;
		uint32_t t_rd2rd_gap_r1r0            : 4;
		uint32_t t_wr2rd_gap_r0r1            : 4;
		uint32_t t_wr2rd_gap_r1r0            : 4;
		uint32_t t_rd2wr_gap_r0r1            : 4;
		uint32_t t_rd2wr_gap_r1r0            : 4;
		uint32_t t_wr2wr_gap_r0r1            : 4;
		uint32_t t_wr2wr_gap_r1r0            : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0 ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200400ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) ody_dssx_ddrctl_regb_freq0_ch0_rank_switch_timing_control0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RANK_SWITCH_TIMING_CONTROL0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_retrytmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Retrytmg0 Register
 * RETRY Timing 0
 */
union ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0_s {
		uint32_t capar_retry_window          : 6;
		uint32_t reserved_6_15               : 10;
		uint32_t t_wr_crc_retry_window       : 9;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0 ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d20ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_retrytmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_retrytmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Retrytmg1 Register
 * RETRY Timing 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1_s {
		uint32_t dfi_t_phy_rdlat             : 8;
		uint32_t extra_rd_retry_window       : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t retry_add_rd_lat            : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t retry_add_rd_lat_en         : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1 ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d24ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_retrytmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RETRYTMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg0 Register
 * Refresh Timing Register 0 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0_s {
		uint32_t t_refi_x1_x32               : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t refresh_to_x1_x32           : 6;
		uint32_t reserved_22_23              : 2;
		uint32_t refresh_margin              : 4;
		uint32_t reserved_28_30              : 3;
		uint32_t t_refi_x1_sel               : 1;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200600ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg1
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg1 Register
 * Refresh Timing Register 1 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1_s {
		uint32_t t_rfc_min                   : 12;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200604ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg1_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg10
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg10 Register
 * Refresh Timing Register 10 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10_s {
		uint32_t t_win_size_1xtrefi          : 12;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200628ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg10_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG10(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg3
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg3 Register
 * Refresh Timing Register 3 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3_s {
		uint32_t t_rfcsb                     : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t t_refsbrd                   : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b020060cll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg3_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg4
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg4 Register
 * Refresh Timing Register 4 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4_s {
		uint32_t refresh_timer0_start_value_x32 : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t refresh_timer1_start_value_x32 : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200610ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg4_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_rfshset1tmg9
 *
 * DSS Ddrctl Regb Freq0 Ch0 Rfshset1tmg9 Register
 * Refresh Timing Register 9 belonging to Timing Set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9_s {
		uint32_t refab_hi_sch_gap            : 13;
		uint32_t reserved_13_15              : 3;
		uint32_t refsb_hi_sch_gap            : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9 ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200624ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) ody_dssx_ddrctl_regb_freq0_ch0_rfshset1tmg9_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_RFSHSET1TMG9(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_schedtmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Schedtmg0 Register
 * Scheduler Control Register
 */
union ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0_s {
		uint32_t pageclose_timer             : 8;
		uint32_t rdwr_idle_gap               : 7;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0 ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200c00ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_schedtmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_SCHEDTMG0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_tmgcfg
 *
 * DSS Ddrctl Regb Freq0 Ch0 Tmgcfg Register
 * Timing Configuration Register
 */
union ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg_s {
		uint32_t frequency_ratio             : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200d00ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) ody_dssx_ddrctl_regb_freq0_ch0_tmgcfg_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_TMGCFG(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dss#_ddrctl_regb_freq0_ch0_zqset1tmg0
 *
 * DSS Ddrctl Regb Freq0 Ch0 Zqset1tmg0 Register
 * ZQ Timing Register 0 belonging to DRAM ZQ timing set 1
 */
union ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0 {
	uint32_t u;
	struct ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0_s {
		uint32_t t_zq_long_nop               : 14;
		uint32_t reserved_14_15              : 2;
		uint32_t t_zq_short_nop              : 10;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0_s cn; */
};
typedef union ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0 ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0_t;

static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0200800ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) ody_dssx_ddrctl_regb_freq0_ch0_zqset1tmg0_t
#define bustype_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) "DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0"
#define device_bar_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) (a)
#define arguments_ODY_DSSX_DDRCTL_REGB_FREQ0_CH0_ZQSET1TMG0(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_early_reset_n
 *
 * DSS Early reset Register
 * Soft early reset.
 */
union ody_dssx_early_reset_n {
	uint64_t u;
	struct ody_dssx_early_reset_n_s {
		uint64_t s_early_reset_n             : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_early_reset_n_s cn; */
};
typedef union ody_dssx_early_reset_n ody_dssx_early_reset_n_t;

static inline uint64_t ODY_DSSX_EARLY_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_EARLY_RESET_N(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000068ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_EARLY_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_EARLY_RESET_N(a) ody_dssx_early_reset_n_t
#define bustype_ODY_DSSX_EARLY_RESET_N(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_EARLY_RESET_N(a) "DSSX_EARLY_RESET_N"
#define device_bar_ODY_DSSX_EARLY_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_EARLY_RESET_N(a) (a)
#define arguments_ODY_DSSX_EARLY_RESET_N(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_fill_lvl_cnt_cfg#
 *
 * DSS Performance Counters accumulative Occupancy Level Configuration Register
 * Configuration register of internal memory controller FIFOs.
 * This register is responsible of choosing the FIFO to be counted.
 * Note: SW should set only one FIFO to be counted! If more than one is chosen, then
 * the design will choose first one!
 */
union ody_dssx_fill_lvl_cnt_cfgx {
	uint64_t u;
	struct ody_dssx_fill_lvl_cnt_cfgx_s {
		uint64_t chb_link_rxreq_flitq        : 1;
		uint64_t chb_link_rxdat_flitq        : 1;
		uint64_t chb_link_txdat_flitq        : 1;
		uint64_t chb_tran_txrsp_dbid         : 1;
		uint64_t chb_tran_txrsp_retryack     : 1;
		uint64_t chb_tran_txrsp_pcrdgrant    : 1;
		uint64_t chb_tran_txrsp_readreceipt  : 1;
		uint64_t chb_tran_txrsp_comp_resp    : 1;
		uint64_t chb_tran_rpq_lpr            : 1;
		uint64_t chb_tran_rpq_hpr            : 1;
		uint64_t chb_tran_rpq_vpr            : 1;
		uint64_t chb_tran_wpq                : 1;
		uint64_t chb_tran_rtlst_lpr          : 1;
		uint64_t chb_tran_rtlst_vpr          : 1;
		uint64_t chb_tran_rtlst_hpr          : 1;
		uint64_t chb_tran_rtlst_npw          : 1;
		uint64_t chb_tran_rtlst_vpw          : 1;
		uint64_t chb_tran_hif_wr_crd         : 1;
		uint64_t chb_tran_hif_lpr_crd        : 1;
		uint64_t chb_tran_hif_hpr_crd        : 1;
		uint64_t chb_tran_wr_pcrd_cnt        : 1;
		uint64_t chb_tran_rd_pcrd_cnt        : 1;
		uint64_t reserved_22_60              : 39;
		uint64_t interrupt_en                : 1;
		uint64_t wrap_value                  : 1;
		uint64_t cnt_en                      : 1;
	} s;
	/* struct ody_dssx_fill_lvl_cnt_cfgx_s cn; */
};
typedef union ody_dssx_fill_lvl_cnt_cfgx ody_dssx_fill_lvl_cnt_cfgx_t;

static inline uint64_t ODY_DSSX_FILL_LVL_CNT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_FILL_LVL_CNT_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 2))
		return 0x87e1b0008418ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_FILL_LVL_CNT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) ody_dssx_fill_lvl_cnt_cfgx_t
#define bustype_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) "DSSX_FILL_LVL_CNT_CFGX"
#define device_bar_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) (a)
#define arguments_ODY_DSSX_FILL_LVL_CNT_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_fill_lvl_cnt_clr
 *
 * Performance Counters Fill Level Clear Register
 * This register is used to clear fill level counters.
 */
union ody_dssx_fill_lvl_cnt_clr {
	uint64_t u;
	struct ody_dssx_fill_lvl_cnt_clr_s {
		uint64_t gen_fill_level_cnt_clr      : 3;
		uint64_t txrsp_fill_level_cnt_clr    : 1;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dssx_fill_lvl_cnt_clr_s cn; */
};
typedef union ody_dssx_fill_lvl_cnt_clr ody_dssx_fill_lvl_cnt_clr_t;

static inline uint64_t ODY_DSSX_FILL_LVL_CNT_CLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_FILL_LVL_CNT_CLR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00086c8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_FILL_LVL_CNT_CLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_FILL_LVL_CNT_CLR(a) ody_dssx_fill_lvl_cnt_clr_t
#define bustype_ODY_DSSX_FILL_LVL_CNT_CLR(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_FILL_LVL_CNT_CLR(a) "DSSX_FILL_LVL_CNT_CLR"
#define device_bar_ODY_DSSX_FILL_LVL_CNT_CLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_FILL_LVL_CNT_CLR(a) (a)
#define arguments_ODY_DSSX_FILL_LVL_CNT_CLR(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_fill_lvl_cnt_ovrflw#
 *
 * Performance Counters Fill Level overflow indication Register
 * This register indicates if the corresponding counter overflowed.
 */
union ody_dssx_fill_lvl_cnt_ovrflwx {
	uint64_t u;
	struct ody_dssx_fill_lvl_cnt_ovrflwx_s {
		uint64_t counter_overflow            : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_fill_lvl_cnt_ovrflwx_s cn; */
};
typedef union ody_dssx_fill_lvl_cnt_ovrflwx ody_dssx_fill_lvl_cnt_ovrflwx_t;

static inline uint64_t ODY_DSSX_FILL_LVL_CNT_OVRFLWX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_FILL_LVL_CNT_OVRFLWX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 2))
		return 0x87e1b0008600ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_FILL_LVL_CNT_OVRFLWX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) ody_dssx_fill_lvl_cnt_ovrflwx_t
#define bustype_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) "DSSX_FILL_LVL_CNT_OVRFLWX"
#define device_bar_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) (a)
#define arguments_ODY_DSSX_FILL_LVL_CNT_OVRFLWX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_fill_lvl_cnt_val#
 *
 * Performance Counters Fill Level Value Register
 * Count of Accumulative occupancy level of chosen internal memory controller FIFOs.
 */
union ody_dssx_fill_lvl_cnt_valx {
	uint64_t u;
	struct ody_dssx_fill_lvl_cnt_valx_s {
		uint64_t counter_value               : 64;
	} s;
	/* struct ody_dssx_fill_lvl_cnt_valx_s cn; */
};
typedef union ody_dssx_fill_lvl_cnt_valx ody_dssx_fill_lvl_cnt_valx_t;

static inline uint64_t ODY_DSSX_FILL_LVL_CNT_VALX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_FILL_LVL_CNT_VALX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 2))
		return 0x87e1b0008500ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_FILL_LVL_CNT_VALX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) ody_dssx_fill_lvl_cnt_valx_t
#define bustype_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) "DSSX_FILL_LVL_CNT_VALX"
#define device_bar_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) (a)
#define arguments_ODY_DSSX_FILL_LVL_CNT_VALX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_int_ena_w1c
 *
 * DSS Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_dssx_int_ena_w1c {
	uint64_t u;
	struct ody_dssx_int_ena_w1c_s {
		uint64_t ctrlupd_err_intr            : 1;
		uint64_t derate_temp_limit_intr      : 1;
		uint64_t ducmd_err_intr              : 1;
		uint64_t ecc_corrected_err_intr      : 1;
		uint64_t ecc_uncorrected_err_intr    : 1;
		uint64_t lccmd_err_intr              : 1;
		uint64_t wr_crc_err_max_reached_intr : 1;
		uint64_t rd_crc_err_max_reached_intr : 1;
		uint64_t swcmd_err_intr              : 1;
		uint64_t wr_crc_err_intr             : 1;
		uint64_t capar_err_max_reached_intr  : 1;
		uint64_t capar_err_intr              : 1;
		uint64_t rfm_alert_intr              : 1;
		uint64_t msh_dss_dat_chk_error_intr  : 1;
		uint64_t msh_dss_req_chk_error_intr  : 1;
		uint64_t rd_retry_limit_intr         : 1;
		uint64_t wr_crc_retry_limit_intr     : 1;
		uint64_t sbr_done_intr               : 1;
		uint64_t dwc_ddrphy_int              : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_dbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_dbe_intr : 1;
		uint64_t dss_chb_rt_ecc_sbe_intr     : 1;
		uint64_t dss_chb_rt_ecc_dbe_intr     : 1;
		uint64_t dss_wdata_ram_ecc_sbe_intr  : 1;
		uint64_t dss_wdata_ram_ecc_dbe_intr  : 1;
		uint64_t dss_chb_wrb_lo_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_lo_ecc_dbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_dbe_intr : 1;
		uint64_t capar_retry_limit_reached_intr : 1;
		uint64_t capar_fatl_err_intr         : 1;
		uint64_t caparcmd_err_intr           : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dssx_int_ena_w1c_s cn; */
};
typedef union ody_dssx_int_ena_w1c ody_dssx_int_ena_w1c_t;

static inline uint64_t ODY_DSSX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_INT_ENA_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_INT_ENA_W1C(a) ody_dssx_int_ena_w1c_t
#define bustype_ODY_DSSX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_INT_ENA_W1C(a) "DSSX_INT_ENA_W1C"
#define device_bar_ODY_DSSX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_INT_ENA_W1C(a) (a)
#define arguments_ODY_DSSX_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_int_ena_w1s
 *
 * DSS Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_dssx_int_ena_w1s {
	uint64_t u;
	struct ody_dssx_int_ena_w1s_s {
		uint64_t ctrlupd_err_intr            : 1;
		uint64_t derate_temp_limit_intr      : 1;
		uint64_t ducmd_err_intr              : 1;
		uint64_t ecc_corrected_err_intr      : 1;
		uint64_t ecc_uncorrected_err_intr    : 1;
		uint64_t lccmd_err_intr              : 1;
		uint64_t wr_crc_err_max_reached_intr : 1;
		uint64_t rd_crc_err_max_reached_intr : 1;
		uint64_t swcmd_err_intr              : 1;
		uint64_t wr_crc_err_intr             : 1;
		uint64_t capar_err_max_reached_intr  : 1;
		uint64_t capar_err_intr              : 1;
		uint64_t rfm_alert_intr              : 1;
		uint64_t msh_dss_dat_chk_error_intr  : 1;
		uint64_t msh_dss_req_chk_error_intr  : 1;
		uint64_t rd_retry_limit_intr         : 1;
		uint64_t wr_crc_retry_limit_intr     : 1;
		uint64_t sbr_done_intr               : 1;
		uint64_t dwc_ddrphy_int              : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_dbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_dbe_intr : 1;
		uint64_t dss_chb_rt_ecc_sbe_intr     : 1;
		uint64_t dss_chb_rt_ecc_dbe_intr     : 1;
		uint64_t dss_wdata_ram_ecc_sbe_intr  : 1;
		uint64_t dss_wdata_ram_ecc_dbe_intr  : 1;
		uint64_t dss_chb_wrb_lo_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_lo_ecc_dbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_dbe_intr : 1;
		uint64_t capar_retry_limit_reached_intr : 1;
		uint64_t capar_fatl_err_intr         : 1;
		uint64_t caparcmd_err_intr           : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dssx_int_ena_w1s_s cn; */
};
typedef union ody_dssx_int_ena_w1s ody_dssx_int_ena_w1s_t;

static inline uint64_t ODY_DSSX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_INT_ENA_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_INT_ENA_W1S(a) ody_dssx_int_ena_w1s_t
#define bustype_ODY_DSSX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_INT_ENA_W1S(a) "DSSX_INT_ENA_W1S"
#define device_bar_ODY_DSSX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_INT_ENA_W1S(a) (a)
#define arguments_ODY_DSSX_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_int_w1c
 *
 * DSS Interrupt Register
 * This register is for DSS-based interrupts.
 */
union ody_dssx_int_w1c {
	uint64_t u;
	struct ody_dssx_int_w1c_s {
		uint64_t ctrlupd_err_intr            : 1;
		uint64_t derate_temp_limit_intr      : 1;
		uint64_t ducmd_err_intr              : 1;
		uint64_t ecc_corrected_err_intr      : 1;
		uint64_t ecc_uncorrected_err_intr    : 1;
		uint64_t lccmd_err_intr              : 1;
		uint64_t wr_crc_err_max_reached_intr : 1;
		uint64_t rd_crc_err_max_reached_intr : 1;
		uint64_t swcmd_err_intr              : 1;
		uint64_t wr_crc_err_intr             : 1;
		uint64_t capar_err_max_reached_intr  : 1;
		uint64_t capar_err_intr              : 1;
		uint64_t rfm_alert_intr              : 1;
		uint64_t msh_dss_dat_chk_error_intr  : 1;
		uint64_t msh_dss_req_chk_error_intr  : 1;
		uint64_t rd_retry_limit_intr         : 1;
		uint64_t wr_crc_retry_limit_intr     : 1;
		uint64_t sbr_done_intr               : 1;
		uint64_t dwc_ddrphy_int              : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_dbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_dbe_intr : 1;
		uint64_t dss_chb_rt_ecc_sbe_intr     : 1;
		uint64_t dss_chb_rt_ecc_dbe_intr     : 1;
		uint64_t dss_wdata_ram_ecc_sbe_intr  : 1;
		uint64_t dss_wdata_ram_ecc_dbe_intr  : 1;
		uint64_t dss_chb_wrb_lo_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_lo_ecc_dbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_dbe_intr : 1;
		uint64_t capar_retry_limit_reached_intr : 1;
		uint64_t capar_fatl_err_intr         : 1;
		uint64_t caparcmd_err_intr           : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dssx_int_w1c_s cn; */
};
typedef union ody_dssx_int_w1c ody_dssx_int_w1c_t;

static inline uint64_t ODY_DSSX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_INT_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_INT_W1C(a) ody_dssx_int_w1c_t
#define bustype_ODY_DSSX_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_INT_W1C(a) "DSSX_INT_W1C"
#define device_bar_ODY_DSSX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_INT_W1C(a) (a)
#define arguments_ODY_DSSX_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_int_w1s
 *
 * DSS Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_dssx_int_w1s {
	uint64_t u;
	struct ody_dssx_int_w1s_s {
		uint64_t ctrlupd_err_intr            : 1;
		uint64_t derate_temp_limit_intr      : 1;
		uint64_t ducmd_err_intr              : 1;
		uint64_t ecc_corrected_err_intr      : 1;
		uint64_t ecc_uncorrected_err_intr    : 1;
		uint64_t lccmd_err_intr              : 1;
		uint64_t wr_crc_err_max_reached_intr : 1;
		uint64_t rd_crc_err_max_reached_intr : 1;
		uint64_t swcmd_err_intr              : 1;
		uint64_t wr_crc_err_intr             : 1;
		uint64_t capar_err_max_reached_intr  : 1;
		uint64_t capar_err_intr              : 1;
		uint64_t rfm_alert_intr              : 1;
		uint64_t msh_dss_dat_chk_error_intr  : 1;
		uint64_t msh_dss_req_chk_error_intr  : 1;
		uint64_t rd_retry_limit_intr         : 1;
		uint64_t wr_crc_retry_limit_intr     : 1;
		uint64_t sbr_done_intr               : 1;
		uint64_t dwc_ddrphy_int              : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_lo_ecc_dbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_sbe_intr : 1;
		uint64_t dss_wr_crc_ret_hi_ecc_dbe_intr : 1;
		uint64_t dss_chb_rt_ecc_sbe_intr     : 1;
		uint64_t dss_chb_rt_ecc_dbe_intr     : 1;
		uint64_t dss_wdata_ram_ecc_sbe_intr  : 1;
		uint64_t dss_wdata_ram_ecc_dbe_intr  : 1;
		uint64_t dss_chb_wrb_lo_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_sbe_intr : 1;
		uint64_t dss_chb_wrb_lo_ecc_dbe_intr : 1;
		uint64_t dss_chb_wrb_hi_ecc_dbe_intr : 1;
		uint64_t capar_retry_limit_reached_intr : 1;
		uint64_t capar_fatl_err_intr         : 1;
		uint64_t caparcmd_err_intr           : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dssx_int_w1s_s cn; */
};
typedef union ody_dssx_int_w1s ody_dssx_int_w1s_t;

static inline uint64_t ODY_DSSX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_INT_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_INT_W1S(a) ody_dssx_int_w1s_t
#define bustype_ODY_DSSX_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_INT_W1S(a) "DSSX_INT_W1S"
#define device_bar_ODY_DSSX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_INT_W1S(a) (a)
#define arguments_ODY_DSSX_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_calc_ctrl
 *
 * DSS latency calculation control Register
 * Control register for read/write commands latency calculator.
 */
union ody_dssx_lat_calc_ctrl {
	uint64_t u;
	struct ody_dssx_lat_calc_ctrl_s {
		uint64_t wr_latency_calc_enable      : 1;
		uint64_t rd_latency_calc_enable      : 1;
		uint64_t latch_latency_registers     : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dssx_lat_calc_ctrl_s cn; */
};
typedef union ody_dssx_lat_calc_ctrl ody_dssx_lat_calc_ctrl_t;

static inline uint64_t ODY_DSSX_LAT_CALC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_CALC_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008300ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_CALC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_CALC_CTRL(a) ody_dssx_lat_calc_ctrl_t
#define bustype_ODY_DSSX_LAT_CALC_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_CALC_CTRL(a) "DSSX_LAT_CALC_CTRL"
#define device_bar_ODY_DSSX_LAT_CALC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_CALC_CTRL(a) (a)
#define arguments_ODY_DSSX_LAT_CALC_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_num_rd_req_hi
 *
 * DSS number read requests Register
 * Status register indicating number of total issued read requests to DSS.
 * Total number of read requests is {DSS_LAT_NUM_RD_REQ_HI, DSS_LAT_NUM_RD_REQ_LO}.
 */
union ody_dssx_lat_num_rd_req_hi {
	uint64_t u;
	struct ody_dssx_lat_num_rd_req_hi_s {
		uint64_t lat_num_rd_req_hi           : 64;
	} s;
	/* struct ody_dssx_lat_num_rd_req_hi_s cn; */
};
typedef union ody_dssx_lat_num_rd_req_hi ody_dssx_lat_num_rd_req_hi_t;

static inline uint64_t ODY_DSSX_LAT_NUM_RD_REQ_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_NUM_RD_REQ_HI(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008310ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_NUM_RD_REQ_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) ody_dssx_lat_num_rd_req_hi_t
#define bustype_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) "DSSX_LAT_NUM_RD_REQ_HI"
#define device_bar_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) (a)
#define arguments_ODY_DSSX_LAT_NUM_RD_REQ_HI(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_num_rd_req_lo
 *
 * DSS number read requests Register
 * Status register indicating number of total issued read requests to DSS.
 * Total number of read requests is {DSS_LAT_NUM_RD_REQ_HI, DSS_LAT_NUM_RD_REQ_LO}.
 */
union ody_dssx_lat_num_rd_req_lo {
	uint64_t u;
	struct ody_dssx_lat_num_rd_req_lo_s {
		uint64_t lat_num_rd_req_lo           : 64;
	} s;
	/* struct ody_dssx_lat_num_rd_req_lo_s cn; */
};
typedef union ody_dssx_lat_num_rd_req_lo ody_dssx_lat_num_rd_req_lo_t;

static inline uint64_t ODY_DSSX_LAT_NUM_RD_REQ_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_NUM_RD_REQ_LO(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008308ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_NUM_RD_REQ_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) ody_dssx_lat_num_rd_req_lo_t
#define bustype_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) "DSSX_LAT_NUM_RD_REQ_LO"
#define device_bar_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) (a)
#define arguments_ODY_DSSX_LAT_NUM_RD_REQ_LO(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_num_wr_req_hi
 *
 * DSS number write requests Register
 * Status register indicating number of total issued write requests to DSS.
 * Total number of read requests is {DSS_LAT_NUM_WR_REQ_HI, DSS_LAT_NUM_WR_REQ_LO}.
 */
union ody_dssx_lat_num_wr_req_hi {
	uint64_t u;
	struct ody_dssx_lat_num_wr_req_hi_s {
		uint64_t lat_num_wr_req_hi           : 64;
	} s;
	/* struct ody_dssx_lat_num_wr_req_hi_s cn; */
};
typedef union ody_dssx_lat_num_wr_req_hi ody_dssx_lat_num_wr_req_hi_t;

static inline uint64_t ODY_DSSX_LAT_NUM_WR_REQ_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_NUM_WR_REQ_HI(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008320ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_NUM_WR_REQ_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) ody_dssx_lat_num_wr_req_hi_t
#define bustype_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) "DSSX_LAT_NUM_WR_REQ_HI"
#define device_bar_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) (a)
#define arguments_ODY_DSSX_LAT_NUM_WR_REQ_HI(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_num_wr_req_lo
 *
 * DSS number write requests Register
 * Status register indicating number of total issued write requests to DSS.
 * Total number of write requests is {DSS_LAT_NUM_WR_REQ_HI, DSS_LAT_NUM_WR_REQ_LO}.
 */
union ody_dssx_lat_num_wr_req_lo {
	uint64_t u;
	struct ody_dssx_lat_num_wr_req_lo_s {
		uint64_t lat_num_wr_req_lo           : 64;
	} s;
	/* struct ody_dssx_lat_num_wr_req_lo_s cn; */
};
typedef union ody_dssx_lat_num_wr_req_lo ody_dssx_lat_num_wr_req_lo_t;

static inline uint64_t ODY_DSSX_LAT_NUM_WR_REQ_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_NUM_WR_REQ_LO(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008318ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_NUM_WR_REQ_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) ody_dssx_lat_num_wr_req_lo_t
#define bustype_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) "DSSX_LAT_NUM_WR_REQ_LO"
#define device_bar_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) (a)
#define arguments_ODY_DSSX_LAT_NUM_WR_REQ_LO(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_outstand_rd_wr_req
 *
 * DSS number of outstanding read/write requests Register
 * Status register indicating number of current outstanding read/write requests in DSS.
 */
union ody_dssx_lat_outstand_rd_wr_req {
	uint64_t u;
	struct ody_dssx_lat_outstand_rd_wr_req_s {
		uint64_t lat_outstanding_rd          : 9;
		uint64_t lat_outstanding_wr          : 9;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_dssx_lat_outstand_rd_wr_req_s cn; */
};
typedef union ody_dssx_lat_outstand_rd_wr_req ody_dssx_lat_outstand_rd_wr_req_t;

static inline uint64_t ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008328ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_OUTSTAND_RD_WR_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) ody_dssx_lat_outstand_rd_wr_req_t
#define bustype_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) "DSSX_LAT_OUTSTAND_RD_WR_REQ"
#define device_bar_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) (a)
#define arguments_ODY_DSSX_LAT_OUTSTAND_RD_WR_REQ(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_total_rd_latency_hi
 *
 * DSS Total Read Latency High Register
 * Status register indicating number of total latency of all read requests since
 * latency calculation is enabled in DSS.
 * Total number of read latency in DFI cycles is {DSS_LAT_TOTAL_RD_LATENCY_HI,
 * DSS_LAT_TOTAL_RD_LATENCY_LO}.
 */
union ody_dssx_lat_total_rd_latency_hi {
	uint64_t u;
	struct ody_dssx_lat_total_rd_latency_hi_s {
		uint64_t total_rd_latency_hi         : 64;
	} s;
	/* struct ody_dssx_lat_total_rd_latency_hi_s cn; */
};
typedef union ody_dssx_lat_total_rd_latency_hi ody_dssx_lat_total_rd_latency_hi_t;

static inline uint64_t ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008338ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_TOTAL_RD_LATENCY_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) ody_dssx_lat_total_rd_latency_hi_t
#define bustype_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) "DSSX_LAT_TOTAL_RD_LATENCY_HI"
#define device_bar_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) (a)
#define arguments_ODY_DSSX_LAT_TOTAL_RD_LATENCY_HI(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_total_rd_latency_lo
 *
 * DSS Total Read Latency Low Register
 * Status register indicating number of total latency of all read requests since
 * latency calculation is enabled in DSS.
 * Total number of read latency in DFI cycles is {DSS_LAT_TOTAL_RD_LATENCY_HI,
 * DSS_LAT_TOTAL_RD_LATENCY_LO}.
 */
union ody_dssx_lat_total_rd_latency_lo {
	uint64_t u;
	struct ody_dssx_lat_total_rd_latency_lo_s {
		uint64_t total_rd_latency_lo         : 64;
	} s;
	/* struct ody_dssx_lat_total_rd_latency_lo_s cn; */
};
typedef union ody_dssx_lat_total_rd_latency_lo ody_dssx_lat_total_rd_latency_lo_t;

static inline uint64_t ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008330ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_TOTAL_RD_LATENCY_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) ody_dssx_lat_total_rd_latency_lo_t
#define bustype_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) "DSSX_LAT_TOTAL_RD_LATENCY_LO"
#define device_bar_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) (a)
#define arguments_ODY_DSSX_LAT_TOTAL_RD_LATENCY_LO(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_total_wr_latency_hi
 *
 * DSS Total Write Latency High Register
 * Status register indicating number of total latency of all write requests since
 * latency calculation is enabled in DSS.
 * Total number of write latency in DFI cycles is {DSS_LAT_TOTAL_WR_LATENCY_HI,
 * DSS_LAT_TOTAL_WR_LATENCY_LO}.
 */
union ody_dssx_lat_total_wr_latency_hi {
	uint64_t u;
	struct ody_dssx_lat_total_wr_latency_hi_s {
		uint64_t total_wr_latency_hi         : 64;
	} s;
	/* struct ody_dssx_lat_total_wr_latency_hi_s cn; */
};
typedef union ody_dssx_lat_total_wr_latency_hi ody_dssx_lat_total_wr_latency_hi_t;

static inline uint64_t ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008348ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_TOTAL_WR_LATENCY_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) ody_dssx_lat_total_wr_latency_hi_t
#define bustype_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) "DSSX_LAT_TOTAL_WR_LATENCY_HI"
#define device_bar_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) (a)
#define arguments_ODY_DSSX_LAT_TOTAL_WR_LATENCY_HI(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lat_total_wr_latency_lo
 *
 * DSS Total Write Latency Low Register
 * Status register indicating number of total latency of all write requests since
 * latency calculation is enabled in DSS.
 * Total number of write latency in DFI cycles is {DSS_LAT_TOTAL_WR_LATENCY_HI,
 * DSS_LAT_TOTAL_WR_LATENCY_LO}.
 */
union ody_dssx_lat_total_wr_latency_lo {
	uint64_t u;
	struct ody_dssx_lat_total_wr_latency_lo_s {
		uint64_t total_wr_latency_lo         : 64;
	} s;
	/* struct ody_dssx_lat_total_wr_latency_lo_s cn; */
};
typedef union ody_dssx_lat_total_wr_latency_lo ody_dssx_lat_total_wr_latency_lo_t;

static inline uint64_t ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008340ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LAT_TOTAL_WR_LATENCY_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) ody_dssx_lat_total_wr_latency_lo_t
#define bustype_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) "DSSX_LAT_TOTAL_WR_LATENCY_LO"
#define device_bar_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) (a)
#define arguments_ODY_DSSX_LAT_TOTAL_WR_LATENCY_LO(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lp_cfg
 *
 * DSS Low Power Configuration Register
 * Low-power mode configuration.
 */
union ody_dssx_lp_cfg {
	uint64_t u;
	struct ody_dssx_lp_cfg_s {
		uint64_t s_dfi_reset_force           : 1;
		uint64_t s_dfi_cs_addr_force         : 1;
		uint64_t s_put_phy_in_lp2_mode       : 1;
		uint64_t s_sync_with_peer_dmc        : 1;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dssx_lp_cfg_s cn; */
};
typedef union ody_dssx_lp_cfg ody_dssx_lp_cfg_t;

static inline uint64_t ODY_DSSX_LP_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LP_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000078ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LP_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LP_CFG(a) ody_dssx_lp_cfg_t
#define bustype_ODY_DSSX_LP_CFG(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LP_CFG(a) "DSSX_LP_CFG"
#define device_bar_ODY_DSSX_LP_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LP_CFG(a) (a)
#define arguments_ODY_DSSX_LP_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lp_ctrl
 *
 * DSS Low Power Control Register
 * Low-power mode control.
 */
union ody_dssx_lp_ctrl {
	uint64_t u;
	struct ody_dssx_lp_ctrl_s {
		uint64_t s_lp_entry                  : 1;
		uint64_t s_lp_exit                   : 1;
		uint64_t s_lp_entry_ongoing          : 1;
		uint64_t s_lp_exit_ongoing           : 1;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dssx_lp_ctrl_s cn; */
};
typedef union ody_dssx_lp_ctrl ody_dssx_lp_ctrl_t;

static inline uint64_t ODY_DSSX_LP_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LP_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000070ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LP_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LP_CTRL(a) ody_dssx_lp_ctrl_t
#define bustype_ODY_DSSX_LP_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LP_CTRL(a) "DSSX_LP_CTRL"
#define device_bar_ODY_DSSX_LP_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LP_CTRL(a) (a)
#define arguments_ODY_DSSX_LP_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_lp_status
 *
 * DSS Low Power Status Register
 * Low-power mode status, this register indicates if low power and self refresh modes are succeeded.
 */
union ody_dssx_lp_status {
	uint64_t u;
	struct ody_dssx_lp_status_s {
		uint64_t s_dram_sre_status           : 1;
		uint64_t s_phy_lp2_status            : 1;
		uint64_t s_phy_lpx_status            : 1;
		uint64_t s_low_power_state           : 2;
		uint64_t s_selfref_type_status_mirror : 4;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_dssx_lp_status_s cn; */
};
typedef union ody_dssx_lp_status ody_dssx_lp_status_t;

static inline uint64_t ODY_DSSX_LP_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_LP_STATUS(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000080ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_LP_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_LP_STATUS(a) ody_dssx_lp_status_t
#define bustype_ODY_DSSX_LP_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_LP_STATUS(a) "DSSX_LP_STATUS"
#define device_bar_ODY_DSSX_LP_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_LP_STATUS(a) (a)
#define arguments_ODY_DSSX_LP_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mc_core_reset_n
 *
 * DSS DFI Domain Reset Register
 * DFI clock software reset - active low.
 */
union ody_dssx_mc_core_reset_n {
	uint64_t u;
	struct ody_dssx_mc_core_reset_n_s {
		uint64_t s_mc_core_reset_n           : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_mc_core_reset_n_s cn; */
};
typedef union ody_dssx_mc_core_reset_n ody_dssx_mc_core_reset_n_t;

static inline uint64_t ODY_DSSX_MC_CORE_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MC_CORE_RESET_N(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MC_CORE_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MC_CORE_RESET_N(a) ody_dssx_mc_core_reset_n_t
#define bustype_ODY_DSSX_MC_CORE_RESET_N(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MC_CORE_RESET_N(a) "DSSX_MC_CORE_RESET_N"
#define device_bar_ODY_DSSX_MC_CORE_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MC_CORE_RESET_N(a) (a)
#define arguments_ODY_DSSX_MC_CORE_RESET_N(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mc_ctrl
 *
 * DSS Memory Controller Control Register
 * Memory controller control register.
 */
union ody_dssx_mc_ctrl {
	uint64_t u;
	struct ody_dssx_mc_ctrl_s {
		uint64_t s_mc_csysreq                : 1;
		uint64_t s_mc_csysack                : 1;
		uint64_t s_mc_cactive                : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dssx_mc_ctrl_s cn; */
};
typedef union ody_dssx_mc_ctrl ody_dssx_mc_ctrl_t;

static inline uint64_t ODY_DSSX_MC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MC_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000050ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MC_CTRL(a) ody_dssx_mc_ctrl_t
#define bustype_ODY_DSSX_MC_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MC_CTRL(a) "DSSX_MC_CTRL"
#define device_bar_ODY_DSSX_MC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MC_CTRL(a) (a)
#define arguments_ODY_DSSX_MC_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_crc_ctrl
 *
 * DSS MCT CRC Control Register
 * MCT CRC control register.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_crc_ctrl {
	uint64_t u;
	struct ody_dssx_mct_crc_ctrl_s {
		uint64_t wr_crc_en                   : 1;
		uint64_t rd_crc_en                   : 1;
		uint64_t mc_wr_crc_is_enabled        : 1;
		uint64_t mc_rd_crc_is_enabled        : 1;
		uint64_t dis_rd_crc_ecc_upr_nibble   : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_dssx_mct_crc_ctrl_s cn; */
};
typedef union ody_dssx_mct_crc_ctrl ody_dssx_mct_crc_ctrl_t;

static inline uint64_t ODY_DSSX_MCT_CRC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_CRC_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_CRC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_CRC_CTRL(a) ody_dssx_mct_crc_ctrl_t
#define bustype_ODY_DSSX_MCT_CRC_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_CRC_CTRL(a) "DSSX_MCT_CRC_CTRL"
#define device_bar_ODY_DSSX_MCT_CRC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_CRC_CTRL(a) (a)
#define arguments_ODY_DSSX_MCT_CRC_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_ctrl
 *
 * DSS MCT Control Register
 * MCT module control register.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_ctrl {
	uint64_t u;
	struct ody_dssx_mct_ctrl_s {
		uint64_t reserved_0_1                : 2;
		uint64_t cmd_type                    : 1;
		uint64_t dfi_data_cs_polarity        : 1;
		uint64_t key_scramble                : 1;
		uint64_t reserved_5                  : 1;
		uint64_t aes_bypass                  : 1;
		uint64_t ecc_en                      : 1;
		uint64_t data_width                  : 1;
		uint64_t reserved_9_15               : 7;
		uint64_t active_ranks                : 4;
		uint64_t cmd_delay_in_dfi_cyc        : 1;
		uint64_t reserved_21_63              : 43;
	} s;
	/* struct ody_dssx_mct_ctrl_s cn; */
};
typedef union ody_dssx_mct_ctrl ody_dssx_mct_ctrl_t;

static inline uint64_t ODY_DSSX_MCT_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_CTRL(a) ody_dssx_mct_ctrl_t
#define bustype_ODY_DSSX_MCT_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_CTRL(a) "DSSX_MCT_CTRL"
#define device_bar_ODY_DSSX_MCT_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_CTRL(a) (a)
#define arguments_ODY_DSSX_MCT_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_current_key_127_64#
 *
 * DSS MCT CURRENT KEY Register
 * Holds bits[127:64] of the current key used for encryption of selected index.
 */
union ody_dssx_mct_current_key_127_64x {
	uint64_t u;
	struct ody_dssx_mct_current_key_127_64x_s {
		uint64_t current_key_127_64          : 64;
	} s;
	/* struct ody_dssx_mct_current_key_127_64x_s cn; */
};
typedef union ody_dssx_mct_current_key_127_64x ody_dssx_mct_current_key_127_64x_t;

static inline uint64_t ODY_DSSX_MCT_CURRENT_KEY_127_64X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_CURRENT_KEY_127_64X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b00100c0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_CURRENT_KEY_127_64X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) ody_dssx_mct_current_key_127_64x_t
#define bustype_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) "DSSX_MCT_CURRENT_KEY_127_64X"
#define device_bar_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) (a)
#define arguments_ODY_DSSX_MCT_CURRENT_KEY_127_64X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_current_key_63_0#
 *
 * DSS MCT CURRENT ENCRYPTION KEY Register
 * Holds bits[63:0] of the current key used for encryption of selected index.
 */
union ody_dssx_mct_current_key_63_0x {
	uint64_t u;
	struct ody_dssx_mct_current_key_63_0x_s {
		uint64_t current_key_63_0            : 64;
	} s;
	/* struct ody_dssx_mct_current_key_63_0x_s cn; */
};
typedef union ody_dssx_mct_current_key_63_0x ody_dssx_mct_current_key_63_0x_t;

static inline uint64_t ODY_DSSX_MCT_CURRENT_KEY_63_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_CURRENT_KEY_63_0X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b00110a0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_CURRENT_KEY_63_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) ody_dssx_mct_current_key_63_0x_t
#define bustype_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) "DSSX_MCT_CURRENT_KEY_63_0X"
#define device_bar_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) (a)
#define arguments_ODY_DSSX_MCT_CURRENT_KEY_63_0X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_data_high
 *
 * DSS MCT Software Debug Data Register
 * Holds the higher bits of the debug data used for the encryption/decryption operation
 * of software commands.
 */
union ody_dssx_mct_dbg_sw_data_high {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_data_high_s {
		uint64_t dbg_sw_data_hi              : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_data_high_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_data_high ody_dssx_mct_dbg_sw_data_high_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_DATA_HIGH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_DATA_HIGH(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103f8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_DATA_HIGH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) ody_dssx_mct_dbg_sw_data_high_t
#define bustype_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) "DSSX_MCT_DBG_SW_DATA_HIGH"
#define device_bar_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_DATA_HIGH(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_data_low
 *
 * DSS MCT Software Debug Data Register
 * Holds the lower bits of the debug data used for the encryption/decryption operation
 * of software commands.
 */
union ody_dssx_mct_dbg_sw_data_low {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_data_low_s {
		uint64_t dbg_sw_data_lo              : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_data_low_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_data_low ody_dssx_mct_dbg_sw_data_low_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_DATA_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_DATA_LOW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103f0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_DATA_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) ody_dssx_mct_dbg_sw_data_low_t
#define bustype_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) "DSSX_MCT_DBG_SW_DATA_LOW"
#define device_bar_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_DATA_LOW(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_key_127_64
 *
 * DSS MCT Software Debug Key Register
 * Holds bits[127:64] of the debug key used for the encryption/decryption operation
 * of software commands.
 */
union ody_dssx_mct_dbg_sw_key_127_64 {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_key_127_64_s {
		uint64_t dbg_sw_key_127_64           : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_key_127_64_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_key_127_64 ody_dssx_mct_dbg_sw_key_127_64_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_KEY_127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_KEY_127_64(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103d8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_KEY_127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) ody_dssx_mct_dbg_sw_key_127_64_t
#define bustype_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) "DSSX_MCT_DBG_SW_KEY_127_64"
#define device_bar_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_KEY_127_64(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_key_63_0
 *
 * DSS MCT Software Debug Key Register
 * Holds bits[63:0] of the debug key used for the encryption/decryption operation
 * of software commands.
 */
union ody_dssx_mct_dbg_sw_key_63_0 {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_key_63_0_s {
		uint64_t dbg_sw_key_63_0             : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_key_63_0_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_key_63_0 ody_dssx_mct_dbg_sw_key_63_0_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_KEY_63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_KEY_63_0(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103d0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_KEY_63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) ody_dssx_mct_dbg_sw_key_63_0_t
#define bustype_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) "DSSX_MCT_DBG_SW_KEY_63_0"
#define device_bar_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_KEY_63_0(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_op_cmd_ctrl
 *
 * DSS MCT Software Operation Control Register
 * This register is RW/HW handshake control, using DBG_* registers that allow software to initiate
 * encryption / decryption commands to MCT.
 */
union ody_dssx_mct_dbg_sw_op_cmd_ctrl {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_op_cmd_ctrl_s {
		uint64_t sw_op_type                  : 1;
		uint64_t sw_op_behavior              : 1;
		uint64_t reserved_2_9                : 8;
		uint64_t sw_op_sys_addr              : 52;
		uint64_t reserved_62_63              : 2;
	} s;
	/* struct ody_dssx_mct_dbg_sw_op_cmd_ctrl_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_op_cmd_ctrl ody_dssx_mct_dbg_sw_op_cmd_ctrl_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103c8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_OP_CMD_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) ody_dssx_mct_dbg_sw_op_cmd_ctrl_t
#define bustype_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) "DSSX_MCT_DBG_SW_OP_CMD_CTRL"
#define device_bar_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_OP_CMD_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_op_ctrl
 *
 * DSS MCT Software Operation Control Register
 * This register is the RW/HW handshake control, using DBG_* registers that allow software
 * to initiate encryption / decryption commands to MCT.
 */
union ody_dssx_mct_dbg_sw_op_ctrl {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_op_ctrl_s {
		uint64_t run                         : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_mct_dbg_sw_op_ctrl_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_op_ctrl ody_dssx_mct_dbg_sw_op_ctrl_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_OP_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_OP_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103c0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_OP_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) ody_dssx_mct_dbg_sw_op_ctrl_t
#define bustype_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) "DSSX_MCT_DBG_SW_OP_CTRL"
#define device_bar_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_OP_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_resp_high
 *
 * DSS MCT Software Debug Response Register
 * Holds the higher bits of the debug response data for the
 * encryption/decryption operation of software commands.
 */
union ody_dssx_mct_dbg_sw_resp_high {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_resp_high_s {
		uint64_t dbg_sw_data_hi              : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_resp_high_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_resp_high ody_dssx_mct_dbg_sw_resp_high_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_RESP_HIGH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_RESP_HIGH(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010408ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_RESP_HIGH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) ody_dssx_mct_dbg_sw_resp_high_t
#define bustype_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) "DSSX_MCT_DBG_SW_RESP_HIGH"
#define device_bar_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_RESP_HIGH(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_dbg_sw_resp_low
 *
 * DSS MCT Software Debug Response Register
 * Holds the lower bits of the debug response data for the
 * encryption/decryption operation of software commands.
 */
union ody_dssx_mct_dbg_sw_resp_low {
	uint64_t u;
	struct ody_dssx_mct_dbg_sw_resp_low_s {
		uint64_t dbg_sw_resp_lo              : 64;
	} s;
	/* struct ody_dssx_mct_dbg_sw_resp_low_s cn; */
};
typedef union ody_dssx_mct_dbg_sw_resp_low ody_dssx_mct_dbg_sw_resp_low_t;

static inline uint64_t ODY_DSSX_MCT_DBG_SW_RESP_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DBG_SW_RESP_LOW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010400ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DBG_SW_RESP_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) ody_dssx_mct_dbg_sw_resp_low_t
#define bustype_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) "DSSX_MCT_DBG_SW_RESP_LOW"
#define device_bar_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) (a)
#define arguments_ODY_DSSX_MCT_DBG_SW_RESP_LOW(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_default_win_cfg
 *
 * DSS MCT Default Window Configuration Register
 * Defines the default window configuration.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_default_win_cfg {
	uint64_t u;
	struct ody_dssx_mct_default_win_cfg_s {
		uint64_t default_enc_en              : 1;
		uint64_t default_key_index           : 2;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dssx_mct_default_win_cfg_s cn; */
};
typedef union ody_dssx_mct_default_win_cfg ody_dssx_mct_default_win_cfg_t;

static inline uint64_t ODY_DSSX_MCT_DEFAULT_WIN_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_DEFAULT_WIN_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010228ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_DEFAULT_WIN_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) ody_dssx_mct_default_win_cfg_t
#define bustype_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) "DSSX_MCT_DEFAULT_WIN_CFG"
#define device_bar_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) (a)
#define arguments_ODY_DSSX_MCT_DEFAULT_WIN_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_enable
 *
 * DSS MCT Enable Register
 * MCT block enable register.
 */
union ody_dssx_mct_enable {
	uint64_t u;
	struct ody_dssx_mct_enable_s {
		uint64_t mct_en                      : 1;
		uint64_t mct_clk_dis                 : 1;
		uint64_t mct_is_active               : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dssx_mct_enable_s cn; */
};
typedef union ody_dssx_mct_enable ody_dssx_mct_enable_t;

static inline uint64_t ODY_DSSX_MCT_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_ENABLE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_ENABLE(a) ody_dssx_mct_enable_t
#define bustype_ODY_DSSX_MCT_ENABLE(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_ENABLE(a) "DSSX_MCT_ENABLE"
#define device_bar_ODY_DSSX_MCT_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_ENABLE(a) (a)
#define arguments_ODY_DSSX_MCT_ENABLE(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_global_clock_enable
 *
 * DSS MCT Global Clock Enable Register
 * Force MCT sub-blocks coarse clock to be always on.
 */
union ody_dssx_mct_global_clock_enable {
	uint64_t u;
	struct ody_dssx_mct_global_clock_enable_s {
		uint64_t csr_core_clk_force          : 1;
		uint64_t wr_path_mc_side_clk_force   : 1;
		uint64_t rd_en_path_mc_side_clk_force : 1;
		uint64_t rddat_path_mc_side_clk_force : 1;
		uint64_t rden_path_phy_side_clk_force : 1;
		uint64_t wr_path_phy_side_clk_force  : 1;
		uint64_t rddat_path_phy_side_clk_force : 1;
		uint64_t rd_data_cs_path_clk_force   : 1;
		uint64_t wr_data_cs_path_clk_force   : 1;
		uint64_t cmd_dec_clk_force           : 1;
		uint64_t crypto_wr_path_clk_force    : 1;
		uint64_t crypto_rd_path_clk_force    : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_dssx_mct_global_clock_enable_s cn; */
};
typedef union ody_dssx_mct_global_clock_enable ody_dssx_mct_global_clock_enable_t;

static inline uint64_t ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010410ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_GLOBAL_CLOCK_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) ody_dssx_mct_global_clock_enable_t
#define bustype_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) "DSSX_MCT_GLOBAL_CLOCK_ENABLE"
#define device_bar_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) (a)
#define arguments_ODY_DSSX_MCT_GLOBAL_CLOCK_ENABLE(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_hide_crypto_status
 *
 * DSS MCT Hide Crypto Status Register
 * This register is used to hide crypto status.
 */
union ody_dssx_mct_hide_crypto_status {
	uint64_t u;
	struct ody_dssx_mct_hide_crypto_status_s {
		uint64_t hide_crypto_status          : 1;
		uint64_t dis_sw_cmd                  : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_dssx_mct_hide_crypto_status_s cn; */
};
typedef union ody_dssx_mct_hide_crypto_status ody_dssx_mct_hide_crypto_status_t;

static inline uint64_t ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010128ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_HIDE_CRYPTO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) ody_dssx_mct_hide_crypto_status_t
#define bustype_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) "DSSX_MCT_HIDE_CRYPTO_STATUS"
#define device_bar_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) (a)
#define arguments_ODY_DSSX_MCT_HIDE_CRYPTO_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_int_ena_w1c
 *
 * DSS Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_dssx_mct_int_ena_w1c {
	uint64_t u;
	struct ody_dssx_mct_int_ena_w1c_s {
		uint64_t mct_not_config_rd_addr_intr : 1;
		uint64_t mct_not_config_wr_addr_intr : 1;
		uint64_t mct_rd_multi_hits_intr      : 1;
		uint64_t mct_rd_fifo_ovrflw_intr     : 1;
		uint64_t mct_wr_multi_hits_intr      : 1;
		uint64_t mct_wr_data_fifo_ovrflw_intr : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_mct_int_ena_w1c_s cn; */
};
typedef union ody_dssx_mct_int_ena_w1c ody_dssx_mct_int_ena_w1c_t;

static inline uint64_t ODY_DSSX_MCT_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_INT_ENA_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0018010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_INT_ENA_W1C(a) ody_dssx_mct_int_ena_w1c_t
#define bustype_ODY_DSSX_MCT_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_INT_ENA_W1C(a) "DSSX_MCT_INT_ENA_W1C"
#define device_bar_ODY_DSSX_MCT_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_INT_ENA_W1C(a) (a)
#define arguments_ODY_DSSX_MCT_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_int_ena_w1s
 *
 * DSS Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_dssx_mct_int_ena_w1s {
	uint64_t u;
	struct ody_dssx_mct_int_ena_w1s_s {
		uint64_t mct_not_config_rd_addr_intr : 1;
		uint64_t mct_not_config_wr_addr_intr : 1;
		uint64_t mct_rd_multi_hits_intr      : 1;
		uint64_t mct_rd_fifo_ovrflw_intr     : 1;
		uint64_t mct_wr_multi_hits_intr      : 1;
		uint64_t mct_wr_data_fifo_ovrflw_intr : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_mct_int_ena_w1s_s cn; */
};
typedef union ody_dssx_mct_int_ena_w1s ody_dssx_mct_int_ena_w1s_t;

static inline uint64_t ODY_DSSX_MCT_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_INT_ENA_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0018018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_INT_ENA_W1S(a) ody_dssx_mct_int_ena_w1s_t
#define bustype_ODY_DSSX_MCT_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_INT_ENA_W1S(a) "DSSX_MCT_INT_ENA_W1S"
#define device_bar_ODY_DSSX_MCT_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_INT_ENA_W1S(a) (a)
#define arguments_ODY_DSSX_MCT_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_int_w1c
 *
 * DSS Interrupt Register
 * This register is for DSS-based interrupts.
 */
union ody_dssx_mct_int_w1c {
	uint64_t u;
	struct ody_dssx_mct_int_w1c_s {
		uint64_t mct_not_config_rd_addr_intr : 1;
		uint64_t mct_not_config_wr_addr_intr : 1;
		uint64_t mct_rd_multi_hits_intr      : 1;
		uint64_t mct_rd_fifo_ovrflw_intr     : 1;
		uint64_t mct_wr_multi_hits_intr      : 1;
		uint64_t mct_wr_data_fifo_ovrflw_intr : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_mct_int_w1c_s cn; */
};
typedef union ody_dssx_mct_int_w1c ody_dssx_mct_int_w1c_t;

static inline uint64_t ODY_DSSX_MCT_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_INT_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0018000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_INT_W1C(a) ody_dssx_mct_int_w1c_t
#define bustype_ODY_DSSX_MCT_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_INT_W1C(a) "DSSX_MCT_INT_W1C"
#define device_bar_ODY_DSSX_MCT_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_INT_W1C(a) (a)
#define arguments_ODY_DSSX_MCT_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_int_w1s
 *
 * DSS Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_dssx_mct_int_w1s {
	uint64_t u;
	struct ody_dssx_mct_int_w1s_s {
		uint64_t mct_not_config_rd_addr_intr : 1;
		uint64_t mct_not_config_wr_addr_intr : 1;
		uint64_t mct_rd_multi_hits_intr      : 1;
		uint64_t mct_rd_fifo_ovrflw_intr     : 1;
		uint64_t mct_wr_multi_hits_intr      : 1;
		uint64_t mct_wr_data_fifo_ovrflw_intr : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_mct_int_w1s_s cn; */
};
typedef union ody_dssx_mct_int_w1s ody_dssx_mct_int_w1s_t;

static inline uint64_t ODY_DSSX_MCT_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_INT_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0018008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_INT_W1S(a) ody_dssx_mct_int_w1s_t
#define bustype_ODY_DSSX_MCT_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_INT_W1S(a) "DSSX_MCT_INT_W1S"
#define device_bar_ODY_DSSX_MCT_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_INT_W1S(a) (a)
#define arguments_ODY_DSSX_MCT_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_next_key_127_64#
 *
 * DSS MCT NEXT KEY Register
 * Holds bits[127:64] of the next key used for encryption of selected index.
 */
union ody_dssx_mct_next_key_127_64x {
	uint64_t u;
	struct ody_dssx_mct_next_key_127_64x_s {
		uint64_t next_key_127_64             : 64;
	} s;
	/* struct ody_dssx_mct_next_key_127_64x_s cn; */
};
typedef union ody_dssx_mct_next_key_127_64x ody_dssx_mct_next_key_127_64x_t;

static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_127_64X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_127_64X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0010060ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_NEXT_KEY_127_64X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) ody_dssx_mct_next_key_127_64x_t
#define bustype_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) "DSSX_MCT_NEXT_KEY_127_64X"
#define device_bar_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) (a)
#define arguments_ODY_DSSX_MCT_NEXT_KEY_127_64X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_next_key_63_0#
 *
 * DSS MCT NEXT ENCRYPTION KEY Register
 * Holds bits[63:0] of the next key used for encryption of selected index.
 */
union ody_dssx_mct_next_key_63_0x {
	uint64_t u;
	struct ody_dssx_mct_next_key_63_0x_s {
		uint64_t next_key_63_0               : 64;
	} s;
	/* struct ody_dssx_mct_next_key_63_0x_s cn; */
};
typedef union ody_dssx_mct_next_key_63_0x ody_dssx_mct_next_key_63_0x_t;

static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_63_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_63_0X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0010040ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_NEXT_KEY_63_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) ody_dssx_mct_next_key_63_0x_t
#define bustype_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) "DSSX_MCT_NEXT_KEY_63_0X"
#define device_bar_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) (a)
#define arguments_ODY_DSSX_MCT_NEXT_KEY_63_0X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_next_key_ready#
 *
 * DSS MCT Next Key Is Ready Register
 * SW needs to write DSS_MCT_NEXT_KEY_63_0 and DSS_MCT_NEXT_KEY_127_64 periodically in
 * order to keep changing DRAM encryption key.
 * The encryption key width in AES-128 is 128 bits, which is divided into two
 * registers. To ensure that MCT takes the two halves synchronously, SW need to write
 * this field to one to indicate MCT that DSS_MCT_NEXT_KEY_* registers has a valid new
 * key.
 */
union ody_dssx_mct_next_key_readyx {
	uint64_t u;
	struct ody_dssx_mct_next_key_readyx_s {
		uint64_t next_key_is_ready           : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_mct_next_key_readyx_s cn; */
};
typedef union ody_dssx_mct_next_key_readyx ody_dssx_mct_next_key_readyx_t;

static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_READYX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_NEXT_KEY_READYX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0010020ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_NEXT_KEY_READYX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) ody_dssx_mct_next_key_readyx_t
#define bustype_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) "DSSX_MCT_NEXT_KEY_READYX"
#define device_bar_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) (a)
#define arguments_ODY_DSSX_MCT_NEXT_KEY_READYX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_previous_key_127_64#
 *
 * DSS MCT PREVIOUS KEY Register
 * Holds bits[127:64] of the previous key used for encryption of selected index.
 */
union ody_dssx_mct_previous_key_127_64x {
	uint64_t u;
	struct ody_dssx_mct_previous_key_127_64x_s {
		uint64_t previous_key_127_64         : 64;
	} s;
	/* struct ody_dssx_mct_previous_key_127_64x_s cn; */
};
typedef union ody_dssx_mct_previous_key_127_64x ody_dssx_mct_previous_key_127_64x_t;

static inline uint64_t ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b0010100ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_PREVIOUS_KEY_127_64X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) ody_dssx_mct_previous_key_127_64x_t
#define bustype_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) "DSSX_MCT_PREVIOUS_KEY_127_64X"
#define device_bar_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) (a)
#define arguments_ODY_DSSX_MCT_PREVIOUS_KEY_127_64X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_previous_key_63_0#
 *
 * DSS MCT PREVIOUS ENCRYPTION KEY Register
 * Holds bits[63:0] of the previous key used for encryption of selected index.
 */
union ody_dssx_mct_previous_key_63_0x {
	uint64_t u;
	struct ody_dssx_mct_previous_key_63_0x_s {
		uint64_t previous_key_63_0           : 64;
	} s;
	/* struct ody_dssx_mct_previous_key_63_0x_s cn; */
};
typedef union ody_dssx_mct_previous_key_63_0x ody_dssx_mct_previous_key_63_0x_t;

static inline uint64_t ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 3))
		return 0x87e1b00100e0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("DSSX_MCT_PREVIOUS_KEY_63_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) ody_dssx_mct_previous_key_63_0x_t
#define bustype_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) "DSSX_MCT_PREVIOUS_KEY_63_0X"
#define device_bar_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) (a)
#define arguments_ODY_DSSX_MCT_PREVIOUS_KEY_63_0X(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_reset_n
 *
 * DSS MCT Clock Domain Reset Register
 * MCT clock domain software reset - active low.
 */
union ody_dssx_mct_reset_n {
	uint64_t u;
	struct ody_dssx_mct_reset_n_s {
		uint64_t s_mct_reset_n               : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_mct_reset_n_s cn; */
};
typedef union ody_dssx_mct_reset_n ody_dssx_mct_reset_n_t;

static inline uint64_t ODY_DSSX_MCT_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_RESET_N(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_RESET_N(a) ody_dssx_mct_reset_n_t
#define bustype_ODY_DSSX_MCT_RESET_N(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_RESET_N(a) "DSSX_MCT_RESET_N"
#define device_bar_ODY_DSSX_MCT_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_RESET_N(a) (a)
#define arguments_ODY_DSSX_MCT_RESET_N(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_scrub_pointer
 *
 * DSS MCT Scrub Pointer Register
 * This register holds last accessed address by the scrub.
 */
union ody_dssx_mct_scrub_pointer {
	uint64_t u;
	struct ody_dssx_mct_scrub_pointer_s {
		uint64_t scrub_pointer               : 52;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_dssx_mct_scrub_pointer_s cn; */
};
typedef union ody_dssx_mct_scrub_pointer ody_dssx_mct_scrub_pointer_t;

static inline uint64_t ODY_DSSX_MCT_SCRUB_POINTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_SCRUB_POINTER(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0010120ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_SCRUB_POINTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_SCRUB_POINTER(a) ody_dssx_mct_scrub_pointer_t
#define bustype_ODY_DSSX_MCT_SCRUB_POINTER(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_SCRUB_POINTER(a) "DSSX_MCT_SCRUB_POINTER"
#define device_bar_ODY_DSSX_MCT_SCRUB_POINTER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_SCRUB_POINTER(a) (a)
#define arguments_ODY_DSSX_MCT_SCRUB_POINTER(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_tmg_param_mc_side
 *
 * DSS MCT Timing Parameters - MC Side Register
 * Timing parameters configured in the memory controller.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_tmg_param_mc_side {
	uint64_t u;
	struct ody_dssx_mct_tmg_param_mc_side_s {
		uint64_t tphy_wrdata_mc_side         : 6;
		uint64_t tphy_wrlat_mc_side          : 6;
		uint64_t tphy_wrcslat_mc_side        : 6;
		uint64_t t_phy_rddata_en_mc_side     : 6;
		uint64_t tphy_rdcslat_mc_side        : 6;
		uint64_t reserved_30_63              : 34;
	} s;
	/* struct ody_dssx_mct_tmg_param_mc_side_s cn; */
};
typedef union ody_dssx_mct_tmg_param_mc_side ody_dssx_mct_tmg_param_mc_side_t;

static inline uint64_t ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103b0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_TMG_PARAM_MC_SIDE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) ody_dssx_mct_tmg_param_mc_side_t
#define bustype_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) "DSSX_MCT_TMG_PARAM_MC_SIDE"
#define device_bar_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) (a)
#define arguments_ODY_DSSX_MCT_TMG_PARAM_MC_SIDE(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_tmg_param_phy_side
 *
 * DSS MCT Timing Parameters - PHY Side Register
 * Timing parameters towards PHY on DFI interface.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_tmg_param_phy_side {
	uint64_t u;
	struct ody_dssx_mct_tmg_param_phy_side_s {
		uint64_t tphy_wrdata_phy_side        : 6;
		uint64_t tphy_wrlat_phy_side         : 6;
		uint64_t tphy_wrcslat_phy_side       : 6;
		uint64_t t_phy_rddata_en_phy_side    : 6;
		uint64_t tphy_rdcslat_phy_side       : 6;
		uint64_t reserved_30_63              : 34;
	} s;
	/* struct ody_dssx_mct_tmg_param_phy_side_s cn; */
};
typedef union ody_dssx_mct_tmg_param_phy_side ody_dssx_mct_tmg_param_phy_side_t;

static inline uint64_t ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00103b8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MCT_TMG_PARAM_PHY_SIDE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) ody_dssx_mct_tmg_param_phy_side_t
#define bustype_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) "DSSX_MCT_TMG_PARAM_PHY_SIDE"
#define device_bar_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) (a)
#define arguments_ODY_DSSX_MCT_TMG_PARAM_PHY_SIDE(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_mct_win_addr_hi#
 *
 * DSS MCT WIN ADDR HI Register
 * This register defines the crypto high address windows.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_win_addr_hix {
	uint64_t u;
	struct ody_dssx_mct_win_addr_hix_s {
		uint64_t win_addr_hi                 : 52;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_dssx_mct_win_addr_hix_s cn; */
};
typedef union ody_dssx_mct_win_addr_hix ody_dssx_mct_win_addr_hix_t;

static inline uint64_t ODY_DSSX_MCT_WIN_ADDR_HIX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_WIN_ADDR_HIX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 15))
		return 0x87e1b0010330ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("DSSX_MCT_WIN_ADDR_HIX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) ody_dssx_mct_win_addr_hix_t
#define bustype_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) "DSSX_MCT_WIN_ADDR_HIX"
#define device_bar_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) (a)
#define arguments_ODY_DSSX_MCT_WIN_ADDR_HIX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_win_addr_lo#
 *
 * DSS MCT WIN ADDR LO Register
 * This register defines the crypto low address windows.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_win_addr_lox {
	uint64_t u;
	struct ody_dssx_mct_win_addr_lox_s {
		uint64_t win_addr_lo                 : 52;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_dssx_mct_win_addr_lox_s cn; */
};
typedef union ody_dssx_mct_win_addr_lox ody_dssx_mct_win_addr_lox_t;

static inline uint64_t ODY_DSSX_MCT_WIN_ADDR_LOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_WIN_ADDR_LOX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 15))
		return 0x87e1b00102b0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("DSSX_MCT_WIN_ADDR_LOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) ody_dssx_mct_win_addr_lox_t
#define bustype_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) "DSSX_MCT_WIN_ADDR_LOX"
#define device_bar_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) (a)
#define arguments_ODY_DSSX_MCT_WIN_ADDR_LOX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mct_win_ctrl#
 *
 * DSS MCT WINDOW CTRL Register
 * This register defines the crypto address windows attributes.
 * This register should be configured only when (DSS_MCT()_ENABLE[S_MCT_EN] = 0).
 */
union ody_dssx_mct_win_ctrlx {
	uint64_t u;
	struct ody_dssx_mct_win_ctrlx_s {
		uint64_t win_en                      : 1;
		uint64_t win_encryption_en           : 1;
		uint64_t key_index                   : 2;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dssx_mct_win_ctrlx_s cn; */
};
typedef union ody_dssx_mct_win_ctrlx ody_dssx_mct_win_ctrlx_t;

static inline uint64_t ODY_DSSX_MCT_WIN_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MCT_WIN_CTRLX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 15))
		return 0x87e1b0010230ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("DSSX_MCT_WIN_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MCT_WIN_CTRLX(a, b) ody_dssx_mct_win_ctrlx_t
#define bustype_ODY_DSSX_MCT_WIN_CTRLX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MCT_WIN_CTRLX(a, b) "DSSX_MCT_WIN_CTRLX"
#define device_bar_ODY_DSSX_MCT_WIN_CTRLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MCT_WIN_CTRLX(a, b) (a)
#define arguments_ODY_DSSX_MCT_WIN_CTRLX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_mpam_cap_mon_event
 *
 * DSS TOP MPAM Capture Monitors Event Register
 * SoftWare trigger to capture memory controller MPAM monitors.
 */
union ody_dssx_mpam_cap_mon_event {
	uint64_t u;
	struct ody_dssx_mpam_cap_mon_event_s {
		uint64_t mc_mpam_cap_mon_event_0     : 1;
		uint64_t mc_mpam_cap_mon_event_1     : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_dssx_mpam_cap_mon_event_s cn; */
};
typedef union ody_dssx_mpam_cap_mon_event ody_dssx_mpam_cap_mon_event_t;

static inline uint64_t ODY_DSSX_MPAM_CAP_MON_EVENT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MPAM_CAP_MON_EVENT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000110ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MPAM_CAP_MON_EVENT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MPAM_CAP_MON_EVENT(a) ody_dssx_mpam_cap_mon_event_t
#define bustype_ODY_DSSX_MPAM_CAP_MON_EVENT(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_MPAM_CAP_MON_EVENT(a) "DSSX_MPAM_CAP_MON_EVENT"
#define device_bar_ODY_DSSX_MPAM_CAP_MON_EVENT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_MPAM_CAP_MON_EVENT(a) (a)
#define arguments_ODY_DSSX_MPAM_CAP_MON_EVENT(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_msix_pba#
 *
 * DSS MSI-X Pending Bit Array Registers
 */
union ody_dssx_msix_pbax {
	uint64_t u;
	struct ody_dssx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_dssx_msix_pbax_s cn; */
};
typedef union ody_dssx_msix_pbax ody_dssx_msix_pbax_t;

static inline uint64_t ODY_DSSX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b == 0))
		return 0x87e1b0708000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MSIX_PBAX(a, b) ody_dssx_msix_pbax_t
#define bustype_ODY_DSSX_MSIX_PBAX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MSIX_PBAX(a, b) "DSSX_MSIX_PBAX"
#define device_bar_ODY_DSSX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_DSSX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_DSSX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_msix_vec#_addr
 *
 * DSS MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the DSS_INT_VEC_E enumeration.
 */
union ody_dssx_msix_vecx_addr {
	uint64_t u;
	struct ody_dssx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_dssx_msix_vecx_addr_s cn; */
};
typedef union ody_dssx_msix_vecx_addr ody_dssx_msix_vecx_addr_t;

static inline uint64_t ODY_DSSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 4))
		return 0x87e1b0700000ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MSIX_VECX_ADDR(a, b) ody_dssx_msix_vecx_addr_t
#define bustype_ODY_DSSX_MSIX_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MSIX_VECX_ADDR(a, b) "DSSX_MSIX_VECX_ADDR"
#define device_bar_ODY_DSSX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_DSSX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_DSSX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_msix_vec#_ctl
 *
 * DSS MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the DSS_INT_VEC_E enumeration.
 */
union ody_dssx_msix_vecx_ctl {
	uint64_t u;
	struct ody_dssx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_dssx_msix_vecx_ctl_s cn; */
};
typedef union ody_dssx_msix_vecx_ctl ody_dssx_msix_vecx_ctl_t;

static inline uint64_t ODY_DSSX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 4))
		return 0x87e1b0700008ll + 0x1000000ll * ((a) & 0x1f) + 0x10ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_MSIX_VECX_CTL(a, b) ody_dssx_msix_vecx_ctl_t
#define bustype_ODY_DSSX_MSIX_VECX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_MSIX_VECX_CTL(a, b) "DSSX_MSIX_VECX_CTL"
#define device_bar_ODY_DSSX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_DSSX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_DSSX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_nderr_addr
 *
 * DSS Non-Data Error Address Register
 * This register records the error address for non-data error interrupts triggered from
 * the REQ mesh [REQ_PERR]. The first [REQ_PERR] error will lock
 * the register until the logged error type is cleared.
 * See DSS_NDERR_INFO for error opcode and SRCID logging.
 */
union ody_dssx_nderr_addr {
	uint64_t u;
	struct ody_dssx_nderr_addr_s {
		uint64_t addr                        : 52;
		uint64_t nonsec                      : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_dssx_nderr_addr_s cn; */
};
typedef union ody_dssx_nderr_addr ody_dssx_nderr_addr_t;

static inline uint64_t ODY_DSSX_NDERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_NDERR_ADDR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000090ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_NDERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_NDERR_ADDR(a) ody_dssx_nderr_addr_t
#define bustype_ODY_DSSX_NDERR_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_NDERR_ADDR(a) "DSSX_NDERR_ADDR"
#define device_bar_ODY_DSSX_NDERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_NDERR_ADDR(a) (a)
#define arguments_ODY_DSSX_NDERR_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_nderr_info
 *
 * DSS Non-Data Error Info Register
 * This register records error information for non-data parity errors
 * [REQ_PERR, DAT_PERR]. The first [REQ_PERR, DAT_PERR] error
 * will lock the register until the logged error type is cleared;
 * See DSS()_NDERR_ADDR for error address logging.
 */
union ody_dssx_nderr_info {
	uint64_t u;
	struct ody_dssx_nderr_info_s {
		uint64_t srcid                       : 11;
		uint64_t opcode                      : 7;
		uint64_t reserved_18_61              : 44;
		uint64_t dat_perr                    : 1;
		uint64_t req_perr                    : 1;
	} s;
	/* struct ody_dssx_nderr_info_s cn; */
};
typedef union ody_dssx_nderr_info ody_dssx_nderr_info_t;

static inline uint64_t ODY_DSSX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_NDERR_INFO(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000088ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_NDERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_NDERR_INFO(a) ody_dssx_nderr_info_t
#define bustype_ODY_DSSX_NDERR_INFO(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_NDERR_INFO(a) "DSSX_NDERR_INFO"
#define device_bar_ODY_DSSX_NDERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_NDERR_INFO(a) (a)
#define arguments_ODY_DSSX_NDERR_INFO(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_cfg#
 *
 * Performance Counters Configuration Register
 * This register configures the events that the counter will count.
 */
union ody_dssx_perf_cnt_cfgx {
	uint64_t u;
	struct ody_dssx_perf_cnt_cfgx_s {
		uint64_t hif_rd_or_wr                : 1;
		uint64_t hif_wr                      : 1;
		uint64_t hif_rd                      : 1;
		uint64_t hif_rmw                     : 1;
		uint64_t hif_hi_pri_rd               : 1;
		uint64_t read_bypass                 : 1;
		uint64_t act_bypass                  : 1;
		uint64_t dfi_wr_data_cycles          : 1;
		uint64_t dfi_rd_data_cycles          : 1;
		uint64_t hpr_xact_when_critical      : 1;
		uint64_t lpr_xact_when_critical      : 1;
		uint64_t wr_xact_when_critical       : 1;
		uint64_t op_is_activate              : 1;
		uint64_t op_is_rd_or_wr              : 1;
		uint64_t op_is_rd_activate           : 1;
		uint64_t op_is_rd                    : 1;
		uint64_t op_is_wr                    : 1;
		uint64_t op_is_mwr                   : 1;
		uint64_t op_is_precharge             : 1;
		uint64_t precharge_for_rdwr          : 1;
		uint64_t precharge_for_other         : 1;
		uint64_t rdwr_transitions            : 1;
		uint64_t write_combine               : 1;
		uint64_t war_hazard                  : 1;
		uint64_t raw_hazard                  : 1;
		uint64_t waw_hazard                  : 1;
		uint64_t op_is_enter_selfref         : 4;
		uint64_t op_is_enter_powerdown       : 4;
		uint64_t op_is_enter_mpsm            : 4;
		uint64_t op_is_refresh               : 1;
		uint64_t op_is_crit_ref              : 1;
		uint64_t op_is_spec_ref              : 1;
		uint64_t op_is_load_mode             : 1;
		uint64_t op_is_zqcl                  : 1;
		uint64_t op_is_zqcs                  : 1;
		uint64_t dfi_cycles                  : 1;
		uint64_t retry_fifo_full             : 1;
		uint64_t bsm_alloc                   : 1;
		uint64_t bsm_starvation              : 1;
		uint64_t visible_win_limit_reached_rd : 1;
		uint64_t visible_win_limit_reached_wr : 1;
		uint64_t op_is_dqsosc_mpc            : 1;
		uint64_t op_is_dqsosc_mrr            : 1;
		uint64_t op_is_tcr_mrr               : 1;
		uint64_t op_is_zqstart               : 1;
		uint64_t op_is_zqlatch               : 1;
		uint64_t dfi_parity_poison           : 1;
		uint64_t wr_crc_error                : 1;
		uint64_t capar_error                 : 1;
		uint64_t rd_crc_error                : 1;
		uint64_t rd_uc_ecc_error             : 1;
		uint64_t dfi_cmd_is_retry            : 1;
		uint64_t interrupt_en                : 1;
		uint64_t wrap_value                  : 1;
		uint64_t cnt_en                      : 1;
	} s;
	/* struct ody_dssx_perf_cnt_cfgx_s cn; */
};
typedef union ody_dssx_perf_cnt_cfgx ody_dssx_perf_cnt_cfgx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0020160ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_CFGX(a, b) ody_dssx_perf_cnt_cfgx_t
#define bustype_ODY_DSSX_PERF_CNT_CFGX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_CFGX(a, b) "DSSX_PERF_CNT_CFGX"
#define device_bar_ODY_DSSX_PERF_CNT_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_CFGX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_current_tmr_val#
 *
 * Performance Current Timer Value Register
 * This register contains the current timer value of the counter when running in timer
 * mode. Software can use this value to see the progress (in clock cycles) that counter made
 * and may compare it with target timer value.
 */
union ody_dssx_perf_cnt_current_tmr_valx {
	uint64_t u;
	struct ody_dssx_perf_cnt_current_tmr_valx_s {
		uint64_t current_timer_value         : 64;
	} s;
	/* struct ody_dssx_perf_cnt_current_tmr_valx_s cn; */
};
typedef union ody_dssx_perf_cnt_current_tmr_valx ody_dssx_perf_cnt_current_tmr_valx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b00202c0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_CURRENT_TMR_VALX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) ody_dssx_perf_cnt_current_tmr_valx_t
#define bustype_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) "DSSX_PERF_CNT_CURRENT_TMR_VALX"
#define device_bar_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_CURRENT_TMR_VALX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_dbg_cnt_sel
 *
 * Performance Counter selector Register
 * This register indicates to which counters to override the initial value
 * When DSS_PERF_CNT_DBG_INIT_VAL.CNT_INIT_VALUE is written.
 */
union ody_dssx_perf_cnt_dbg_cnt_sel {
	uint64_t u;
	struct ody_dssx_perf_cnt_dbg_cnt_sel_s {
		uint64_t gen_cnt_override            : 8;
		uint64_t reserved_8_9                : 2;
		uint64_t wr_cnt_override             : 1;
		uint64_t rd_cnt_override             : 1;
		uint64_t gen_fill_level_cnt          : 3;
		uint64_t txrsp_fill_level_cnt        : 1;
		uint64_t cbusy_cnt                   : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_dssx_perf_cnt_dbg_cnt_sel_s cn; */
};
typedef union ody_dssx_perf_cnt_dbg_cnt_sel ody_dssx_perf_cnt_dbg_cnt_sel_t;

static inline uint64_t ODY_DSSX_PERF_CNT_DBG_CNT_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_DBG_CNT_SEL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020268ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_DBG_CNT_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) ody_dssx_perf_cnt_dbg_cnt_sel_t
#define bustype_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) "DSSX_PERF_CNT_DBG_CNT_SEL"
#define device_bar_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_DBG_CNT_SEL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_dbg_init_val
 *
 * Performance Counter initial value Register
 * Initial value of the selected counter[s]. To override the initial value need to
 * select first the target counter[s] in DSS_PERF_CNT_DBG_CNT_SEL, then to write the
 * wanted initial value to this register.
 * The initial value takes effect for one counting iteration only, for next count it
 * will start from zero un-less reconfigured again.
 */
union ody_dssx_perf_cnt_dbg_init_val {
	uint64_t u;
	struct ody_dssx_perf_cnt_dbg_init_val_s {
		uint64_t cnt_init_value              : 64;
	} s;
	/* struct ody_dssx_perf_cnt_dbg_init_val_s cn; */
};
typedef union ody_dssx_perf_cnt_dbg_init_val ody_dssx_perf_cnt_dbg_init_val_t;

static inline uint64_t ODY_DSSX_PERF_CNT_DBG_INIT_VAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_DBG_INIT_VAL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020270ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_DBG_INIT_VAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) ody_dssx_perf_cnt_dbg_init_val_t
#define bustype_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) "DSSX_PERF_CNT_DBG_INIT_VAL"
#define device_bar_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_DBG_INIT_VAL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_dmd_rd_hit_cfg#
 *
 * DSS Performance Counters Demand Read Hit Configuration Register
 * Configuration register of demand read hit event. This register is used to configure
 * the filtering criteria according to CHI request properties.
 * Note: This register is a continuation to DSS_PERF_CNT_CFG.
 */
union ody_dssx_perf_cnt_dmd_rd_hit_cfgx {
	uint64_t u;
	struct ody_dssx_perf_cnt_dmd_rd_hit_cfgx_s {
		uint64_t demand_rd_hit_drop_event_en : 1;
		uint64_t demand_rd_hit_no_drop_event_en : 1;
		uint64_t demand_hit_match_size       : 1;
		uint64_t demand_hit_desired_size     : 3;
		uint64_t demand_hit_match_qos        : 1;
		uint64_t demand_hit_desired_qos      : 4;
		uint64_t demand_hit_match_pri        : 1;
		uint64_t demand_hit_desired_pri      : 2;
		uint64_t demand_hit_match_mpamns     : 1;
		uint64_t demand_hit_desired_mpamns   : 1;
		uint64_t demand_hit_match_pmg        : 1;
		uint64_t demand_hit_desired_pmg      : 1;
		uint64_t demand_hit_match_partid     : 9;
		uint64_t demand_hit_desired_partid   : 9;
		uint64_t demand_hit_cnt_behavior     : 1;
		uint64_t reserved_37_63              : 27;
	} s;
	/* struct ody_dssx_perf_cnt_dmd_rd_hit_cfgx_s cn; */
};
typedef union ody_dssx_perf_cnt_dmd_rd_hit_cfgx ody_dssx_perf_cnt_dmd_rd_hit_cfgx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0008350ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_DMD_RD_HIT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) ody_dssx_perf_cnt_dmd_rd_hit_cfgx_t
#define bustype_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) "DSSX_PERF_CNT_DMD_RD_HIT_CFGX"
#define device_bar_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_DMD_RD_HIT_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_end_op_ctrl#
 *
 * Performance Counters End Operation Control Register
 * DSS performance counters control.
 * This register controls when to stop counters operation for manual mode
 * and can also be used to stop counting in timer mode.
 */
union ody_dssx_perf_cnt_end_op_ctrlx {
	uint64_t u;
	struct ody_dssx_perf_cnt_end_op_ctrlx_s {
		uint64_t manual_mode_end             : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_perf_cnt_end_op_ctrlx_s cn; */
};
typedef union ody_dssx_perf_cnt_end_op_ctrlx ody_dssx_perf_cnt_end_op_ctrlx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_END_OP_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_END_OP_CTRLX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b00200e0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_END_OP_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) ody_dssx_perf_cnt_end_op_ctrlx_t
#define bustype_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) "DSSX_PERF_CNT_END_OP_CTRLX"
#define device_bar_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_END_OP_CTRLX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_end_status#
 *
 * Performance Counters End Status Register
 * DSS performance counters status.
 * This register indicates counter status if still running for timer mode.
 */
union ody_dssx_perf_cnt_end_statusx {
	uint64_t u;
	struct ody_dssx_perf_cnt_end_statusx_s {
		uint64_t timer_mode_end              : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_perf_cnt_end_statusx_s cn; */
};
typedef union ody_dssx_perf_cnt_end_statusx ody_dssx_perf_cnt_end_statusx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_END_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_END_STATUSX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0020120ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_END_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) ody_dssx_perf_cnt_end_statusx_t
#define bustype_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) "DSSX_PERF_CNT_END_STATUSX"
#define device_bar_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_END_STATUSX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_freerun_clr
 *
 * Performance Counters Free Running Counters Clear Register
 * Free running read/writes counts clear.
 */
union ody_dssx_perf_cnt_freerun_clr {
	uint64_t u;
	struct ody_dssx_perf_cnt_freerun_clr_s {
		uint64_t wr_op_cnt_clr               : 1;
		uint64_t rd_op_cnt_clr               : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_dssx_perf_cnt_freerun_clr_s cn; */
};
typedef union ody_dssx_perf_cnt_freerun_clr ody_dssx_perf_cnt_freerun_clr_t;

static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_CLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_CLR(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020248ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_FREERUN_CLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) ody_dssx_perf_cnt_freerun_clr_t
#define bustype_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) "DSSX_PERF_CNT_FREERUN_CLR"
#define device_bar_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_FREERUN_CLR(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_freerun_ctrl
 *
 * Performance Counters Free Running Counters Control Register
 * Free running read/writes commands counter control.
 */
union ody_dssx_perf_cnt_freerun_ctrl {
	uint64_t u;
	struct ody_dssx_perf_cnt_freerun_ctrl_s {
		uint64_t wr_op_cnt_en                : 1;
		uint64_t rd_op_cnt_en                : 1;
		uint64_t wr_interrupt_en             : 1;
		uint64_t rd_interrupt_en             : 1;
		uint64_t wr_wrap_value               : 1;
		uint64_t rd_wrap_value               : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_perf_cnt_freerun_ctrl_s cn; */
};
typedef union ody_dssx_perf_cnt_freerun_ctrl ody_dssx_perf_cnt_freerun_ctrl_t;

static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020240ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_FREERUN_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) ody_dssx_perf_cnt_freerun_ctrl_t
#define bustype_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) "DSSX_PERF_CNT_FREERUN_CTRL"
#define device_bar_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_FREERUN_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_freerun_ovrflow
 *
 * Performance Counters Overflow indication of DRAM Read/Write Operations Register
 * Free running count of DRAM read operations.
 */
union ody_dssx_perf_cnt_freerun_ovrflow {
	uint64_t u;
	struct ody_dssx_perf_cnt_freerun_ovrflow_s {
		uint64_t wr_overflow                 : 1;
		uint64_t rd_overflow                 : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_dssx_perf_cnt_freerun_ovrflow_s cn; */
};
typedef union ody_dssx_perf_cnt_freerun_ovrflow ody_dssx_perf_cnt_freerun_ovrflow_t;

static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020260ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_FREERUN_OVRFLOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) ody_dssx_perf_cnt_freerun_ovrflow_t
#define bustype_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) "DSSX_PERF_CNT_FREERUN_OVRFLOW"
#define device_bar_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_FREERUN_OVRFLOW(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_int_ena_w1c
 *
 * DSS Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_dssx_perf_cnt_int_ena_w1c {
	uint64_t u;
	struct ody_dssx_perf_cnt_int_ena_w1c_s {
		uint64_t perfcnt_general_ovrflw_intr : 8;
		uint64_t perfcnt_wr_freerun_ovrflw_intr : 1;
		uint64_t perfcnt_rd_freerun_ovrflw_intr : 1;
		uint64_t gen_fill_lvl_cnt_ovrflw_intr : 3;
		uint64_t txrsp_fill_lvl_cnt_ovrflw_intr : 1;
		uint64_t wr_latency_cnt_ovrflw_intr  : 1;
		uint64_t rd_latency_cnt_ovrflw_intr  : 1;
		uint64_t cbusy_cnt_ovrflw_intr       : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_dssx_perf_cnt_int_ena_w1c_s cn; */
};
typedef union ody_dssx_perf_cnt_int_ena_w1c ody_dssx_perf_cnt_int_ena_w1c_t;

static inline uint64_t ODY_DSSX_PERF_CNT_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_INT_ENA_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0028010ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) ody_dssx_perf_cnt_int_ena_w1c_t
#define bustype_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) "DSSX_PERF_CNT_INT_ENA_W1C"
#define device_bar_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_int_ena_w1s
 *
 * DSS Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_dssx_perf_cnt_int_ena_w1s {
	uint64_t u;
	struct ody_dssx_perf_cnt_int_ena_w1s_s {
		uint64_t perfcnt_general_ovrflw_intr : 8;
		uint64_t perfcnt_wr_freerun_ovrflw_intr : 1;
		uint64_t perfcnt_rd_freerun_ovrflw_intr : 1;
		uint64_t gen_fill_lvl_cnt_ovrflw_intr : 3;
		uint64_t txrsp_fill_lvl_cnt_ovrflw_intr : 1;
		uint64_t wr_latency_cnt_ovrflw_intr  : 1;
		uint64_t rd_latency_cnt_ovrflw_intr  : 1;
		uint64_t cbusy_cnt_ovrflw_intr       : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_dssx_perf_cnt_int_ena_w1s_s cn; */
};
typedef union ody_dssx_perf_cnt_int_ena_w1s ody_dssx_perf_cnt_int_ena_w1s_t;

static inline uint64_t ODY_DSSX_PERF_CNT_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_INT_ENA_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0028018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) ody_dssx_perf_cnt_int_ena_w1s_t
#define bustype_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) "DSSX_PERF_CNT_INT_ENA_W1S"
#define device_bar_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_int_w1c
 *
 * DSS Interrupt Register
 * This register is for DSS-based interrupts.
 */
union ody_dssx_perf_cnt_int_w1c {
	uint64_t u;
	struct ody_dssx_perf_cnt_int_w1c_s {
		uint64_t perfcnt_general_ovrflw_intr : 8;
		uint64_t perfcnt_wr_freerun_ovrflw_intr : 1;
		uint64_t perfcnt_rd_freerun_ovrflw_intr : 1;
		uint64_t gen_fill_lvl_cnt_ovrflw_intr : 3;
		uint64_t txrsp_fill_lvl_cnt_ovrflw_intr : 1;
		uint64_t wr_latency_cnt_ovrflw_intr  : 1;
		uint64_t rd_latency_cnt_ovrflw_intr  : 1;
		uint64_t cbusy_cnt_ovrflw_intr       : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_dssx_perf_cnt_int_w1c_s cn; */
};
typedef union ody_dssx_perf_cnt_int_w1c ody_dssx_perf_cnt_int_w1c_t;

static inline uint64_t ODY_DSSX_PERF_CNT_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_INT_W1C(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0028000ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_INT_W1C(a) ody_dssx_perf_cnt_int_w1c_t
#define bustype_ODY_DSSX_PERF_CNT_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_INT_W1C(a) "DSSX_PERF_CNT_INT_W1C"
#define device_bar_ODY_DSSX_PERF_CNT_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_INT_W1C(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_int_w1s
 *
 * DSS Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_dssx_perf_cnt_int_w1s {
	uint64_t u;
	struct ody_dssx_perf_cnt_int_w1s_s {
		uint64_t perfcnt_general_ovrflw_intr : 8;
		uint64_t perfcnt_wr_freerun_ovrflw_intr : 1;
		uint64_t perfcnt_rd_freerun_ovrflw_intr : 1;
		uint64_t gen_fill_lvl_cnt_ovrflw_intr : 3;
		uint64_t txrsp_fill_lvl_cnt_ovrflw_intr : 1;
		uint64_t wr_latency_cnt_ovrflw_intr  : 1;
		uint64_t rd_latency_cnt_ovrflw_intr  : 1;
		uint64_t cbusy_cnt_ovrflw_intr       : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_dssx_perf_cnt_int_w1s_s cn; */
};
typedef union ody_dssx_perf_cnt_int_w1s ody_dssx_perf_cnt_int_w1s_t;

static inline uint64_t ODY_DSSX_PERF_CNT_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_INT_W1S(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0028008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_INT_W1S(a) ody_dssx_perf_cnt_int_w1s_t
#define bustype_ODY_DSSX_PERF_CNT_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_INT_W1S(a) "DSSX_PERF_CNT_INT_W1S"
#define device_bar_ODY_DSSX_PERF_CNT_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_INT_W1S(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_op_mode_ctrl#
 *
 * Performance Counters Operating Mode Control Register
 * DSS performance counters control.
 * This register configures the operating mode of the counters.
 */
union ody_dssx_perf_cnt_op_mode_ctrlx {
	uint64_t u;
	struct ody_dssx_perf_cnt_op_mode_ctrlx_s {
		uint64_t operating_mode              : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_perf_cnt_op_mode_ctrlx_s cn; */
};
typedef union ody_dssx_perf_cnt_op_mode_ctrlx ody_dssx_perf_cnt_op_mode_ctrlx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0020020ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_OP_MODE_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) ody_dssx_perf_cnt_op_mode_ctrlx_t
#define bustype_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) "DSSX_PERF_CNT_OP_MODE_CTRLX"
#define device_bar_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_OP_MODE_CTRLX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_overflow#
 *
 * Performance Counters overflow indication Register
 * Status register to indicate if counter overflowed.
 */
union ody_dssx_perf_cnt_overflowx {
	uint64_t u;
	struct ody_dssx_perf_cnt_overflowx_s {
		uint64_t counter_overflow            : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_perf_cnt_overflowx_s cn; */
};
typedef union ody_dssx_perf_cnt_overflowx ody_dssx_perf_cnt_overflowx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_OVERFLOWX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_OVERFLOWX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0020200ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_OVERFLOWX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) ody_dssx_perf_cnt_overflowx_t
#define bustype_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) "DSSX_PERF_CNT_OVERFLOWX"
#define device_bar_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_OVERFLOWX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_rd_cmd_cfg#
 *
 * DSS Performance Counters CHI Read Command event Configuration Register
 * Configuration register of CHI read command event. This register is used to configure
 * the filtering criteria according to CHI request properties.
 * Note: This register is a continuation to DSS_PERF_CNT_CFG.
 */
union ody_dssx_perf_cnt_rd_cmd_cfgx {
	uint64_t u;
	struct ody_dssx_perf_cnt_rd_cmd_cfgx_s {
		uint64_t rd_cmd_event_en             : 1;
		uint64_t rd_cmd_match_size           : 1;
		uint64_t rd_cmd_desired_size         : 3;
		uint64_t rd_cmd_match_pri            : 1;
		uint64_t rd_cmd_desired_pri          : 2;
		uint64_t rd_cmd_match_mpamns         : 1;
		uint64_t rd_cmd_desired_mpamns       : 1;
		uint64_t rd_cmd_match_pmg            : 1;
		uint64_t rd_cmd_desired_pmg          : 1;
		uint64_t rd_cmd_match_partid         : 9;
		uint64_t rd_cmd_desired_partid       : 9;
		uint64_t rd_cmd_match_req_src        : 1;
		uint64_t rd_cmd_desired_req_src      : 2;
		uint64_t rd_cmd_cnt_behavior         : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dssx_perf_cnt_rd_cmd_cfgx_s cn; */
};
typedef union ody_dssx_perf_cnt_rd_cmd_cfgx ody_dssx_perf_cnt_rd_cmd_cfgx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_RD_CMD_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_RD_CMD_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0008390ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_RD_CMD_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) ody_dssx_perf_cnt_rd_cmd_cfgx_t
#define bustype_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) "DSSX_PERF_CNT_RD_CMD_CFGX"
#define device_bar_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_RD_CMD_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_security_cfg
 *
 * DSS Performance Counters Security Configuration Register
 * Configuration register of performance counters security.
 */
union ody_dssx_perf_cnt_security_cfg {
	uint64_t u;
	struct ody_dssx_perf_cnt_security_cfg_s {
		uint64_t allow_mon_secured_partid    : 8;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_dssx_perf_cnt_security_cfg_s cn; */
};
typedef union ody_dssx_perf_cnt_security_cfg ody_dssx_perf_cnt_security_cfg_t;

static inline uint64_t ODY_DSSX_PERF_CNT_SECURITY_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_SECURITY_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0008410ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_SECURITY_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) ody_dssx_perf_cnt_security_cfg_t
#define bustype_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) "DSSX_PERF_CNT_SECURITY_CFG"
#define device_bar_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_SECURITY_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_start_op_ctrl#
 *
 * Performance Counters Start Operation Control Register
 * DSS performance counters control.
 * This register controls the start of counters operation.
 */
union ody_dssx_perf_cnt_start_op_ctrlx {
	uint64_t u;
	struct ody_dssx_perf_cnt_start_op_ctrlx_s {
		uint64_t start                       : 1;
		uint64_t ongoing_cnt_op              : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_dssx_perf_cnt_start_op_ctrlx_s cn; */
};
typedef union ody_dssx_perf_cnt_start_op_ctrlx ody_dssx_perf_cnt_start_op_ctrlx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_START_OP_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_START_OP_CTRLX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b00200a0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_START_OP_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) ody_dssx_perf_cnt_start_op_ctrlx_t
#define bustype_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) "DSSX_PERF_CNT_START_OP_CTRLX"
#define device_bar_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_START_OP_CTRLX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_target_tmr_val#
 *
 * Performance Counters Target Timer Value Register
 * DSS performance counters timer control.
 * This register configures the target timer value for timer operation mode.
 */
union ody_dssx_perf_cnt_target_tmr_valx {
	uint64_t u;
	struct ody_dssx_perf_cnt_target_tmr_valx_s {
		uint64_t timer_value                 : 64;
	} s;
	/* struct ody_dssx_perf_cnt_target_tmr_valx_s cn; */
};
typedef union ody_dssx_perf_cnt_target_tmr_valx ody_dssx_perf_cnt_target_tmr_valx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b0020060ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_TARGET_TMR_VALX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) ody_dssx_perf_cnt_target_tmr_valx_t
#define bustype_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) "DSSX_PERF_CNT_TARGET_TMR_VALX"
#define device_bar_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_TARGET_TMR_VALX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_value#
 *
 * Performance Counters Value Register
 * Count of enabled events that occurred when the counter is enabled.
 */
union ody_dssx_perf_cnt_valuex {
	uint64_t u;
	struct ody_dssx_perf_cnt_valuex_s {
		uint64_t counter_value               : 64;
	} s;
	/* struct ody_dssx_perf_cnt_valuex_s cn; */
};
typedef union ody_dssx_perf_cnt_valuex ody_dssx_perf_cnt_valuex_t;

static inline uint64_t ODY_DSSX_PERF_CNT_VALUEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_VALUEX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b00201c0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_VALUEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_VALUEX(a, b) ody_dssx_perf_cnt_valuex_t
#define bustype_ODY_DSSX_PERF_CNT_VALUEX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_VALUEX(a, b) "DSSX_PERF_CNT_VALUEX"
#define device_bar_ODY_DSSX_PERF_CNT_VALUEX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_VALUEX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_VALUEX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_perf_cnt_value_rd_op
 *
 * Performance Counters Value of DRAM Read Operations Register
 * Free running count of DRAM read operations.
 */
union ody_dssx_perf_cnt_value_rd_op {
	uint64_t u;
	struct ody_dssx_perf_cnt_value_rd_op_s {
		uint64_t rd_op_counter_value         : 64;
	} s;
	/* struct ody_dssx_perf_cnt_value_rd_op_s cn; */
};
typedef union ody_dssx_perf_cnt_value_rd_op ody_dssx_perf_cnt_value_rd_op_t;

static inline uint64_t ODY_DSSX_PERF_CNT_VALUE_RD_OP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_VALUE_RD_OP(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020258ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_VALUE_RD_OP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) ody_dssx_perf_cnt_value_rd_op_t
#define bustype_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) "DSSX_PERF_CNT_VALUE_RD_OP"
#define device_bar_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_VALUE_RD_OP(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_value_wr_op
 *
 * Performance Counters Value of DRAM Write Operations Register
 * Free running count of DRAM write operations.
 */
union ody_dssx_perf_cnt_value_wr_op {
	uint64_t u;
	struct ody_dssx_perf_cnt_value_wr_op_s {
		uint64_t wr_op_counter_value         : 64;
	} s;
	/* struct ody_dssx_perf_cnt_value_wr_op_s cn; */
};
typedef union ody_dssx_perf_cnt_value_wr_op ody_dssx_perf_cnt_value_wr_op_t;

static inline uint64_t ODY_DSSX_PERF_CNT_VALUE_WR_OP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_VALUE_WR_OP(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0020250ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PERF_CNT_VALUE_WR_OP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) ody_dssx_perf_cnt_value_wr_op_t
#define bustype_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) "DSSX_PERF_CNT_VALUE_WR_OP"
#define device_bar_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) (a)
#define arguments_ODY_DSSX_PERF_CNT_VALUE_WR_OP(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_perf_cnt_wr_cmd_cfg#
 *
 * DSS Performance Counters CHI Write Command event Configuration Register
 * Configuration register of CHI write command event. This register is used to
 * configure the filtering criteria according to CHI request properties.
 * Note: This register is a continuation to DSS_PERF_CNT_CFG.
 */
union ody_dssx_perf_cnt_wr_cmd_cfgx {
	uint64_t u;
	struct ody_dssx_perf_cnt_wr_cmd_cfgx_s {
		uint64_t wr_cmd_event_en             : 1;
		uint64_t wr_cmd_match_size           : 1;
		uint64_t wr_cmd_desired_size         : 3;
		uint64_t wr_cmd_match_pri            : 1;
		uint64_t wr_cmd_desired_pri          : 2;
		uint64_t wr_cmd_match_mpamns         : 1;
		uint64_t wr_cmd_desired_mpamns       : 1;
		uint64_t wr_cmd_match_pmg            : 1;
		uint64_t wr_cmd_desired_pmg          : 1;
		uint64_t wr_cmd_match_partid         : 9;
		uint64_t wr_cmd_desired_partid       : 9;
		uint64_t wr_cmd_match_req_src        : 1;
		uint64_t wr_cmd_desired_req_src      : 2;
		uint64_t wr_cmd_match_req_type       : 1;
		uint64_t wr_cmd_desired_req_type     : 2;
		uint64_t wr_cmd_cnt_behavior         : 1;
		uint64_t reserved_37_63              : 27;
	} s;
	/* struct ody_dssx_perf_cnt_wr_cmd_cfgx_s cn; */
};
typedef union ody_dssx_perf_cnt_wr_cmd_cfgx ody_dssx_perf_cnt_wr_cmd_cfgx_t;

static inline uint64_t ODY_DSSX_PERF_CNT_WR_CMD_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PERF_CNT_WR_CMD_CFGX(uint64_t a, uint64_t b)
{
	if ((a <= 19) && (b <= 7))
		return 0x87e1b00083d0ll + 0x1000000ll * ((a) & 0x1f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("DSSX_PERF_CNT_WR_CMD_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) ody_dssx_perf_cnt_wr_cmd_cfgx_t
#define bustype_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) CSR_TYPE_RSL
#define basename_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) "DSSX_PERF_CNT_WR_CMD_CFGX"
#define device_bar_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) (a)
#define arguments_ODY_DSSX_PERF_CNT_WR_CMD_CFGX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) dss#_phy_apb_reset_n
 *
 * DSS PHY APB Clock Domain Reset Register
 * PHY APB clock domain software reset - active low.
 */
union ody_dssx_phy_apb_reset_n {
	uint64_t u;
	struct ody_dssx_phy_apb_reset_n_s {
		uint64_t s_phy_apb_reset_n           : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_phy_apb_reset_n_s cn; */
};
typedef union ody_dssx_phy_apb_reset_n ody_dssx_phy_apb_reset_n_t;

static inline uint64_t ODY_DSSX_PHY_APB_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PHY_APB_RESET_N(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000018ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PHY_APB_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PHY_APB_RESET_N(a) ody_dssx_phy_apb_reset_n_t
#define bustype_ODY_DSSX_PHY_APB_RESET_N(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PHY_APB_RESET_N(a) "DSSX_PHY_APB_RESET_N"
#define device_bar_ODY_DSSX_PHY_APB_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PHY_APB_RESET_N(a) (a)
#define arguments_ODY_DSSX_PHY_APB_RESET_N(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_phy_ctrl
 *
 * DSS PHY Control Register
 * PHY control register.
 */
union ody_dssx_phy_ctrl {
	uint64_t u;
	struct ody_dssx_phy_ctrl_s {
		uint64_t s_phy_pprot                 : 3;
		uint64_t s_phy_pwrok                 : 1;
		uint64_t s_phy_mdc_dis               : 1;
		uint64_t s_dual_channel_en           : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_dssx_phy_ctrl_s cn; */
};
typedef union ody_dssx_phy_ctrl ody_dssx_phy_ctrl_t;

static inline uint64_t ODY_DSSX_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PHY_CTRL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000040ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PHY_CTRL(a) ody_dssx_phy_ctrl_t
#define bustype_ODY_DSSX_PHY_CTRL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PHY_CTRL(a) "DSSX_PHY_CTRL"
#define device_bar_ODY_DSSX_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PHY_CTRL(a) (a)
#define arguments_ODY_DSSX_PHY_CTRL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_phy_ref_reset_n
 *
 * DSS PHY Domain Reset Register
 * PHY clock software reset - active low.
 */
union ody_dssx_phy_ref_reset_n {
	uint64_t u;
	struct ody_dssx_phy_ref_reset_n_s {
		uint64_t s_phy_ref_reset_n           : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_phy_ref_reset_n_s cn; */
};
typedef union ody_dssx_phy_ref_reset_n ody_dssx_phy_ref_reset_n_t;

static inline uint64_t ODY_DSSX_PHY_REF_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_PHY_REF_RESET_N(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000008ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_PHY_REF_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_PHY_REF_RESET_N(a) ody_dssx_phy_ref_reset_n_t
#define bustype_ODY_DSSX_PHY_REF_RESET_N(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_PHY_REF_RESET_N(a) "DSSX_PHY_REF_RESET_N"
#define device_bar_ODY_DSSX_PHY_REF_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_PHY_REF_RESET_N(a) (a)
#define arguments_ODY_DSSX_PHY_REF_RESET_N(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_rsl_ddrctl_permit
 *
 * DSS RSL Bus Permit to DDRCTL Register
 * This register sets the permissions for access to the DDRCTL addresses.
 * DDRCTL MPAM addresses are exluded from this register.
 */
union ody_dssx_rsl_ddrctl_permit {
	uint64_t u;
	struct ody_dssx_rsl_ddrctl_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_7                : 3;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_dssx_rsl_ddrctl_permit_s cn; */
};
typedef union ody_dssx_rsl_ddrctl_permit ody_dssx_rsl_ddrctl_permit_t;

static inline uint64_t ODY_DSSX_RSL_DDRCTL_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_RSL_DDRCTL_PERMIT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000208ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_RSL_DDRCTL_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_RSL_DDRCTL_PERMIT(a) ody_dssx_rsl_ddrctl_permit_t
#define bustype_ODY_DSSX_RSL_DDRCTL_PERMIT(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_RSL_DDRCTL_PERMIT(a) "DSSX_RSL_DDRCTL_PERMIT"
#define device_bar_ODY_DSSX_RSL_DDRCTL_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_RSL_DDRCTL_PERMIT(a) (a)
#define arguments_ODY_DSSX_RSL_DDRCTL_PERMIT(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_rsl_mct_permit
 *
 * DSS RSL Bus Permit to MCT Register
 * This register sets the permissions for access to the MCT addresses.
 */
union ody_dssx_rsl_mct_permit {
	uint64_t u;
	struct ody_dssx_rsl_mct_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_7                : 3;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_dssx_rsl_mct_permit_s cn; */
};
typedef union ody_dssx_rsl_mct_permit ody_dssx_rsl_mct_permit_t;

static inline uint64_t ODY_DSSX_RSL_MCT_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_RSL_MCT_PERMIT(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000200ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_RSL_MCT_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_RSL_MCT_PERMIT(a) ody_dssx_rsl_mct_permit_t
#define bustype_ODY_DSSX_RSL_MCT_PERMIT(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_RSL_MCT_PERMIT(a) "DSSX_RSL_MCT_PERMIT"
#define device_bar_ODY_DSSX_RSL_MCT_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_RSL_MCT_PERMIT(a) (a)
#define arguments_ODY_DSSX_RSL_MCT_PERMIT(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_top_global_clock_enable
 *
 * DSS TOP Global Clock Enable Register
 * Force DSS_TOP sub-block coarse clock to be always on.
 */
union ody_dssx_top_global_clock_enable {
	uint64_t u;
	struct ody_dssx_top_global_clock_enable_s {
		uint64_t coarse_clk_force            : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_top_global_clock_enable_s cn; */
};
typedef union ody_dssx_top_global_clock_enable ody_dssx_top_global_clock_enable_t;

static inline uint64_t ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b0000108ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_TOP_GLOBAL_CLOCK_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) ody_dssx_top_global_clock_enable_t
#define bustype_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) "DSSX_TOP_GLOBAL_CLOCK_ENABLE"
#define device_bar_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) (a)
#define arguments_ODY_DSSX_TOP_GLOBAL_CLOCK_ENABLE(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_txrsp_fill_lvl_cnt_cfg
 *
 * DSS Performance Counters Accumulative Occupancy Level Configuration Of TxRSP Flitq Register
 * Configuration register of internal memory controller CHB link layer TxRsp flitq
 * queue's current fill level counter.
 */
union ody_dssx_txrsp_fill_lvl_cnt_cfg {
	uint64_t u;
	struct ody_dssx_txrsp_fill_lvl_cnt_cfg_s {
		uint64_t cnt_en                      : 1;
		uint64_t wrap_value                  : 1;
		uint64_t interrupt_en                : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dssx_txrsp_fill_lvl_cnt_cfg_s cn; */
};
typedef union ody_dssx_txrsp_fill_lvl_cnt_cfg ody_dssx_txrsp_fill_lvl_cnt_cfg_t;

static inline uint64_t ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00084d8ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_TXRSP_FILL_LVL_CNT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) ody_dssx_txrsp_fill_lvl_cnt_cfg_t
#define bustype_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) "DSSX_TXRSP_FILL_LVL_CNT_CFG"
#define device_bar_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) (a)
#define arguments_ODY_DSSX_TXRSP_FILL_LVL_CNT_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_txrsp_fill_lvl_cnt_val
 *
 * Performance Counters Fill Level Value Register
 * Count of Accumulative occupancy level in memory controller internal TxRSP Flitq queue.
 */
union ody_dssx_txrsp_fill_lvl_cnt_val {
	uint64_t u;
	struct ody_dssx_txrsp_fill_lvl_cnt_val_s {
		uint64_t counter_value               : 64;
	} s;
	/* struct ody_dssx_txrsp_fill_lvl_cnt_val_s cn; */
};
typedef union ody_dssx_txrsp_fill_lvl_cnt_val ody_dssx_txrsp_fill_lvl_cnt_val_t;

static inline uint64_t ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00085c0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_TXRSP_FILL_LVL_CNT_VAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) ody_dssx_txrsp_fill_lvl_cnt_val_t
#define bustype_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) "DSSX_TXRSP_FILL_LVL_CNT_VAL"
#define device_bar_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) (a)
#define arguments_ODY_DSSX_TXRSP_FILL_LVL_CNT_VAL(a) (a), -1, -1, -1

/**
 * Register (RSL) dss#_txrsp_filllvl_cnt_ovrflw
 *
 * Performance Counters TxRSP Fill Level overflow indication Register
 * This register indicates if TxRSP Flitq fill level counter overflowed.
 */
union ody_dssx_txrsp_filllvl_cnt_ovrflw {
	uint64_t u;
	struct ody_dssx_txrsp_filllvl_cnt_ovrflw_s {
		uint64_t counter_overflow            : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_dssx_txrsp_filllvl_cnt_ovrflw_s cn; */
};
typedef union ody_dssx_txrsp_filllvl_cnt_ovrflw ody_dssx_txrsp_filllvl_cnt_ovrflw_t;

static inline uint64_t ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(uint64_t a)
{
	if (a <= 19)
		return 0x87e1b00086c0ll + 0x1000000ll * ((a) & 0x1f);
	__ody_csr_fatal("DSSX_TXRSP_FILLLVL_CNT_OVRFLW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) ody_dssx_txrsp_filllvl_cnt_ovrflw_t
#define bustype_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) CSR_TYPE_RSL
#define basename_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) "DSSX_TXRSP_FILLLVL_CNT_OVRFLW"
#define device_bar_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) (a)
#define arguments_ODY_DSSX_TXRSP_FILLLVL_CNT_OVRFLW(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_DSS_H__ */
