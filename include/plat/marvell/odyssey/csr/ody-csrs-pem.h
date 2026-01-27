#ifndef __ODY_CSRS_PEM_H__
#define __ODY_CSRS_PEM_H__
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
 * PEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pem_bar_e
 *
 * PEM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_PEM_BAR_E_PEMX_PF_BAR0(a) (0x8e0000000000ll + 0x1000000000ll * (a))
#define ODY_PEM_BAR_E_PEMX_PF_BAR0_SIZE 0x40000000ull
#define ODY_PEM_BAR_E_PEMX_PF_BAR4(a) (0x8e0f00000000ll + 0x1000000000ll * (a))
#define ODY_PEM_BAR_E_PEMX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration pem_int_vec_e
 *
 * PEM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_PEM_INT_VEC_E_INTA (0)
#define ODY_PEM_INT_VEC_E_INTA_CLEAR (1)
#define ODY_PEM_INT_VEC_E_INTB (2)
#define ODY_PEM_INT_VEC_E_INTB_CLEAR (3)
#define ODY_PEM_INT_VEC_E_INTC (4)
#define ODY_PEM_INT_VEC_E_INTC_CLEAR (5)
#define ODY_PEM_INT_VEC_E_INTD (6)
#define ODY_PEM_INT_VEC_E_INTD_CLEAR (7)
#define ODY_PEM_INT_VEC_E_INT_SUM (8)
#define ODY_PEM_INT_VEC_E_PEMOOR_INT (0xa)
#define ODY_PEM_INT_VEC_E_RST_INT (9)
#define ODY_PEM_INT_VEC_E_VDMX_INT(a) (0xb + (a))

/**
 * Enumeration pem_perf_bus_e
 *
 * PEM Performance Bus Enumeration
 * Enumerates the internal bus associated with performance tracking registers.
 */
#define ODY_PEM_PERF_BUS_E_PERF_EBUS (1)
#define ODY_PEM_PERF_BUS_E_PERF_NCB (0)

/**
 * Enumeration pem_perf_tlp_type_e
 *
 * PEM Performance TLP Type Enumeration
 * Enumerates the TLP type associated with performance tracking registers that are by type.
 */
#define ODY_PEM_PERF_TLP_TYPE_E_PERF_CPL (2)
#define ODY_PEM_PERF_TLP_TYPE_E_PERF_NPR (0)
#define ODY_PEM_PERF_TLP_TYPE_E_PERF_PR (1)

/**
 * Enumeration pem_rst_source_e
 *
 * PEM Reset Cause Enumeration
 * Enumerates the reset sources for both reset domain mapping and cause of last reset,
 * corresponding to the bit numbers of PEM()_RST_LBOOT.
 */
#define ODY_PEM_RST_SOURCE_E_L2 (2)
#define ODY_PEM_RST_SOURCE_E_LINKDOWN (1)
#define ODY_PEM_RST_SOURCE_E_PEM_PFFLR (3)
#define ODY_PEM_RST_SOURCE_E_PEM_RSVD (4)
#define ODY_PEM_RST_SOURCE_E_PERST_PIN (0)

/**
 * Structure pem_ncbo_norm_memio_s
 *
 * NCB to MAC Operation Structure
 * Core initiated load and store operations that are initiating MAC transactions form an address
 * with this structure through the PEM()_REG_NORM()_ACC table. 8-bit, 16-bit, 32-bit and 64-bit
 * reads and writes, in addition to atomics are supported to this region.
 */
union ody_pem_ncbo_norm_memio_s {
	uint64_t u;
	struct ody_pem_ncbo_norm_memio_s_s {
		uint64_t addr                        : 31;
		uint64_t region                      : 8;
		uint64_t did_hi                      : 5;
		uint64_t node                        : 2;
		uint64_t reserved_46                 : 1;
		uint64_t io                          : 5;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_pem_ncbo_norm_memio_s_s cn; */
};

/**
 * Register (NCB) pem#_ats_diag_status
 *
 * PEM ATS Diagnostic Status Register
 * This register contains selection control for the ATS diagnostic bus.
 */
union ody_pemx_ats_diag_status {
	uint64_t u;
	struct ody_pemx_ats_diag_status_s {
		uint64_t unexpected_dti_sync         : 1;
		uint64_t invalidate_response_timeout : 1;
		uint64_t unmatched_translation_id    : 1;
		uint64_t invalid_completion_count    : 1;
		uint64_t unmatched_itag              : 1;
		uint64_t reserved_5                  : 1;
		uint64_t malformed_prg_rsp           : 1;
		uint64_t malformed_ats_completion    : 1;
		uint64_t malformed_ats_req           : 1;
		uint64_t dropped_invalidate          : 1;
		uint64_t reserved_10_63              : 54;
	} s;
	/* struct ody_pemx_ats_diag_status_s cn; */
};
typedef union ody_pemx_ats_diag_status ody_pemx_ats_diag_status_t;

static inline uint64_t ODY_PEMX_ATS_DIAG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_DIAG_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d08ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_DIAG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_DIAG_STATUS(a) ody_pemx_ats_diag_status_t
#define bustype_ODY_PEMX_ATS_DIAG_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_DIAG_STATUS(a) "PEMX_ATS_DIAG_STATUS"
#define device_bar_ODY_PEMX_ATS_DIAG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_DIAG_STATUS(a) (a)
#define arguments_ODY_PEMX_ATS_DIAG_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_inv_control
 *
 * PEM ATS Invalidation Control Register
 */
union ody_pemx_ats_inv_control {
	uint64_t u;
	struct ody_pemx_ats_inv_control_s {
		uint64_t limit                       : 6;
		uint64_t outstanding_requests        : 6;
		uint64_t always_forward              : 1;
		uint64_t reserved_13_63              : 51;
	} s;
	/* struct ody_pemx_ats_inv_control_s cn; */
};
typedef union ody_pemx_ats_inv_control ody_pemx_ats_inv_control_t;

static inline uint64_t ODY_PEMX_ATS_INV_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_INV_CONTROL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d48ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_INV_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_INV_CONTROL(a) ody_pemx_ats_inv_control_t
#define bustype_ODY_PEMX_ATS_INV_CONTROL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_INV_CONTROL(a) "PEMX_ATS_INV_CONTROL"
#define device_bar_ODY_PEMX_ATS_INV_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_INV_CONTROL(a) (a)
#define arguments_ODY_PEMX_ATS_INV_CONTROL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_inv_latency_pc
 *
 * PEM ATS Invalidtion Latency Counter Register
 */
union ody_pemx_ats_inv_latency_pc {
	uint64_t u;
	struct ody_pemx_ats_inv_latency_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_inv_latency_pc_s cn; */
};
typedef union ody_pemx_ats_inv_latency_pc ody_pemx_ats_inv_latency_pc_t;

static inline uint64_t ODY_PEMX_ATS_INV_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_INV_LATENCY_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d40ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_INV_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_INV_LATENCY_PC(a) ody_pemx_ats_inv_latency_pc_t
#define bustype_ODY_PEMX_ATS_INV_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_INV_LATENCY_PC(a) "PEMX_ATS_INV_LATENCY_PC"
#define device_bar_ODY_PEMX_ATS_INV_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_INV_LATENCY_PC(a) (a)
#define arguments_ODY_PEMX_ATS_INV_LATENCY_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_inv_pc
 *
 * PEM ATS Invalidation Performance Counter Register
 */
union ody_pemx_ats_inv_pc {
	uint64_t u;
	struct ody_pemx_ats_inv_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_inv_pc_s cn; */
};
typedef union ody_pemx_ats_inv_pc ody_pemx_ats_inv_pc_t;

static inline uint64_t ODY_PEMX_ATS_INV_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_INV_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d38ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_INV_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_INV_PC(a) ody_pemx_ats_inv_pc_t
#define bustype_ODY_PEMX_ATS_INV_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_INV_PC(a) "PEMX_ATS_INV_PC"
#define device_bar_ODY_PEMX_ATS_INV_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_INV_PC(a) (a)
#define arguments_ODY_PEMX_ATS_INV_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_inv_sync
 *
 * PEM ATS Invalidation Sync Register
 * This register is used by PEM ATS on an ATC invalidation to synchronize outstanding
 * posted transactions using that translation.
 */
union ody_pemx_ats_inv_sync {
	uint64_t u;
	struct ody_pemx_ats_inv_sync_s {
		uint64_t sync                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_ats_inv_sync_s cn; */
};
typedef union ody_pemx_ats_inv_sync ody_pemx_ats_inv_sync_t;

static inline uint64_t ODY_PEMX_ATS_INV_SYNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_INV_SYNC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d00ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_INV_SYNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_INV_SYNC(a) ody_pemx_ats_inv_sync_t
#define bustype_ODY_PEMX_ATS_INV_SYNC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_INV_SYNC(a) "PEMX_ATS_INV_SYNC"
#define device_bar_ODY_PEMX_ATS_INV_SYNC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_INV_SYNC(a) (a)
#define arguments_ODY_PEMX_ATS_INV_SYNC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_pri_latency_pc
 *
 * PEM ATS Page Request Latency Counter Register
 */
union ody_pemx_ats_pri_latency_pc {
	uint64_t u;
	struct ody_pemx_ats_pri_latency_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_pri_latency_pc_s cn; */
};
typedef union ody_pemx_ats_pri_latency_pc ody_pemx_ats_pri_latency_pc_t;

static inline uint64_t ODY_PEMX_ATS_PRI_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_PRI_LATENCY_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d30ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_PRI_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_PRI_LATENCY_PC(a) ody_pemx_ats_pri_latency_pc_t
#define bustype_ODY_PEMX_ATS_PRI_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_PRI_LATENCY_PC(a) "PEMX_ATS_PRI_LATENCY_PC"
#define device_bar_ODY_PEMX_ATS_PRI_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_PRI_LATENCY_PC(a) (a)
#define arguments_ODY_PEMX_ATS_PRI_LATENCY_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_pri_pc
 *
 * PEM ATS Page Request Performance Counter Register
 */
union ody_pemx_ats_pri_pc {
	uint64_t u;
	struct ody_pemx_ats_pri_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_pri_pc_s cn; */
};
typedef union ody_pemx_ats_pri_pc ody_pemx_ats_pri_pc_t;

static inline uint64_t ODY_PEMX_ATS_PRI_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_PRI_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d28ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_PRI_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_PRI_PC(a) ody_pemx_ats_pri_pc_t
#define bustype_ODY_PEMX_ATS_PRI_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_PRI_PC(a) "PEMX_ATS_PRI_PC"
#define device_bar_ODY_PEMX_ATS_PRI_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_PRI_PC(a) (a)
#define arguments_ODY_PEMX_ATS_PRI_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_tid_sts#
 *
 * PEM ATS Translation ID Status Register
 */
union ody_pemx_ats_tid_stsx {
	uint64_t u;
	struct ody_pemx_ats_tid_stsx_s {
		uint64_t busy                        : 64;
	} s;
	/* struct ody_pemx_ats_tid_stsx_s cn; */
};
typedef union ody_pemx_ats_tid_stsx ody_pemx_ats_tid_stsx_t;

static inline uint64_t ODY_PEMX_ATS_TID_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_TID_STSX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 3))
		return 0x8e0000007d60ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("PEMX_ATS_TID_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_TID_STSX(a, b) ody_pemx_ats_tid_stsx_t
#define bustype_ODY_PEMX_ATS_TID_STSX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_TID_STSX(a, b) "PEMX_ATS_TID_STSX"
#define device_bar_ODY_PEMX_ATS_TID_STSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_TID_STSX(a, b) (a)
#define arguments_ODY_PEMX_ATS_TID_STSX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_ats_tlp_credits
 *
 * PEM ATS Inbound TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ats_tlp_credits {
	uint64_t u;
	struct ody_pemx_ats_tlp_credits_s {
		uint64_t ats_p                       : 11;
		uint64_t ats_np                      : 10;
		uint64_t reserved_21_63              : 43;
	} s;
	/* struct ody_pemx_ats_tlp_credits_s cn; */
};
typedef union ody_pemx_ats_tlp_credits ody_pemx_ats_tlp_credits_t;

static inline uint64_t ODY_PEMX_ATS_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_TLP_CREDITS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000090ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_TLP_CREDITS(a) ody_pemx_ats_tlp_credits_t
#define bustype_ODY_PEMX_ATS_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_TLP_CREDITS(a) "PEMX_ATS_TLP_CREDITS"
#define device_bar_ODY_PEMX_ATS_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_TLP_CREDITS(a) (a)
#define arguments_ODY_PEMX_ATS_TLP_CREDITS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_trans_latency_pc
 *
 * PEM ATS Translation Latency Counter Register
 */
union ody_pemx_ats_trans_latency_pc {
	uint64_t u;
	struct ody_pemx_ats_trans_latency_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_trans_latency_pc_s cn; */
};
typedef union ody_pemx_ats_trans_latency_pc ody_pemx_ats_trans_latency_pc_t;

static inline uint64_t ODY_PEMX_ATS_TRANS_LATENCY_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_TRANS_LATENCY_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d20ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_TRANS_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) ody_pemx_ats_trans_latency_pc_t
#define bustype_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) "PEMX_ATS_TRANS_LATENCY_PC"
#define device_bar_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) (a)
#define arguments_ODY_PEMX_ATS_TRANS_LATENCY_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ats_trans_pc
 *
 * PEM ATS Translation Performance Counter Register
 */
union ody_pemx_ats_trans_pc {
	uint64_t u;
	struct ody_pemx_ats_trans_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ats_trans_pc_s cn; */
};
typedef union ody_pemx_ats_trans_pc ody_pemx_ats_trans_pc_t;

