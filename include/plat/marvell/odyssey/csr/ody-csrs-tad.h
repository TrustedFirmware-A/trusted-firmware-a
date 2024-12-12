#ifndef __ODY_CSRS_TAD_H__
#define __ODY_CSRS_TAD_H__
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
 * TAD.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tad_bar_e
 *
 * TAD Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_TAD_BAR_E_TADX_PF_BAR0(a) (0x87e22b000000ll + 0x1000000ll * (a))
#define ODY_TAD_BAR_E_TADX_PF_BAR0_SIZE 0x800000ull
#define ODY_TAD_BAR_E_TADX_PF_BAR4(a) (0x87e22b800000ll + 0x1000000ll * (a))
#define ODY_TAD_BAR_E_TADX_PF_BAR4_SIZE 0x800000ull

/**
 * Enumeration tad_pf_int_vec_e
 *
 * TAD MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_TAD_PF_INT_VEC_E_TAD_INT (0)

/**
 * Enumeration tad_prf_sel_e
 *
 * TAD Performance Counter Select Enumeration
 * Enumerates the different TAD performance counter selects.
 */
#define ODY_TAD_PRF_SEL_E_ALLOC_ANY (0x1c)
#define ODY_TAD_PRF_SEL_E_ALLOC_DTG (0x1a)
#define ODY_TAD_PRF_SEL_E_ALLOC_LTG (0x1b)
#define ODY_TAD_PRF_SEL_E_DAT_MSH_IN_ANY (9)
#define ODY_TAD_PRF_SEL_E_DAT_MSH_IN_DSS (0xa)
#define ODY_TAD_PRF_SEL_E_DAT_MSH_OUT_ANY (0x17)
#define ODY_TAD_PRF_SEL_E_DAT_MSH_OUT_DSS (0x19)
#define ODY_TAD_PRF_SEL_E_DAT_MSH_OUT_FILL (0x18)
#define ODY_TAD_PRF_SEL_E_DAT_RD (0x21)
#define ODY_TAD_PRF_SEL_E_DAT_RD_BYP (0x22)
#define ODY_TAD_PRF_SEL_E_HIT_ANY (0x1f)
#define ODY_TAD_PRF_SEL_E_HIT_DTG (0x1d)
#define ODY_TAD_PRF_SEL_E_HIT_LTG (0x1e)
#define ODY_TAD_PRF_SEL_E_IFB_OCC (0x23)
#define ODY_TAD_PRF_SEL_E_NONE (0)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_IN_ANY (1)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_IN_EXLMN (3)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_IN_MN (2)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_ANY (0xb)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_DSS_RD (0xc)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_DSS_WR (0xd)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_DTG_EVICT (0x25)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_EVICT (0xe)
#define ODY_TAD_PRF_SEL_E_REQ_MSH_OUT_LTG_EVICT (0x26)
#define ODY_TAD_PRF_SEL_E_REQ_OCC (0x24)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_IN_ANY (4)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_IN_DSS (7)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_IN_EXLMN (6)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_IN_MN (5)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_IN_RETRY_DSS (8)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_OUT_ANY (0xf)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_OUT_EXLMN (0x12)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_OUT_MN (0x13)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_OUT_RETRY_EXLMN (0x10)
#define ODY_TAD_PRF_SEL_E_RSP_MSH_OUT_RETRY_MN (0x11)
#define ODY_TAD_PRF_SEL_E_SNP_MSH_OUT_ANY (0x14)
#define ODY_TAD_PRF_SEL_E_SNP_MSH_OUT_EXLMN (0x16)
#define ODY_TAD_PRF_SEL_E_SNP_MSH_OUT_MN (0x15)
#define ODY_TAD_PRF_SEL_E_TAG_RD (0x20)
#define ODY_TAD_PRF_SEL_E_TOT_CYCLE (0xff)

/**
 * Register (RSL) tad#_cache_flush_status
 *
 * TAD Cache Flush Status Register
 * Status for Cache Flush operation.
 */
