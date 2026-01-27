#ifndef __ODY_CSRS_XCP_H__
#define __ODY_CSRS_XCP_H__
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
 * XCP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration xcp_addr_prt_e
 *
 * XCP Address Partition Enumeration
 * Enumerates the partitions in CM7 address space, as recorded in XCP()_PRECISE_BUS_ERR_STATUS[PART].
 */
#define ODY_XCP_ADDR_PRT_E_CSR_CPC (3)
#define ODY_XCP_ADDR_PRT_E_CSR_PSBM (4)
#define ODY_XCP_ADDR_PRT_E_CSR_XCP (2)
#define ODY_XCP_ADDR_PRT_E_MEM (1)
#define ODY_XCP_ADDR_PRT_E_NCB (5)
#define ODY_XCP_ADDR_PRT_E_NONE (0)
#define ODY_XCP_ADDR_PRT_E_RML (6)

/**
 * Enumeration xcp_bar_e
 *
 * XCP Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_XCP_BAR_E_XCPX_PF_BAR0(a) (0x82c000000000ll + 0x1000000000ll * (a))
#define ODY_XCP_BAR_E_XCPX_PF_BAR0_SIZE 0x100000ull
#define ODY_XCP_BAR_E_XCPX_PF_BAR4(a) (0x82c000100000ll + 0x1000000000ll * (a))
#define ODY_XCP_BAR_E_XCPX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration xcp_cm7_vec_int_e
 *
 * XCP CM7 Vectored Interrupt Enumeration
 * Enumerates the vectored interrupt inputs to the CM7 core.
 */
#define ODY_XCP_CM7_VEC_INT_E_BUS_ERR (0)
#define ODY_XCP_CM7_VEC_INT_E_CTIIRQ0 (6)
#define ODY_XCP_CM7_VEC_INT_E_CTIIRQ1 (7)
#define ODY_XCP_CM7_VEC_INT_E_EXT_INTX(a) (0x40 + (a))
#define ODY_XCP_CM7_VEC_INT_E_GIB0 (2)
#define ODY_XCP_CM7_VEC_INT_E_GIB1 (3)
#define ODY_XCP_CM7_VEC_INT_E_GIB2 (4)
#define ODY_XCP_CM7_VEC_INT_E_MBOX (5)
#define ODY_XCP_CM7_VEC_INT_E_RESERVEDX(a) (8 + (a))
#define ODY_XCP_CM7_VEC_INT_E_WDOG (1)

/**
 * Enumeration xcp_dintf_err_type_e
 *
 * XCP Data Interface Precise Error Enumeration
 * Enumerates the precise error types, as recorded in XCP()_PRECISE_BUS_ERR_STATUS[ERR_TYPE].
 */
#define ODY_XCP_DINTF_ERR_TYPE_E_ACCESS_ERR (3)
#define ODY_XCP_DINTF_ERR_TYPE_E_ERR_NCB_CORE_RESET (5)
#define ODY_XCP_DINTF_ERR_TYPE_E_FETCH_ERR_NCB_FETCH_DIS (4)
#define ODY_XCP_DINTF_ERR_TYPE_E_INV_ADDR (2)
#define ODY_XCP_DINTF_ERR_TYPE_E_NO_ERR (0)
#define ODY_XCP_DINTF_ERR_TYPE_E_RD_ERR_NCB (6)
#define ODY_XCP_DINTF_ERR_TYPE_E_UMPD_ADDR (1)
#define ODY_XCP_DINTF_ERR_TYPE_E_WR_ERR_NCB (7)

/**
 * Enumeration xcp_int_vec_e
 *
 * XCP MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_XCP_INT_VEC_E_XCP_DEV_MBOXX(a) (0 + (a))

/**
 * Enumeration xcp_mbox_dev_e
 *
 * XCP Mailbox Device ID Enumeration
 * Enumerates the device ID for MBOX registers.
 */
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE0 (0x20)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE1 (0x21)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE10 (0x2a)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE11 (0x2b)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE12 (0x2c)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE13 (0x2d)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE14 (0x2e)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE15 (0x2f)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE16 (0x30)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE17 (0x31)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE18 (0x32)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE19 (0x33)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE2 (0x22)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE20 (0x34)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE21 (0x35)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE22 (0x36)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE23 (0x37)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE3 (0x23)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE4 (0x24)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE5 (0x25)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE6 (0x26)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE7 (0x27)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE8 (0x28)
#define ODY_XCP_MBOX_DEV_E_AP_NONSECURE9 (0x29)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE0 (0)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE1 (1)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE10 (0xa)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE11 (0xb)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE12 (0xc)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE13 (0xd)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE14 (0xe)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE15 (0xf)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE16 (0x10)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE17 (0x11)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE18 (0x12)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE19 (0x13)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE2 (2)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE20 (0x14)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE21 (0x15)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE22 (0x16)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE23 (0x17)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE24 (0x18)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE25 (0x19)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE26 (0x1a)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE27 (0x1b)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE28 (0x1c)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE29 (0x1d)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE3 (3)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE30 (0x1e)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE31 (0x1f)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE4 (4)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE5 (5)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE6 (6)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE7 (7)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE8 (8)
#define ODY_XCP_MBOX_DEV_E_AP_SECURE9 (9)
#define ODY_XCP_MBOX_DEV_E_CCP_LOCAL (0x3a)
#define ODY_XCP_MBOX_DEV_E_CCP_REMOTE (0x3d)
#define ODY_XCP_MBOX_DEV_E_MCP_LOCAL (0x39)
#define ODY_XCP_MBOX_DEV_E_MCP_REMOTE (0x3c)
#define ODY_XCP_MBOX_DEV_E_SCP_LOCAL (0x38)
#define ODY_XCP_MBOX_DEV_E_SCP_REMOTE (0x3b)

/**
 * Register (NCB) xcp#_anb_aximstr_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_aximstr_status {
	uint64_t u;
	struct ody_xcpx_anb_aximstr_status_s {
		uint64_t anb_aximstr_rd_resp_nok     : 1;
		uint64_t anb_aximstr_wr_resp_nok     : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_xcpx_anb_aximstr_status_s cn; */
};
typedef union ody_xcpx_anb_aximstr_status ody_xcpx_anb_aximstr_status_t;

static inline uint64_t ODY_XCPX_ANB_AXIMSTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_AXIMSTR_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007060ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_AXIMSTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_AXIMSTR_STATUS(a) ody_xcpx_anb_aximstr_status_t
#define bustype_ODY_XCPX_ANB_AXIMSTR_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_AXIMSTR_STATUS(a) "XCPX_ANB_AXIMSTR_STATUS"
#define device_bar_ODY_XCPX_ANB_AXIMSTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_AXIMSTR_STATUS(a) (a)
#define arguments_ODY_XCPX_ANB_AXIMSTR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_axislv_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_axislv_status {
	uint64_t u;
	struct ody_xcpx_anb_axislv_status_s {
		uint64_t anb_axislv_b_fifo_overrun   : 1;
		uint64_t anb_axislv_r_fifo_overrun   : 1;
		uint64_t anb_axislv_load_size_exc    : 1;
		uint64_t anb_axislv_write_size_exc   : 1;
		uint64_t anb_axislv_empty_write      : 1;
		uint64_t anb_axislv_multi_beat_nrw_wr : 1;
		uint64_t anb_axislv_multi_beat_nrw_rd : 1;
		uint64_t anb_axislv_single_beat_nrw_wr : 1;
		uint64_t anb_axislv_single_beat_nrw_rd : 1;
		uint64_t anb_axislv_bad_narrow_write_8 : 1;
		uint64_t anb_axislv_bad_narrow_write_16 : 1;
		uint64_t anb_axislv_bad_narrow_write_32 : 1;
		uint64_t anb_axislv_bad_narrow_write_64 : 1;
		uint64_t reserved_13_63              : 51;
	} s;
	/* struct ody_xcpx_anb_axislv_status_s cn; */
};
typedef union ody_xcpx_anb_axislv_status ody_xcpx_anb_axislv_status_t;