static inline uint64_t ODY_PEMX_ATS_TRANS_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ATS_TRANS_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000007d18ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ATS_TRANS_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ATS_TRANS_PC(a) ody_pemx_ats_trans_pc_t
#define bustype_ODY_PEMX_ATS_TRANS_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ATS_TRANS_PC(a) "PEMX_ATS_TRANS_PC"
#define device_bar_ODY_PEMX_ATS_TRANS_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ATS_TRANS_PC(a) (a)
#define arguments_ODY_PEMX_ATS_TRANS_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_bar2_mask
 *
 * PEM BAR2 Mask Register
 * This register contains the mask pattern that is ANDed with the address from the PCIe core for
 * inbound PF BAR2 hits in either RC or EP mode. This mask is only applied if
 * the address hits in PEM()_P2N_BAR2_START / PEM()_BAR_CTL[BAR2_SIZ] registers.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_bar2_mask {
	uint64_t u;
	struct ody_pemx_bar2_mask_s {
		uint64_t reserved_0_3                : 4;
		uint64_t mask                        : 49;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_pemx_bar2_mask_s cn; */
};
typedef union ody_pemx_bar2_mask ody_pemx_bar2_mask_t;

static inline uint64_t ODY_PEMX_BAR2_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_BAR2_MASK(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000048ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_BAR2_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_BAR2_MASK(a) ody_pemx_bar2_mask_t
#define bustype_ODY_PEMX_BAR2_MASK(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_BAR2_MASK(a) "PEMX_BAR2_MASK"
#define device_bar_ODY_PEMX_BAR2_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_BAR2_MASK(a) (a)
#define arguments_ODY_PEMX_BAR2_MASK(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_bar4_index#
 *
 * PEM BAR4 Index 0-15 Register
 * This register contains the address index and control bits for access to memory ranges of BAR4.
 * The index is built from the PCI inbound address \<25:22\>.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_bar4_indexx {
	uint64_t u;
	struct ody_pemx_bar4_indexx_s {
		uint64_t addr_v                      : 1;
		uint64_t reserved_1_2                : 2;
		uint64_t ca                          : 1;
		uint64_t addr_idx                    : 31;
		uint64_t reserved_35_63              : 29;
	} s;
	/* struct ody_pemx_bar4_indexx_s cn; */
};
typedef union ody_pemx_bar4_indexx ody_pemx_bar4_indexx_t;

static inline uint64_t ODY_PEMX_BAR4_INDEXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_BAR4_INDEXX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 15))
		return 0x8e0000000700ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("PEMX_BAR4_INDEXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_BAR4_INDEXX(a, b) ody_pemx_bar4_indexx_t
#define bustype_ODY_PEMX_BAR4_INDEXX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_BAR4_INDEXX(a, b) "PEMX_BAR4_INDEXX"
#define device_bar_ODY_PEMX_BAR4_INDEXX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_BAR4_INDEXX(a, b) (a)
#define arguments_ODY_PEMX_BAR4_INDEXX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_bar_ctl
 *
 * PEM BAR Control Register
 * This register contains control for BAR accesses. This control always
 * applies to memory accesses targeting the NCBI bus. Some of the fields also
 * apply to accesses targeting EBUS in RC mode only, see the individual field
 * descriptions for more detail.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_bar_ctl {
	uint64_t u;
	struct ody_pemx_bar_ctl_s {
		uint64_t bar2_cax                    : 1;
		uint64_t reserved_1_2                : 2;
		uint64_t bar2_enb                    : 1;
		uint64_t bar4_siz                    : 3;
		uint64_t bar2_siz                    : 6;
		uint64_t bar2_cbit                   : 6;
		uint64_t reserved_19_24              : 6;
		uint64_t bar0_enb                    : 1;
		uint64_t bar0_siz                    : 5;
		uint64_t bar4_enb                    : 1;
		uint64_t at_enb                      : 1;
		uint64_t reserved_33_34              : 2;
		uint64_t vf_bar0_enb                 : 1;
		uint64_t stream_bits                 : 5;
		uint64_t reserved_41_63              : 23;
	} s;
	/* struct ody_pemx_bar_ctl_s cn; */
};
typedef union ody_pemx_bar_ctl ody_pemx_bar_ctl_t;

static inline uint64_t ODY_PEMX_BAR_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_BAR_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000168ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_BAR_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_BAR_CTL(a) ody_pemx_bar_ctl_t
#define bustype_ODY_PEMX_BAR_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_BAR_CTL(a) "PEMX_BAR_CTL"
#define device_bar_ODY_PEMX_BAR_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_BAR_CTL(a) (a)
#define arguments_ODY_PEMX_BAR_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_cfg
 *
 * PEM Application Configuration Register
 * This register configures the PCIe application.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_cfg {
	uint64_t u;
	struct ody_pemx_cfg_s {
		uint64_t hostmd                      : 1;
		uint64_t lanes                       : 3;
		uint64_t pipe                        : 2;
		uint64_t reserved_6_7                : 2;
		uint64_t auto_dp_clr                 : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_pemx_cfg_s cn; */
};
typedef union ody_pemx_cfg ody_pemx_cfg_t;

static inline uint64_t ODY_PEMX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CFG(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000d8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CFG(a) ody_pemx_cfg_t
#define bustype_ODY_PEMX_CFG(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CFG(a) "PEMX_CFG"
#define device_bar_ODY_PEMX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CFG(a) (a)
#define arguments_ODY_PEMX_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_cfg_tbl#
 *
 * PEM Configuration Table Registers
 * Software managed table with list of config registers to update when
 * PEM()_CTL_STATUS[LNK_ENB] is written with a 1. Typically the last
 * table action should be to set PEM()_CTL_STATUS[SCR_DONE].
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_cfg_tblx {
	uint64_t u;
	struct ody_pemx_cfg_tblx_s {
		uint64_t offset                      : 12;
		uint64_t wmask                       : 4;
		uint64_t shadow                      : 1;
		uint64_t vf_active                   : 1;
		uint64_t pf                          : 1;
		uint64_t reserved_19_21              : 3;
		uint64_t vf                          : 6;
		uint64_t reserved_28_30              : 3;
		uint64_t broadcast                   : 1;
		uint64_t data                        : 32;
	} s;
	/* struct ody_pemx_cfg_tblx_s cn; */
};
typedef union ody_pemx_cfg_tblx ody_pemx_cfg_tblx_t;

static inline uint64_t ODY_PEMX_CFG_TBLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CFG_TBLX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 1023))
		return 0x8e0000002000ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3ff);
	__ody_csr_fatal("PEMX_CFG_TBLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CFG_TBLX(a, b) ody_pemx_cfg_tblx_t
#define bustype_ODY_PEMX_CFG_TBLX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_CFG_TBLX(a, b) "PEMX_CFG_TBLX"
#define device_bar_ODY_PEMX_CFG_TBLX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CFG_TBLX(a, b) (a)
#define arguments_ODY_PEMX_CFG_TBLX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_cfg_tbl_size
 *
 * PEM Configuration Table Size Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_cfg_tbl_size {
	uint64_t u;
	struct ody_pemx_cfg_tbl_size_s {
		uint64_t size                        : 11;
		uint64_t reserved_11_63              : 53;
	} s;
	/* struct ody_pemx_cfg_tbl_size_s cn; */
};
typedef union ody_pemx_cfg_tbl_size ody_pemx_cfg_tbl_size_t;

static inline uint64_t ODY_PEMX_CFG_TBL_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CFG_TBL_SIZE(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000220ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CFG_TBL_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CFG_TBL_SIZE(a) ody_pemx_cfg_tbl_size_t
#define bustype_ODY_PEMX_CFG_TBL_SIZE(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CFG_TBL_SIZE(a) "PEMX_CFG_TBL_SIZE"
#define device_bar_ODY_PEMX_CFG_TBL_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CFG_TBL_SIZE(a) (a)
#define arguments_ODY_PEMX_CFG_TBL_SIZE(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_clk_en
 *
 * PEM Clock Enable Register
 * This register contains the clock enable for CPCLK and PCE_CLK.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_clk_en {
	uint64_t u;
	struct ody_pemx_clk_en_s {
		uint64_t pemm_cpclk_force            : 1;
		uint64_t pemc_cpclk_gate             : 1;
		uint64_t pceclk_gate                 : 1;
		uint64_t pemc_macclk_force           : 1;
		uint64_t pem_mdh_dis                 : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_pemx_clk_en_s cn; */
};
typedef union ody_pemx_clk_en ody_pemx_clk_en_t;

static inline uint64_t ODY_PEMX_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CLK_EN(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000c8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CLK_EN(a) ody_pemx_clk_en_t
#define bustype_ODY_PEMX_CLK_EN(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CLK_EN(a) "PEMX_CLK_EN"
#define device_bar_ODY_PEMX_CLK_EN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CLK_EN(a) (a)
#define arguments_ODY_PEMX_CLK_EN(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_const_acc
 *
 * PEM Constant ACC Register
 * Contains constant attributes related to the PEM ACC tables.
 */
union ody_pemx_const_acc {
	uint64_t u;
	struct ody_pemx_const_acc_s {
		uint64_t num_norm                    : 16;
		uint64_t bits_norm                   : 16;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_const_acc_s cn; */
};
typedef union ody_pemx_const_acc ody_pemx_const_acc_t;

static inline uint64_t ODY_PEMX_CONST_ACC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CONST_ACC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000218ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CONST_ACC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CONST_ACC(a) ody_pemx_const_acc_t
#define bustype_ODY_PEMX_CONST_ACC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CONST_ACC(a) "PEMX_CONST_ACC"
#define device_bar_ODY_PEMX_CONST_ACC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CONST_ACC(a) (a)
#define arguments_ODY_PEMX_CONST_ACC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_cpclk_active_pc
 *
 * PEM Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_cpclk_active_pc {
	uint64_t u;
	struct ody_pemx_cpclk_active_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_cpclk_active_pc_s cn; */
};
typedef union ody_pemx_cpclk_active_pc ody_pemx_cpclk_active_pc_t;

static inline uint64_t ODY_PEMX_CPCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CPCLK_ACTIVE_PC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000058ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CPCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CPCLK_ACTIVE_PC(a) ody_pemx_cpclk_active_pc_t
#define bustype_ODY_PEMX_CPCLK_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CPCLK_ACTIVE_PC(a) "PEMX_CPCLK_ACTIVE_PC"
#define device_bar_ODY_PEMX_CPCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CPCLK_ACTIVE_PC(a) (a)
#define arguments_ODY_PEMX_CPCLK_ACTIVE_PC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_cpl_lut_valid
 *
 * PEM Completion Lookup Table Valid Register
 * This register specifies how many tags are outstanding for reads.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_cpl_lut_valid {
	uint64_t u;
	struct ody_pemx_cpl_lut_valid_s {
		uint64_t tag                         : 10;
		uint64_t reserved_10_63              : 54;
	} s;
	/* struct ody_pemx_cpl_lut_valid_s cn; */
};
typedef union ody_pemx_cpl_lut_valid ody_pemx_cpl_lut_valid_t;

static inline uint64_t ODY_PEMX_CPL_LUT_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CPL_LUT_VALID(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000040ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CPL_LUT_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CPL_LUT_VALID(a) ody_pemx_cpl_lut_valid_t
#define bustype_ODY_PEMX_CPL_LUT_VALID(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CPL_LUT_VALID(a) "PEMX_CPL_LUT_VALID"
#define device_bar_ODY_PEMX_CPL_LUT_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CPL_LUT_VALID(a) (a)
#define arguments_ODY_PEMX_CPL_LUT_VALID(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ctl_status
 *
 * PEM Control Status Register
 * This is a general control and status register of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset. Note this differs from PEM()_CTL_STATUS2's reset.
 */
union ody_pemx_ctl_status {
	uint64_t u;
	struct ody_pemx_ctl_status_s {
		uint64_t inv_lcrc                    : 1;
		uint64_t inv_ecrc                    : 1;
		uint64_t fast_lm                     : 1;
		uint64_t l1_exit                     : 1;
		uint64_t lnk_enb                     : 1;
		uint64_t frc_retry                   : 1;
		uint64_t margin_rdy                  : 1;
		uint64_t rdy_entr_l23                : 1;
		uint64_t clk_req_n                   : 1;
		uint64_t ccrs                        : 1;
		uint64_t play                        : 1;
		uint64_t auto_mode                   : 1;
		uint64_t pm_xtoff                    : 1;
		uint64_t scr_done                    : 1;
		uint64_t spares                      : 2;
		uint64_t reserved_16_31              : 16;
		uint64_t pbus                        : 8;
		uint64_t dnum                        : 5;
		uint64_t auto_sd                     : 1;
		uint64_t reserved_46_63              : 18;
	} s;
	/* struct ody_pemx_ctl_status_s cn; */
};
typedef union ody_pemx_ctl_status ody_pemx_ctl_status_t;

static inline uint64_t ODY_PEMX_CTL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CTL_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000000ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CTL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CTL_STATUS(a) ody_pemx_ctl_status_t
#define bustype_ODY_PEMX_CTL_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CTL_STATUS(a) "PEMX_CTL_STATUS"
#define device_bar_ODY_PEMX_CTL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CTL_STATUS(a) (a)
#define arguments_ODY_PEMX_CTL_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ctl_status2
 *
 * PEM Control Status 2 Register
 * This register contains additional general control and status of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset. Note this differs from PEM()_CTL_STATUS's reset.
 */
union ody_pemx_ctl_status2 {
	uint64_t u;
	struct ody_pemx_ctl_status2_s {
		uint64_t no_fwd_prg                  : 16;
		uint64_t cfg_rtry                    : 16;
		uint64_t trgt1_ecc_cor_dis           : 1;
		uint64_t perf_latency_en             : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_pemx_ctl_status2_s cn; */
};
typedef union ody_pemx_ctl_status2 ody_pemx_ctl_status2_t;

static inline uint64_t ODY_PEMX_CTL_STATUS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_CTL_STATUS2(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000130ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_CTL_STATUS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_CTL_STATUS2(a) ody_pemx_ctl_status2_t
#define bustype_ODY_PEMX_CTL_STATUS2(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_CTL_STATUS2(a) "PEMX_CTL_STATUS2"
#define device_bar_ODY_PEMX_CTL_STATUS2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_CTL_STATUS2(a) (a)
#define arguments_ODY_PEMX_CTL_STATUS2(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_dbg_info
 *
 * PEM Debug Information Register
 * This is a debug information register of the PEM.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_dbg_info {
	uint64_t u;
	struct ody_pemx_dbg_info_s {
		uint64_t spoison                     : 1;
		uint64_t rtlpmal                     : 1;
		uint64_t rtlplle                     : 1;
		uint64_t recrce                      : 1;
		uint64_t rpoison                     : 1;
		uint64_t rcemrc                      : 1;
		uint64_t rnfemrc                     : 1;
		uint64_t rfemrc                      : 1;
		uint64_t rpmerc                      : 1;
		uint64_t rptamrc                     : 1;
		uint64_t rumep                       : 1;
		uint64_t rvdm                        : 1;
		uint64_t acto                        : 1;
		uint64_t rte                         : 1;
		uint64_t mre                         : 1;
		uint64_t rdwdle                      : 1;
		uint64_t rtwdle                      : 1;
		uint64_t dpeoosd                     : 1;
		uint64_t fcpvwt                      : 1;
		uint64_t rpe                         : 1;
		uint64_t fcuv                        : 1;
		uint64_t rqo                         : 1;
		uint64_t rauc                        : 1;
		uint64_t racur                       : 1;
		uint64_t racca                       : 1;
		uint64_t caar                        : 1;
		uint64_t rarwdns                     : 1;
		uint64_t ramtlp                      : 1;
		uint64_t racpp                       : 1;
		uint64_t rawwpp                      : 1;
		uint64_t ecrc_e                      : 1;
		uint64_t lofp                        : 1;
		uint64_t bmd_e                       : 1;
		uint64_t rasdp                       : 1;
		uint64_t in_flr                      : 1;
		uint64_t vf_en_off                   : 1;
		uint64_t non_mem_load                : 1;
		uint64_t atomic_non_mem              : 1;
		uint64_t n_ecam_store                : 1;
		uint64_t p_ecam_store                : 1;
		uint64_t ecam_load                   : 1;
		uint64_t n_csr_store                 : 1;
		uint64_t p_csr_store                 : 1;
		uint64_t csr_load                    : 1;
		uint64_t atomic_to_csr               : 1;
		uint64_t n_store                     : 1;
		uint64_t p_maps_to_n                 : 1;
		uint64_t n_store_zero_byte           : 1;
		uint64_t p_store_zero_byte           : 1;
		uint64_t n_lswst                     : 1;
		uint64_t p_lswst                     : 1;
		uint64_t bad_zero                    : 1;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_pemx_dbg_info_s cn; */
};
typedef union ody_pemx_dbg_info ody_pemx_dbg_info_t;

static inline uint64_t ODY_PEMX_DBG_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_DBG_INFO(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000108ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_DBG_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_DBG_INFO(a) ody_pemx_dbg_info_t
#define bustype_ODY_PEMX_DBG_INFO(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_DBG_INFO(a) "PEMX_DBG_INFO"
#define device_bar_ODY_PEMX_DBG_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_DBG_INFO(a) (a)
#define arguments_ODY_PEMX_DBG_INFO(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_debug
 *
 * PEM Debug Register
 * This register contains status of level interrupts for debugging purposes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_debug {
	uint64_t u;
	struct ody_pemx_debug_s {
		uint64_t intval                      : 6;
		uint64_t reserved_6_31               : 26;
		uint64_t ib_drop_why                 : 32;
	} s;
	/* struct ody_pemx_debug_s cn; */
};
typedef union ody_pemx_debug ody_pemx_debug_t;

static inline uint64_t ODY_PEMX_DEBUG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_DEBUG(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000110ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_DEBUG(a) ody_pemx_debug_t
#define bustype_ODY_PEMX_DEBUG(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_DEBUG(a) "PEMX_DEBUG"
#define device_bar_ODY_PEMX_DEBUG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_DEBUG(a) (a)
#define arguments_ODY_PEMX_DEBUG(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_diag_status
 *
 * PEM Diagnostic Status Register
 * This register contains selection control for the core diagnostic bus.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_diag_status {
	uint64_t u;
	struct ody_pemx_diag_status_s {
		uint64_t pwrdwn                      : 4;
		uint64_t ltssm                       : 6;
		uint64_t pclk_rate                   : 3;
		uint64_t lnkst_l2_exit               : 1;
		uint64_t lnkst_l2                    : 1;
		uint64_t reserved_15                 : 1;
		uint64_t lnkst_l1                    : 1;
		uint64_t lnk_up                      : 1;
		uint64_t sel_aux_clk                 : 1;
		uint64_t l1_entry_inprogress         : 1;
		uint64_t pclkreqn                    : 1;
		uint64_t l1_aspm_enter_ready         : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t pm_mst_fsm                  : 5;
		uint64_t reserved_29_31              : 3;
		uint64_t pm_slv_fsm                  : 5;
		uint64_t reserved_37_63              : 27;
	} s;
	struct ody_pemx_diag_status_cn {
		uint64_t pwrdwn                      : 4;
		uint64_t ltssm                       : 6;
		uint64_t pclk_rate                   : 3;
		uint64_t lnkst_l2_exit               : 1;
		uint64_t lnkst_l2                    : 1;
		uint64_t reserved_15                 : 1;
		uint64_t lnkst_l1                    : 1;
		uint64_t lnk_up                      : 1;
		uint64_t sel_aux_clk                 : 1;
		uint64_t l1_entry_inprogress         : 1;
		uint64_t pclkreqn                    : 1;
		uint64_t l1_aspm_enter_ready         : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t pm_mst_fsm                  : 5;
		uint64_t reserved_29_31              : 3;
		uint64_t pm_slv_fsm                  : 5;
		uint64_t reserved_37_39              : 3;
		uint64_t reserved_40_63              : 24;
	} cn;
};
typedef union ody_pemx_diag_status ody_pemx_diag_status_t;

static inline uint64_t ODY_PEMX_DIAG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_DIAG_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000010ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_DIAG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_DIAG_STATUS(a) ody_pemx_diag_status_t
#define bustype_ODY_PEMX_DIAG_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_DIAG_STATUS(a) "PEMX_DIAG_STATUS"
#define device_bar_ODY_PEMX_DIAG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_DIAG_STATUS(a) (a)
#define arguments_ODY_PEMX_DIAG_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_dis_port
 *
 * PEM Disable Port Register
 * This register controls whether traffic is allowed to be sent out the PCIe link.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_dis_port {
	uint64_t u;
	struct ody_pemx_dis_port_s {
		uint64_t dis_port                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_dis_port_s cn; */
};
typedef union ody_pemx_dis_port ody_pemx_dis_port_t;

static inline uint64_t ODY_PEMX_DIS_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_DIS_PORT(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000050ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_DIS_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_DIS_PORT(a) ody_pemx_dis_port_t
#define bustype_ODY_PEMX_DIS_PORT(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_DIS_PORT(a) "PEMX_DIS_PORT"
#define device_bar_ODY_PEMX_DIS_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_DIS_PORT(a) (a)
#define arguments_ODY_PEMX_DIS_PORT(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ebi_tlp_credits
 *
 * PEM EBUS TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ebi_tlp_credits {
	uint64_t u;
	struct ody_pemx_ebi_tlp_credits_s {
		uint64_t ebi_p                       : 11;
		uint64_t ebi_np                      : 10;
		uint64_t ebi_cpl                     : 11;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_ebi_tlp_credits_s cn; */
};
typedef union ody_pemx_ebi_tlp_credits ody_pemx_ebi_tlp_credits_t;

static inline uint64_t ODY_PEMX_EBI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_EBI_TLP_CREDITS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000028ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_EBI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_EBI_TLP_CREDITS(a) ody_pemx_ebi_tlp_credits_t
#define bustype_ODY_PEMX_EBI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_EBI_TLP_CREDITS(a) "PEMX_EBI_TLP_CREDITS"
#define device_bar_ODY_PEMX_EBI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_EBI_TLP_CREDITS(a) (a)
#define arguments_ODY_PEMX_EBI_TLP_CREDITS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ebo_fifo_status
 *
 * PEM EBO Offloading FIFO Status Register
 * This register contains status about the PEM EBO offloading FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_ebo_fifo_status {
	uint64_t u;
	struct ody_pemx_ebo_fifo_status_s {
		uint64_t p_data_volume               : 8;
		uint64_t reserved_8_11               : 4;
		uint64_t n_data_volume               : 8;
		uint64_t reserved_20_23              : 4;
		uint64_t c_data_volume               : 8;
		uint64_t p_cmd_volume                : 6;
		uint64_t reserved_38_39              : 2;
		uint64_t n_cmd_volume                : 6;
		uint64_t reserved_46_47              : 2;
		uint64_t c_cmd_volume                : 6;
		uint64_t reserved_54_63              : 10;
	} s;
	/* struct ody_pemx_ebo_fifo_status_s cn; */
};
typedef union ody_pemx_ebo_fifo_status ody_pemx_ebo_fifo_status_t;

static inline uint64_t ODY_PEMX_EBO_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_EBO_FIFO_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000140ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_EBO_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_EBO_FIFO_STATUS(a) ody_pemx_ebo_fifo_status_t
#define bustype_ODY_PEMX_EBO_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_EBO_FIFO_STATUS(a) "PEMX_EBO_FIFO_STATUS"
#define device_bar_ODY_PEMX_EBO_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_EBO_FIFO_STATUS(a) (a)
#define arguments_ODY_PEMX_EBO_FIFO_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_end_merge
 *
 * PEM End Merge Register
 * Any access (read or write) to this register over NCBO will create a merging barrier
 * for both the write and read streams within PEM outbound merging stations used by AP
 * traffic such that no NCBO reads or writes received from AP as the source after this
 * register's access will merge with any NCBO accesses received from AP as the source
 * that occurred prior to this register's access.  Note that RSL accesses to this register
 * will have no effect on merging.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_end_merge {
	uint64_t u;
	struct ody_pemx_end_merge_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_pemx_end_merge_s cn; */
};
typedef union ody_pemx_end_merge ody_pemx_end_merge_t;

static inline uint64_t ODY_PEMX_END_MERGE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_END_MERGE(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000188ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_END_MERGE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_END_MERGE(a) ody_pemx_end_merge_t
#define bustype_ODY_PEMX_END_MERGE(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_END_MERGE(a) "PEMX_END_MERGE"
#define device_bar_ODY_PEMX_END_MERGE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_END_MERGE(a) (a)
#define arguments_ODY_PEMX_END_MERGE(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ib_latency#_pc#
 *
 * PEM Inbound Latency Time Registers
 * This register resets on core domain reset.  It measures the time portion
 * of the information set needed by software to calculate average inbound
 * read latency to the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC, however
 * the MPAM value is not used for these registers and accumulated latency will reflect
 * all inbound TLPs. All 8 registers will read the same.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ib_latencyx_pcx {
	uint64_t u;
	struct ody_pemx_ib_latencyx_pcx_s {
		uint64_t latency                     : 64;
	} s;
	/* struct ody_pemx_ib_latencyx_pcx_s cn; */
};
typedef union ody_pemx_ib_latencyx_pcx ody_pemx_ib_latencyx_pcx_t;

static inline uint64_t ODY_PEMX_IB_LATENCYX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_IB_LATENCYX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b == 0) && (c <= 7))
		return 0x8e0000005200ll + 0x1000000000ll * ((a) & 0xf) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_IB_LATENCYX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) ody_pemx_ib_latencyx_pcx_t
#define bustype_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) "PEMX_IB_LATENCYX_PCX"
#define device_bar_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_IB_LATENCYX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ib_reads#_pc#
 *
 * PEM Inbound Read Count Registers
 * This register resets on core domain reset.  It measures the count portion
 * of the information set needed by software to calculate average inbound
 * read latency to the target bus.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC, however
 * the MPAM value is not used for these registers and accumulated value will reflect
 * all inbound TLPs. All 8 registers will read the same.
 *
 * When PEM_CTL_STATUS2.PERF_LATENCY_EN is clear, this register is clock gated.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ib_readsx_pcx {
	uint64_t u;
	struct ody_pemx_ib_readsx_pcx_s {
		uint64_t reads                       : 64;
	} s;
	/* struct ody_pemx_ib_readsx_pcx_s cn; */
};
typedef union ody_pemx_ib_readsx_pcx ody_pemx_ib_readsx_pcx_t;

static inline uint64_t ODY_PEMX_IB_READSX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_IB_READSX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b == 0) && (c <= 7))
		return 0x8e0000005300ll + 0x1000000000ll * ((a) & 0xf) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_IB_READSX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_IB_READSX_PCX(a, b, c) ody_pemx_ib_readsx_pcx_t
#define bustype_ODY_PEMX_IB_READSX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_IB_READSX_PCX(a, b, c) "PEMX_IB_READSX_PCX"
#define device_bar_ODY_PEMX_IB_READSX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_IB_READSX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_IB_READSX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ib_req#_no_ro_pc#
 *
 * PEM Inbound No Relaxed Ordering Registers
 * This register resets on core domain reset.  It measures the number of inbound requests
 * (non-posted/posted) directed to the target bus with the RO attribute not set.
 * Index {a} represents the internal target bus and is enumerated by PEM_PERF_BUS_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC,
 * however the mapping is not used for these registers; instead, all 8 registers are
 * updated for all MPAM values.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ib_reqx_no_ro_pcx {
	uint64_t u;
	struct ody_pemx_ib_reqx_no_ro_pcx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ib_reqx_no_ro_pcx_s cn; */
};
typedef union ody_pemx_ib_reqx_no_ro_pcx ody_pemx_ib_reqx_no_ro_pcx_t;

static inline uint64_t ODY_PEMX_IB_REQX_NO_RO_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_IB_REQX_NO_RO_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 1) && (c <= 7))
		return 0x8e0000005400ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x1) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_IB_REQX_NO_RO_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) ody_pemx_ib_reqx_no_ro_pcx_t
#define bustype_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) "PEMX_IB_REQX_NO_RO_PCX"
#define device_bar_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_IB_REQX_NO_RO_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ib_tlp#_dwords_pc#
 *
 * PEM Inbound TLP DWORDS Registers
 * This register resets on core domain reset.  Otherwise, it continuously accumulates
 * the number of DWORDS (including header overhead) in every inbound TLP received
 * from PCIe and headed to the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC,
 * however the mapping only occurs when Index {a} indicates PERF_CPL; for other
 * types, all 8 registers are incremented for all MPAM values.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ib_tlpx_dwords_pcx {
	uint64_t u;
	struct ody_pemx_ib_tlpx_dwords_pcx_s {
		uint64_t tlp_dwords                  : 64;
	} s;
	/* struct ody_pemx_ib_tlpx_dwords_pcx_s cn; */
};
typedef union ody_pemx_ib_tlpx_dwords_pcx ody_pemx_ib_tlpx_dwords_pcx_t;

static inline uint64_t ODY_PEMX_IB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_IB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 2) && (c <= 7))
		return 0x8e0000005100ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_IB_TLPX_DWORDS_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) ody_pemx_ib_tlpx_dwords_pcx_t
#define bustype_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) "PEMX_IB_TLPX_DWORDS_PCX"
#define device_bar_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_IB_TLPX_DWORDS_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ib_tlp#_pc#
 *
 * PEM Inbound TLP Count Registers
 * This register resets on core domain reset.  Otherwise, it continuously increments
 * on every inbound TLP received from PCIe and headed to the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC,
 * however the mapping only occurs when Index {a} indicates PERF_CPL; for other
 * types, all 8 registers are incremented for all MPAM values.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ib_tlpx_pcx {
	uint64_t u;
	struct ody_pemx_ib_tlpx_pcx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ib_tlpx_pcx_s cn; */
};
typedef union ody_pemx_ib_tlpx_pcx ody_pemx_ib_tlpx_pcx_t;

static inline uint64_t ODY_PEMX_IB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_IB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 2) && (c <= 7))
		return 0x8e0000005000ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_IB_TLPX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_IB_TLPX_PCX(a, b, c) ody_pemx_ib_tlpx_pcx_t
#define bustype_ODY_PEMX_IB_TLPX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_IB_TLPX_PCX(a, b, c) "PEMX_IB_TLPX_PCX"
#define device_bar_ODY_PEMX_IB_TLPX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_IB_TLPX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_IB_TLPX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_int_ena_w1c
 *
 * PEM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_pemx_int_ena_w1c {
	uint64_t u;
	struct ody_pemx_int_ena_w1c_s {
		uint64_t se                          : 1;
		uint64_t up_b3                       : 1;
		uint64_t up_b4                       : 1;
		uint64_t up_b2                       : 1;
		uint64_t up_bx                       : 1;
		uint64_t un_b4                       : 1;
		uint64_t un_b2                       : 1;
		uint64_t un_bx                       : 1;
		uint64_t rdlk                        : 1;
		uint64_t crs_er                      : 1;
		uint64_t crs_dr                      : 1;
		uint64_t cfg_inf                     : 1;
		uint64_t surp_down                   : 1;
		uint64_t up_b0                       : 1;
		uint64_t un_b0                       : 1;
		uint64_t ptm_rdy_val                 : 1;
		uint64_t reserved_16_17              : 2;
		uint64_t up_vf_b0                    : 1;
		uint64_t reserved_19_20              : 2;
		uint64_t un_vf_b0                    : 1;
		uint64_t ptm_rq_replaytx             : 1;
		uint64_t ptm_rq_duprx                : 1;
		uint64_t ptm_rq_unexp_rto            : 1;
		uint64_t un_at                       : 1;
		uint64_t up_at                       : 1;
		uint64_t ats_itag_er                 : 1;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_pemx_int_ena_w1c_s cn; */
};
typedef union ody_pemx_int_ena_w1c ody_pemx_int_ena_w1c_t;

static inline uint64_t ODY_PEMX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_INT_ENA_W1C(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000f8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_INT_ENA_W1C(a) ody_pemx_int_ena_w1c_t
#define bustype_ODY_PEMX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_INT_ENA_W1C(a) "PEMX_INT_ENA_W1C"
#define device_bar_ODY_PEMX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_INT_ENA_W1C(a) (a)
#define arguments_ODY_PEMX_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_int_ena_w1s
 *
 * PEM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_pemx_int_ena_w1s {
	uint64_t u;
	struct ody_pemx_int_ena_w1s_s {
		uint64_t se                          : 1;
		uint64_t up_b3                       : 1;
		uint64_t up_b4                       : 1;
		uint64_t up_b2                       : 1;
		uint64_t up_bx                       : 1;
		uint64_t un_b4                       : 1;
		uint64_t un_b2                       : 1;
		uint64_t un_bx                       : 1;
		uint64_t rdlk                        : 1;
		uint64_t crs_er                      : 1;
		uint64_t crs_dr                      : 1;
		uint64_t cfg_inf                     : 1;
		uint64_t surp_down                   : 1;
		uint64_t up_b0                       : 1;
		uint64_t un_b0                       : 1;
		uint64_t ptm_rdy_val                 : 1;
		uint64_t reserved_16_17              : 2;
		uint64_t up_vf_b0                    : 1;
		uint64_t reserved_19_20              : 2;
		uint64_t un_vf_b0                    : 1;
		uint64_t ptm_rq_replaytx             : 1;
		uint64_t ptm_rq_duprx                : 1;
		uint64_t ptm_rq_unexp_rto            : 1;
		uint64_t un_at                       : 1;
		uint64_t up_at                       : 1;
		uint64_t ats_itag_er                 : 1;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_pemx_int_ena_w1s_s cn; */
};
typedef union ody_pemx_int_ena_w1s ody_pemx_int_ena_w1s_t;

static inline uint64_t ODY_PEMX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_INT_ENA_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000100ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_INT_ENA_W1S(a) ody_pemx_int_ena_w1s_t
#define bustype_ODY_PEMX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_INT_ENA_W1S(a) "PEMX_INT_ENA_W1S"
#define device_bar_ODY_PEMX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_INT_ENA_W1S(a) (a)
#define arguments_ODY_PEMX_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_int_sum
 *
 * PEM Interrupt Summary Register
 * This register contains the different interrupt summary bits of the PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_int_sum {
	uint64_t u;
	struct ody_pemx_int_sum_s {
		uint64_t se                          : 1;
		uint64_t up_b3                       : 1;
		uint64_t up_b4                       : 1;
		uint64_t up_b2                       : 1;
		uint64_t up_bx                       : 1;
		uint64_t un_b4                       : 1;
		uint64_t un_b2                       : 1;
		uint64_t un_bx                       : 1;
		uint64_t rdlk                        : 1;
		uint64_t crs_er                      : 1;
		uint64_t crs_dr                      : 1;
		uint64_t cfg_inf                     : 1;
		uint64_t surp_down                   : 1;
		uint64_t up_b0                       : 1;
		uint64_t un_b0                       : 1;
		uint64_t ptm_rdy_val                 : 1;
		uint64_t reserved_16_17              : 2;
		uint64_t up_vf_b0                    : 1;
		uint64_t reserved_19_20              : 2;
		uint64_t un_vf_b0                    : 1;
		uint64_t ptm_rq_replaytx             : 1;
		uint64_t ptm_rq_duprx                : 1;
		uint64_t ptm_rq_unexp_rto            : 1;
		uint64_t un_at                       : 1;
		uint64_t up_at                       : 1;
		uint64_t ats_itag_er                 : 1;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_pemx_int_sum_s cn; */
};
typedef union ody_pemx_int_sum ody_pemx_int_sum_t;

static inline uint64_t ODY_PEMX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_INT_SUM(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000e8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_INT_SUM(a) ody_pemx_int_sum_t
#define bustype_ODY_PEMX_INT_SUM(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_INT_SUM(a) "PEMX_INT_SUM"
#define device_bar_ODY_PEMX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_INT_SUM(a) (a)
#define arguments_ODY_PEMX_INT_SUM(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_int_sum_w1s
 *
 * PEM Interrupt Summary Register
 * This register sets interrupt bits.
 */
union ody_pemx_int_sum_w1s {
	uint64_t u;
	struct ody_pemx_int_sum_w1s_s {
		uint64_t se                          : 1;
		uint64_t up_b3                       : 1;
		uint64_t up_b4                       : 1;
		uint64_t up_b2                       : 1;
		uint64_t up_bx                       : 1;
		uint64_t un_b4                       : 1;
		uint64_t un_b2                       : 1;
		uint64_t un_bx                       : 1;
		uint64_t rdlk                        : 1;
		uint64_t crs_er                      : 1;
		uint64_t crs_dr                      : 1;
		uint64_t cfg_inf                     : 1;
		uint64_t surp_down                   : 1;
		uint64_t up_b0                       : 1;
		uint64_t un_b0                       : 1;
		uint64_t ptm_rdy_val                 : 1;
		uint64_t reserved_16_17              : 2;
		uint64_t up_vf_b0                    : 1;
		uint64_t reserved_19_20              : 2;
		uint64_t un_vf_b0                    : 1;
		uint64_t ptm_rq_replaytx             : 1;
		uint64_t ptm_rq_duprx                : 1;
		uint64_t ptm_rq_unexp_rto            : 1;
		uint64_t un_at                       : 1;
		uint64_t up_at                       : 1;
		uint64_t ats_itag_er                 : 1;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_pemx_int_sum_w1s_s cn; */
};
typedef union ody_pemx_int_sum_w1s ody_pemx_int_sum_w1s_t;

static inline uint64_t ODY_PEMX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_INT_SUM_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000f0ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_INT_SUM_W1S(a) ody_pemx_int_sum_w1s_t
#define bustype_ODY_PEMX_INT_SUM_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_INT_SUM_W1S(a) "PEMX_INT_SUM_W1S"
#define device_bar_ODY_PEMX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_INT_SUM_W1S(a) (a)
#define arguments_ODY_PEMX_INT_SUM_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_merge_timer_ctl
 *
 * PEM Merge Timer Control Register
 * This register controls merging timers and overrides for maximum merging size
 * for outbound reads, writes, and completions.  The TIMER fields in this
 * register reset to values that will allow merging and therefore improved
 * bandwidth across all PEM configurations.  If a system is more sensitive to
 * reducing latency, then these fields can be written to smaller values to
 * ensure transactions do not wait too long to merge before being sent to PCIe.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_merge_timer_ctl {
	uint64_t u;
	struct ody_pemx_merge_timer_ctl_s {
		uint64_t rmerge_segment_timer        : 10;
		uint64_t rmerge_total_timer          : 10;
		uint64_t rmerge_mrrs_limit           : 3;
		uint64_t wmerge_segment_timer        : 10;
		uint64_t wmerge_total_timer          : 10;
		uint64_t wmerge_mps_limit            : 3;
		uint64_t cmerge_segment_timer        : 7;
		uint64_t cmerge_total_timer          : 7;
		uint64_t cmerge_mps_limit            : 3;
		uint64_t cmerge_dis                  : 1;
	} s;
	/* struct ody_pemx_merge_timer_ctl_s cn; */
};
typedef union ody_pemx_merge_timer_ctl ody_pemx_merge_timer_ctl_t;

static inline uint64_t ODY_PEMX_MERGE_TIMER_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_MERGE_TIMER_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000180ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_MERGE_TIMER_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_MERGE_TIMER_CTL(a) ody_pemx_merge_timer_ctl_t
#define bustype_ODY_PEMX_MERGE_TIMER_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_MERGE_TIMER_CTL(a) "PEMX_MERGE_TIMER_CTL"
#define device_bar_ODY_PEMX_MERGE_TIMER_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_MERGE_TIMER_CTL(a) (a)
#define arguments_ODY_PEMX_MERGE_TIMER_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_mpam_assoc_pc#
 *
 * PEM NCB Outbound Merge Count Register
 * This register is used to create a mapping of MPAM ID to one of eight sets of
 * hardware performance counters.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_mpam_assoc_pcx {
	uint64_t u;
	struct ody_pemx_mpam_assoc_pcx_s {
		uint64_t id                          : 3;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_mpam_assoc_pcx_s cn; */
};
typedef union ody_pemx_mpam_assoc_pcx ody_pemx_mpam_assoc_pcx_t;

static inline uint64_t ODY_PEMX_MPAM_ASSOC_PCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_MPAM_ASSOC_PCX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 255))
		return 0x8e0000006000ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0xff);
	__ody_csr_fatal("PEMX_MPAM_ASSOC_PCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_MPAM_ASSOC_PCX(a, b) ody_pemx_mpam_assoc_pcx_t
#define bustype_ODY_PEMX_MPAM_ASSOC_PCX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_MPAM_ASSOC_PCX(a, b) "PEMX_MPAM_ASSOC_PCX"
#define device_bar_ODY_PEMX_MPAM_ASSOC_PCX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_MPAM_ASSOC_PCX(a, b) (a)
#define arguments_ODY_PEMX_MPAM_ASSOC_PCX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_msix_pba#
 *
 * PEM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_msix_pbax {
	uint64_t u;
	struct ody_pemx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_pemx_msix_pbax_s cn; */
};
typedef union ody_pemx_msix_pbax ody_pemx_msix_pbax_t;

static inline uint64_t ODY_PEMX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0f000f0000ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_MSIX_PBAX(a, b) ody_pemx_msix_pbax_t
#define bustype_ODY_PEMX_MSIX_PBAX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_MSIX_PBAX(a, b) "PEMX_MSIX_PBAX"
#define device_bar_ODY_PEMX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_PEMX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_PEMX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_msix_vec#_addr
 *
 * PEM MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_msix_vecx_addr {
	uint64_t u;
	struct ody_pemx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_pemx_msix_vecx_addr_s cn; */
};
typedef union ody_pemx_msix_vecx_addr ody_pemx_msix_vecx_addr_t;

static inline uint64_t ODY_PEMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 11))
		return 0x8e0f00000000ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0xf);
	__ody_csr_fatal("PEMX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_MSIX_VECX_ADDR(a, b) ody_pemx_msix_vecx_addr_t
#define bustype_ODY_PEMX_MSIX_VECX_ADDR(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_MSIX_VECX_ADDR(a, b) "PEMX_MSIX_VECX_ADDR"
#define device_bar_ODY_PEMX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_PEMX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_PEMX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_msix_vec#_ctl
 *
 * PEM MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the PEM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_msix_vecx_ctl {
	uint64_t u;
	struct ody_pemx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_pemx_msix_vecx_ctl_s cn; */
};
typedef union ody_pemx_msix_vecx_ctl ody_pemx_msix_vecx_ctl_t;

static inline uint64_t ODY_PEMX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 11))
		return 0x8e0f00000008ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0xf);
	__ody_csr_fatal("PEMX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_MSIX_VECX_CTL(a, b) ody_pemx_msix_vecx_ctl_t
#define bustype_ODY_PEMX_MSIX_VECX_CTL(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_MSIX_VECX_CTL(a, b) "PEMX_MSIX_VECX_CTL"
#define device_bar_ODY_PEMX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_PEMX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_PEMX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_ncbi_ctl
 *
 * PEM Inbound NCBI Control Register
 * This register contains control bits for memory accesses targeting the NCBI bus.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_ncbi_ctl {
	uint64_t u;
	struct ody_pemx_ncbi_ctl_s {
		uint64_t reserved_0                  : 1;
		uint64_t ld_cmd                      : 2;
		uint64_t reserved_3_6                : 4;
		uint64_t ptlp_ro_dis                 : 1;
		uint64_t ctlp_ro_dis                 : 1;
		uint64_t ntlp_ro_dis                 : 1;
		uint64_t clken_force                 : 1;
		uint64_t reserved_11_19              : 9;
		uint64_t bige                        : 1;
		uint64_t reserved_21_63              : 43;
	} s;
	struct ody_pemx_ncbi_ctl_cn {
		uint64_t reserved_0                  : 1;
		uint64_t ld_cmd                      : 2;
		uint64_t reserved_3                  : 1;
		uint64_t reserved_4                  : 1;
		uint64_t reserved_5_6                : 2;
		uint64_t ptlp_ro_dis                 : 1;
		uint64_t ctlp_ro_dis                 : 1;
		uint64_t ntlp_ro_dis                 : 1;
		uint64_t clken_force                 : 1;
		uint64_t reserved_11_19              : 9;
		uint64_t bige                        : 1;
		uint64_t reserved_21_63              : 43;
	} cn;
};
typedef union ody_pemx_ncbi_ctl ody_pemx_ncbi_ctl_t;

static inline uint64_t ODY_PEMX_NCBI_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_NCBI_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000178ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_NCBI_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_NCBI_CTL(a) ody_pemx_ncbi_ctl_t
#define bustype_ODY_PEMX_NCBI_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_NCBI_CTL(a) "PEMX_NCBI_CTL"
#define device_bar_ODY_PEMX_NCBI_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_NCBI_CTL(a) (a)
#define arguments_ODY_PEMX_NCBI_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ncbi_tlp_credits
 *
 * PEM NCB Inbound TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ncbi_tlp_credits {
	uint64_t u;
	struct ody_pemx_ncbi_tlp_credits_s {
		uint64_t ncbi_p                      : 11;
		uint64_t ncbi_np                     : 10;
		uint64_t ncbi_cpl                    : 11;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_ncbi_tlp_credits_s cn; */
};
typedef union ody_pemx_ncbi_tlp_credits ody_pemx_ncbi_tlp_credits_t;

static inline uint64_t ODY_PEMX_NCBI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_NCBI_TLP_CREDITS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000030ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_NCBI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_NCBI_TLP_CREDITS(a) ody_pemx_ncbi_tlp_credits_t
#define bustype_ODY_PEMX_NCBI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_NCBI_TLP_CREDITS(a) "PEMX_NCBI_TLP_CREDITS"
#define device_bar_ODY_PEMX_NCBI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_NCBI_TLP_CREDITS(a) (a)
#define arguments_ODY_PEMX_NCBI_TLP_CREDITS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ncbo_fifo_status
 *
 * PEM NCBO Offloading FIFO Status Register
 * This register contains status about the PEM NCBO offloading FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_ncbo_fifo_status {
	uint64_t u;
	struct ody_pemx_ncbo_fifo_status_s {
		uint64_t p_volume                    : 8;
		uint64_t n_volume                    : 8;
		uint64_t csr_volume                  : 8;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_pemx_ncbo_fifo_status_s cn; */
};
typedef union ody_pemx_ncbo_fifo_status ody_pemx_ncbo_fifo_status_t;

static inline uint64_t ODY_PEMX_NCBO_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_NCBO_FIFO_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000138ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_NCBO_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_NCBO_FIFO_STATUS(a) ody_pemx_ncbo_fifo_status_t
#define bustype_ODY_PEMX_NCBO_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_NCBO_FIFO_STATUS(a) "PEMX_NCBO_FIFO_STATUS"
#define device_bar_ODY_PEMX_NCBO_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_NCBO_FIFO_STATUS(a) (a)
#define arguments_ODY_PEMX_NCBO_FIFO_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ob_cmerge_limit
 *
 * PEM Outbound Completion Merge Limit Register
 * This register provides a mechanism to artificially limit the number of active
 * outbound completion merging stations to assist in code coverage.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_ob_cmerge_limit {
	uint64_t u;
	struct ody_pemx_ob_cmerge_limit_s {
		uint64_t limit                       : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_pemx_ob_cmerge_limit_s cn; */
};
typedef union ody_pemx_ob_cmerge_limit ody_pemx_ob_cmerge_limit_t;

static inline uint64_t ODY_PEMX_OB_CMERGE_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_CMERGE_LIMIT(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000330ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_OB_CMERGE_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_CMERGE_LIMIT(a) ody_pemx_ob_cmerge_limit_t
#define bustype_ODY_PEMX_OB_CMERGE_LIMIT(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_CMERGE_LIMIT(a) "PEMX_OB_CMERGE_LIMIT"
#define device_bar_ODY_PEMX_OB_CMERGE_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_CMERGE_LIMIT(a) (a)
#define arguments_ODY_PEMX_OB_CMERGE_LIMIT(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ob_cpl_fifo_status
 *
 * PEM Outbound Completion FIFO Status Register
 * This register contains status about the PEM Outbound Completion FIFOs.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_ob_cpl_fifo_status {
	uint64_t u;
	struct ody_pemx_ob_cpl_fifo_status_s {
		uint64_t pspi_c_volume               : 8;
		uint64_t ebo_c_volume                : 8;
		uint64_t ncbo_c_volume               : 10;
		uint64_t reserved_26_63              : 38;
	} s;
	/* struct ody_pemx_ob_cpl_fifo_status_s cn; */
};
typedef union ody_pemx_ob_cpl_fifo_status ody_pemx_ob_cpl_fifo_status_t;

static inline uint64_t ODY_PEMX_OB_CPL_FIFO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_CPL_FIFO_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000170ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_OB_CPL_FIFO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_CPL_FIFO_STATUS(a) ody_pemx_ob_cpl_fifo_status_t
#define bustype_ODY_PEMX_OB_CPL_FIFO_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_CPL_FIFO_STATUS(a) "PEMX_OB_CPL_FIFO_STATUS"
#define device_bar_ODY_PEMX_OB_CPL_FIFO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_CPL_FIFO_STATUS(a) (a)
#define arguments_ODY_PEMX_OB_CPL_FIFO_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ob_latency#_pc#
 *
 * PEM Outbound Latency Time Registers
 * This register resets on core domain reset.  It measures the time portion
 * of the information set needed by software to calculate average outbound
 * read latency originating from the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC.
 *
 * When PEM_CTL_STATUS2.PERF_LATENCY_EN is clear, this register is clock gated.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ob_latencyx_pcx {
	uint64_t u;
	struct ody_pemx_ob_latencyx_pcx_s {
		uint64_t latency                     : 64;
	} s;
	/* struct ody_pemx_ob_latencyx_pcx_s cn; */
};
typedef union ody_pemx_ob_latencyx_pcx ody_pemx_ob_latencyx_pcx_t;

static inline uint64_t ODY_PEMX_OB_LATENCYX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_LATENCYX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b == 0) && (c <= 7))
		return 0x8e0000005700ll + 0x1000000000ll * ((a) & 0xf) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_OB_LATENCYX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) ody_pemx_ob_latencyx_pcx_t
#define bustype_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) "PEMX_OB_LATENCYX_PCX"
#define device_bar_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_OB_LATENCYX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ob_reads#_pc#
 *
 * PEM Outbound Read Count Registers
 * This register resets on core domain reset.  It measures the count portion
 * of the information set needed by software to calculate average outbound
 * read latency originating from the target bus.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ob_readsx_pcx {
	uint64_t u;
	struct ody_pemx_ob_readsx_pcx_s {
		uint64_t reads                       : 64;
	} s;
	/* struct ody_pemx_ob_readsx_pcx_s cn; */
};
typedef union ody_pemx_ob_readsx_pcx ody_pemx_ob_readsx_pcx_t;

static inline uint64_t ODY_PEMX_OB_READSX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_READSX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b == 0) && (c <= 7))
		return 0x8e0000005800ll + 0x1000000000ll * ((a) & 0xf) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_OB_READSX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_READSX_PCX(a, b, c) ody_pemx_ob_readsx_pcx_t
#define bustype_ODY_PEMX_OB_READSX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_READSX_PCX(a, b, c) "PEMX_OB_READSX_PCX"
#define device_bar_ODY_PEMX_OB_READSX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_READSX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_OB_READSX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ob_tlp#_dwords_pc#
 *
 * PEM Outbound TLP DWORDS Registers
 * This register resets on core domain reset.  Otherwise, it continuously accumulates
 * the number of DWORDS (including header overhead) in every outbound TLP received
 * from the target bus and headed to PCIe.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ob_tlpx_dwords_pcx {
	uint64_t u;
	struct ody_pemx_ob_tlpx_dwords_pcx_s {
		uint64_t tlp_dwords                  : 64;
	} s;
	/* struct ody_pemx_ob_tlpx_dwords_pcx_s cn; */
};
typedef union ody_pemx_ob_tlpx_dwords_pcx ody_pemx_ob_tlpx_dwords_pcx_t;

static inline uint64_t ODY_PEMX_OB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_TLPX_DWORDS_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 2) && (c <= 7))
		return 0x8e0000005600ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_OB_TLPX_DWORDS_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) ody_pemx_ob_tlpx_dwords_pcx_t
