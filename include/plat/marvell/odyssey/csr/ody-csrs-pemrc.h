#ifndef __ODY_CSRS_PEMRC_H__
#define __ODY_CSRS_PEMRC_H__
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
 * PEMRC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pemrc_bar_e
 *
 * PEM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_PEMRC_BAR_E_PEMRCX_PF_BAR0(a) (0x8e0e00000000ll + 0x1000000000ll * (a))
#define ODY_PEMRC_BAR_E_PEMRCX_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration pemrc_int_vec_e
 *
 * PEM RC MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_PEMRC_INT_VEC_E_ERROR_AERI (0)
#define ODY_PEMRC_INT_VEC_E_HP_PMEI (1)

/**
 * Register (NCB) pemrc#_msix_pba#
 *
 * PEM RC MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the PEMRC_INT_VEC_E enumeration.
 */
union ody_pemrcx_msix_pbax {
	uint64_t u;
	struct ody_pemrcx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_pemrcx_msix_pbax_s cn; */
};
typedef union ody_pemrcx_msix_pbax ody_pemrcx_msix_pbax_t;

static inline uint64_t ODY_PEMRCX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMRCX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b == 0))
		return 0x8e0e000f0000ll + 0x1000000000ll * ((a) & 0xf);
	__ody_csr_fatal("PEMRCX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMRCX_MSIX_PBAX(a, b) ody_pemrcx_msix_pbax_t
#define bustype_ODY_PEMRCX_MSIX_PBAX(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMRCX_MSIX_PBAX(a, b) "PEMRCX_MSIX_PBAX"
#define device_bar_ODY_PEMRCX_MSIX_PBAX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMRCX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_PEMRCX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pemrc#_msix_vec#_addr
 *
 * PEM RC MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the PEMRC_INT_VEC_E enumeration.
 */
union ody_pemrcx_msix_vecx_addr {
	uint64_t u;
	struct ody_pemrcx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_pemrcx_msix_vecx_addr_s cn; */
};
typedef union ody_pemrcx_msix_vecx_addr ody_pemrcx_msix_vecx_addr_t;

static inline uint64_t ODY_PEMRCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMRCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 1))
		return 0x8e0e00000000ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x1);
	__ody_csr_fatal("PEMRCX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) ody_pemrcx_msix_vecx_addr_t
#define bustype_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) "PEMRCX_MSIX_VECX_ADDR"
#define device_bar_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_PEMRCX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) pemrc#_msix_vec#_ctl
 *
 * PEM RC MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the PEMRC_INT_VEC_E enumeration.
 */
union ody_pemrcx_msix_vecx_ctl {
	uint64_t u;
	struct ody_pemrcx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_pemrcx_msix_vecx_ctl_s cn; */
};
typedef union ody_pemrcx_msix_vecx_ctl ody_pemrcx_msix_vecx_ctl_t;

static inline uint64_t ODY_PEMRCX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PEMRCX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 15) && (b <= 1))
		return 0x8e0e00000008ll + 0x1000000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x1);
	__ody_csr_fatal("PEMRCX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_PEMRCX_MSIX_VECX_CTL(a, b) ody_pemrcx_msix_vecx_ctl_t
#define bustype_ODY_PEMRCX_MSIX_VECX_CTL(a, b) CSR_TYPE_NCB
#define basename_ODY_PEMRCX_MSIX_VECX_CTL(a, b) "PEMRCX_MSIX_VECX_CTL"
#define device_bar_ODY_PEMRCX_MSIX_VECX_CTL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_PEMRCX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_PEMRCX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

#endif /* __ODY_CSRS_PEMRC_H__ */