static inline uint64_t ODY_XCPX_ANB_AXISLV_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_AXISLV_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007030ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_AXISLV_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_AXISLV_STATUS(a) ody_xcpx_anb_axislv_status_t
#define bustype_ODY_XCPX_ANB_AXISLV_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_AXISLV_STATUS(a) "XCPX_ANB_AXISLV_STATUS"
#define device_bar_ODY_XCPX_ANB_AXISLV_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_AXISLV_STATUS(a) (a)
#define arguments_ODY_XCPX_ANB_AXISLV_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_backp_disable
 *
 * ANB Backpressure Configuration Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_backp_disable {
	uint64_t u;
	struct ody_xcpx_anb_backp_disable_s {
		uint64_t anb_extmstr_b_backp_disable : 1;
		uint64_t anb_extmstr_r_backp_disable : 1;
		uint64_t anb_chicken_w_wait_for_aw   : 1;
		uint64_t anb_force_ncb_rst_active    : 1;
		uint64_t anb_ncb_rst_drain_axislv_fifos : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_xcpx_anb_backp_disable_s cn; */
};
typedef union ody_xcpx_anb_backp_disable ody_xcpx_anb_backp_disable_t;

static inline uint64_t ODY_XCPX_ANB_BACKP_DISABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_BACKP_DISABLE(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_BACKP_DISABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_BACKP_DISABLE(a) ody_xcpx_anb_backp_disable_t
#define bustype_ODY_XCPX_ANB_BACKP_DISABLE(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_BACKP_DISABLE(a) "XCPX_ANB_BACKP_DISABLE"
#define device_bar_ODY_XCPX_ANB_BACKP_DISABLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_BACKP_DISABLE(a) (a)
#define arguments_ODY_XCPX_ANB_BACKP_DISABLE(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_ncbi_np_ovr {
	uint64_t u;
	struct ody_xcpx_anb_ncbi_np_ovr_s {
		uint64_t anb_ncbi_np_msh_dst_ovr_vld : 1;
		uint64_t anb_ncbi_np_msh_dst_ovr     : 11;
		uint64_t anb_ncbi_np_ns_ovr_vld      : 1;
		uint64_t anb_ncbi_np_ns_ovr          : 1;
		uint64_t anb_ncbi_np_paddr_ovr_vld   : 1;
		uint64_t anb_ncbi_np_paddr_ovr       : 1;
		uint64_t anb_ncbi_np_ro_ovr_vld      : 1;
		uint64_t anb_ncbi_np_ro_ovr          : 1;
		uint64_t anb_ncbi_np_mpadid_val_ovr_vld : 1;
		uint64_t anb_ncbi_np_mpadid_val_ovr  : 1;
		uint64_t anb_ncbi_np_mpamdid_ovr_vld : 1;
		uint64_t anb_ncbi_np_mpamdid_ovr     : 10;
		uint64_t anb_ncbi_np_ldd_frc         : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_xcpx_anb_ncbi_np_ovr_s cn; */
};
typedef union ody_xcpx_anb_ncbi_np_ovr ody_xcpx_anb_ncbi_np_ovr_t;

static inline uint64_t ODY_XCPX_ANB_NCBI_NP_OVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_NCBI_NP_OVR(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007020ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_NCBI_NP_OVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_NCBI_NP_OVR(a) ody_xcpx_anb_ncbi_np_ovr_t
#define bustype_ODY_XCPX_ANB_NCBI_NP_OVR(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_NCBI_NP_OVR(a) "XCPX_ANB_NCBI_NP_OVR"
#define device_bar_ODY_XCPX_ANB_NCBI_NP_OVR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_NCBI_NP_OVR(a) (a)
#define arguments_ODY_XCPX_ANB_NCBI_NP_OVR(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_ncbi_p_ovr {
	uint64_t u;
	struct ody_xcpx_anb_ncbi_p_ovr_s {
		uint64_t anb_ncbi_p_msh_dst_ovr_vld  : 1;
		uint64_t anb_ncbi_p_msh_dst_ovr      : 11;
		uint64_t anb_ncbi_p_ns_ovr_vld       : 1;
		uint64_t anb_ncbi_p_ns_ovr           : 1;
		uint64_t anb_ncbi_p_paddr_ovr_vld    : 1;
		uint64_t anb_ncbi_p_paddr_ovr        : 1;
		uint64_t anb_ncbi_p_ro_ovr_vld       : 1;
		uint64_t anb_ncbi_p_ro_ovr           : 1;
		uint64_t anb_ncbi_p_mpadid_val_ovr_vld : 1;
		uint64_t anb_ncbi_p_mpadid_val_ovr   : 1;
		uint64_t anb_ncbi_p_mpamdid_ovr_vld  : 1;
		uint64_t anb_ncbi_p_mpamdid_ovr      : 10;
		uint64_t anb_ncbi_p_stt_frc          : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_xcpx_anb_ncbi_p_ovr_s cn; */
};
typedef union ody_xcpx_anb_ncbi_p_ovr ody_xcpx_anb_ncbi_p_ovr_t;

static inline uint64_t ODY_XCPX_ANB_NCBI_P_OVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_NCBI_P_OVR(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007010ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_NCBI_P_OVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_NCBI_P_OVR(a) ody_xcpx_anb_ncbi_p_ovr_t
#define bustype_ODY_XCPX_ANB_NCBI_P_OVR(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_NCBI_P_OVR(a) "XCPX_ANB_NCBI_P_OVR"
#define device_bar_ODY_XCPX_ANB_NCBI_P_OVR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_NCBI_P_OVR(a) (a)
#define arguments_ODY_XCPX_ANB_NCBI_P_OVR(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_ncbitx_status {
	uint64_t u;
	struct ody_xcpx_anb_ncbitx_status_s {
		uint64_t anb_ncbitx_split_rd         : 1;
		uint64_t anb_ncbitx_split_wr         : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_xcpx_anb_ncbitx_status_s cn; */
};
typedef union ody_xcpx_anb_ncbitx_status ody_xcpx_anb_ncbitx_status_t;

static inline uint64_t ODY_XCPX_ANB_NCBITX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_NCBITX_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007040ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_NCBITX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_NCBITX_STATUS(a) ody_xcpx_anb_ncbitx_status_t
#define bustype_ODY_XCPX_ANB_NCBITX_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_NCBITX_STATUS(a) "XCPX_ANB_NCBITX_STATUS"
#define device_bar_ODY_XCPX_ANB_NCBITX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_NCBITX_STATUS(a) (a)
#define arguments_ODY_XCPX_ANB_NCBITX_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_anb_ncborx_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection XCP core and NCB.
 */
union ody_xcpx_anb_ncborx_status {
	uint64_t u;
	struct ody_xcpx_anb_ncborx_status_s {
		uint64_t anb_ncborx_rcvd_unsupported_op : 1;
		uint64_t anb_nbcorx_max_num_ncb_ld_exc : 1;
		uint64_t anb_nbcorx_max_size_ncb_ld_exc : 1;
		uint64_t anb_nbcorx_max_num_ncb_st_exc : 1;
		uint64_t anb_nbcorx_max_size_ncb_st_exc : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_xcpx_anb_ncborx_status_s cn; */
};
typedef union ody_xcpx_anb_ncborx_status ody_xcpx_anb_ncborx_status_t;

static inline uint64_t ODY_XCPX_ANB_NCBORX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ANB_NCBORX_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000007050ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ANB_NCBORX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ANB_NCBORX_STATUS(a) ody_xcpx_anb_ncborx_status_t
#define bustype_ODY_XCPX_ANB_NCBORX_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_ANB_NCBORX_STATUS(a) "XCPX_ANB_NCBORX_STATUS"
#define device_bar_ODY_XCPX_ANB_NCBORX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ANB_NCBORX_STATUS(a) (a)
#define arguments_ODY_XCPX_ANB_NCBORX_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_boot_jump
 *
 * XCP Boot Jump Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_xcpx_boot_jump {
	uint32_t u;
	struct ody_xcpx_boot_jump_s {
		uint32_t addr                        : 32;
	} s;
	/* struct ody_xcpx_boot_jump_s cn; */
};
typedef union ody_xcpx_boot_jump ody_xcpx_boot_jump_t;

static inline uint64_t ODY_XCPX_BOOT_JUMP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_BOOT_JUMP(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000130ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_BOOT_JUMP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_BOOT_JUMP(a) ody_xcpx_boot_jump_t
#define bustype_ODY_XCPX_BOOT_JUMP(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_BOOT_JUMP(a) "XCPX_BOOT_JUMP"
#define device_bar_ODY_XCPX_BOOT_JUMP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_BOOT_JUMP(a) (a)
#define arguments_ODY_XCPX_BOOT_JUMP(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_bus_err_lint
 *
 * XCP Bus error Interrupt Register
 * This register assert error interrupt for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_bus_err_lint {
	uint32_t u;
	struct ody_xcpx_bus_err_lint_s {
		uint32_t sw_bus_err                  : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_bus_err_lint_s cn; */
};
typedef union ody_xcpx_bus_err_lint ody_xcpx_bus_err_lint_t;

static inline uint64_t ODY_XCPX_BUS_ERR_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_BUS_ERR_LINT(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001c00ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_BUS_ERR_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_BUS_ERR_LINT(a) ody_xcpx_bus_err_lint_t
#define bustype_ODY_XCPX_BUS_ERR_LINT(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_BUS_ERR_LINT(a) "XCPX_BUS_ERR_LINT"
#define device_bar_ODY_XCPX_BUS_ERR_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_BUS_ERR_LINT(a) (a)
#define arguments_ODY_XCPX_BUS_ERR_LINT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_bus_err_lint_ena_w1c
 *
 * XCP NCB bus error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_xcpx_bus_err_lint_ena_w1c {
	uint32_t u;
	struct ody_xcpx_bus_err_lint_ena_w1c_s {
		uint32_t sw_bus_err                  : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_bus_err_lint_ena_w1c_s cn; */
};
typedef union ody_xcpx_bus_err_lint_ena_w1c ody_xcpx_bus_err_lint_ena_w1c_t;

static inline uint64_t ODY_XCPX_BUS_ERR_LINT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_BUS_ERR_LINT_ENA_W1C(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001cc0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_BUS_ERR_LINT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) ody_xcpx_bus_err_lint_ena_w1c_t
#define bustype_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) "XCPX_BUS_ERR_LINT_ENA_W1C"
#define device_bar_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) (a)
#define arguments_ODY_XCPX_BUS_ERR_LINT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_bus_err_lint_ena_w1s
 *
 * XCP NCB bus error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_xcpx_bus_err_lint_ena_w1s {
	uint32_t u;
	struct ody_xcpx_bus_err_lint_ena_w1s_s {
		uint32_t sw_bus_err                  : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_bus_err_lint_ena_w1s_s cn; */
};
typedef union ody_xcpx_bus_err_lint_ena_w1s ody_xcpx_bus_err_lint_ena_w1s_t;

static inline uint64_t ODY_XCPX_BUS_ERR_LINT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_BUS_ERR_LINT_ENA_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001ce0ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_BUS_ERR_LINT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) ody_xcpx_bus_err_lint_ena_w1s_t
#define bustype_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) "XCPX_BUS_ERR_LINT_ENA_W1S"
#define device_bar_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) (a)
#define arguments_ODY_XCPX_BUS_ERR_LINT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_bus_err_lint_w1s
 *
 * XCP NCB bus error Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_bus_err_lint_w1s {
	uint32_t u;
	struct ody_xcpx_bus_err_lint_w1s_s {
		uint32_t sw_bus_err                  : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_bus_err_lint_w1s_s cn; */
};
typedef union ody_xcpx_bus_err_lint_w1s ody_xcpx_bus_err_lint_w1s_t;

static inline uint64_t ODY_XCPX_BUS_ERR_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_BUS_ERR_LINT_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001c80ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_BUS_ERR_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_BUS_ERR_LINT_W1S(a) ody_xcpx_bus_err_lint_w1s_t
#define bustype_ODY_XCPX_BUS_ERR_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_BUS_ERR_LINT_W1S(a) "XCPX_BUS_ERR_LINT_W1S"
#define device_bar_ODY_XCPX_BUS_ERR_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_BUS_ERR_LINT_W1S(a) (a)
#define arguments_ODY_XCPX_BUS_ERR_LINT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cfg
 *
 * XCP Configuration Register
 * This register contains the configuration bits for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_cfg {
	uint32_t u;
	struct ody_xcpx_cfg_s {
		uint32_t cfgbigend                   : 1;
		uint32_t ext_fetch_dis               : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t ctlppblock                  : 4;
		uint32_t chicken_ncb_b64             : 1;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_xcpx_cfg_s cn; */
};
typedef union ody_xcpx_cfg ody_xcpx_cfg_t;

static inline uint64_t ODY_XCPX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CFG(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000200ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CFG(a) ody_xcpx_cfg_t
#define bustype_ODY_XCPX_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CFG(a) "XCPX_CFG"
#define device_bar_ODY_XCPX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CFG(a) (a)
#define arguments_ODY_XCPX_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_clken
 *
 * XCP Clock Enable Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_clken {
	uint32_t u;
	struct ody_xcpx_clken_s {
		uint32_t clken                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_clken_s cn; */
};
typedef union ody_xcpx_clken ody_xcpx_clken_t;

static inline uint64_t ODY_XCPX_CLKEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CLKEN(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000010ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CLKEN(a) ody_xcpx_clken_t
#define bustype_ODY_XCPX_CLKEN(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CLKEN(a) "XCPX_CLKEN"
#define device_bar_ODY_XCPX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CLKEN(a) (a)
#define arguments_ODY_XCPX_CLKEN(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cold_data
 *
 * XCP Cold Reset Data Register
 * Opaque data preserved through XCP and warm resets. Reset on cold reset.  This register is not
 * reset on trusted-mode changes, so must not contain keys/secrets.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on cold reset.
 */
union ody_xcpx_cold_data {
	uint32_t u;
	struct ody_xcpx_cold_data_s {
		uint32_t data                        : 31;
		uint32_t force_secondary             : 1;
	} s;
	/* struct ody_xcpx_cold_data_s cn; */
};
typedef union ody_xcpx_cold_data ody_xcpx_cold_data_t;

static inline uint64_t ODY_XCPX_COLD_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_COLD_DATA(uint64_t a)
{
	if (a <= 2)
		return 0x82c0000da000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_COLD_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_COLD_DATA(a) ody_xcpx_cold_data_t
#define bustype_ODY_XCPX_COLD_DATA(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_COLD_DATA(a) "XCPX_COLD_DATA"
#define device_bar_ODY_XCPX_COLD_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_COLD_DATA(a) (a)
#define arguments_ODY_XCPX_COLD_DATA(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cold_sticky_w1s
 *
 * XCP Cold Reset sticky W1S Register
 * Opaque data preserved through XCP and warm resets. Writes of one stay as one until next cold
 * reset; cannot write zeros.  This register is not reset on trusted-mode changes, so must not
 * contain keys/secrets.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on cold reset.
 */
union ody_xcpx_cold_sticky_w1s {
	uint32_t u;
	struct ody_xcpx_cold_sticky_w1s_s {
		uint32_t bl1_sz_inv                  : 6;
		uint32_t data                        : 22;
		uint32_t boot_rsvd                   : 2;
		uint32_t boot_nsec                   : 1;
		uint32_t boot_sec                    : 1;
	} s;
	/* struct ody_xcpx_cold_sticky_w1s_s cn; */
};
typedef union ody_xcpx_cold_sticky_w1s ody_xcpx_cold_sticky_w1s_t;

static inline uint64_t ODY_XCPX_COLD_STICKY_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_COLD_STICKY_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c0000da040ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_COLD_STICKY_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_COLD_STICKY_W1S(a) ody_xcpx_cold_sticky_w1s_t
#define bustype_ODY_XCPX_COLD_STICKY_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_COLD_STICKY_W1S(a) "XCPX_COLD_STICKY_W1S"
#define device_bar_ODY_XCPX_COLD_STICKY_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_COLD_STICKY_W1S(a) (a)
#define arguments_ODY_XCPX_COLD_STICKY_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_const
 *
 * XCP Constants Register
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_const {
	uint32_t u;
	struct ody_xcpx_const_s {
		uint32_t ncb_wins                    : 4;
		uint32_t mrml_wins                   : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_xcpx_const_s cn; */
};
typedef union ody_xcpx_const ody_xcpx_const_t;

static inline uint64_t ODY_XCPX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CONST(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CONST(a) ody_xcpx_const_t
#define bustype_ODY_XCPX_CONST(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CONST(a) "XCPX_CONST"
#define device_bar_ODY_XCPX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CONST(a) (a)
#define arguments_ODY_XCPX_CONST(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_core_dcache_status
 *
 * XCP Core Data Cache Status Register
 * This register contains sticky bits of XCP data cache error signaling.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_core_dcache_status {
	uint32_t u;
	struct ody_xcpx_core_dcache_status_s {
		uint32_t dcerr                       : 22;
		uint32_t reserved_22_23              : 2;
		uint32_t dcdet                       : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_xcpx_core_dcache_status_s cn; */
};
typedef union ody_xcpx_core_dcache_status ody_xcpx_core_dcache_status_t;

static inline uint64_t ODY_XCPX_CORE_DCACHE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CORE_DCACHE_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000180ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CORE_DCACHE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CORE_DCACHE_STATUS(a) ody_xcpx_core_dcache_status_t
#define bustype_ODY_XCPX_CORE_DCACHE_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CORE_DCACHE_STATUS(a) "XCPX_CORE_DCACHE_STATUS"
#define device_bar_ODY_XCPX_CORE_DCACHE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CORE_DCACHE_STATUS(a) (a)
#define arguments_ODY_XCPX_CORE_DCACHE_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_core_icache_status
 *
 * XCP Core Instruction Cache Status Register
 * This register contains sticky bits of XCP instruction cache error signaling.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_core_icache_status {
	uint32_t u;
	struct ody_xcpx_core_icache_status_s {
		uint32_t icerr                       : 22;
		uint32_t reserved_22_23              : 2;
		uint32_t icdet                       : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_xcpx_core_icache_status_s cn; */
};
typedef union ody_xcpx_core_icache_status ody_xcpx_core_icache_status_t;

static inline uint64_t ODY_XCPX_CORE_ICACHE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CORE_ICACHE_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000190ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CORE_ICACHE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CORE_ICACHE_STATUS(a) ody_xcpx_core_icache_status_t
#define bustype_ODY_XCPX_CORE_ICACHE_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CORE_ICACHE_STATUS(a) "XCPX_CORE_ICACHE_STATUS"
#define device_bar_ODY_XCPX_CORE_ICACHE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CORE_ICACHE_STATUS(a) (a)
#define arguments_ODY_XCPX_CORE_ICACHE_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_lint
 *
 * XCP Per-core Watchdog Interrupt Register
 * Generic timer per XCP watchdog interrupts.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_cwd_lint {
	uint32_t u;
	struct ody_xcpx_cwd_lint_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_lint_s cn; */
};
typedef union ody_xcpx_cwd_lint ody_xcpx_cwd_lint_t;

static inline uint64_t ODY_XCPX_CWD_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_LINT(uint64_t a)
{
	if (a <= 2)
		return 0x82c000040200ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_LINT(a) ody_xcpx_cwd_lint_t
#define bustype_ODY_XCPX_CWD_LINT(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_LINT(a) "XCPX_CWD_LINT"
#define device_bar_ODY_XCPX_CWD_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_LINT(a) (a)
#define arguments_ODY_XCPX_CWD_LINT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_lint_ena_w1c
 *
 * XCP Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_xcpx_cwd_lint_ena_w1c {
	uint32_t u;
	struct ody_xcpx_cwd_lint_ena_w1c_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_lint_ena_w1c_s cn; */
};
typedef union ody_xcpx_cwd_lint_ena_w1c ody_xcpx_cwd_lint_ena_w1c_t;

static inline uint64_t ODY_XCPX_CWD_LINT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_LINT_ENA_W1C(uint64_t a)
{
	if (a <= 2)
		return 0x82c000040210ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_LINT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_LINT_ENA_W1C(a) ody_xcpx_cwd_lint_ena_w1c_t
#define bustype_ODY_XCPX_CWD_LINT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_LINT_ENA_W1C(a) "XCPX_CWD_LINT_ENA_W1C"
#define device_bar_ODY_XCPX_CWD_LINT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_LINT_ENA_W1C(a) (a)
#define arguments_ODY_XCPX_CWD_LINT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_lint_ena_w1s
 *
 * XCP Per-core Watchdog Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_xcpx_cwd_lint_ena_w1s {
	uint32_t u;
	struct ody_xcpx_cwd_lint_ena_w1s_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_lint_ena_w1s_s cn; */
};
typedef union ody_xcpx_cwd_lint_ena_w1s ody_xcpx_cwd_lint_ena_w1s_t;

static inline uint64_t ODY_XCPX_CWD_LINT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_LINT_ENA_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c000040218ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_LINT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_LINT_ENA_W1S(a) ody_xcpx_cwd_lint_ena_w1s_t
#define bustype_ODY_XCPX_CWD_LINT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_LINT_ENA_W1S(a) "XCPX_CWD_LINT_ENA_W1S"
#define device_bar_ODY_XCPX_CWD_LINT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_LINT_ENA_W1S(a) (a)
#define arguments_ODY_XCPX_CWD_LINT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_lint_w1s
 *
 * XCP Per-core Watchdog Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_cwd_lint_w1s {
	uint32_t u;
	struct ody_xcpx_cwd_lint_w1s_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_lint_w1s_s cn; */
};
typedef union ody_xcpx_cwd_lint_w1s ody_xcpx_cwd_lint_w1s_t;

static inline uint64_t ODY_XCPX_CWD_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_LINT_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c000040208ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_LINT_W1S(a) ody_xcpx_cwd_lint_w1s_t
#define bustype_ODY_XCPX_CWD_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_LINT_W1S(a) "XCPX_CWD_LINT_W1S"
#define device_bar_ODY_XCPX_CWD_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_LINT_W1S(a) (a)
#define arguments_ODY_XCPX_CWD_LINT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_nm_lint
 *
 * XCP Per-core Watchdog non-maskable Interrupt Register
 * Generic timer per XCP watchdog non-maskable interrupts.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_cwd_nm_lint {
	uint32_t u;
	struct ody_xcpx_cwd_nm_lint_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_nm_lint_s cn; */
};
typedef union ody_xcpx_cwd_nm_lint ody_xcpx_cwd_nm_lint_t;

static inline uint64_t ODY_XCPX_CWD_NM_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_NM_LINT(uint64_t a)
{
	if (a <= 2)
		return 0x82c000041200ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_NM_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_NM_LINT(a) ody_xcpx_cwd_nm_lint_t
#define bustype_ODY_XCPX_CWD_NM_LINT(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_NM_LINT(a) "XCPX_CWD_NM_LINT"
#define device_bar_ODY_XCPX_CWD_NM_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_NM_LINT(a) (a)
#define arguments_ODY_XCPX_CWD_NM_LINT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_nm_lint_w1s
 *
 * XCP Per-core Watchdog non-maskable Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_cwd_nm_lint_w1s {
	uint32_t u;
	struct ody_xcpx_cwd_nm_lint_w1s_s {
		uint32_t wdog_int                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_cwd_nm_lint_w1s_s cn; */
};
typedef union ody_xcpx_cwd_nm_lint_w1s ody_xcpx_cwd_nm_lint_w1s_t;

static inline uint64_t ODY_XCPX_CWD_NM_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_NM_LINT_W1S(uint64_t a)
{
	if (a <= 2)
		return 0x82c000041208ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_NM_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_NM_LINT_W1S(a) ody_xcpx_cwd_nm_lint_w1s_t
#define bustype_ODY_XCPX_CWD_NM_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_NM_LINT_W1S(a) "XCPX_CWD_NM_LINT_W1S"
#define device_bar_ODY_XCPX_CWD_NM_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_NM_LINT_W1S(a) (a)
#define arguments_ODY_XCPX_CWD_NM_LINT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_poke
 *
 * XCP Per-XCP Watchdog Poke Registers
 * Per-core watchdog poke. Writing any value to this register does the following:
 * * Clears any pending interrupt generated by the associated watchdog.
 * * Resets XCP()_CWD_WDOG[STATE] to 0x0.
 * * Sets XCP()_CWD_WDOG[CNT] to (XCP()_CWD_WDOG[LEN] \<\< 8)..
 *
 * Reading this register returns the associated XCP()_CWD_WDOG register.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_cwd_poke {
	uint32_t u;
	struct ody_xcpx_cwd_poke_s {
		uint32_t ign                         : 32;
	} s;
	/* struct ody_xcpx_cwd_poke_s cn; */
};
typedef union ody_xcpx_cwd_poke ody_xcpx_cwd_poke_t;

static inline uint64_t ODY_XCPX_CWD_POKE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_POKE(uint64_t a)
{
	if (a <= 2)
		return 0x82c00000ee00ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_POKE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_POKE(a) ody_xcpx_cwd_poke_t
#define bustype_ODY_XCPX_CWD_POKE(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_POKE(a) "XCPX_CWD_POKE"
#define device_bar_ODY_XCPX_CWD_POKE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_POKE(a) (a)
#define arguments_ODY_XCPX_CWD_POKE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_cwd_wdog
 *
 * XCP Per-XCP Watchdog Registers
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_cwd_wdog {
	uint32_t u;
	struct ody_xcpx_cwd_wdog_s {
		uint32_t mode                        : 2;
		uint32_t state                       : 2;
		uint32_t len                         : 9;
		uint32_t cnt                         : 17;
		uint32_t dstop                       : 1;
		uint32_t gstop                       : 1;
	} s;
	/* struct ody_xcpx_cwd_wdog_s cn; */
};
typedef union ody_xcpx_cwd_wdog ody_xcpx_cwd_wdog_t;

static inline uint64_t ODY_XCPX_CWD_WDOG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_CWD_WDOG(uint64_t a)
{
	if (a <= 2)
		return 0x82c00000ee80ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_CWD_WDOG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_CWD_WDOG(a) ody_xcpx_cwd_wdog_t
#define bustype_ODY_XCPX_CWD_WDOG(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_CWD_WDOG(a) "XCPX_CWD_WDOG"
#define device_bar_ODY_XCPX_CWD_WDOG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_CWD_WDOG(a) (a)
#define arguments_ODY_XCPX_CWD_WDOG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox
 *
 * XCP DEV-to-XCP Mailbox Data Registers
 * This register is the mailbox register for other devices to interrupt XCP
 * See XCP_MBOX_DEV_E for device enumeration.
 * For XCP-to-AP interrupts see instead XCP()_XCP_DEV()_MBOX.
 *
 * This register is only accessible to device driving this mailbox reg and the requestor(s)
 * permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_devx_xcp_mbox {
	uint32_t u;
	struct ody_xcpx_devx_xcp_mbox_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_xcpx_devx_xcp_mbox_s cn; */
};
typedef union ody_xcpx_devx_xcp_mbox ody_xcpx_devx_xcp_mbox_t;

static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 61))
		return 0x82c0000e1000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_DEVX_XCP_MBOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_DEVX_XCP_MBOX(a, b) ody_xcpx_devx_xcp_mbox_t
#define bustype_ODY_XCPX_DEVX_XCP_MBOX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_DEVX_XCP_MBOX(a, b) "XCPX_DEVX_XCP_MBOX"
#define device_bar_ODY_XCPX_DEVX_XCP_MBOX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_DEVX_XCP_MBOX(a, b) (a)
#define arguments_ODY_XCPX_DEVX_XCP_MBOX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint
 *
 * XCP DEV-to-XCP Mailbox Interrupt Register
 * This register contains mailbox interrupt for Devs to XCP core transactions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_devx_xcp_mbox_lint {
	uint32_t u;
	struct ody_xcpx_devx_xcp_mbox_lint_s {
		uint32_t intr                        : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_devx_xcp_mbox_lint_s cn; */
};
typedef union ody_xcpx_devx_xcp_mbox_lint ody_xcpx_devx_xcp_mbox_lint_t;

static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 61))
		return 0x82c0000e2000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) ody_xcpx_devx_xcp_mbox_lint_t
#define bustype_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) "XCPX_DEVX_XCP_MBOX_LINT"
#define device_bar_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) (a)
#define arguments_ODY_XCPX_DEVX_XCP_MBOX_LINT(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_ena_w1c
 *
 * XCP DEV-to-XCP Mailbox Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_xcpx_devx_xcp_mbox_lint_ena_w1c {
	uint32_t u;
	struct ody_xcpx_devx_xcp_mbox_lint_ena_w1c_s {
		uint32_t intr                        : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_devx_xcp_mbox_lint_ena_w1c_s cn; */
};
typedef union ody_xcpx_devx_xcp_mbox_lint_ena_w1c ody_xcpx_devx_xcp_mbox_lint_ena_w1c_t;

static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 61))
		return 0x82c0000e2c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) ody_xcpx_devx_xcp_mbox_lint_ena_w1c_t
#define bustype_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) "XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C"
#define device_bar_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) (a)
#define arguments_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_ena_w1s
 *
 * XCP DEV-to-XCP Mailbox Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_xcpx_devx_xcp_mbox_lint_ena_w1s {
	uint32_t u;
	struct ody_xcpx_devx_xcp_mbox_lint_ena_w1s_s {
		uint32_t intr                        : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_devx_xcp_mbox_lint_ena_w1s_s cn; */
};
typedef union ody_xcpx_devx_xcp_mbox_lint_ena_w1s ody_xcpx_devx_xcp_mbox_lint_ena_w1s_t;

static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 61))
		return 0x82c0000e2800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) ody_xcpx_devx_xcp_mbox_lint_ena_w1s_t
#define bustype_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) "XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S"
#define device_bar_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) (a)
#define arguments_ODY_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_w1s
 *
 * XCP AP-to-XCP Mailbox Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_devx_xcp_mbox_lint_w1s {
	uint32_t u;
	struct ody_xcpx_devx_xcp_mbox_lint_w1s_s {
		uint32_t intr                        : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_xcpx_devx_xcp_mbox_lint_w1s_s cn; */
};
typedef union ody_xcpx_devx_xcp_mbox_lint_w1s ody_xcpx_devx_xcp_mbox_lint_w1s_t;

static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 61))
		return 0x82c0000e2400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) ody_xcpx_devx_xcp_mbox_lint_w1s_t
#define bustype_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) "XCPX_DEVX_XCP_MBOX_LINT_W1S"
#define device_bar_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) (a)
#define arguments_ODY_XCPX_DEVX_XCP_MBOX_LINT_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_gib#_lint
 *
 * XCP GIB Interrupt Register
 * This register contains GIB interrupt for XCP.
 *
 * This register and XCP()_GIB()_LINT_W1S are only accessible to the requestor(s)
 * permitted with CPC_XCP()_GIB()_LINT_PERMIT, or by a MSI-X/GIB interrupt message write.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_gibx_lint {
	uint32_t u;
	struct ody_xcpx_gibx_lint_s {
		uint32_t gib_int                     : 32;
	} s;
	/* struct ody_xcpx_gibx_lint_s cn; */
};
typedef union ody_xcpx_gibx_lint ody_xcpx_gibx_lint_t;

static inline uint64_t ODY_XCPX_GIBX_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_GIBX_LINT(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x82c000000c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_GIBX_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_GIBX_LINT(a, b) ody_xcpx_gibx_lint_t
#define bustype_ODY_XCPX_GIBX_LINT(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_GIBX_LINT(a, b) "XCPX_GIBX_LINT"
#define device_bar_ODY_XCPX_GIBX_LINT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_GIBX_LINT(a, b) (a)
#define arguments_ODY_XCPX_GIBX_LINT(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_gib#_lint_devid
 *
 * XCP GIB Interrupt Device ID Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_gibx_lint_devid {
	uint32_t u;
	struct ody_xcpx_gibx_lint_devid_s {
		uint32_t devid                       : 22;
		uint32_t reserved_22_29              : 8;
		uint32_t ovfl                        : 1;
		uint32_t valid                       : 1;
	} s;
	/* struct ody_xcpx_gibx_lint_devid_s cn; */
};
typedef union ody_xcpx_gibx_lint_devid ody_xcpx_gibx_lint_devid_t;

static inline uint64_t ODY_XCPX_GIBX_LINT_DEVID(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_GIBX_LINT_DEVID(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x82c000000dc0ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_GIBX_LINT_DEVID", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_GIBX_LINT_DEVID(a, b) ody_xcpx_gibx_lint_devid_t
#define bustype_ODY_XCPX_GIBX_LINT_DEVID(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_GIBX_LINT_DEVID(a, b) "XCPX_GIBX_LINT_DEVID"
#define device_bar_ODY_XCPX_GIBX_LINT_DEVID(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_GIBX_LINT_DEVID(a, b) (a)
#define arguments_ODY_XCPX_GIBX_LINT_DEVID(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_gib#_lint_ena_w1c
 *
 * XCP GIB Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_xcpx_gibx_lint_ena_w1c {
	uint32_t u;
	struct ody_xcpx_gibx_lint_ena_w1c_s {
		uint32_t gib_int                     : 32;
	} s;
	/* struct ody_xcpx_gibx_lint_ena_w1c_s cn; */
};
typedef union ody_xcpx_gibx_lint_ena_w1c ody_xcpx_gibx_lint_ena_w1c_t;

static inline uint64_t ODY_XCPX_GIBX_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_GIBX_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x82c000000cc0ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_GIBX_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) ody_xcpx_gibx_lint_ena_w1c_t
#define bustype_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) "XCPX_GIBX_LINT_ENA_W1C"
#define device_bar_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) (a)
#define arguments_ODY_XCPX_GIBX_LINT_ENA_W1C(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_gib#_lint_ena_w1s
 *
 * XCP GIB Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_xcpx_gibx_lint_ena_w1s {
	uint32_t u;
	struct ody_xcpx_gibx_lint_ena_w1s_s {
		uint32_t gib_int                     : 32;
	} s;
	/* struct ody_xcpx_gibx_lint_ena_w1s_s cn; */
};
typedef union ody_xcpx_gibx_lint_ena_w1s ody_xcpx_gibx_lint_ena_w1s_t;

static inline uint64_t ODY_XCPX_GIBX_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_GIBX_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x82c000000c40ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_GIBX_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) ody_xcpx_gibx_lint_ena_w1s_t
#define bustype_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) "XCPX_GIBX_LINT_ENA_W1S"
#define device_bar_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) (a)
#define arguments_ODY_XCPX_GIBX_LINT_ENA_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_gib#_lint_w1s
 *
 * XCP GIB Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_gibx_lint_w1s {
	uint32_t u;
	struct ody_xcpx_gibx_lint_w1s_s {
		uint32_t gib_int                     : 32;
	} s;
	/* struct ody_xcpx_gibx_lint_w1s_s cn; */
};
typedef union ody_xcpx_gibx_lint_w1s ody_xcpx_gibx_lint_w1s_t;

static inline uint64_t ODY_XCPX_GIBX_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_GIBX_LINT_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x82c000000c80ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_GIBX_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_GIBX_LINT_W1S(a, b) ody_xcpx_gibx_lint_w1s_t
#define bustype_ODY_XCPX_GIBX_LINT_W1S(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_GIBX_LINT_W1S(a, b) "XCPX_GIBX_LINT_W1S"
#define device_bar_ODY_XCPX_GIBX_LINT_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_GIBX_LINT_W1S(a, b) (a)
#define arguments_ODY_XCPX_GIBX_LINT_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_id
 *
 * XCP Identefication Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_id {
	uint32_t u;
	struct ody_xcpx_id_s {
		uint32_t id                          : 2;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_xcpx_id_s cn; */
};
typedef union ody_xcpx_id ody_xcpx_id_t;

static inline uint64_t ODY_XCPX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_ID(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000020ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_ID(a) ody_xcpx_id_t
#define bustype_ODY_XCPX_ID(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_ID(a) "XCPX_ID"
#define device_bar_ODY_XCPX_ID(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_ID(a) (a)
#define arguments_ODY_XCPX_ID(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_initvtor
 *
 * XCP CM7 Init Vector Table Offeset Register
 * This register contains the configuration bits for the CM7 INITVTOR input port.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_xcpx_initvtor {
	uint32_t u;
	struct ody_xcpx_initvtor_s {
		uint32_t reserved_0_6                : 7;
		uint32_t initvtor                    : 25;
	} s;
	/* struct ody_xcpx_initvtor_s cn; */
};
typedef union ody_xcpx_initvtor ody_xcpx_initvtor_t;

static inline uint64_t ODY_XCPX_INITVTOR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_INITVTOR(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000230ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_INITVTOR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_INITVTOR(a) ody_xcpx_initvtor_t
#define bustype_ODY_XCPX_INITVTOR(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_INITVTOR(a) "XCPX_INITVTOR"
#define device_bar_ODY_XCPX_INITVTOR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_INITVTOR(a) (a)
#define arguments_ODY_XCPX_INITVTOR(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_lint0_summary
 *
 * XCP Interrupt Summary Register 0
 * This register is the local interrupt summary register 0 for the XCP CPU core.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_lint0_summary {
	uint64_t u;
	struct ody_xcpx_lint0_summary_s {
		uint64_t gib                         : 3;
		uint64_t reserved_3_14               : 12;
		uint64_t bus_err                     : 1;
		uint64_t reserved_16_17              : 2;
		uint64_t wdog_mi                     : 1;
		uint64_t wdog_nmi                    : 1;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_xcpx_lint0_summary_s cn; */
};
typedef union ody_xcpx_lint0_summary ody_xcpx_lint0_summary_t;

static inline uint64_t ODY_XCPX_LINT0_SUMMARY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_LINT0_SUMMARY(uint64_t a)
{
	if (a <= 2)
		return 0x82c0000e0000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_LINT0_SUMMARY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_LINT0_SUMMARY(a) ody_xcpx_lint0_summary_t
#define bustype_ODY_XCPX_LINT0_SUMMARY(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_LINT0_SUMMARY(a) "XCPX_LINT0_SUMMARY"
#define device_bar_ODY_XCPX_LINT0_SUMMARY(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_LINT0_SUMMARY(a) (a)
#define arguments_ODY_XCPX_LINT0_SUMMARY(a) (a), -1, -1, -1

/**
 * Register (NCB) xcp#_lint1_summary
 *
 * XCP Interrupt Summary Register 1
 * This register is the local interrupt summary register 1 for the XCP CPU core.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_lint1_summary {
	uint64_t u;
	struct ody_xcpx_lint1_summary_s {
		uint64_t mbox                        : 62;
		uint64_t reserved_62_63              : 2;
	} s;
	/* struct ody_xcpx_lint1_summary_s cn; */
};
typedef union ody_xcpx_lint1_summary ody_xcpx_lint1_summary_t;

static inline uint64_t ODY_XCPX_LINT1_SUMMARY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_LINT1_SUMMARY(uint64_t a)
{
	if (a <= 2)
		return 0x82c0000e0008ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_LINT1_SUMMARY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_LINT1_SUMMARY(a) ody_xcpx_lint1_summary_t
#define bustype_ODY_XCPX_LINT1_SUMMARY(a) CSR_TYPE_NCB
#define basename_ODY_XCPX_LINT1_SUMMARY(a) "XCPX_LINT1_SUMMARY"
#define device_bar_ODY_XCPX_LINT1_SUMMARY(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_LINT1_SUMMARY(a) (a)
#define arguments_ODY_XCPX_LINT1_SUMMARY(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_mrml_64rd
 *
 * XCP MRML 64-bit Read Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset, and cannot be accessed during XCP domain reset.
 */
union ody_xcpx_mrml_64rd {
	uint32_t u;
	struct ody_xcpx_mrml_64rd_s {
		uint32_t rd_data                     : 32;
	} s;
	/* struct ody_xcpx_mrml_64rd_s cn; */
};
typedef union ody_xcpx_mrml_64rd ody_xcpx_mrml_64rd_t;

static inline uint64_t ODY_XCPX_MRML_64RD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MRML_64RD(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000110ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_MRML_64RD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MRML_64RD(a) ody_xcpx_mrml_64rd_t
#define bustype_ODY_XCPX_MRML_64RD(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_MRML_64RD(a) "XCPX_MRML_64RD"
#define device_bar_ODY_XCPX_MRML_64RD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_MRML_64RD(a) (a)
#define arguments_ODY_XCPX_MRML_64RD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_mrml_64wr
 *
 * XCP MRML 64-bit Write Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset, and cannot be accessed during XCP domain reset.
 */
union ody_xcpx_mrml_64wr {
	uint32_t u;
	struct ody_xcpx_mrml_64wr_s {
		uint32_t wr_data                     : 32;
	} s;
	/* struct ody_xcpx_mrml_64wr_s cn; */
};
typedef union ody_xcpx_mrml_64wr ody_xcpx_mrml_64wr_t;

static inline uint64_t ODY_XCPX_MRML_64WR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MRML_64WR(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000120ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_MRML_64WR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MRML_64WR(a) ody_xcpx_mrml_64wr_t
#define bustype_ODY_XCPX_MRML_64WR(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_MRML_64WR(a) "XCPX_MRML_64WR"
#define device_bar_ODY_XCPX_MRML_64WR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_MRML_64WR(a) (a)
#define arguments_ODY_XCPX_MRML_64WR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_mrml_win#_addr
 *
 * XCP RML Window Address Register
 * This register contains the upper address bits for the XCP core RML access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_mrml_winx_addr {
	uint32_t u;
	struct ody_xcpx_mrml_winx_addr_s {
		uint32_t addr                        : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_xcpx_mrml_winx_addr_s cn; */
};
typedef union ody_xcpx_mrml_winx_addr ody_xcpx_mrml_winx_addr_t;

static inline uint64_t ODY_XCPX_MRML_WINX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MRML_WINX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 3))
		return 0x82c000000800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_MRML_WINX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MRML_WINX_ADDR(a, b) ody_xcpx_mrml_winx_addr_t
#define bustype_ODY_XCPX_MRML_WINX_ADDR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_MRML_WINX_ADDR(a, b) "XCPX_MRML_WINX_ADDR"
#define device_bar_ODY_XCPX_MRML_WINX_ADDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_MRML_WINX_ADDR(a, b) (a)
#define arguments_ODY_XCPX_MRML_WINX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_mrml_win#_cfg
 *
 * XCP RML Window Configuration Register
 * This register contains the control bits for the XCP core RML access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_mrml_winx_cfg {
	uint32_t u;
	struct ody_xcpx_mrml_winx_cfg_s {
		uint32_t reserved_0_2                : 3;
		uint32_t secure                      : 2;
		uint32_t b64                         : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_xcpx_mrml_winx_cfg_s cn; */
};
typedef union ody_xcpx_mrml_winx_cfg ody_xcpx_mrml_winx_cfg_t;

static inline uint64_t ODY_XCPX_MRML_WINX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MRML_WINX_CFG(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 3))
		return 0x82c000000700ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_MRML_WINX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MRML_WINX_CFG(a, b) ody_xcpx_mrml_winx_cfg_t
#define bustype_ODY_XCPX_MRML_WINX_CFG(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_MRML_WINX_CFG(a, b) "XCPX_MRML_WINX_CFG"
#define device_bar_ODY_XCPX_MRML_WINX_CFG(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_MRML_WINX_CFG(a, b) (a)
#define arguments_ODY_XCPX_MRML_WINX_CFG(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_msix_pba#
 *
 * XCP MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the XCP_INT_VEC_E enumeration.
 *
 * This register is reset on chip reset.
 */
union ody_xcpx_msix_pbax {
	uint64_t u;
	struct ody_xcpx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_xcpx_msix_pbax_s cn; */
};
typedef union ody_xcpx_msix_pbax ody_xcpx_msix_pbax_t;

static inline uint64_t ODY_XCPX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b == 0))
		return 0x82c0001f0000ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MSIX_PBAX(a, b) ody_xcpx_msix_pbax_t
#define bustype_ODY_XCPX_MSIX_PBAX(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_MSIX_PBAX(a, b) "XCPX_MSIX_PBAX"
#define device_bar_ODY_XCPX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_XCPX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_XCPX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_msix_vec#_addr
 *
 * XCP MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the XCP_INT_VEC_E enumeration.
 *
 * This register is reset on chip reset.
 */
union ody_xcpx_msix_vecx_addr {
	uint64_t u;
	struct ody_xcpx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_xcpx_msix_vecx_addr_s cn; */
};
typedef union ody_xcpx_msix_vecx_addr ody_xcpx_msix_vecx_addr_t;

static inline uint64_t ODY_XCPX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c000100000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MSIX_VECX_ADDR(a, b) ody_xcpx_msix_vecx_addr_t
#define bustype_ODY_XCPX_MSIX_VECX_ADDR(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_MSIX_VECX_ADDR(a, b) "XCPX_MSIX_VECX_ADDR"
#define device_bar_ODY_XCPX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_XCPX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_XCPX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_msix_vec#_ctl
 *
 * XCP MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the XCP_INT_VEC_E enumeration
 *
 * This register is reset on chip reset.
 */
union ody_xcpx_msix_vecx_ctl {
	uint64_t u;
	struct ody_xcpx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_xcpx_msix_vecx_ctl_s cn; */
};
typedef union ody_xcpx_msix_vecx_ctl ody_xcpx_msix_vecx_ctl_t;

static inline uint64_t ODY_XCPX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c000100008ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_MSIX_VECX_CTL(a, b) ody_xcpx_msix_vecx_ctl_t
#define bustype_ODY_XCPX_MSIX_VECX_CTL(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_MSIX_VECX_CTL(a, b) "XCPX_MSIX_VECX_CTL"
#define device_bar_ODY_XCPX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_XCPX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_XCPX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_ncb_64rd
 *
 * XCP NCB 64-bit Read Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_ncb_64rd {
	uint32_t u;
	struct ody_xcpx_ncb_64rd_s {
		uint32_t rd_data                     : 32;
	} s;
	/* struct ody_xcpx_ncb_64rd_s cn; */
};
typedef union ody_xcpx_ncb_64rd ody_xcpx_ncb_64rd_t;

static inline uint64_t ODY_XCPX_NCB_64RD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_NCB_64RD(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000140ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_NCB_64RD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_NCB_64RD(a) ody_xcpx_ncb_64rd_t
#define bustype_ODY_XCPX_NCB_64RD(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_NCB_64RD(a) "XCPX_NCB_64RD"
#define device_bar_ODY_XCPX_NCB_64RD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_NCB_64RD(a) (a)
#define arguments_ODY_XCPX_NCB_64RD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_ncb_win#_addr
 *
 * XCP NCB Window Address Register
 * This register contains the upper address bits for the XCP core NCB access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 *
 * The windows should not have overlapping address spaces if caching is enabled.
 */
union ody_xcpx_ncb_winx_addr {
	uint32_t u;
	struct ody_xcpx_ncb_winx_addr_s {
		uint32_t addr                        : 29;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_xcpx_ncb_winx_addr_s cn; */
};
typedef union ody_xcpx_ncb_winx_addr ody_xcpx_ncb_winx_addr_t;

static inline uint64_t ODY_XCPX_NCB_WINX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_NCB_WINX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 3))
		return 0x82c000000400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_NCB_WINX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_NCB_WINX_ADDR(a, b) ody_xcpx_ncb_winx_addr_t
#define bustype_ODY_XCPX_NCB_WINX_ADDR(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_NCB_WINX_ADDR(a, b) "XCPX_NCB_WINX_ADDR"
#define device_bar_ODY_XCPX_NCB_WINX_ADDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_NCB_WINX_ADDR(a, b) (a)
#define arguments_ODY_XCPX_NCB_WINX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_ncb_win#_cfg
 *
 * XCP NCB Window Configuration Register
 * This register contains the control bits for the XCP core NCB access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_ncb_winx_cfg {
	uint32_t u;
	struct ody_xcpx_ncb_winx_cfg_s {
		uint32_t cacheable                   : 2;
		uint32_t phys                        : 1;
		uint32_t secure                      : 2;
		uint32_t b64                         : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_xcpx_ncb_winx_cfg_s cn; */
};
typedef union ody_xcpx_ncb_winx_cfg ody_xcpx_ncb_winx_cfg_t;

static inline uint64_t ODY_XCPX_NCB_WINX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_NCB_WINX_CFG(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 3))
		return 0x82c000000300ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_NCB_WINX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_NCB_WINX_CFG(a, b) ody_xcpx_ncb_winx_cfg_t
#define bustype_ODY_XCPX_NCB_WINX_CFG(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_NCB_WINX_CFG(a, b) "XCPX_NCB_WINX_CFG"
#define device_bar_ODY_XCPX_NCB_WINX_CFG(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_NCB_WINX_CFG(a, b) (a)
#define arguments_ODY_XCPX_NCB_WINX_CFG(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_precise_bus_err_addr
 *
 * XCP Precise Bus Error Address Register
 * This register contains the address of the precise data bus interface error for XCP.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_precise_bus_err_addr {
	uint32_t u;
	struct ody_xcpx_precise_bus_err_addr_s {
		uint32_t addr                        : 32;
	} s;
	/* struct ody_xcpx_precise_bus_err_addr_s cn; */
};
typedef union ody_xcpx_precise_bus_err_addr ody_xcpx_precise_bus_err_addr_t;

static inline uint64_t ODY_XCPX_PRECISE_BUS_ERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_PRECISE_BUS_ERR_ADDR(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001d00ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_PRECISE_BUS_ERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) ody_xcpx_precise_bus_err_addr_t
#define bustype_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) "XCPX_PRECISE_BUS_ERR_ADDR"
#define device_bar_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) (a)
#define arguments_ODY_XCPX_PRECISE_BUS_ERR_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_precise_bus_err_status
 *
 * XCP Precise Bus Error Status Register
 * This register contains the state of the precise data bus interface error for XCP.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_precise_bus_err_status {
	uint32_t u;
	struct ody_xcpx_precise_bus_err_status_s {
		uint32_t part                        : 3;
		uint32_t err_type                    : 3;
		uint32_t val                         : 1;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_xcpx_precise_bus_err_status_s cn; */
};
typedef union ody_xcpx_precise_bus_err_status ody_xcpx_precise_bus_err_status_t;

static inline uint64_t ODY_XCPX_PRECISE_BUS_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_PRECISE_BUS_ERR_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000001d08ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_PRECISE_BUS_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) ody_xcpx_precise_bus_err_status_t
#define bustype_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) "XCPX_PRECISE_BUS_ERR_STATUS"
#define device_bar_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) (a)
#define arguments_ODY_XCPX_PRECISE_BUS_ERR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_ram_win#
 *
 * XCP RAM Window Register
 * This register contains the base address and size for the XCP core access windows to CPC RAM.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_ram_winx {
	uint32_t u;
	struct ody_xcpx_ram_winx_s {
		uint32_t base                        : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t size                        : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_xcpx_ram_winx_s cn; */
};
typedef union ody_xcpx_ram_winx ody_xcpx_ram_winx_t;

static inline uint64_t ODY_XCPX_RAM_WINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_RAM_WINX(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 3))
		return 0x82c000000600ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
	__ody_csr_fatal("XCPX_RAM_WINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_RAM_WINX(a, b) ody_xcpx_ram_winx_t
#define bustype_ODY_XCPX_RAM_WINX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_RAM_WINX(a, b) "XCPX_RAM_WINX"
#define device_bar_ODY_XCPX_RAM_WINX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_RAM_WINX(a, b) (a)
#define arguments_ODY_XCPX_RAM_WINX(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) xcp#_status
 *
 * XCP Status Register
 * This register contains the status bits for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_status {
	uint32_t u;
	struct ody_xcpx_status_s {
		uint32_t lock_up                     : 1;
		uint32_t wrap_err                    : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_xcpx_status_s cn; */
};
typedef union ody_xcpx_status ody_xcpx_status_t;

static inline uint64_t ODY_XCPX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_STATUS(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000210ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_STATUS(a) ody_xcpx_status_t
#define bustype_ODY_XCPX_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_STATUS(a) "XCPX_STATUS"
#define device_bar_ODY_XCPX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_STATUS(a) (a)
#define arguments_ODY_XCPX_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_stcalib
 *
 * XCP CM7 STCALIB Configuration Register
 * This register contains the configuration bits for the CM7 STCALIB input port.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_stcalib {
	uint32_t u;
	struct ody_xcpx_stcalib_s {
		uint32_t stcalib                     : 26;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_xcpx_stcalib_s cn; */
};
typedef union ody_xcpx_stcalib ody_xcpx_stcalib_t;

static inline uint64_t ODY_XCPX_STCALIB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_STCALIB(uint64_t a)
{
	if (a <= 2)
		return 0x82c000000240ll + 0x1000000000ll * ((a) & 0x3);
	__ody_csr_fatal("XCPX_STCALIB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_STCALIB(a) ody_xcpx_stcalib_t
#define bustype_ODY_XCPX_STCALIB(a) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_STCALIB(a) "XCPX_STCALIB"
#define device_bar_ODY_XCPX_STCALIB(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_STCALIB(a) (a)
#define arguments_ODY_XCPX_STCALIB(a) (a), -1, -1, -1

/**
 * Register (NCB32b) xcp#_xcp_dev#_mbox
 *
 * XCP XCP-to-AP Mailbox Data Registers
 * This register is the mailbox register for XCP-to-AP core transactions.
 * For AP-to-XCP and XCP-to-XCP interrupts see instead XCP()_DEV()_XCP_MBOX.
 *
 * This register is only accessible to the associated device (based on DEV index by
 * XCP_MBOX_DEV_E) and the requestor(s) permitted with CPC_XCP()_PERMIT.
 */
union ody_xcpx_xcp_devx_mbox {
	uint32_t u;
	struct ody_xcpx_xcp_devx_mbox_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_xcpx_xcp_devx_mbox_s cn; */
};
typedef union ody_xcpx_xcp_devx_mbox ody_xcpx_xcp_devx_mbox_t;

static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c0000d2000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_XCP_DEVX_MBOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_XCP_DEVX_MBOX(a, b) ody_xcpx_xcp_devx_mbox_t
#define bustype_ODY_XCPX_XCP_DEVX_MBOX(a, b) CSR_TYPE_NCB32b
#define basename_ODY_XCPX_XCP_DEVX_MBOX(a, b) "XCPX_XCP_DEVX_MBOX"
#define device_bar_ODY_XCPX_XCP_DEVX_MBOX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_XCP_DEVX_MBOX(a, b) (a)
#define arguments_ODY_XCPX_XCP_DEVX_MBOX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint
 *
 * XCP XCP-to-AP Mailbox Interrupt Register
 * This register contains mailbox interrupt for XCP-to-AP core transactions.
 *
 * This register is only accessible to the associated device (based on DEV index by
 * XCP_MBOX_DEV_E) and the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union ody_xcpx_xcp_devx_mbox_rint {
	uint64_t u;
	struct ody_xcpx_xcp_devx_mbox_rint_s {
		uint64_t intr                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_xcpx_xcp_devx_mbox_rint_s cn; */
};
typedef union ody_xcpx_xcp_devx_mbox_rint ody_xcpx_xcp_devx_mbox_rint_t;

static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c0000d3000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) ody_xcpx_xcp_devx_mbox_rint_t
#define bustype_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) "XCPX_XCP_DEVX_MBOX_RINT"
#define device_bar_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) (a)
#define arguments_ODY_XCPX_XCP_DEVX_MBOX_RINT(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_ena_w1c
 *
 * XCP XCP-to-AP Mailbox Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_xcpx_xcp_devx_mbox_rint_ena_w1c {
	uint64_t u;
	struct ody_xcpx_xcp_devx_mbox_rint_ena_w1c_s {
		uint64_t intr                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_xcpx_xcp_devx_mbox_rint_ena_w1c_s cn; */
};
typedef union ody_xcpx_xcp_devx_mbox_rint_ena_w1c ody_xcpx_xcp_devx_mbox_rint_ena_w1c_t;

static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c0000d3c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) ody_xcpx_xcp_devx_mbox_rint_ena_w1c_t
#define bustype_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) "XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C"
#define device_bar_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) (a)
#define arguments_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_ena_w1s
 *
 * XCP XCP-to-AP Mailbox Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_xcpx_xcp_devx_mbox_rint_ena_w1s {
	uint64_t u;
	struct ody_xcpx_xcp_devx_mbox_rint_ena_w1s_s {
		uint64_t intr                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_xcpx_xcp_devx_mbox_rint_ena_w1s_s cn; */
};
typedef union ody_xcpx_xcp_devx_mbox_rint_ena_w1s ody_xcpx_xcp_devx_mbox_rint_ena_w1s_t;

static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c0000d3400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) ody_xcpx_xcp_devx_mbox_rint_ena_w1s_t
#define bustype_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) "XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S"
#define device_bar_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) (a)
#define arguments_ODY_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_w1s
 *
 * XCP XCP-to-AP Mailbox Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_xcpx_xcp_devx_mbox_rint_w1s {
	uint64_t u;
	struct ody_xcpx_xcp_devx_mbox_rint_w1s_s {
		uint64_t intr                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_xcpx_xcp_devx_mbox_rint_w1s_s cn; */
};
typedef union ody_xcpx_xcp_devx_mbox_rint_w1s ody_xcpx_xcp_devx_mbox_rint_w1s_t;

static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 55))
		return 0x82c0000d3800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
	__ody_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) ody_xcpx_xcp_devx_mbox_rint_w1s_t
#define bustype_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) CSR_TYPE_NCB
#define basename_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) "XCPX_XCP_DEVX_MBOX_RINT_W1S"
#define device_bar_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) (a)
#define arguments_ODY_XCPX_XCP_DEVX_MBOX_RINT_W1S(a, b) (a), (b), -1, -1

#endif /* __ODY_CSRS_XCP_H__ */