#define bustype_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) "PEMX_OB_TLPX_DWORDS_PCX"
#define device_bar_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_OB_TLPX_DWORDS_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ob_tlp#_merges_pc#
 *
 * PEM NCB Outbound Merge Count Register
 * This register resets on core domain reset.  Otherwise, it continuously tracks the
 * number of outbound transactions from NCBO that are part of a merging sequence.
 * Currently only NCBO transactions can be merged.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ob_tlpx_merges_pcx {
	uint64_t u;
	struct ody_pemx_ob_tlpx_merges_pcx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ob_tlpx_merges_pcx_s cn; */
};
typedef union ody_pemx_ob_tlpx_merges_pcx ody_pemx_ob_tlpx_merges_pcx_t;

static inline uint64_t ODY_PEMX_OB_TLPX_MERGES_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_TLPX_MERGES_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 2) && (c <= 7))
		return 0x8e0000005900ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_OB_TLPX_MERGES_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) ody_pemx_ob_tlpx_merges_pcx_t
#define bustype_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) "PEMX_OB_TLPX_MERGES_PCX"
#define device_bar_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_OB_TLPX_MERGES_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_ob_tlp#_pc#
 *
 * PEM Outbound TLP Count Registers
 * This register resets on core domain reset.  Otherwise, it continuously increments
 * on every outbound TLP received from the target bus and headed to PCIe.
 * Index {a} represents the TLP type and is enumerated by PEM_PERF_TLP_TYPE_E.
 * Index {b} represents a set of registers mapped by using PEM_MPAM_ASSOC_PC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_ob_tlpx_pcx {
	uint64_t u;
	struct ody_pemx_ob_tlpx_pcx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_pemx_ob_tlpx_pcx_s cn; */
};
typedef union ody_pemx_ob_tlpx_pcx ody_pemx_ob_tlpx_pcx_t;