union ody_tadx_cache_flush_status {
	uint64_t u;
	struct ody_tadx_cache_flush_status_s {
		uint64_t done                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_tadx_cache_flush_status_s cn; */
};
typedef union ody_tadx_cache_flush_status ody_tadx_cache_flush_status_t;

static inline uint64_t ODY_TADX_CACHE_FLUSH_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_CACHE_FLUSH_STATUS(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b000038ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_CACHE_FLUSH_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_CACHE_FLUSH_STATUS(a) ody_tadx_cache_flush_status_t
#define bustype_ODY_TADX_CACHE_FLUSH_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_TADX_CACHE_FLUSH_STATUS(a) "TADX_CACHE_FLUSH_STATUS"
#define device_bar_ODY_TADX_CACHE_FLUSH_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_CACHE_FLUSH_STATUS(a) (a)
#define arguments_ODY_TADX_CACHE_FLUSH_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_derr_addr
 *
 * TAD DAT Error Address Register
 * This register records error address for Data Error interrupts occurring in data read
 * from the LLC, FBF, SBF, or mesh input to the MN. The first [DATMBE, FBFMBE, SBFMBE, MNMBE]
 * error will lock the register until the logged error type is cleared;
 * [DATSBE, FBFSBE, SBFSBE, MNSBE] errors lock the register until either the logged
 * error type is cleared or a [DATMBE, FBFMBE, SBFMBE, MNMBE] error is logged.
 * Only one of [*MBE, *SBE] should be set at a time. In the event the register is
 * read with all [*MBE] and [*SBE] equal to 0 during interrupt handling that is an
 * indication that, due to a register set/clear race, information about one or more
 * errors was lost while processing an earlier error. Note that fields NONSEC, ADDR, OW
 * don't apply for MNMBE, MNSBE.
 * [DISCUSSION OF HOW TO SCRUB ERRORS]
 */
union ody_tadx_derr_addr {
	uint64_t u;
	struct ody_tadx_derr_addr_s {
		uint64_t reserved_0_3                : 4;
		uint64_t ow                          : 2;
		uint64_t addr                        : 42;
		uint64_t reserved_48_51              : 4;
		uint64_t nonsec                      : 1;
		uint64_t reserved_53_55              : 3;
		uint64_t mnsbe                       : 1;
		uint64_t sbfsbe                      : 1;
		uint64_t fbfsbe                      : 1;
		uint64_t datsbe                      : 1;
		uint64_t mnmbe                       : 1;
		uint64_t sbfmbe                      : 1;
		uint64_t fbfmbe                      : 1;
		uint64_t datmbe                      : 1;
	} s;
	/* struct ody_tadx_derr_addr_s cn; */
};
typedef union ody_tadx_derr_addr ody_tadx_derr_addr_t;

static inline uint64_t ODY_TADX_DERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_DERR_ADDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b000218ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_DERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_DERR_ADDR(a) ody_tadx_derr_addr_t
#define bustype_ODY_TADX_DERR_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_TADX_DERR_ADDR(a) "TADX_DERR_ADDR"
#define device_bar_ODY_TADX_DERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_DERR_ADDR(a) (a)
#define arguments_ODY_TADX_DERR_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_int_ena_w1c
 *
 * TAD Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_tadx_int_ena_w1c {
	uint64_t u;
	struct ody_tadx_int_ena_w1c_s {
		uint64_t rdnxm                       : 1;
		uint64_t wrnxm                       : 1;
		uint64_t req_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t mn_sbe                      : 1;
		uint64_t mn_mbe                      : 1;
		uint64_t sbf_sbe                     : 1;
		uint64_t sbf_mbe                     : 1;
		uint64_t fbf_sbe                     : 1;
		uint64_t fbf_mbe                     : 1;
		uint64_t dat_nderr                   : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_tadx_int_ena_w1c_s cn; */
};
typedef union ody_tadx_int_ena_w1c ody_tadx_int_ena_w1c_t;

static inline uint64_t ODY_TADX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_INT_ENA_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b008010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_INT_ENA_W1C(a) ody_tadx_int_ena_w1c_t
#define bustype_ODY_TADX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_TADX_INT_ENA_W1C(a) "TADX_INT_ENA_W1C"
#define device_bar_ODY_TADX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_INT_ENA_W1C(a) (a)
#define arguments_ODY_TADX_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_int_ena_w1s
 *
 * TAD Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_tadx_int_ena_w1s {
	uint64_t u;
	struct ody_tadx_int_ena_w1s_s {
		uint64_t rdnxm                       : 1;
		uint64_t wrnxm                       : 1;
		uint64_t req_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t mn_sbe                      : 1;
		uint64_t mn_mbe                      : 1;
		uint64_t sbf_sbe                     : 1;
		uint64_t sbf_mbe                     : 1;
		uint64_t fbf_sbe                     : 1;
		uint64_t fbf_mbe                     : 1;
		uint64_t dat_nderr                   : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_tadx_int_ena_w1s_s cn; */
};
typedef union ody_tadx_int_ena_w1s ody_tadx_int_ena_w1s_t;

static inline uint64_t ODY_TADX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_INT_ENA_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b008018ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_INT_ENA_W1S(a) ody_tadx_int_ena_w1s_t
#define bustype_ODY_TADX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_TADX_INT_ENA_W1S(a) "TADX_INT_ENA_W1S"
#define device_bar_ODY_TADX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_INT_ENA_W1S(a) (a)
#define arguments_ODY_TADX_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_int_w1c
 *
 * TAD Interrupt Register
 * This register is for TAD-based interrupts.
 */
union ody_tadx_int_w1c {
	uint64_t u;
	struct ody_tadx_int_w1c_s {
		uint64_t rdnxm                       : 1;
		uint64_t wrnxm                       : 1;
		uint64_t req_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t mn_sbe                      : 1;
		uint64_t mn_mbe                      : 1;
		uint64_t sbf_sbe                     : 1;
		uint64_t sbf_mbe                     : 1;
		uint64_t fbf_sbe                     : 1;
		uint64_t fbf_mbe                     : 1;
		uint64_t dat_nderr                   : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_tadx_int_w1c_s cn; */
};
typedef union ody_tadx_int_w1c ody_tadx_int_w1c_t;

static inline uint64_t ODY_TADX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_INT_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b008000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_INT_W1C(a) ody_tadx_int_w1c_t
#define bustype_ODY_TADX_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_TADX_INT_W1C(a) "TADX_INT_W1C"
#define device_bar_ODY_TADX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_INT_W1C(a) (a)
#define arguments_ODY_TADX_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_int_w1s
 *
 * TAD Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_tadx_int_w1s {
	uint64_t u;
	struct ody_tadx_int_w1s_s {
		uint64_t rdnxm                       : 1;
		uint64_t wrnxm                       : 1;
		uint64_t req_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t mn_sbe                      : 1;
		uint64_t mn_mbe                      : 1;
		uint64_t sbf_sbe                     : 1;
		uint64_t sbf_mbe                     : 1;
		uint64_t fbf_sbe                     : 1;
		uint64_t fbf_mbe                     : 1;
		uint64_t dat_nderr                   : 1;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_tadx_int_w1s_s cn; */
};
typedef union ody_tadx_int_w1s ody_tadx_int_w1s_t;

static inline uint64_t ODY_TADX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_INT_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b008008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_INT_W1S(a) ody_tadx_int_w1s_t
#define bustype_ODY_TADX_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_TADX_INT_W1S(a) "TADX_INT_W1S"
#define device_bar_ODY_TADX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_INT_W1S(a) (a)
#define arguments_ODY_TADX_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_mpam#_rcnt
 *
 * TAD Memory Partitioning Resource Count Registers
 */
union ody_tadx_mpamx_rcnt {
	uint64_t u;
	struct ody_tadx_mpamx_rcnt_s {
		uint64_t cnt                         : 7;
		uint64_t reserved_7_63               : 57;
	} s;
	/* struct ody_tadx_mpamx_rcnt_s cn; */
};
typedef union ody_tadx_mpamx_rcnt ody_tadx_mpamx_rcnt_t;

static inline uint64_t ODY_TADX_MPAMX_RCNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MPAMX_RCNT(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 271))
		return 0x87e22b002000ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x1ff);
	__ody_csr_fatal("TADX_MPAMX_RCNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MPAMX_RCNT(a, b) ody_tadx_mpamx_rcnt_t
#define bustype_ODY_TADX_MPAMX_RCNT(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_MPAMX_RCNT(a, b) "TADX_MPAMX_RCNT"
#define device_bar_ODY_TADX_MPAMX_RCNT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_MPAMX_RCNT(a, b) (a)
#define arguments_ODY_TADX_MPAMX_RCNT(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_msix_pba#
 *
 * TAD MSI-X Pending Bit Array Registers
 */
union ody_tadx_msix_pbax {
	uint64_t u;
	struct ody_tadx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_tadx_msix_pbax_s cn; */
};
typedef union ody_tadx_msix_pbax ody_tadx_msix_pbax_t;

static inline uint64_t ODY_TADX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b == 0))
		return 0x87e22b8f0000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MSIX_PBAX(a, b) ody_tadx_msix_pbax_t
#define bustype_ODY_TADX_MSIX_PBAX(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_MSIX_PBAX(a, b) "TADX_MSIX_PBAX"
#define device_bar_ODY_TADX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_TADX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_TADX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_msix_vec#_addr
 *
 * TAD MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the TAD_PF_INT_VEC_E enumeration.
 */
union ody_tadx_msix_vecx_addr {
	uint64_t u;
	struct ody_tadx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_tadx_msix_vecx_addr_s cn; */
};
typedef union ody_tadx_msix_vecx_addr ody_tadx_msix_vecx_addr_t;

static inline uint64_t ODY_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b == 0))
		return 0x87e22b800000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MSIX_VECX_ADDR(a, b) ody_tadx_msix_vecx_addr_t
#define bustype_ODY_TADX_MSIX_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_MSIX_VECX_ADDR(a, b) "TADX_MSIX_VECX_ADDR"
#define device_bar_ODY_TADX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_TADX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_TADX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_msix_vec#_ctl
 *
 * TAD MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the TAD_PF_INT_VEC_E enumeration.
 */
union ody_tadx_msix_vecx_ctl {
	uint64_t u;
	struct ody_tadx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_tadx_msix_vecx_ctl_s cn; */
};
typedef union ody_tadx_msix_vecx_ctl ody_tadx_msix_vecx_ctl_t;

static inline uint64_t ODY_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b == 0))
		return 0x87e22b800008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MSIX_VECX_CTL(a, b) ody_tadx_msix_vecx_ctl_t
