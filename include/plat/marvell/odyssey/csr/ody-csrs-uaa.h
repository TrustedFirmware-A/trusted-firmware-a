#ifndef __ODY_CSRS_UAA_H__
#define __ODY_CSRS_UAA_H__
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
 * UAA.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration uaa_bar_e
 *
 * UART Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_UAA_BAR_E_UAAX_PF_BAR0(a) (0x87e028000000ll + 0x1000000ll * (a))
#define ODY_UAA_BAR_E_UAAX_PF_BAR0_SIZE 0x10000ull
#define ODY_UAA_BAR_E_UAAX_PF_BAR4(a) (0x87e028f00000ll + 0x1000000ll * (a))
#define ODY_UAA_BAR_E_UAAX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration uaa_int_vec_e
 *
 * UART MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_UAA_INT_VEC_E_INTS (0)
#define ODY_UAA_INT_VEC_E_INTS_CLEAR (1)

/**
 * Register (RSL32b) uaa#_cidr0
 *
 * UART Component Identification Register 0
 */
union ody_uaax_cidr0 {
	uint32_t u;
	struct ody_uaax_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_cidr0_s cn; */
};
typedef union ody_uaax_cidr0 ody_uaax_cidr0_t;

static inline uint64_t ODY_UAAX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_CIDR0(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000ff0ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_CIDR0(a) ody_uaax_cidr0_t
#define bustype_ODY_UAAX_CIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_CIDR0(a) "UAAX_CIDR0"
#define device_bar_ODY_UAAX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_CIDR0(a) (a)
#define arguments_ODY_UAAX_CIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_cidr1
 *
 * UART Component Identification Register 1
 */
union ody_uaax_cidr1 {
	uint32_t u;
	struct ody_uaax_cidr1_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_cidr1_s cn; */
};
typedef union ody_uaax_cidr1 ody_uaax_cidr1_t;

static inline uint64_t ODY_UAAX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_CIDR1(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000ff4ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_CIDR1(a) ody_uaax_cidr1_t
#define bustype_ODY_UAAX_CIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_CIDR1(a) "UAAX_CIDR1"
#define device_bar_ODY_UAAX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_CIDR1(a) (a)
#define arguments_ODY_UAAX_CIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_cidr2
 *
 * UART Component Identification Register 2
 */
union ody_uaax_cidr2 {
	uint32_t u;
	struct ody_uaax_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_cidr2_s cn; */
};
typedef union ody_uaax_cidr2 ody_uaax_cidr2_t;

static inline uint64_t ODY_UAAX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_CIDR2(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000ff8ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_CIDR2(a) ody_uaax_cidr2_t
#define bustype_ODY_UAAX_CIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_CIDR2(a) "UAAX_CIDR2"
#define device_bar_ODY_UAAX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_CIDR2(a) (a)
#define arguments_ODY_UAAX_CIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_cidr3
 *
 * UART Component Identification Register 3
 */
union ody_uaax_cidr3 {
	uint32_t u;
	struct ody_uaax_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_cidr3_s cn; */
};
typedef union ody_uaax_cidr3 ody_uaax_cidr3_t;

static inline uint64_t ODY_UAAX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_CIDR3(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000ffcll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_CIDR3(a) ody_uaax_cidr3_t
#define bustype_ODY_UAAX_CIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_CIDR3(a) "UAAX_CIDR3"
#define device_bar_ODY_UAAX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_CIDR3(a) (a)
#define arguments_ODY_UAAX_CIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_cr
 *
 * UART Control Register
 */
union ody_uaax_cr {
	uint32_t u;
	struct ody_uaax_cr_s {
		uint32_t uarten                      : 1;
		uint32_t reserved_1_6                : 6;
		uint32_t lbe                         : 1;
		uint32_t txe                         : 1;
		uint32_t rxe                         : 1;
		uint32_t dtr                         : 1;
		uint32_t rts                         : 1;
		uint32_t out1                        : 1;
		uint32_t out2                        : 1;
		uint32_t rtsen                       : 1;
		uint32_t ctsen                       : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_uaax_cr_cn {
		uint32_t uarten                      : 1;
		uint32_t reserved_1                  : 1;
		uint32_t reserved_2                  : 1;
		uint32_t reserved_3_6                : 4;
		uint32_t lbe                         : 1;
		uint32_t txe                         : 1;
		uint32_t rxe                         : 1;
		uint32_t dtr                         : 1;
		uint32_t rts                         : 1;
		uint32_t out1                        : 1;
		uint32_t out2                        : 1;
		uint32_t rtsen                       : 1;
		uint32_t ctsen                       : 1;
		uint32_t reserved_16_31              : 16;
	} cn;
};
typedef union ody_uaax_cr ody_uaax_cr_t;

static inline uint64_t ODY_UAAX_CR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_CR(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000030ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_CR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_CR(a) ody_uaax_cr_t
#define bustype_ODY_UAAX_CR(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_CR(a) "UAAX_CR"
#define device_bar_ODY_UAAX_CR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_CR(a) (a)
#define arguments_ODY_UAAX_CR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_dr
 *
 * UART Data Register
 * Writing to this register pushes data to the FIFO for transmission. Reading it retrieves
 * received data from the receive FIFO.
 */
union ody_uaax_dr {
	uint32_t u;
	struct ody_uaax_dr_s {
		uint32_t data                        : 8;
		uint32_t fe                          : 1;
		uint32_t pe                          : 1;
		uint32_t be                          : 1;
		uint32_t oe                          : 1;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_uaax_dr_s cn; */
};
typedef union ody_uaax_dr ody_uaax_dr_t;

static inline uint64_t ODY_UAAX_DR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_DR(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_DR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_DR(a) ody_uaax_dr_t
#define bustype_ODY_UAAX_DR(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_DR(a) "UAAX_DR"
#define device_bar_ODY_UAAX_DR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_DR(a) (a)
#define arguments_ODY_UAAX_DR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_fbrd
 *
 * UART Fractional Baud Rate Register
 */
union ody_uaax_fbrd {
	uint32_t u;
	struct ody_uaax_fbrd_s {
		uint32_t baud_divfrac                : 6;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_uaax_fbrd_s cn; */
};
typedef union ody_uaax_fbrd ody_uaax_fbrd_t;

static inline uint64_t ODY_UAAX_FBRD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_FBRD(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000028ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_FBRD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_FBRD(a) ody_uaax_fbrd_t
#define bustype_ODY_UAAX_FBRD(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_FBRD(a) "UAAX_FBRD"
#define device_bar_ODY_UAAX_FBRD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_FBRD(a) (a)
#define arguments_ODY_UAAX_FBRD(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_fr
 *
 * UART Flag Register
 */
union ody_uaax_fr {
	uint32_t u;
	struct ody_uaax_fr_s {
		uint32_t cts                         : 1;
		uint32_t dsr                         : 1;
		uint32_t dcd                         : 1;
		uint32_t busy                        : 1;
		uint32_t rxfe                        : 1;
		uint32_t txff                        : 1;
		uint32_t rxff                        : 1;
		uint32_t txfe                        : 1;
		uint32_t ri                          : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_uaax_fr_s cn; */
};
typedef union ody_uaax_fr ody_uaax_fr_t;

static inline uint64_t ODY_UAAX_FR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_FR(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000018ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_FR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_FR(a) ody_uaax_fr_t
#define bustype_ODY_UAAX_FR(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_FR(a) "UAAX_FR"
#define device_bar_ODY_UAAX_FR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_FR(a) (a)
#define arguments_ODY_UAAX_FR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_ibrd
 *
 * UART Integer Baud Rate Register
 */
union ody_uaax_ibrd {
	uint32_t u;
	struct ody_uaax_ibrd_s {
		uint32_t baud_divint                 : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_uaax_ibrd_s cn; */
};
typedef union ody_uaax_ibrd ody_uaax_ibrd_t;

static inline uint64_t ODY_UAAX_IBRD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_IBRD(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000024ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_IBRD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_IBRD(a) ody_uaax_ibrd_t
#define bustype_ODY_UAAX_IBRD(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_IBRD(a) "UAAX_IBRD"
#define device_bar_ODY_UAAX_IBRD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_IBRD(a) (a)
#define arguments_ODY_UAAX_IBRD(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_icr
 *
 * UART Interrupt Clear Register
 * Read value is zero for this register, not the interrupt state.
 */
union ody_uaax_icr {
	uint32_t u;
	struct ody_uaax_icr_s {
		uint32_t rimic                       : 1;
		uint32_t ctsmic                      : 1;
		uint32_t dcdmic                      : 1;
		uint32_t dsrmic                      : 1;
		uint32_t rxic                        : 1;
		uint32_t txic                        : 1;
		uint32_t rtic                        : 1;
		uint32_t feic                        : 1;
		uint32_t peic                        : 1;
		uint32_t beic                        : 1;
		uint32_t oeic                        : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_uaax_icr_s cn; */
};
typedef union ody_uaax_icr ody_uaax_icr_t;

static inline uint64_t ODY_UAAX_ICR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_ICR(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000044ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_ICR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_ICR(a) ody_uaax_icr_t
#define bustype_ODY_UAAX_ICR(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_ICR(a) "UAAX_ICR"
#define device_bar_ODY_UAAX_ICR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_ICR(a) (a)
#define arguments_ODY_UAAX_ICR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_ifls
 *
 * UART Interrupt FIFO Level Select Register
 */
union ody_uaax_ifls {
	uint32_t u;
	struct ody_uaax_ifls_s {
		uint32_t txiflsel                    : 3;
		uint32_t rxiflsel                    : 3;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_uaax_ifls_s cn; */
};
typedef union ody_uaax_ifls ody_uaax_ifls_t;

static inline uint64_t ODY_UAAX_IFLS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_IFLS(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000034ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_IFLS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_IFLS(a) ody_uaax_ifls_t
#define bustype_ODY_UAAX_IFLS(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_IFLS(a) "UAAX_IFLS"
#define device_bar_ODY_UAAX_IFLS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_IFLS(a) (a)
#define arguments_ODY_UAAX_IFLS(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_imsc
 *
 * UART Interrupt Mask Set/Clear Register
 */
union ody_uaax_imsc {
	uint32_t u;
	struct ody_uaax_imsc_s {
		uint32_t rimim                       : 1;
		uint32_t ctsmim                      : 1;
		uint32_t dcdmim                      : 1;
		uint32_t dsrmim                      : 1;
		uint32_t rxim                        : 1;
		uint32_t txim                        : 1;
		uint32_t rtim                        : 1;
		uint32_t feim                        : 1;
		uint32_t peim                        : 1;
		uint32_t beim                        : 1;
		uint32_t oeim                        : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_uaax_imsc_s cn; */
};
typedef union ody_uaax_imsc ody_uaax_imsc_t;

static inline uint64_t ODY_UAAX_IMSC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_IMSC(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000038ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_IMSC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_IMSC(a) ody_uaax_imsc_t
#define bustype_ODY_UAAX_IMSC(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_IMSC(a) "UAAX_IMSC"
#define device_bar_ODY_UAAX_IMSC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_IMSC(a) (a)
#define arguments_ODY_UAAX_IMSC(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_io_ctl
 *
 * UART IO Control Register
 * This register controls the UAA[0..1] IO drive strength and slew rates.  The additional
 * UAA interfaces are controlled by GPIO_IO_CTL[DRIVEx] and GPIO_IO_CTL[SLEWx] based
 * on the selected pins.
 */
union ody_uaax_io_ctl {
	uint64_t u;
	struct ody_uaax_io_ctl_s {
		uint64_t slew                        : 2;
		uint64_t drive                       : 2;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_uaax_io_ctl_s cn; */
};
typedef union ody_uaax_io_ctl ody_uaax_io_ctl_t;

static inline uint64_t ODY_UAAX_IO_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_IO_CTL(uint64_t a)
{
	if (a <= 7)
		return 0x87e028001028ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_IO_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_IO_CTL(a) ody_uaax_io_ctl_t
#define bustype_ODY_UAAX_IO_CTL(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_IO_CTL(a) "UAAX_IO_CTL"
#define device_bar_ODY_UAAX_IO_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_IO_CTL(a) (a)
#define arguments_ODY_UAAX_IO_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_lcr_h
 *
 * UART Line Control Register
 */
union ody_uaax_lcr_h {
	uint32_t u;
	struct ody_uaax_lcr_h_s {
		uint32_t brk                         : 1;
		uint32_t pen                         : 1;
		uint32_t eps                         : 1;
		uint32_t stp2                        : 1;
		uint32_t fen                         : 1;
		uint32_t wlen                        : 2;
		uint32_t sps                         : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_lcr_h_s cn; */
};
typedef union ody_uaax_lcr_h ody_uaax_lcr_h_t;

static inline uint64_t ODY_UAAX_LCR_H(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_LCR_H(uint64_t a)
{
	if (a <= 7)
		return 0x87e02800002cll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_LCR_H", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_LCR_H(a) ody_uaax_lcr_h_t
#define bustype_ODY_UAAX_LCR_H(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_LCR_H(a) "UAAX_LCR_H"
#define device_bar_ODY_UAAX_LCR_H(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_LCR_H(a) (a)
#define arguments_ODY_UAAX_LCR_H(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_mis
 *
 * UART Masked Interrupt Status Register
 * Indicates state of interrupts after masking.
 */
union ody_uaax_mis {
	uint32_t u;
	struct ody_uaax_mis_s {
		uint32_t rimmis                      : 1;
		uint32_t ctsmmis                     : 1;
		uint32_t dcdmmis                     : 1;
		uint32_t dsrmmis                     : 1;
		uint32_t rxmis                       : 1;
		uint32_t txmis                       : 1;
		uint32_t rtmis                       : 1;
		uint32_t femis                       : 1;
		uint32_t pemis                       : 1;
		uint32_t bemis                       : 1;
		uint32_t oemis                       : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_uaax_mis_s cn; */
};
typedef union ody_uaax_mis ody_uaax_mis_t;

static inline uint64_t ODY_UAAX_MIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_MIS(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000040ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_MIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_MIS(a) ody_uaax_mis_t
#define bustype_ODY_UAAX_MIS(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_MIS(a) "UAAX_MIS"
#define device_bar_ODY_UAAX_MIS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_MIS(a) (a)
#define arguments_ODY_UAAX_MIS(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_msix_pba#
 *
 * UART MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the UAA_INT_VEC_E enumeration.
 */
union ody_uaax_msix_pbax {
	uint64_t u;
	struct ody_uaax_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_uaax_msix_pbax_s cn; */
};
typedef union ody_uaax_msix_pbax ody_uaax_msix_pbax_t;

static inline uint64_t ODY_UAAX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 7) && (b == 0))
		return 0x87e028ff0000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_MSIX_PBAX(a, b) ody_uaax_msix_pbax_t
#define bustype_ODY_UAAX_MSIX_PBAX(a, b) CSR_TYPE_RSL
#define basename_ODY_UAAX_MSIX_PBAX(a, b) "UAAX_MSIX_PBAX"
#define device_bar_ODY_UAAX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_UAAX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_UAAX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) uaa#_msix_vec#_addr
 *
 * UART MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the UAA_INT_VEC_E enumeration.
 */
union ody_uaax_msix_vecx_addr {
	uint64_t u;
	struct ody_uaax_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_uaax_msix_vecx_addr_s cn; */
};
typedef union ody_uaax_msix_vecx_addr ody_uaax_msix_vecx_addr_t;

static inline uint64_t ODY_UAAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 7) && (b <= 1))
		return 0x87e028f00000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
	__ody_csr_fatal("UAAX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_MSIX_VECX_ADDR(a, b) ody_uaax_msix_vecx_addr_t
#define bustype_ODY_UAAX_MSIX_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_UAAX_MSIX_VECX_ADDR(a, b) "UAAX_MSIX_VECX_ADDR"
#define device_bar_ODY_UAAX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_UAAX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_UAAX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) uaa#_msix_vec#_ctl
 *
 * UART MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the UAA_INT_VEC_E enumeration.
 */
union ody_uaax_msix_vecx_ctl {
	uint64_t u;
	struct ody_uaax_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_uaax_msix_vecx_ctl_s cn; */
};
typedef union ody_uaax_msix_vecx_ctl ody_uaax_msix_vecx_ctl_t;

static inline uint64_t ODY_UAAX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 7) && (b <= 1))
		return 0x87e028f00008ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
	__ody_csr_fatal("UAAX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_MSIX_VECX_CTL(a, b) ody_uaax_msix_vecx_ctl_t
#define bustype_ODY_UAAX_MSIX_VECX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_UAAX_MSIX_VECX_CTL(a, b) "UAAX_MSIX_VECX_CTL"
#define device_bar_ODY_UAAX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_UAAX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_UAAX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL32b) uaa#_pidr0
 *
 * UART Component Identification Register 0
 */
union ody_uaax_pidr0 {
	uint32_t u;
	struct ody_uaax_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_pidr0_s cn; */
};
typedef union ody_uaax_pidr0 ody_uaax_pidr0_t;

static inline uint64_t ODY_UAAX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR0(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fe0ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR0(a) ody_uaax_pidr0_t
#define bustype_ODY_UAAX_PIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR0(a) "UAAX_PIDR0"
#define device_bar_ODY_UAAX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR0(a) (a)
#define arguments_ODY_UAAX_PIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr1
 *
 * UART Peripheral Identification Register 1
 */
union ody_uaax_pidr1 {
	uint32_t u;
	struct ody_uaax_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_pidr1_s cn; */
};
typedef union ody_uaax_pidr1 ody_uaax_pidr1_t;

static inline uint64_t ODY_UAAX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR1(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fe4ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR1(a) ody_uaax_pidr1_t
#define bustype_ODY_UAAX_PIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR1(a) "UAAX_PIDR1"
#define device_bar_ODY_UAAX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR1(a) (a)
#define arguments_ODY_UAAX_PIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr2
 *
 * UART Peripheral Identification Register 2
 */
union ody_uaax_pidr2 {
	uint32_t u;
	struct ody_uaax_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_pidr2_s cn; */
};
typedef union ody_uaax_pidr2 ody_uaax_pidr2_t;

static inline uint64_t ODY_UAAX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR2(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fe8ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR2(a) ody_uaax_pidr2_t
#define bustype_ODY_UAAX_PIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR2(a) "UAAX_PIDR2"
#define device_bar_ODY_UAAX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR2(a) (a)
#define arguments_ODY_UAAX_PIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr3
 *
 * UART Peripheral Identification Register 3
 */
union ody_uaax_pidr3 {
	uint32_t u;
	struct ody_uaax_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_uaax_pidr3_s cn; */
};
typedef union ody_uaax_pidr3 ody_uaax_pidr3_t;

static inline uint64_t ODY_UAAX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR3(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fecll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR3(a) ody_uaax_pidr3_t
#define bustype_ODY_UAAX_PIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR3(a) "UAAX_PIDR3"
#define device_bar_ODY_UAAX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR3(a) (a)
#define arguments_ODY_UAAX_PIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr4
 *
 * UART Peripheral Identification Register 4
 */
union ody_uaax_pidr4 {
	uint32_t u;
	struct ody_uaax_pidr4_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_uaax_pidr4_s cn; */
};
typedef union ody_uaax_pidr4 ody_uaax_pidr4_t;

static inline uint64_t ODY_UAAX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR4(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fd0ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR4(a) ody_uaax_pidr4_t
#define bustype_ODY_UAAX_PIDR4(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR4(a) "UAAX_PIDR4"
#define device_bar_ODY_UAAX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR4(a) (a)
#define arguments_ODY_UAAX_PIDR4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr5
 *
 * UART Peripheral Identification Register 5
 */
union ody_uaax_pidr5 {
	uint32_t u;
	struct ody_uaax_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_uaax_pidr5_s cn; */
};
typedef union ody_uaax_pidr5 ody_uaax_pidr5_t;

static inline uint64_t ODY_UAAX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR5(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fd4ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR5(a) ody_uaax_pidr5_t
#define bustype_ODY_UAAX_PIDR5(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR5(a) "UAAX_PIDR5"
#define device_bar_ODY_UAAX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR5(a) (a)
#define arguments_ODY_UAAX_PIDR5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr6
 *
 * UART Peripheral Identification Register 6
 */
union ody_uaax_pidr6 {
	uint32_t u;
	struct ody_uaax_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_uaax_pidr6_s cn; */
};
typedef union ody_uaax_pidr6 ody_uaax_pidr6_t;

static inline uint64_t ODY_UAAX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR6(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fd8ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR6(a) ody_uaax_pidr6_t
#define bustype_ODY_UAAX_PIDR6(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR6(a) "UAAX_PIDR6"
#define device_bar_ODY_UAAX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR6(a) (a)
#define arguments_ODY_UAAX_PIDR6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_pidr7
 *
 * UART Peripheral Identification Register 7
 */
union ody_uaax_pidr7 {
	uint32_t u;
	struct ody_uaax_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_uaax_pidr7_s cn; */
};
typedef union ody_uaax_pidr7 ody_uaax_pidr7_t;

static inline uint64_t ODY_UAAX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_PIDR7(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000fdcll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_PIDR7(a) ody_uaax_pidr7_t
#define bustype_ODY_UAAX_PIDR7(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_PIDR7(a) "UAAX_PIDR7"
#define device_bar_ODY_UAAX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_PIDR7(a) (a)
#define arguments_ODY_UAAX_PIDR7(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_redirect
 *
 * UART REDIRECT Control Register
 */
union ody_uaax_redirect {
	uint64_t u;
	struct ody_uaax_redirect_s {
		uint64_t in_sel                      : 3;
		uint64_t in_ena                      : 1;
		uint64_t out_dis                     : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_uaax_redirect_s cn; */
};
typedef union ody_uaax_redirect ody_uaax_redirect_t;

static inline uint64_t ODY_UAAX_REDIRECT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_REDIRECT(uint64_t a)
{
	if (a <= 7)
		return 0x87e028001020ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_REDIRECT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_REDIRECT(a) ody_uaax_redirect_t
#define bustype_ODY_UAAX_REDIRECT(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_REDIRECT(a) "UAAX_REDIRECT"
#define device_bar_ODY_UAAX_REDIRECT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_REDIRECT(a) (a)
#define arguments_ODY_UAAX_REDIRECT(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_ris
 *
 * UART Raw Interrupt Status Register
 * Indicates state of interrupts before masking.
 */
union ody_uaax_ris {
	uint32_t u;
	struct ody_uaax_ris_s {
		uint32_t rirmis                      : 1;
		uint32_t ctsrmis                     : 1;
		uint32_t dcdrmis                     : 1;
		uint32_t dsrrmis                     : 1;
		uint32_t rxris                       : 1;
		uint32_t txris                       : 1;
		uint32_t rtris                       : 1;
		uint32_t feris                       : 1;
		uint32_t peris                       : 1;
		uint32_t beris                       : 1;
		uint32_t oeris                       : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_uaax_ris_s cn; */
};
typedef union ody_uaax_ris ody_uaax_ris_t;

static inline uint64_t ODY_UAAX_RIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_RIS(uint64_t a)
{
	if (a <= 7)
		return 0x87e02800003cll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_RIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_RIS(a) ody_uaax_ris_t
#define bustype_ODY_UAAX_RIS(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_RIS(a) "UAAX_RIS"
#define device_bar_ODY_UAAX_RIS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_RIS(a) (a)
#define arguments_ODY_UAAX_RIS(a) (a), -1, -1, -1

/**
 * Register (RSL32b) uaa#_rsr_ecr
 *
 * UART Receive Status Register/Error Clear Register
 */
union ody_uaax_rsr_ecr {
	uint32_t u;
	struct ody_uaax_rsr_ecr_s {
		uint32_t fe                          : 1;
		uint32_t pe                          : 1;
		uint32_t be                          : 1;
		uint32_t oe                          : 1;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_uaax_rsr_ecr_s cn; */
};
typedef union ody_uaax_rsr_ecr ody_uaax_rsr_ecr_t;

static inline uint64_t ODY_UAAX_RSR_ECR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_RSR_ECR(uint64_t a)
{
	if (a <= 7)
		return 0x87e028000004ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_RSR_ECR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_RSR_ECR(a) ody_uaax_rsr_ecr_t
#define bustype_ODY_UAAX_RSR_ECR(a) CSR_TYPE_RSL32b
#define basename_ODY_UAAX_RSR_ECR(a) "UAAX_RSR_ECR"
#define device_bar_ODY_UAAX_RSR_ECR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_RSR_ECR(a) (a)
#define arguments_ODY_UAAX_RSR_ECR(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_uctl_csclk_active_pc
 *
 * UAA UCTL Conditional Clock Counter Register
 * This register counts conditional clocks, for power analysis.
 * Reset by RSL reset.
 */
union ody_uaax_uctl_csclk_active_pc {
	uint64_t u;
	struct ody_uaax_uctl_csclk_active_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_uaax_uctl_csclk_active_pc_s cn; */
};
typedef union ody_uaax_uctl_csclk_active_pc ody_uaax_uctl_csclk_active_pc_t;

static inline uint64_t ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(uint64_t a)
{
	if (a <= 7)
		return 0x87e028001018ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_UCTL_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) ody_uaax_uctl_csclk_active_pc_t
#define bustype_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) "UAAX_UCTL_CSCLK_ACTIVE_PC"
#define device_bar_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) (a)
#define arguments_ODY_UAAX_UCTL_CSCLK_ACTIVE_PC(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_uctl_ctl
 *
 * UART UCTL Control Register
 */
union ody_uaax_uctl_ctl {
	uint64_t u;
	struct ody_uaax_uctl_ctl_s {
		uint64_t uctl_rst                    : 1;
		uint64_t uaa_rst                     : 1;
		uint64_t reserved_2_3                : 2;
		uint64_t csclk_en                    : 1;
		uint64_t reserved_5_23               : 19;
		uint64_t h_clkdiv_sel                : 3;
		uint64_t reserved_27                 : 1;
		uint64_t h_clkdiv_rst                : 1;
		uint64_t h_clk_byp_sel               : 1;
		uint64_t h_clk_en                    : 1;
		uint64_t reserved_31_63              : 33;
	} s;
	/* struct ody_uaax_uctl_ctl_s cn; */
};
typedef union ody_uaax_uctl_ctl ody_uaax_uctl_ctl_t;

static inline uint64_t ODY_UAAX_UCTL_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_UCTL_CTL(uint64_t a)
{
	if (a <= 7)
		return 0x87e028001000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_UCTL_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_UCTL_CTL(a) ody_uaax_uctl_ctl_t
#define bustype_ODY_UAAX_UCTL_CTL(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_UCTL_CTL(a) "UAAX_UCTL_CTL"
#define device_bar_ODY_UAAX_UCTL_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_UCTL_CTL(a) (a)
#define arguments_ODY_UAAX_UCTL_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_uctl_spare0
 *
 * UART UCTL Spare Register 0
 * This register is a spare register. This register can be reset by NCB reset.
 */
union ody_uaax_uctl_spare0 {
	uint64_t u;
	struct ody_uaax_uctl_spare0_s {
		uint64_t spare                       : 64;
	} s;
	/* struct ody_uaax_uctl_spare0_s cn; */
};
typedef union ody_uaax_uctl_spare0 ody_uaax_uctl_spare0_t;

static inline uint64_t ODY_UAAX_UCTL_SPARE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_UCTL_SPARE0(uint64_t a)
{
	if (a <= 7)
		return 0x87e028001010ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_UCTL_SPARE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_UCTL_SPARE0(a) ody_uaax_uctl_spare0_t
#define bustype_ODY_UAAX_UCTL_SPARE0(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_UCTL_SPARE0(a) "UAAX_UCTL_SPARE0"
#define device_bar_ODY_UAAX_UCTL_SPARE0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_UCTL_SPARE0(a) (a)
#define arguments_ODY_UAAX_UCTL_SPARE0(a) (a), -1, -1, -1

/**
 * Register (RSL) uaa#_uctl_spare1
 *
 * UART UCTL Spare Register 1
 * This register is a spare register. This register can be reset by NCB reset.
 */
union ody_uaax_uctl_spare1 {
	uint64_t u;
	struct ody_uaax_uctl_spare1_s {
		uint64_t spare                       : 64;
	} s;
	/* struct ody_uaax_uctl_spare1_s cn; */
};
typedef union ody_uaax_uctl_spare1 ody_uaax_uctl_spare1_t;

static inline uint64_t ODY_UAAX_UCTL_SPARE1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_UAAX_UCTL_SPARE1(uint64_t a)
{
	if (a <= 7)
		return 0x87e0280010f8ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("UAAX_UCTL_SPARE1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_UAAX_UCTL_SPARE1(a) ody_uaax_uctl_spare1_t
#define bustype_ODY_UAAX_UCTL_SPARE1(a) CSR_TYPE_RSL
#define basename_ODY_UAAX_UCTL_SPARE1(a) "UAAX_UCTL_SPARE1"
#define device_bar_ODY_UAAX_UCTL_SPARE1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_UAAX_UCTL_SPARE1(a) (a)
#define arguments_ODY_UAAX_UCTL_SPARE1(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_UAA_H__ */