static inline uint64_t ODY_PEMX_OB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OB_TLPX_PCX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b <= 2) && (c <= 7))
		return 0x8e0000005500ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3) + 0x20ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_OB_TLPX_PCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_OB_TLPX_PCX(a, b, c) ody_pemx_ob_tlpx_pcx_t
#define bustype_ODY_PEMX_OB_TLPX_PCX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_OB_TLPX_PCX(a, b, c) "PEMX_OB_TLPX_PCX"
#define device_bar_ODY_PEMX_OB_TLPX_PCX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OB_TLPX_PCX(a, b, c) (a)
#define arguments_ODY_PEMX_OB_TLPX_PCX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_on
 *
 * PEM On Status Register
 * This register indicates that PEM is configured and ready.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_on {
	uint64_t u;
	struct ody_pemx_on_s {
		uint64_t pemon                       : 1;
		uint64_t pemoor                      : 1;
		uint64_t aclr                        : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_on_s cn; */
};
typedef union ody_pemx_on ody_pemx_on_t;

static inline uint64_t ODY_PEMX_ON(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_ON(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000e0ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_ON", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_ON(a) ody_pemx_on_t
#define bustype_ODY_PEMX_ON(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_ON(a) "PEMX_ON"
#define device_bar_ODY_PEMX_ON(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_ON(a) (a)
#define arguments_ODY_PEMX_ON(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_override_pclk_rate
 *
 * PEM Reset Mac Register
 * This register provides a mechanism to override the divide ratio pemx__div_max_pclk_ratio
 * to modify the PCLK rate
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_override_pclk_rate {
	uint64_t u;
	struct ody_pemx_override_pclk_rate_s {
		uint64_t override_div_pclk_val       : 7;
		uint64_t override_div_pclk_en        : 1;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_pemx_override_pclk_rate_s cn; */
};
typedef union ody_pemx_override_pclk_rate ody_pemx_override_pclk_rate_t;

static inline uint64_t ODY_PEMX_OVERRIDE_PCLK_RATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_OVERRIDE_PCLK_RATE(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000002a0ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_OVERRIDE_PCLK_RATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_OVERRIDE_PCLK_RATE(a) ody_pemx_override_pclk_rate_t
#define bustype_ODY_PEMX_OVERRIDE_PCLK_RATE(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_OVERRIDE_PCLK_RATE(a) "PEMX_OVERRIDE_PCLK_RATE"
#define device_bar_ODY_PEMX_OVERRIDE_PCLK_RATE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_OVERRIDE_PCLK_RATE(a) (a)
#define arguments_ODY_PEMX_OVERRIDE_PCLK_RATE(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_p2n_bar2_start
 *
 * PEM PCIe RC BAR2 Start Register
 * This register specifies the starting address for memory requests that are to be forwarded to
 * NCB/EBUS in RC mode. In EP mode, the standard PCIe config space BAR registers are used, and
 * this register is ignored.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_p2n_bar2_start {
	uint64_t u;
	struct ody_pemx_p2n_bar2_start_s {
		uint64_t reserved_0_19               : 20;
		uint64_t addr                        : 44;
	} s;
	/* struct ody_pemx_p2n_bar2_start_s cn; */
};
typedef union ody_pemx_p2n_bar2_start ody_pemx_p2n_bar2_start_t;

static inline uint64_t ODY_PEMX_P2N_BAR2_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_P2N_BAR2_START(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000150ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_P2N_BAR2_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_P2N_BAR2_START(a) ody_pemx_p2n_bar2_start_t
#define bustype_ODY_PEMX_P2N_BAR2_START(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_P2N_BAR2_START(a) "PEMX_P2N_BAR2_START"
#define device_bar_ODY_PEMX_P2N_BAR2_START(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_P2N_BAR2_START(a) (a)
#define arguments_ODY_PEMX_P2N_BAR2_START(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_p2n_bar4_start
 *
 * PEM PCIe RC BAR4 Start Register
 * This register specifies the starting address for memory requests that are to be forwarded to
 * NCB/EBUS in RC mode. In EP mode, the standard PCIe config space BAR registers are used, and
 * this register is ignored.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_p2n_bar4_start {
	uint64_t u;
	struct ody_pemx_p2n_bar4_start_s {
		uint64_t reserved_0_25               : 26;
		uint64_t addr                        : 38;
	} s;
	/* struct ody_pemx_p2n_bar4_start_s cn; */
};
typedef union ody_pemx_p2n_bar4_start ody_pemx_p2n_bar4_start_t;

static inline uint64_t ODY_PEMX_P2N_BAR4_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_P2N_BAR4_START(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000148ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_P2N_BAR4_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_P2N_BAR4_START(a) ody_pemx_p2n_bar4_start_t
#define bustype_ODY_PEMX_P2N_BAR4_START(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_P2N_BAR4_START(a) "PEMX_P2N_BAR4_START"
#define device_bar_ODY_PEMX_P2N_BAR4_START(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_P2N_BAR4_START(a) (a)
#define arguments_ODY_PEMX_P2N_BAR4_START(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_pemoor_int
 *
 * PEM PEMOOR Interrupt Register
 * This register contains the interrupt bits for PEMOOR.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_pemoor_int {
	uint64_t u;
	struct ody_pemx_pemoor_int_s {
		uint64_t pemoor                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_pemoor_int_s cn; */
};
typedef union ody_pemx_pemoor_int ody_pemx_pemoor_int_t;

static inline uint64_t ODY_PEMX_PEMOOR_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PEMOOR_INT(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000350ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PEMOOR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PEMOOR_INT(a) ody_pemx_pemoor_int_t
#define bustype_ODY_PEMX_PEMOOR_INT(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PEMOOR_INT(a) "PEMX_PEMOOR_INT"
#define device_bar_ODY_PEMX_PEMOOR_INT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PEMOOR_INT(a) (a)
#define arguments_ODY_PEMX_PEMOOR_INT(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_pemoor_int_ena_w1c
 *
 * PEM PEMOOR Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_pemx_pemoor_int_ena_w1c {
	uint64_t u;
	struct ody_pemx_pemoor_int_ena_w1c_s {
		uint64_t pemoor                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_pemoor_int_ena_w1c_s cn; */
};
typedef union ody_pemx_pemoor_int_ena_w1c ody_pemx_pemoor_int_ena_w1c_t;

static inline uint64_t ODY_PEMX_PEMOOR_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PEMOOR_INT_ENA_W1C(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000360ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PEMOOR_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) ody_pemx_pemoor_int_ena_w1c_t
#define bustype_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) "PEMX_PEMOOR_INT_ENA_W1C"
#define device_bar_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) (a)
#define arguments_ODY_PEMX_PEMOOR_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_pemoor_int_ena_w1s
 *
 * PEM PEMOOR Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_pemx_pemoor_int_ena_w1s {
	uint64_t u;
	struct ody_pemx_pemoor_int_ena_w1s_s {
		uint64_t pemoor                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_pemoor_int_ena_w1s_s cn; */
};
typedef union ody_pemx_pemoor_int_ena_w1s ody_pemx_pemoor_int_ena_w1s_t;

static inline uint64_t ODY_PEMX_PEMOOR_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PEMOOR_INT_ENA_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000368ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PEMOOR_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) ody_pemx_pemoor_int_ena_w1s_t
#define bustype_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) "PEMX_PEMOOR_INT_ENA_W1S"
#define device_bar_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) (a)
#define arguments_ODY_PEMX_PEMOOR_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_pemoor_int_w1s
 *
 * PEM PEMOOR Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_pemx_pemoor_int_w1s {
	uint64_t u;
	struct ody_pemx_pemoor_int_w1s_s {
		uint64_t pemoor                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_pemoor_int_w1s_s cn; */
};
typedef union ody_pemx_pemoor_int_w1s ody_pemx_pemoor_int_w1s_t;

static inline uint64_t ODY_PEMX_PEMOOR_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PEMOOR_INT_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000358ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PEMOOR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PEMOOR_INT_W1S(a) ody_pemx_pemoor_int_w1s_t
#define bustype_ODY_PEMX_PEMOOR_INT_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PEMOOR_INT_W1S(a) "PEMX_PEMOOR_INT_W1S"
#define device_bar_ODY_PEMX_PEMOOR_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PEMOOR_INT_W1S(a) (a)
#define arguments_ODY_PEMX_PEMOOR_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_perr_status
 *
 * PEM Parity Error Status Register
 * This register contains indications of parity errors detected inside PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_perr_status {
	uint64_t u;
	struct ody_pemx_perr_status_s {
		uint64_t tx_perr                     : 1;
		uint64_t rx_perr                     : 1;
		uint64_t dbe                         : 1;
		uint64_t rasdp                       : 1;
		uint64_t mac_txfe_perr               : 1;
		uint64_t mac_txbe_perr               : 1;
		uint64_t mac_rx_perr                 : 1;
		uint64_t reserved_7_63               : 57;
	} s;
	/* struct ody_pemx_perr_status_s cn; */
};
typedef union ody_pemx_perr_status ody_pemx_perr_status_t;

static inline uint64_t ODY_PEMX_PERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PERR_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000001d8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PERR_STATUS(a) ody_pemx_perr_status_t
#define bustype_ODY_PEMX_PERR_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PERR_STATUS(a) "PEMX_PERR_STATUS"
#define device_bar_ODY_PEMX_PERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PERR_STATUS(a) (a)
#define arguments_ODY_PEMX_PERR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_pf#_cs#_pfcfg#
 *
 * PEM PCIe Direct Config PF Registers
 * This register is used to modify PF configuration space. It can only be accessed
 * using 32-bit instructions (either [DATA_LO] or [DATA_HI] but not both
 * simultaneously.)  Although an unsupported 64-bit access attempt will have
 * unpredictable results, it will not cause a hang situation.
 *
 * Index {c} is the register number, which is the configuration offset divided by 0x2;
 * e.g. index 0 is either for PCIERC_CMD/PCIEEP_CMD (DATA_HI) or PCIERC_ID/PCIEEP_ID (DATA_LO).
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_pfx_csx_pfcfgx {
	uint64_t u;
	struct ody_pemx_pfx_csx_pfcfgx_s {
		uint64_t data_lo                     : 32;
		uint64_t data_hi                     : 32;
	} s;
	/* struct ody_pemx_pfx_csx_pfcfgx_s cn; */
};
typedef union ody_pemx_pfx_csx_pfcfgx ody_pemx_pfx_csx_pfcfgx_t;

static inline uint64_t ODY_PEMX_PFX_CSX_PFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PFX_CSX_PFCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d)
{
	if ((a <= 15) && (b == 0) && (c <= 1) && (d <= 511))
		return 0x8e0000008000ll + 0x1000000000ll * ((a) & 0xf) + 0x10000ll * ((c) & 0x1) + 8ll * ((d) & 0x1ff);
	__ody_csr_fatal("PEMX_PFX_CSX_PFCFGX", 4, a, b, c, d, 0, 0);
}

#define typedef_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) ody_pemx_pfx_csx_pfcfgx_t
#define bustype_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) CSR_TYPE_NCB
#define basename_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) "PEMX_PFX_CSX_PFCFGX"
#define device_bar_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) (a)
#define arguments_ODY_PEMX_PFX_CSX_PFCFGX(a, b, c, d) (a), (b), (c), (d)

/**
 * Register (NCB) pem#_pf#_ctl_status
 *
 * PEM PF Control Status Register
 * This is a general PF control and status register of the PEM.
 * There is a register for each PF.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_pfx_ctl_status {
	uint64_t u;
	struct ody_pemx_pfx_ctl_status_s {
		uint64_t pm_dst                      : 3;
		uint64_t pf_flr_en                   : 1;
		uint64_t ob_p_cmd                    : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_pemx_pfx_ctl_status_s cn; */
};
typedef union ody_pemx_pfx_ctl_status ody_pemx_pfx_ctl_status_t;

static inline uint64_t ODY_PEMX_PFX_CTL_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PFX_CTL_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000000800ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PFX_CTL_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PFX_CTL_STATUS(a, b) ody_pemx_pfx_ctl_status_t
#define bustype_ODY_PEMX_PFX_CTL_STATUS(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_PFX_CTL_STATUS(a, b) "PEMX_PFX_CTL_STATUS"
#define device_bar_ODY_PEMX_PFX_CTL_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PFX_CTL_STATUS(a, b) (a)
#define arguments_ODY_PEMX_PFX_CTL_STATUS(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_pspi_tlp_credits
 *
 * PEM NCB Inbound TLP Credits Register
 * This register specifies the number of credits for use in moving TLPs. When this register is
 * written, the credit values are reset to the register value. This register is for diagnostic
 * use only, and should only be written when PEM()_CTL_STATUS[LNK_ENB] is clear.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_pspi_tlp_credits {
	uint64_t u;
	struct ody_pemx_pspi_tlp_credits_s {
		uint64_t reserved_0_10               : 11;
		uint64_t pspi_np                     : 10;
		uint64_t reserved_21_63              : 43;
	} s;
	/* struct ody_pemx_pspi_tlp_credits_s cn; */
};
typedef union ody_pemx_pspi_tlp_credits ody_pemx_pspi_tlp_credits_t;

static inline uint64_t ODY_PEMX_PSPI_TLP_CREDITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PSPI_TLP_CREDITS(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000038ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PSPI_TLP_CREDITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PSPI_TLP_CREDITS(a) ody_pemx_pspi_tlp_credits_t
#define bustype_ODY_PEMX_PSPI_TLP_CREDITS(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PSPI_TLP_CREDITS(a) "PEMX_PSPI_TLP_CREDITS"
#define device_bar_ODY_PEMX_PSPI_TLP_CREDITS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PSPI_TLP_CREDITS(a) (a)
#define arguments_ODY_PEMX_PSPI_TLP_CREDITS(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ptm_ctl
 *
 * PEM Miscellaneous Control Register
 * This register contains precision timer control bits.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_ptm_ctl {
	uint64_t u;
	struct ody_pemx_ptm_ctl_s {
		uint64_t ptm_mstr_adj                : 8;
		uint64_t ptm_mstr_sel                : 1;
		uint64_t ptm_auto_load               : 1;
		uint64_t ptm_lcl_cap                 : 1;
		uint64_t ptm_auto_update             : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_pemx_ptm_ctl_s cn; */
};
typedef union ody_pemx_ptm_ctl ody_pemx_ptm_ctl_t;

static inline uint64_t ODY_PEMX_PTM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PTM_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000098ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PTM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PTM_CTL(a) ody_pemx_ptm_ctl_t
#define bustype_ODY_PEMX_PTM_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PTM_CTL(a) "PEMX_PTM_CTL"
#define device_bar_ODY_PEMX_PTM_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PTM_CTL(a) (a)
#define arguments_ODY_PEMX_PTM_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ptm_lcl_time
 *
 * PEM PTM Time Register
 * This register contains the PTM synchronized local time value.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ptm_lcl_time {
	uint64_t u;
	struct ody_pemx_ptm_lcl_time_s {
		uint64_t val                         : 64;
	} s;
	/* struct ody_pemx_ptm_lcl_time_s cn; */
};
typedef union ody_pemx_ptm_lcl_time ody_pemx_ptm_lcl_time_t;

static inline uint64_t ODY_PEMX_PTM_LCL_TIME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PTM_LCL_TIME(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000a0ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PTM_LCL_TIME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PTM_LCL_TIME(a) ody_pemx_ptm_lcl_time_t
#define bustype_ODY_PEMX_PTM_LCL_TIME(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PTM_LCL_TIME(a) "PEMX_PTM_LCL_TIME"
#define device_bar_ODY_PEMX_PTM_LCL_TIME(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PTM_LCL_TIME(a) (a)
#define arguments_ODY_PEMX_PTM_LCL_TIME(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ptm_mas_time
 *
 * PEM PTM Time Register
 * This register contains the PTM synchronized local time value.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ptm_mas_time {
	uint64_t u;
	struct ody_pemx_ptm_mas_time_s {
		uint64_t val                         : 64;
	} s;
	/* struct ody_pemx_ptm_mas_time_s cn; */
};
typedef union ody_pemx_ptm_mas_time ody_pemx_ptm_mas_time_t;

static inline uint64_t ODY_PEMX_PTM_MAS_TIME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_PTM_MAS_TIME(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000a8ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_PTM_MAS_TIME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_PTM_MAS_TIME(a) ody_pemx_ptm_mas_time_t
#define bustype_ODY_PEMX_PTM_MAS_TIME(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_PTM_MAS_TIME(a) "PEMX_PTM_MAS_TIME"
#define device_bar_ODY_PEMX_PTM_MAS_TIME(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_PTM_MAS_TIME(a) (a)
#define arguments_ODY_PEMX_PTM_MAS_TIME(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_ras_tba_ctl
 *
 * PEM RAS Time Based Analysis Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on MAC reset.
 */
union ody_pemx_ras_tba_ctl {
	uint64_t u;
	struct ody_pemx_ras_tba_ctl_s {
		uint64_t tba_ctrl                    : 2;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_pemx_ras_tba_ctl_s cn; */
};
typedef union ody_pemx_ras_tba_ctl ody_pemx_ras_tba_ctl_t;

static inline uint64_t ODY_PEMX_RAS_TBA_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RAS_TBA_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000068ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RAS_TBA_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RAS_TBA_CTL(a) ody_pemx_ras_tba_ctl_t
#define bustype_ODY_PEMX_RAS_TBA_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RAS_TBA_CTL(a) "PEMX_RAS_TBA_CTL"
#define device_bar_ODY_PEMX_RAS_TBA_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RAS_TBA_CTL(a) (a)
#define arguments_ODY_PEMX_RAS_TBA_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_reg_ctl
 *
 * PEM CSR Control Register
 * This register contains control for register accesses.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_reg_ctl {
	uint64_t u;
	struct ody_pemx_reg_ctl_s {
		uint64_t gia_timeout                 : 6;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_pemx_reg_ctl_s cn; */
};
typedef union ody_pemx_reg_ctl ody_pemx_reg_ctl_t;

static inline uint64_t ODY_PEMX_REG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_REG_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000060ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_REG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_REG_CTL(a) ody_pemx_reg_ctl_t
#define bustype_ODY_PEMX_REG_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_REG_CTL(a) "PEMX_REG_CTL"
#define device_bar_ODY_PEMX_REG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_REG_CTL(a) (a)
#define arguments_ODY_PEMX_REG_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_reg_norm#_acc
 *
 * PEM Normal Region Access Registers
 * These registers contains address index and control bits for access to memory from cores.
 * Indexed using NCBO address\<38:31\>.
 *
 * See PEM()_CONST_ACC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_reg_normx_acc {
	uint64_t u;
	struct ody_pemx_reg_normx_acc_s {
		uint64_t ba                          : 33;
		uint64_t reserved_33_34              : 2;
		uint64_t rtype                       : 3;
		uint64_t wtype                       : 3;
		uint64_t rnmerge                     : 1;
		uint64_t wnmerge                     : 1;
		uint64_t zero                        : 1;
		uint64_t ctype                       : 2;
		uint64_t pf                          : 1;
		uint64_t reserved_47_52              : 6;
		uint64_t vf_active                   : 1;
		uint64_t vf                          : 6;
		uint64_t reserved_60_63              : 4;
	} s;
	/* struct ody_pemx_reg_normx_acc_s cn; */
};
typedef union ody_pemx_reg_normx_acc ody_pemx_reg_normx_acc_t;

static inline uint64_t ODY_PEMX_REG_NORMX_ACC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_REG_NORMX_ACC(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 255))
		return 0x8e0000004000ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0xff);
	__ody_csr_fatal("PEMX_REG_NORMX_ACC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_REG_NORMX_ACC(a, b) ody_pemx_reg_normx_acc_t
#define bustype_ODY_PEMX_REG_NORMX_ACC(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_REG_NORMX_ACC(a, b) "PEMX_REG_NORMX_ACC"
#define device_bar_ODY_PEMX_REG_NORMX_ACC(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_REG_NORMX_ACC(a, b) (a)
#define arguments_ODY_PEMX_REG_NORMX_ACC(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_reg_norm#_acc2
 *
 * PEM Normal Region Access 2 Registers
 * See PEM()_CONST_ACC.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_reg_normx_acc2 {
	uint64_t u;
	struct ody_pemx_reg_normx_acc2_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_pemx_reg_normx_acc2_s cn; */
};
typedef union ody_pemx_reg_normx_acc2 ody_pemx_reg_normx_acc2_t;

static inline uint64_t ODY_PEMX_REG_NORMX_ACC2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_REG_NORMX_ACC2(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 255))
		return 0x8e0000004008ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0xff);
	__ody_csr_fatal("PEMX_REG_NORMX_ACC2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_REG_NORMX_ACC2(a, b) ody_pemx_reg_normx_acc2_t
#define bustype_ODY_PEMX_REG_NORMX_ACC2(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_REG_NORMX_ACC2(a, b) "PEMX_REG_NORMX_ACC2"
#define device_bar_ODY_PEMX_REG_NORMX_ACC2(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_REG_NORMX_ACC2(a, b) (a)
#define arguments_ODY_PEMX_REG_NORMX_ACC2(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_rst_cold_state_w1c
 *
 * PEM Interrupt Summary Register
 * This register contains the state of PEM()_RST_INT through core domain reset.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_rst_cold_state_w1c {
	uint64_t u;
	struct ody_pemx_rst_cold_state_w1c_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_cold_state_w1c_s cn; */
};
typedef union ody_pemx_rst_cold_state_w1c ody_pemx_rst_cold_state_w1c_t;

static inline uint64_t ODY_PEMX_RST_COLD_STATE_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_COLD_STATE_W1C(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000320ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_COLD_STATE_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_COLD_STATE_W1C(a) ody_pemx_rst_cold_state_w1c_t
#define bustype_ODY_PEMX_RST_COLD_STATE_W1C(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_COLD_STATE_W1C(a) "PEMX_RST_COLD_STATE_W1C"
#define device_bar_ODY_PEMX_RST_COLD_STATE_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_COLD_STATE_W1C(a) (a)
#define arguments_ODY_PEMX_RST_COLD_STATE_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_cold_state_w1s
 *
 * PEM Reset Cold State Interrupt Summary Register
 */
union ody_pemx_rst_cold_state_w1s {
	uint64_t u;
	struct ody_pemx_rst_cold_state_w1s_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_cold_state_w1s_s cn; */
};
typedef union ody_pemx_rst_cold_state_w1s ody_pemx_rst_cold_state_w1s_t;

static inline uint64_t ODY_PEMX_RST_COLD_STATE_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_COLD_STATE_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000328ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_COLD_STATE_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_COLD_STATE_W1S(a) ody_pemx_rst_cold_state_w1s_t
#define bustype_ODY_PEMX_RST_COLD_STATE_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_COLD_STATE_W1S(a) "PEMX_RST_COLD_STATE_W1S"
#define device_bar_ODY_PEMX_RST_COLD_STATE_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_COLD_STATE_W1S(a) (a)
#define arguments_ODY_PEMX_RST_COLD_STATE_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_int
 *
 * PEM Interrupt Summary Register
 * This register contains the different interrupt summary bits of the PEM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union ody_pemx_rst_int {
	uint64_t u;
	struct ody_pemx_rst_int_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_int_s cn; */
};
typedef union ody_pemx_rst_int ody_pemx_rst_int_t;

static inline uint64_t ODY_PEMX_RST_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_INT(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000300ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_INT(a) ody_pemx_rst_int_t
#define bustype_ODY_PEMX_RST_INT(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_INT(a) "PEMX_RST_INT"
#define device_bar_ODY_PEMX_RST_INT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_INT(a) (a)
#define arguments_ODY_PEMX_RST_INT(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_int_ena_w1c
 *
 * PEM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_pemx_rst_int_ena_w1c {
	uint64_t u;
	struct ody_pemx_rst_int_ena_w1c_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_int_ena_w1c_s cn; */
};
typedef union ody_pemx_rst_int_ena_w1c ody_pemx_rst_int_ena_w1c_t;

static inline uint64_t ODY_PEMX_RST_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_INT_ENA_W1C(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000310ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_INT_ENA_W1C(a) ody_pemx_rst_int_ena_w1c_t
#define bustype_ODY_PEMX_RST_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_INT_ENA_W1C(a) "PEMX_RST_INT_ENA_W1C"
#define device_bar_ODY_PEMX_RST_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_INT_ENA_W1C(a) (a)
#define arguments_ODY_PEMX_RST_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_int_ena_w1s
 *
 * PEM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_pemx_rst_int_ena_w1s {
	uint64_t u;
	struct ody_pemx_rst_int_ena_w1s_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_int_ena_w1s_s cn; */
};
typedef union ody_pemx_rst_int_ena_w1s ody_pemx_rst_int_ena_w1s_t;

static inline uint64_t ODY_PEMX_RST_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_INT_ENA_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000318ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_INT_ENA_W1S(a) ody_pemx_rst_int_ena_w1s_t
#define bustype_ODY_PEMX_RST_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_INT_ENA_W1S(a) "PEMX_RST_INT_ENA_W1S"
#define device_bar_ODY_PEMX_RST_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_INT_ENA_W1S(a) (a)
#define arguments_ODY_PEMX_RST_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_int_w1s
 *
 * PEM Interrupt Summary Register
 * This register sets interrupt bits.
 */
union ody_pemx_rst_int_w1s {
	uint64_t u;
	struct ody_pemx_rst_int_w1s_s {
		uint64_t perst                       : 1;
		uint64_t linkdown                    : 1;
		uint64_t l2                          : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_pemx_rst_int_w1s_s cn; */
};
typedef union ody_pemx_rst_int_w1s ody_pemx_rst_int_w1s_t;

static inline uint64_t ODY_PEMX_RST_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_INT_W1S(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000308ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_INT_W1S(a) ody_pemx_rst_int_w1s_t
#define bustype_ODY_PEMX_RST_INT_W1S(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_INT_W1S(a) "PEMX_RST_INT_W1S"
#define device_bar_ODY_PEMX_RST_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_INT_W1S(a) (a)
#define arguments_ODY_PEMX_RST_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_lboot
 *
 * PEM Reset Last Boot Register
 * This register contains status last reset cause.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_rst_lboot {
	uint64_t u;
	struct ody_pemx_rst_lboot_s {
		uint64_t lboot                       : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_pemx_rst_lboot_s cn; */
};
typedef union ody_pemx_rst_lboot ody_pemx_rst_lboot_t;

static inline uint64_t ODY_PEMX_RST_LBOOT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_LBOOT(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000280ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_LBOOT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_LBOOT(a) ody_pemx_rst_lboot_t
#define bustype_ODY_PEMX_RST_LBOOT(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_LBOOT(a) "PEMX_RST_LBOOT"
#define device_bar_ODY_PEMX_RST_LBOOT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_LBOOT(a) (a)
#define arguments_ODY_PEMX_RST_LBOOT(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_mac
 *
 * PEM Reset Mac Register
 * This register provides controls and modes related to resets to the MAC.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_rst_mac {
	uint64_t u;
	struct ody_pemx_rst_mac_s {
		uint64_t mac_rst                     : 1;
		uint64_t pipe_rst                    : 1;
		uint64_t pipe_rst_ovrd_en            : 1;
		uint64_t diag_clr_phystatus          : 1;
		uint64_t dis_pipe_rst                : 1;
		uint64_t ns_mode                     : 1;
		uint64_t ns_rst                      : 1;
		uint64_t mac_perst                   : 1;
		uint64_t insecure_mode               : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_pemx_rst_mac_s cn; */
};
typedef union ody_pemx_rst_mac ody_pemx_rst_mac_t;

static inline uint64_t ODY_PEMX_RST_MAC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_MAC(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000290ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_MAC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_MAC(a) ody_pemx_rst_mac_t
#define bustype_ODY_PEMX_RST_MAC(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_MAC(a) "PEMX_RST_MAC"
#define device_bar_ODY_PEMX_RST_MAC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_MAC(a) (a)
#define arguments_ODY_PEMX_RST_MAC(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_rst_soft_perst
 *
 * PEM Reset Software PERST Register
 * This register provides a mechanism to drive the PCIe PERSTN pin.
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_rst_soft_perst {
	uint64_t u;
	struct ody_pemx_rst_soft_perst_s {
		uint64_t soft_perst                  : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_rst_soft_perst_s cn; */
};
typedef union ody_pemx_rst_soft_perst ody_pemx_rst_soft_perst_t;

static inline uint64_t ODY_PEMX_RST_SOFT_PERST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_RST_SOFT_PERST(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000298ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_RST_SOFT_PERST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_RST_SOFT_PERST(a) ody_pemx_rst_soft_perst_t
#define bustype_ODY_PEMX_RST_SOFT_PERST(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_RST_SOFT_PERST(a) "PEMX_RST_SOFT_PERST"
#define device_bar_ODY_PEMX_RST_SOFT_PERST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_RST_SOFT_PERST(a) (a)
#define arguments_ODY_PEMX_RST_SOFT_PERST(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_s_rst_ctl
 *
 * PEM Secure Reset Controllers Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_pemx_s_rst_ctl {
	uint64_t u;
	struct ody_pemx_s_rst_ctl_s {
		uint64_t perst_pin                   : 1;
		uint64_t en_perst_rcv                : 1;
		uint64_t en_perst_drv                : 1;
		uint64_t reserved_3_6                : 4;
		uint64_t rst_perst                   : 1;
		uint64_t prst_lnkdwn                 : 1;
		uint64_t rst_lnkdwn                  : 1;
		uint64_t rst_pfflr                   : 1;
		uint64_t prst_l2                     : 1;
		uint64_t rst_l2                      : 1;
		uint64_t reset_type                  : 1;
		uint64_t reserved_14_63              : 50;
	} s;
	/* struct ody_pemx_s_rst_ctl_s cn; */
};
typedef union ody_pemx_s_rst_ctl ody_pemx_s_rst_ctl_t;

static inline uint64_t ODY_PEMX_S_RST_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_S_RST_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8e0000000288ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_S_RST_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_S_RST_CTL(a) ody_pemx_s_rst_ctl_t
#define bustype_ODY_PEMX_S_RST_CTL(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_S_RST_CTL(a) "PEMX_S_RST_CTL"
#define device_bar_ODY_PEMX_S_RST_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_S_RST_CTL(a) (a)
#define arguments_ODY_PEMX_S_RST_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_strap
 *
 * PEM Pin Strapping Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union ody_pemx_strap {
	uint64_t u;
	struct ody_pemx_strap_s {
		uint64_t pirc                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_strap_s cn; */
};
typedef union ody_pemx_strap ody_pemx_strap_t;

static inline uint64_t ODY_PEMX_STRAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_STRAP(uint64_t a)
{
	if (a <= 15)
		return 0x8e00000000d0ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_STRAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_STRAP(a) ody_pemx_strap_t
#define bustype_ODY_PEMX_STRAP(a) CSR_TYPE_NCB
#define basename_ODY_PEMX_STRAP(a) "PEMX_STRAP"
#define device_bar_ODY_PEMX_STRAP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_STRAP(a) (a)
#define arguments_ODY_PEMX_STRAP(a) (a), -1, -1, -1

/**
 * Register (NCB) pem#_vdm#_ctl
 *
 * PEM VDM Control Register
 * This register provides control of the Vendor Defined Message (VDM) inbound
 * and outbound message mailboxes. Type 1 PCIe VDM messages are received and sent
 * via the VDM message mailbox interface.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ctl {
	uint64_t u;
	struct ody_pemx_vdmx_ctl_s {
		uint64_t ib_mbx_rst                  : 1;
		uint64_t ob_mbx_rst                  : 1;
		uint64_t reserved_2                  : 1;
		uint64_t mbx_cfg                     : 1;
		uint64_t reserved_4_30               : 27;
		uint64_t ob_mbx_snd                  : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_vdmx_ctl_s cn; */
};
typedef union ody_pemx_vdmx_ctl ody_pemx_vdmx_ctl_t;

static inline uint64_t ODY_PEMX_VDMX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f00ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_CTL(a, b) ody_pemx_vdmx_ctl_t
#define bustype_ODY_PEMX_VDMX_CTL(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_CTL(a, b) "PEMX_VDMX_CTL"
#define device_bar_ODY_PEMX_VDMX_CTL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_CTL(a, b) (a)
#define arguments_ODY_PEMX_VDMX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ib_hdr
 *
 * PEM VDM Inbound Message Header Register
 * Vendor Defined Message Inbound Message Header Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ib_hdr {
	uint64_t u;
	struct ody_pemx_vdmx_ib_hdr_s {
		uint64_t ib_msg_hdr                  : 64;
	} s;
	/* struct ody_pemx_vdmx_ib_hdr_s cn; */
};
typedef union ody_pemx_vdmx_ib_hdr ody_pemx_vdmx_ib_hdr_t;

static inline uint64_t ODY_PEMX_VDMX_IB_HDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_IB_HDR(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f50ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_IB_HDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_IB_HDR(a, b) ody_pemx_vdmx_ib_hdr_t
#define bustype_ODY_PEMX_VDMX_IB_HDR(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_IB_HDR(a, b) "PEMX_VDMX_IB_HDR"
#define device_bar_ODY_PEMX_VDMX_IB_HDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_IB_HDR(a, b) (a)
#define arguments_ODY_PEMX_VDMX_IB_HDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ib_pld
 *
 * PEM VDM Inbound Message Payload Register
 * Vendor Defined Message Inbound Message Payload Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ib_pld {
	uint64_t u;
	struct ody_pemx_vdmx_ib_pld_s {
		uint64_t ib_msg_pld                  : 64;
	} s;
	/* struct ody_pemx_vdmx_ib_pld_s cn; */
};
typedef union ody_pemx_vdmx_ib_pld ody_pemx_vdmx_ib_pld_t;

static inline uint64_t ODY_PEMX_VDMX_IB_PLD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_IB_PLD(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f60ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_IB_PLD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_IB_PLD(a, b) ody_pemx_vdmx_ib_pld_t
#define bustype_ODY_PEMX_VDMX_IB_PLD(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_IB_PLD(a, b) "PEMX_VDMX_IB_PLD"
#define device_bar_ODY_PEMX_VDMX_IB_PLD(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_IB_PLD(a, b) (a)
#define arguments_ODY_PEMX_VDMX_IB_PLD(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ib_vid#
 *
 * PEM VDM Inbound Message VID Match Register
 * Vendor Defined Message Inbound Message VID Match Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ib_vidx {
	uint64_t u;
	struct ody_pemx_vdmx_ib_vidx_s {
		uint64_t vid                         : 16;
		uint64_t reserved_16_30              : 15;
		uint64_t valid                       : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_vdmx_ib_vidx_s cn; */
};
typedef union ody_pemx_vdmx_ib_vidx ody_pemx_vdmx_ib_vidx_t;

static inline uint64_t ODY_PEMX_VDMX_IB_VIDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_IB_VIDX(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 15) && (b == 0) && (c <= 7))
		return 0x8e0000007f80ll + 0x1000000000ll * ((a) & 0xf) + 8ll * ((c) & 0x7);
	__ody_csr_fatal("PEMX_VDMX_IB_VIDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_IB_VIDX(a, b, c) ody_pemx_vdmx_ib_vidx_t
#define bustype_ODY_PEMX_VDMX_IB_VIDX(a, b, c) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_IB_VIDX(a, b, c) "PEMX_VDMX_IB_VIDX"
#define device_bar_ODY_PEMX_VDMX_IB_VIDX(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_IB_VIDX(a, b, c) (a)
#define arguments_ODY_PEMX_VDMX_IB_VIDX(a, b, c) (a), (b), (c), -1

/**
 * Register (NCB) pem#_vdm#_int
 *
 * PEM VDM Interrupt Register
 * This register contains the interrupt bits for VDM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_int {
	uint64_t u;
	struct ody_pemx_vdmx_int_s {
		uint64_t rx_rcv                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_vdmx_int_s cn; */
};
typedef union ody_pemx_vdmx_int ody_pemx_vdmx_int_t;

static inline uint64_t ODY_PEMX_VDMX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_INT(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007e00ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_INT(a, b) ody_pemx_vdmx_int_t
#define bustype_ODY_PEMX_VDMX_INT(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_INT(a, b) "PEMX_VDMX_INT"
#define device_bar_ODY_PEMX_VDMX_INT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_INT(a, b) (a)
#define arguments_ODY_PEMX_VDMX_INT(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_int_ena_w1c
 *
 * PEM VDM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_pemx_vdmx_int_ena_w1c {
	uint64_t u;
	struct ody_pemx_vdmx_int_ena_w1c_s {
		uint64_t rx_rcv                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_vdmx_int_ena_w1c_s cn; */
};
typedef union ody_pemx_vdmx_int_ena_w1c ody_pemx_vdmx_int_ena_w1c_t;

static inline uint64_t ODY_PEMX_VDMX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007e20ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) ody_pemx_vdmx_int_ena_w1c_t
#define bustype_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) "PEMX_VDMX_INT_ENA_W1C"
#define device_bar_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) (a)
#define arguments_ODY_PEMX_VDMX_INT_ENA_W1C(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_int_ena_w1s
 *
 * PEM VDM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_pemx_vdmx_int_ena_w1s {
	uint64_t u;
	struct ody_pemx_vdmx_int_ena_w1s_s {
		uint64_t rx_rcv                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_vdmx_int_ena_w1s_s cn; */
};
typedef union ody_pemx_vdmx_int_ena_w1s ody_pemx_vdmx_int_ena_w1s_t;

static inline uint64_t ODY_PEMX_VDMX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007e30ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) ody_pemx_vdmx_int_ena_w1s_t
#define bustype_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) "PEMX_VDMX_INT_ENA_W1S"
#define device_bar_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) (a)
#define arguments_ODY_PEMX_VDMX_INT_ENA_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_int_w1s
 *
 * PEM VDM Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_pemx_vdmx_int_w1s {
	uint64_t u;
	struct ody_pemx_vdmx_int_w1s_s {
		uint64_t rx_rcv                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_pemx_vdmx_int_w1s_s cn; */
};
typedef union ody_pemx_vdmx_int_w1s ody_pemx_vdmx_int_w1s_t;

static inline uint64_t ODY_PEMX_VDMX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_INT_W1S(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007e10ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_INT_W1S(a, b) ody_pemx_vdmx_int_w1s_t
#define bustype_ODY_PEMX_VDMX_INT_W1S(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_INT_W1S(a, b) "PEMX_VDMX_INT_W1S"
#define device_bar_ODY_PEMX_VDMX_INT_W1S(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_INT_W1S(a, b) (a)
#define arguments_ODY_PEMX_VDMX_INT_W1S(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ob_hdrh
 *
 * PEM VDM Outbound Message Header Hi Register
 * Vendor Defined Message Outbound Message Header Hi Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ob_hdrh {
	uint64_t u;
	struct ody_pemx_vdmx_ob_hdrh_s {
		uint64_t msg_tlp_hdr12               : 8;
		uint64_t msg_tlp_hdr13               : 8;
		uint64_t msg_tlp_hdr14               : 8;
		uint64_t msg_tlp_hdr15               : 8;
		uint64_t msg_vid                     : 16;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_pemx_vdmx_ob_hdrh_s cn; */
};
typedef union ody_pemx_vdmx_ob_hdrh ody_pemx_vdmx_ob_hdrh_t;

static inline uint64_t ODY_PEMX_VDMX_OB_HDRH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_OB_HDRH(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f30ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_OB_HDRH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_OB_HDRH(a, b) ody_pemx_vdmx_ob_hdrh_t
#define bustype_ODY_PEMX_VDMX_OB_HDRH(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_OB_HDRH(a, b) "PEMX_VDMX_OB_HDRH"
#define device_bar_ODY_PEMX_VDMX_OB_HDRH(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_OB_HDRH(a, b) (a)
#define arguments_ODY_PEMX_VDMX_OB_HDRH(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ob_hdrl
 *
 * PEM VDM Outbound Message Header Low Register
 * Vendor Defined Message Outbound Message Header Low Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ob_hdrl {
	uint64_t u;
	struct ody_pemx_vdmx_ob_hdrl_s {
		uint64_t msg_len                     : 6;
		uint64_t reserved_6_7                : 2;
		uint64_t msg_tag                     : 8;
		uint64_t trgt_id                     : 16;
		uint64_t msg_err                     : 1;
		uint64_t reserved_33_47              : 15;
		uint64_t msg_rt                      : 3;
		uint64_t reserved_51_63              : 13;
	} s;
	/* struct ody_pemx_vdmx_ob_hdrl_s cn; */
};
typedef union ody_pemx_vdmx_ob_hdrl ody_pemx_vdmx_ob_hdrl_t;

static inline uint64_t ODY_PEMX_VDMX_OB_HDRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_OB_HDRL(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f20ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_OB_HDRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_OB_HDRL(a, b) ody_pemx_vdmx_ob_hdrl_t
#define bustype_ODY_PEMX_VDMX_OB_HDRL(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_OB_HDRL(a, b) "PEMX_VDMX_OB_HDRL"
#define device_bar_ODY_PEMX_VDMX_OB_HDRL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_OB_HDRL(a, b) (a)
#define arguments_ODY_PEMX_VDMX_OB_HDRL(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_ob_pld
 *
 * PEM VDM Outbound Message Payload Register
 * Vendor Defined Message Outbound Message Payload Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_ob_pld {
	uint64_t u;
	struct ody_pemx_vdmx_ob_pld_s {
		uint64_t ob_msg_pld                  : 64;
	} s;
	/* struct ody_pemx_vdmx_ob_pld_s cn; */
};
typedef union ody_pemx_vdmx_ob_pld ody_pemx_vdmx_ob_pld_t;

static inline uint64_t ODY_PEMX_VDMX_OB_PLD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_OB_PLD(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f40ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_OB_PLD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_OB_PLD(a, b) ody_pemx_vdmx_ob_pld_t
#define bustype_ODY_PEMX_VDMX_OB_PLD(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_OB_PLD(a, b) "PEMX_VDMX_OB_PLD"
#define device_bar_ODY_PEMX_VDMX_OB_PLD(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_OB_PLD(a, b) (a)
#define arguments_ODY_PEMX_VDMX_OB_PLD(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pem#_vdm#_status
 *
 * PEM VDM Status Register
 * This register provides status of the Vendor Defined Message (VDM) inbound
 * and outbound message mailboxes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 1. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union ody_pemx_vdmx_status {
	uint64_t u;
	struct ody_pemx_vdmx_status_s {
		uint64_t ob_mbx_busy                 : 1;
		uint64_t reserved_1                  : 1;
		uint64_t ib_mbx_err                  : 1;
		uint64_t ob_mbx_err                  : 1;
		uint64_t ob_mbx_sts                  : 14;
		uint64_t ib_mbx_sts                  : 13;
		uint64_t ib_mbx_rdy                  : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_pemx_vdmx_status_s cn; */
};
typedef union ody_pemx_vdmx_status ody_pemx_vdmx_status_t;

static inline uint64_t ODY_PEMX_VDMX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMX_VDMX_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0000007f10ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMX_VDMX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMX_VDMX_STATUS(a, b) ody_pemx_vdmx_status_t
#define bustype_ODY_PEMX_VDMX_STATUS(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMX_VDMX_STATUS(a, b) "PEMX_VDMX_STATUS"
#define device_bar_ODY_PEMX_VDMX_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMX_VDMX_STATUS(a, b) (a)
#define arguments_ODY_PEMX_VDMX_STATUS(a, b) (a), (b), -1, -1

#endif /* __ODY_CSRS_PEM_H__ */