#define bustype_ODY_TADX_MSIX_VECX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_MSIX_VECX_CTL(a, b) "TADX_MSIX_VECX_CTL"
#define device_bar_ODY_TADX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_TADX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_TADX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_msmon_csu_ns
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_MSMON_CSU_NS is the Non-secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union ody_tadx_msmon_csu_ns {
	uint64_t u;
	struct ody_tadx_msmon_csu_ns_s {
		uint64_t value                       : 31;
		uint64_t nrdy                        : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tadx_msmon_csu_ns_s cn; */
};
typedef union ody_tadx_msmon_csu_ns ody_tadx_msmon_csu_ns_t;

static inline uint64_t ODY_TADX_MSMON_CSU_NS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MSMON_CSU_NS(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b010840ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_MSMON_CSU_NS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MSMON_CSU_NS(a) ody_tadx_msmon_csu_ns_t
#define bustype_ODY_TADX_MSMON_CSU_NS(a) CSR_TYPE_RSL
#define basename_ODY_TADX_MSMON_CSU_NS(a) "TADX_MSMON_CSU_NS"
#define device_bar_ODY_TADX_MSMON_CSU_NS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_MSMON_CSU_NS(a) (a)
#define arguments_ODY_TADX_MSMON_CSU_NS(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_msmon_csu_s
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_MSMON_CSU_S is the secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union ody_tadx_msmon_csu_s {
	uint64_t u;
	struct ody_tadx_msmon_csu_s_s {
		uint64_t value                       : 31;
		uint64_t nrdy                        : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_tadx_msmon_csu_s_s cn; */
};
typedef union ody_tadx_msmon_csu_s ody_tadx_msmon_csu_s_t;

static inline uint64_t ODY_TADX_MSMON_CSU_S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_MSMON_CSU_S(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b020840ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_MSMON_CSU_S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_MSMON_CSU_S(a) ody_tadx_msmon_csu_s_t
#define bustype_ODY_TADX_MSMON_CSU_S(a) CSR_TYPE_RSL
#define basename_ODY_TADX_MSMON_CSU_S(a) "TADX_MSMON_CSU_S"
#define device_bar_ODY_TADX_MSMON_CSU_S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_MSMON_CSU_S(a) (a)
#define arguments_ODY_TADX_MSMON_CSU_S(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_nderr_addr
 *
 * TAD Non-Data Error Address Register
 * This register records the error address for Non-Data Error interrupts triggered from
 * the REQ mesh [RDNXM, WRNXM, REQ_PERR]. The first [WRNXM, REQ_PERR] error will lock
 * the register until the logged error type is cleared; [RDNXM] errors lock the
 * register until either the logged error type is cleared or a [WRNXM, REQ_PERR] error
 * is logged. See TAD_NDERR_INFO for error opcode and srcid logging.
 */
union ody_tadx_nderr_addr {
	uint64_t u;
	struct ody_tadx_nderr_addr_s {
		uint64_t addr                        : 48;
		uint64_t reserved_48_51              : 4;
		uint64_t nonsec                      : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_tadx_nderr_addr_s cn; */
};
typedef union ody_tadx_nderr_addr ody_tadx_nderr_addr_t;

static inline uint64_t ODY_TADX_NDERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_NDERR_ADDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b000208ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_NDERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_NDERR_ADDR(a) ody_tadx_nderr_addr_t
#define bustype_ODY_TADX_NDERR_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_TADX_NDERR_ADDR(a) "TADX_NDERR_ADDR"
#define device_bar_ODY_TADX_NDERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_NDERR_ADDR(a) (a)
#define arguments_ODY_TADX_NDERR_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_nderr_info
 *
 * TAD Non-Data Error Info Register
 * This register records error information for Non-Data Error interrupts [RDNXM, WRNXM,
 * REQ_PERR, RSP_PERR, DAT_PERR, DAT_NDERR]. The first [WRNXM, REQ_PERR, RSP_PERR,
 * DAT_PERR, DAT_NDERR] error will lock the register until the logged error type is
 * cleared; [RDNXM] errors lock the register until either the logged error type is
 * cleared or a [WRNXM, REQ_PERR, RSP_PERR, DAT_PERR, DAT_NDERR] error is logged.
 * See TAD_NDERR_ADDR for error address logging.
 */
union ody_tadx_nderr_info {
	uint64_t u;
	struct ody_tadx_nderr_info_s {
		uint64_t srcid                       : 11;
		uint64_t opcode                      : 7;
		uint64_t rspnum                      : 1;
		uint64_t reserved_19_57              : 39;
		uint64_t dat_nderr                   : 1;
		uint64_t dat_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t req_perr                    : 1;
		uint64_t wrnxm                       : 1;
		uint64_t rdnxm                       : 1;
	} s;
	/* struct ody_tadx_nderr_info_s cn; */
};
typedef union ody_tadx_nderr_info ody_tadx_nderr_info_t;

static inline uint64_t ODY_TADX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_NDERR_INFO(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b000200ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_NDERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_NDERR_INFO(a) ody_tadx_nderr_info_t
#define bustype_ODY_TADX_NDERR_INFO(a) CSR_TYPE_RSL
#define basename_ODY_TADX_NDERR_INFO(a) "TADX_NDERR_INFO"
#define device_bar_ODY_TADX_NDERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_NDERR_INFO(a) (a)
#define arguments_ODY_TADX_NDERR_INFO(a) (a), -1, -1, -1

/**
 * Register (RSL) tad#_pfc_ns#
 *
 * TAD Performance Counter Non-Secure Registers
 */
union ody_tadx_pfc_nsx {
	uint64_t u;
	struct ody_tadx_pfc_nsx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_tadx_pfc_nsx_s cn; */
};
typedef union ody_tadx_pfc_nsx ody_tadx_pfc_nsx_t;

static inline uint64_t ODY_TADX_PFC_NSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_PFC_NSX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e22b030800ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("TADX_PFC_NSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_PFC_NSX(a, b) ody_tadx_pfc_nsx_t
#define bustype_ODY_TADX_PFC_NSX(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_PFC_NSX(a, b) "TADX_PFC_NSX"
#define device_bar_ODY_TADX_PFC_NSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_PFC_NSX(a, b) (a)
#define arguments_ODY_TADX_PFC_NSX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_pfc_s#
 *
 * TAD Performance Counter Secure Registers
 */
union ody_tadx_pfc_sx {
	uint64_t u;
	struct ody_tadx_pfc_sx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_tadx_pfc_sx_s cn; */
};
typedef union ody_tadx_pfc_sx ody_tadx_pfc_sx_t;

static inline uint64_t ODY_TADX_PFC_SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_PFC_SX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e22b000800ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("TADX_PFC_SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_PFC_SX(a, b) ody_tadx_pfc_sx_t
#define bustype_ODY_TADX_PFC_SX(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_PFC_SX(a, b) "TADX_PFC_SX"
#define device_bar_ODY_TADX_PFC_SX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_PFC_SX(a, b) (a)
#define arguments_ODY_TADX_PFC_SX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_prf_ns#
 *
 * TAD Performance Counter Control Non-Secure Registers
 * Selects event to count for each TAD_PFC, and specifies optional
 * filters for PMG and PARTID.
 */
union ody_tadx_prf_nsx {
	uint64_t u;
	struct ody_tadx_prf_nsx_s {
		uint64_t cntsel                      : 8;
		uint64_t match_partid                : 1;
		uint64_t match_pmg                   : 1;
		uint64_t partid_val                  : 9;
		uint64_t reserved_19_26              : 8;
		uint64_t pmg_val                     : 1;
		uint64_t reserved_28_34              : 7;
		uint64_t match_stream                : 1;
		uint64_t stream_val                  : 1;
		uint64_t match_prefetch              : 1;
		uint64_t prefetch_val                : 1;
		uint64_t match_subsource             : 1;
		uint64_t subsource_val               : 2;
		uint64_t match_opcode                : 1;
		uint64_t opcode_val                  : 7;
		uint64_t reserved_50_63              : 14;
	} s;
	/* struct ody_tadx_prf_nsx_s cn; */
};
typedef union ody_tadx_prf_nsx ody_tadx_prf_nsx_t;

static inline uint64_t ODY_TADX_PRF_NSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_PRF_NSX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e22b030900ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("TADX_PRF_NSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_PRF_NSX(a, b) ody_tadx_prf_nsx_t
#define bustype_ODY_TADX_PRF_NSX(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_PRF_NSX(a, b) "TADX_PRF_NSX"
#define device_bar_ODY_TADX_PRF_NSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_PRF_NSX(a, b) (a)
#define arguments_ODY_TADX_PRF_NSX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_prf_s#
 *
 * TAD Performance Counter Control Secure Registers
 * Selects event to count for each TAD_PFC, and specifies optional
 * filters for PMG and PARTID.
 */
union ody_tadx_prf_sx {
	uint64_t u;
	struct ody_tadx_prf_sx_s {
		uint64_t cntsel                      : 8;
		uint64_t match_partid                : 1;
		uint64_t match_pmg                   : 1;
		uint64_t partid_val                  : 9;
		uint64_t reserved_19_26              : 8;
		uint64_t pmg_val                     : 1;
		uint64_t reserved_28_34              : 7;
		uint64_t match_stream                : 1;
		uint64_t stream_val                  : 1;
		uint64_t match_prefetch              : 1;
		uint64_t prefetch_val                : 1;
		uint64_t match_subsource             : 1;
		uint64_t subsource_val               : 2;
		uint64_t match_opcode                : 1;
		uint64_t opcode_val                  : 7;
		uint64_t reserved_50_63              : 14;
	} s;
	/* struct ody_tadx_prf_sx_s cn; */
};
typedef union ody_tadx_prf_sx ody_tadx_prf_sx_t;

static inline uint64_t ODY_TADX_PRF_SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_PRF_SX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e22b000900ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("TADX_PRF_SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_PRF_SX(a, b) ody_tadx_prf_sx_t
#define bustype_ODY_TADX_PRF_SX(a, b) CSR_TYPE_RSL
#define basename_ODY_TADX_PRF_SX(a, b) "TADX_PRF_SX"
#define device_bar_ODY_TADX_PRF_SX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_PRF_SX(a, b) (a)
#define arguments_ODY_TADX_PRF_SX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) tad#_req_rcnt
 *
 * TAD Request Resource Count Registers
 */
union ody_tadx_req_rcnt {
	uint64_t u;
	struct ody_tadx_req_rcnt_s {
		uint64_t cnt                         : 7;
		uint64_t reserved_7_63               : 57;
	} s;
	/* struct ody_tadx_req_rcnt_s cn; */
};
typedef union ody_tadx_req_rcnt ody_tadx_req_rcnt_t;

static inline uint64_t ODY_TADX_REQ_RCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_TADX_REQ_RCNT(uint64_t a)
{
	if (a <= 89)
		return 0x87e22b002008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("TADX_REQ_RCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_TADX_REQ_RCNT(a) ody_tadx_req_rcnt_t
#define bustype_ODY_TADX_REQ_RCNT(a) CSR_TYPE_RSL
#define basename_ODY_TADX_REQ_RCNT(a) "TADX_REQ_RCNT"
#define device_bar_ODY_TADX_REQ_RCNT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_TADX_REQ_RCNT(a) (a)
#define arguments_ODY_TADX_REQ_RCNT(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_TAD_H__ */
