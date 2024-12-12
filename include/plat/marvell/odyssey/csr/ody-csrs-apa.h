#ifndef __ODY_CSRS_APA_H__
#define __ODY_CSRS_APA_H__
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
 * APA.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration apa_bar_e
 *
 * APA Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_APA_BAR_E_APAX_PF_BAR0(a) (0x87e349000000ll + 0x1000000ll * (a))
#define ODY_APA_BAR_E_APAX_PF_BAR0_SIZE 0x100000ull
#define ODY_APA_BAR_E_APAX_PF_BAR4(a) (0x87e349100000ll + 0x1000000ll * (a))
#define ODY_APA_BAR_E_APAX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration apa_int_vec_e
 *
 * APA MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_APA_INT_VEC_E_APA_APAT_INT (5)
#define ODY_APA_INT_VEC_E_APA_CLUSTER_PPU_INT_CLEAR (1)
#define ODY_APA_INT_VEC_E_APA_CLUSTER_PPU_INT_SET (0)
#define ODY_APA_INT_VEC_E_APA_CORE_ECC_INT (7)
#define ODY_APA_INT_VEC_E_APA_CORE_PPU_INT_CLEAR (3)
#define ODY_APA_INT_VEC_E_APA_CORE_PPU_INT_SET (2)
#define ODY_APA_INT_VEC_E_APA_ECC_INT (6)
#define ODY_APA_INT_VEC_E_APA_WDOG_INT (4)

/**
 * Enumeration apa_pll_sel_e
 *
 * APA PLL Selection Enumeration
 * Enumerates the values of APA_PLL[NEXT_PLL_SEL] and APA_PLL[CUR_PLL_SEL].
 */
#define ODY_APA_PLL_SEL_E_ARO (6)
#define ODY_APA_PLL_SEL_E_BYPASS (2)
#define ODY_APA_PLL_SEL_E_OFF (3)
#define ODY_APA_PLL_SEL_E_PLL0 (4)
#define ODY_APA_PLL_SEL_E_PLL1 (5)
#define ODY_APA_PLL_SEL_E_REFCLK (1)
#define ODY_APA_PLL_SEL_E_RSVD (7)
#define ODY_APA_PLL_SEL_E_RUNT (0)

/**
 * Register (RSL) apa#_apat_int_ena_w1c
 *
 * APA APAT Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_apax_apat_int_ena_w1c {
	uint64_t u;
	struct ody_apax_apat_int_ena_w1c_s {
		uint64_t apat                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_apax_apat_int_ena_w1c_s cn; */
};
typedef union ody_apax_apat_int_ena_w1c ody_apax_apat_int_ena_w1c_t;

static inline uint64_t ODY_APAX_APAT_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_INT_ENA_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e10ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_INT_ENA_W1C(a) ody_apax_apat_int_ena_w1c_t
#define bustype_ODY_APAX_APAT_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_INT_ENA_W1C(a) "APAX_APAT_INT_ENA_W1C"
#define device_bar_ODY_APAX_APAT_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_INT_ENA_W1C(a) (a)
#define arguments_ODY_APAX_APAT_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_int_ena_w1s
 *
 * APA APAT Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_apax_apat_int_ena_w1s {
	uint64_t u;
	struct ody_apax_apat_int_ena_w1s_s {
		uint64_t apat                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_apax_apat_int_ena_w1s_s cn; */
};
typedef union ody_apax_apat_int_ena_w1s ody_apax_apat_int_ena_w1s_t;

static inline uint64_t ODY_APAX_APAT_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_INT_ENA_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e18ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_INT_ENA_W1S(a) ody_apax_apat_int_ena_w1s_t
#define bustype_ODY_APAX_APAT_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_INT_ENA_W1S(a) "APAX_APAT_INT_ENA_W1S"
#define device_bar_ODY_APAX_APAT_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_INT_ENA_W1S(a) (a)
#define arguments_ODY_APAX_APAT_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_int_w1c
 *
 * APA APAT Interrupt Register
 * This register is reports interrupt status.
 */
union ody_apax_apat_int_w1c {
	uint64_t u;
	struct ody_apax_apat_int_w1c_s {
		uint64_t apat                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_apax_apat_int_w1c_s cn; */
};
typedef union ody_apax_apat_int_w1c ody_apax_apat_int_w1c_t;

static inline uint64_t ODY_APAX_APAT_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_INT_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e00ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_INT_W1C(a) ody_apax_apat_int_w1c_t
#define bustype_ODY_APAX_APAT_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_INT_W1C(a) "APAX_APAT_INT_W1C"
#define device_bar_ODY_APAX_APAT_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_INT_W1C(a) (a)
#define arguments_ODY_APAX_APAT_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_int_w1s
 *
 * APA APAT Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_apax_apat_int_w1s {
	uint64_t u;
	struct ody_apax_apat_int_w1s_s {
		uint64_t apat                        : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_apax_apat_int_w1s_s cn; */
};
typedef union ody_apax_apat_int_w1s ody_apax_apat_int_w1s_t;

static inline uint64_t ODY_APAX_APAT_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_INT_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e08ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_INT_W1S(a) ody_apax_apat_int_w1s_t
#define bustype_ODY_APAX_APAT_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_INT_W1S(a) "APAX_APAT_INT_W1S"
#define device_bar_ODY_APAX_APAT_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_INT_W1S(a) (a)
#define arguments_ODY_APAX_APAT_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_rdat#
 *
 * APA APAT Read Data Register
 */
union ody_apax_apat_rdatx {
	uint64_t u;
	struct ody_apax_apat_rdatx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_apax_apat_rdatx_s cn; */
};
typedef union ody_apax_apat_rdatx ody_apax_apat_rdatx_t;

static inline uint64_t ODY_APAX_APAT_RDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_RDATX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 3))
		return 0x87e349001240ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("APAX_APAT_RDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_RDATX(a, b) ody_apax_apat_rdatx_t
#define bustype_ODY_APAX_APAT_RDATX(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_RDATX(a, b) "APAX_APAT_RDATX"
#define device_bar_ODY_APAX_APAT_RDATX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_RDATX(a, b) (a)
#define arguments_ODY_APAX_APAT_RDATX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_apat_req
 *
 * APA APAT Request Register
 * This register records information about an APAT trapped request.  See CHI-D
 * specifications for more information.
 */
union ody_apax_apat_req {
	uint64_t u;
	struct ody_apax_apat_req_s {
		uint64_t txnid                       : 12;
		uint64_t size                        : 3;
		uint64_t tracetag                    : 1;
		uint64_t opcode                      : 7;
		uint64_t endian                      : 1;
		uint64_t device                      : 1;
		uint64_t reserved_25_55              : 31;
		uint64_t index                       : 5;
		uint64_t reserved_61                 : 1;
		uint64_t has_apat_ext                : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_apax_apat_req_s cn; */
};
typedef union ody_apax_apat_req ody_apax_apat_req_t;

static inline uint64_t ODY_APAX_APAT_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_REQ(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001200ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_REQ(a) ody_apax_apat_req_t
#define bustype_ODY_APAX_APAT_REQ(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_REQ(a) "APAX_APAT_REQ"
#define device_bar_ODY_APAX_APAT_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_REQ(a) (a)
#define arguments_ODY_APAX_APAT_REQ(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_req_addr
 *
 * APA APAT Request Address Register
 * This register records the physical address of the trapped request.
 */
union ody_apax_apat_req_addr {
	uint64_t u;
	struct ody_apax_apat_req_addr_s {
		uint64_t addr                        : 48;
		uint64_t reserved_48_61              : 14;
		uint64_t ns                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_apax_apat_req_addr_s cn; */
};
typedef union ody_apax_apat_req_addr ody_apax_apat_req_addr_t;

static inline uint64_t ODY_APAX_APAT_REQ_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_REQ_ADDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001208ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_REQ_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_REQ_ADDR(a) ody_apax_apat_req_addr_t
#define bustype_ODY_APAX_APAT_REQ_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_REQ_ADDR(a) "APAX_APAT_REQ_ADDR"
#define device_bar_ODY_APAX_APAT_REQ_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_REQ_ADDR(a) (a)
#define arguments_ODY_APAX_APAT_REQ_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_rsp
 *
 * APA APAT Response Register
 */
union ody_apax_apat_rsp {
	uint64_t u;
	struct ody_apax_apat_rsp_s {
		uint64_t resperr                     : 2;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_apax_apat_rsp_s cn; */
};
typedef union ody_apax_apat_rsp ody_apax_apat_rsp_t;

static inline uint64_t ODY_APAX_APAT_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_RSP(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001210ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_RSP(a) ody_apax_apat_rsp_t
#define bustype_ODY_APAX_APAT_RSP(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_RSP(a) "APAX_APAT_RSP"
#define device_bar_ODY_APAX_APAT_RSP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_RSP(a) (a)
#define arguments_ODY_APAX_APAT_RSP(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_apat_vec#_addr
 *
 * APA APAT Vector Address Register
 * This register configures the address trapper.
 */
union ody_apax_apat_vecx_addr {
	uint64_t u;
	struct ody_apax_apat_vecx_addr_s {
		uint64_t addr                        : 48;
		uint64_t reserved_48_61              : 14;
		uint64_t ns                          : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_apax_apat_vecx_addr_s cn; */
};
typedef union ody_apax_apat_vecx_addr ody_apax_apat_vecx_addr_t;

static inline uint64_t ODY_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 31))
		return 0x87e349001000ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x1f);
	__ody_csr_fatal("APAX_APAT_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_VECX_ADDR(a, b) ody_apax_apat_vecx_addr_t
#define bustype_ODY_APAX_APAT_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_VECX_ADDR(a, b) "APAX_APAT_VECX_ADDR"
#define device_bar_ODY_APAX_APAT_VECX_ADDR(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_VECX_ADDR(a, b) (a)
#define arguments_ODY_APAX_APAT_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_apat_vec#_mask
 *
 * APA APAT_VEC_MASK Register
 * Mask bits.  1 means corresponding NS/ADDR bits must match in the request.
 */
union ody_apax_apat_vecx_mask {
	uint64_t u;
	struct ody_apax_apat_vecx_mask_s {
		uint64_t addr                        : 48;
		uint64_t reserved_48_61              : 14;
		uint64_t ns                          : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_apax_apat_vecx_mask_s cn; */
};
typedef union ody_apax_apat_vecx_mask ody_apax_apat_vecx_mask_t;

static inline uint64_t ODY_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 31))
		return 0x87e349001008ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x1f);
	__ody_csr_fatal("APAX_APAT_VECX_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_VECX_MASK(a, b) ody_apax_apat_vecx_mask_t
#define bustype_ODY_APAX_APAT_VECX_MASK(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_VECX_MASK(a, b) "APAX_APAT_VECX_MASK"
#define device_bar_ODY_APAX_APAT_VECX_MASK(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_VECX_MASK(a, b) (a)
#define arguments_ODY_APAX_APAT_VECX_MASK(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_apat_wdat#
 *
 * APA APAT Write Data Register
 */
union ody_apax_apat_wdatx {
	uint64_t u;
	struct ody_apax_apat_wdatx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_apax_apat_wdatx_s cn; */
};
typedef union ody_apax_apat_wdatx ody_apax_apat_wdatx_t;

static inline uint64_t ODY_APAX_APAT_WDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_WDATX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 3))
		return 0x87e349001220ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("APAX_APAT_WDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_WDATX(a, b) ody_apax_apat_wdatx_t
#define bustype_ODY_APAX_APAT_WDATX(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_WDATX(a, b) "APAX_APAT_WDATX"
#define device_bar_ODY_APAX_APAT_WDATX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_WDATX(a, b) (a)
#define arguments_ODY_APAX_APAT_WDATX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_apat_wdat_be
 *
 * APA APAT Write Data Byte Enable Register
 */
union ody_apax_apat_wdat_be {
	uint64_t u;
	struct ody_apax_apat_wdat_be_s {
		uint64_t byte_en                     : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_apat_wdat_be_s cn; */
};
typedef union ody_apax_apat_wdat_be ody_apax_apat_wdat_be_t;

static inline uint64_t ODY_APAX_APAT_WDAT_BE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_APAT_WDAT_BE(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001218ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_APAT_WDAT_BE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_APAT_WDAT_BE(a) ody_apax_apat_wdat_be_t
#define bustype_ODY_APAX_APAT_WDAT_BE(a) CSR_TYPE_RSL
#define basename_ODY_APAX_APAT_WDAT_BE(a) "APAX_APAT_WDAT_BE"
#define device_bar_ODY_APAX_APAT_WDAT_BE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_APAT_WDAT_BE(a) (a)
#define arguments_ODY_APAX_APAT_WDAT_BE(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_core_ecc_int_ena_w1c
 *
 * APA Core ECC Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_apax_core_ecc_int_ena_w1c {
	uint64_t u;
	struct ody_apax_core_ecc_int_ena_w1c_s {
		uint64_t core_err                    : 1;
		uint64_t core_fault                  : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_apax_core_ecc_int_ena_w1c_s cn; */
};
typedef union ody_apax_core_ecc_int_ena_w1c ody_apax_core_ecc_int_ena_w1c_t;

static inline uint64_t ODY_APAX_CORE_ECC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_CORE_ECC_INT_ENA_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e70ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_CORE_ECC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) ody_apax_core_ecc_int_ena_w1c_t
#define bustype_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) "APAX_CORE_ECC_INT_ENA_W1C"
#define device_bar_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) (a)
#define arguments_ODY_APAX_CORE_ECC_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_core_ecc_int_ena_w1s
 *
 * APA Core ECC Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_apax_core_ecc_int_ena_w1s {
	uint64_t u;
	struct ody_apax_core_ecc_int_ena_w1s_s {
		uint64_t core_err                    : 1;
		uint64_t core_fault                  : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_apax_core_ecc_int_ena_w1s_s cn; */
};
typedef union ody_apax_core_ecc_int_ena_w1s ody_apax_core_ecc_int_ena_w1s_t;

static inline uint64_t ODY_APAX_CORE_ECC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_CORE_ECC_INT_ENA_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e78ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_CORE_ECC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) ody_apax_core_ecc_int_ena_w1s_t
#define bustype_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) "APAX_CORE_ECC_INT_ENA_W1S"
#define device_bar_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) (a)
#define arguments_ODY_APAX_CORE_ECC_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_core_ecc_int_w1c
 *
 * APA Core ECC Interrupt Register
 * This register reports interrupt status for the Cluster/Core ECC.
 */
union ody_apax_core_ecc_int_w1c {
	uint64_t u;
	struct ody_apax_core_ecc_int_w1c_s {
		uint64_t core_err                    : 1;
		uint64_t core_fault                  : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_apax_core_ecc_int_w1c_s cn; */
};
typedef union ody_apax_core_ecc_int_w1c ody_apax_core_ecc_int_w1c_t;

static inline uint64_t ODY_APAX_CORE_ECC_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_CORE_ECC_INT_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e60ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_CORE_ECC_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_CORE_ECC_INT_W1C(a) ody_apax_core_ecc_int_w1c_t
#define bustype_ODY_APAX_CORE_ECC_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_CORE_ECC_INT_W1C(a) "APAX_CORE_ECC_INT_W1C"
#define device_bar_ODY_APAX_CORE_ECC_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_CORE_ECC_INT_W1C(a) (a)
#define arguments_ODY_APAX_CORE_ECC_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_core_ecc_int_w1s
 *
 * APA Core ECC Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_apax_core_ecc_int_w1s {
	uint64_t u;
	struct ody_apax_core_ecc_int_w1s_s {
		uint64_t core_err                    : 1;
		uint64_t core_fault                  : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_apax_core_ecc_int_w1s_s cn; */
};
typedef union ody_apax_core_ecc_int_w1s ody_apax_core_ecc_int_w1s_t;

static inline uint64_t ODY_APAX_CORE_ECC_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_CORE_ECC_INT_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e68ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_CORE_ECC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_CORE_ECC_INT_W1S(a) ody_apax_core_ecc_int_w1s_t
#define bustype_ODY_APAX_CORE_ECC_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_CORE_ECC_INT_W1S(a) "APAX_CORE_ECC_INT_W1S"
#define device_bar_ODY_APAX_CORE_ECC_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_CORE_ECC_INT_W1S(a) (a)
#define arguments_ODY_APAX_CORE_ECC_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ctl
 *
 * APA Control Register
 * This register contains miscellaneous APA control fields.
 */
union ody_apax_ctl {
	uint64_t u;
	struct ody_apax_ctl_s {
		uint64_t dis_accel                   : 1;
		uint64_t dis_lmtst                   : 1;
		uint64_t dis_gwc                     : 1;
		uint64_t dis_wdog_core_clean         : 1;
		uint64_t dis_wdog_struct_dat_clean   : 1;
		uint64_t dis_wdog_struct_rqb_clean   : 1;
		uint64_t dis_wdog_struct_txnid_clean : 1;
		uint64_t dis_wdog_struct_crd_clean   : 1;
		uint64_t dvm_filter                  : 2;
		uint64_t dis_wdog_during_apat        : 1;
		uint64_t cbusy_override_value        : 1;
		uint64_t dis_cbusy_override          : 1;
		uint64_t pfc_ns_access               : 1;
		uint64_t reserved_14_31              : 18;
		uint64_t apa_crclk_force_on          : 1;
		uint64_t lsa_crclk_force_on          : 1;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_apax_ctl_s cn; */
};
typedef union ody_apax_ctl ody_apax_ctl_t;

static inline uint64_t ODY_APAX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_CTL(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001500ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_CTL(a) ody_apax_ctl_t
#define bustype_ODY_APAX_CTL(a) CSR_TYPE_RSL
#define basename_ODY_APAX_CTL(a) "APAX_CTL"
#define device_bar_ODY_APAX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_CTL(a) (a)
#define arguments_ODY_APAX_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_derr_info
 *
 * APA Data Error Info Register
 * This register records error information for Data Error interrupts occurring in data
 * incoming from the mesh. The first [DATMBE] error will lock the
 * register until the logged error type is cleared; [DATSBE] errors
 * lock the register until either the logged error type is cleared or a [DATMBE]
 * error is logged. Only one of [DATMBE, DATSBE] should be set at a time. In the
 * event the register is read with all [*MBE] and [*SBE] equal to 0 during
 * interrupt handling that is an indication that, due to a register set/clear race,
 * information about one or more errors was lost while processing an earlier
 * error.
 */
union ody_apax_derr_info {
	uint64_t u;
	struct ody_apax_derr_info_s {
		uint64_t srcid                       : 11;
		uint64_t opcode                      : 7;
		uint64_t reserved_18_61              : 44;
		uint64_t dat_mbe                     : 1;
		uint64_t dat_sbe                     : 1;
	} s;
	/* struct ody_apax_derr_info_s cn; */
};
typedef union ody_apax_derr_info ody_apax_derr_info_t;

static inline uint64_t ODY_APAX_DERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_DERR_INFO(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001530ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_DERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_DERR_INFO(a) ody_apax_derr_info_t
#define bustype_ODY_APAX_DERR_INFO(a) CSR_TYPE_RSL
#define basename_ODY_APAX_DERR_INFO(a) "APAX_DERR_INFO"
#define device_bar_ODY_APAX_DERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_DERR_INFO(a) (a)
#define arguments_ODY_APAX_DERR_INFO(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_dispblk
 *
 * APA Dispatch Block Register
 * This register throttles the core instruction dispatch.  This is meant to be used by
 * the SCP to mitigate overheat cases.
 */
union ody_apax_dispblk {
	uint64_t u;
	struct ody_apax_dispblk_s {
		uint64_t count                       : 8;
		uint64_t reserved_8_14               : 7;
		uint64_t en                          : 1;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_apax_dispblk_s cn; */
};
typedef union ody_apax_dispblk ody_apax_dispblk_t;

static inline uint64_t ODY_APAX_DISPBLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_DISPBLK(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001700ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_DISPBLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_DISPBLK(a) ody_apax_dispblk_t
#define bustype_ODY_APAX_DISPBLK(a) CSR_TYPE_RSL
#define basename_ODY_APAX_DISPBLK(a) "APAX_DISPBLK"
#define device_bar_ODY_APAX_DISPBLK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_DISPBLK(a) (a)
#define arguments_ODY_APAX_DISPBLK(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ecc_ctl
 *
 * APA ECC Generation/Checking Control Register
 * Controls ECC Generation/Checking.
 */
union ody_apax_ecc_ctl {
	uint64_t u;
	struct ody_apax_ecc_ctl_s {
		uint64_t flip_datacheck_0            : 1;
		uint64_t flip_datacheck_1            : 1;
		uint64_t flip_datacheck_9            : 1;
		uint64_t flip_datacheck_10           : 1;
		uint64_t psn_dis                     : 1;
		uint64_t cor_dis                     : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_apax_ecc_ctl_s cn; */
};
typedef union ody_apax_ecc_ctl ody_apax_ecc_ctl_t;

static inline uint64_t ODY_APAX_ECC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_ECC_CTL(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001508ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_ECC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_ECC_CTL(a) ody_apax_ecc_ctl_t
#define bustype_ODY_APAX_ECC_CTL(a) CSR_TYPE_RSL
#define basename_ODY_APAX_ECC_CTL(a) "APAX_ECC_CTL"
#define device_bar_ODY_APAX_ECC_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_ECC_CTL(a) (a)
#define arguments_ODY_APAX_ECC_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ecc_int_ena_w1c
 *
 * APA ECC Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_apax_ecc_int_ena_w1c {
	uint64_t u;
	struct ody_apax_ecc_int_ena_w1c_s {
		uint64_t rsp_perr                    : 1;
		uint64_t snp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t dat_mbe                     : 1;
		uint64_t dat_sbe                     : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_ecc_int_ena_w1c_s cn; */
};
typedef union ody_apax_ecc_int_ena_w1c ody_apax_ecc_int_ena_w1c_t;

static inline uint64_t ODY_APAX_ECC_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_ECC_INT_ENA_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e50ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_ECC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_ECC_INT_ENA_W1C(a) ody_apax_ecc_int_ena_w1c_t
#define bustype_ODY_APAX_ECC_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_ECC_INT_ENA_W1C(a) "APAX_ECC_INT_ENA_W1C"
#define device_bar_ODY_APAX_ECC_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_ECC_INT_ENA_W1C(a) (a)
#define arguments_ODY_APAX_ECC_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ecc_int_ena_w1s
 *
 * APA ECC Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_apax_ecc_int_ena_w1s {
	uint64_t u;
	struct ody_apax_ecc_int_ena_w1s_s {
		uint64_t rsp_perr                    : 1;
		uint64_t snp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t dat_mbe                     : 1;
		uint64_t dat_sbe                     : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_ecc_int_ena_w1s_s cn; */
};
typedef union ody_apax_ecc_int_ena_w1s ody_apax_ecc_int_ena_w1s_t;

static inline uint64_t ODY_APAX_ECC_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_ECC_INT_ENA_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e58ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_ECC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_ECC_INT_ENA_W1S(a) ody_apax_ecc_int_ena_w1s_t
#define bustype_ODY_APAX_ECC_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_ECC_INT_ENA_W1S(a) "APAX_ECC_INT_ENA_W1S"
#define device_bar_ODY_APAX_ECC_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_ECC_INT_ENA_W1S(a) (a)
#define arguments_ODY_APAX_ECC_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ecc_int_w1c
 *
 * APA ECC Interrupt Register
 * This register is reports interrupt status.
 */
union ody_apax_ecc_int_w1c {
	uint64_t u;
	struct ody_apax_ecc_int_w1c_s {
		uint64_t rsp_perr                    : 1;
		uint64_t snp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t dat_mbe                     : 1;
		uint64_t dat_sbe                     : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_ecc_int_w1c_s cn; */
};
typedef union ody_apax_ecc_int_w1c ody_apax_ecc_int_w1c_t;

static inline uint64_t ODY_APAX_ECC_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_ECC_INT_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e40ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_ECC_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_ECC_INT_W1C(a) ody_apax_ecc_int_w1c_t
#define bustype_ODY_APAX_ECC_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_ECC_INT_W1C(a) "APAX_ECC_INT_W1C"
#define device_bar_ODY_APAX_ECC_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_ECC_INT_W1C(a) (a)
#define arguments_ODY_APAX_ECC_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_ecc_int_w1s
 *
 * APA ECC Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_apax_ecc_int_w1s {
	uint64_t u;
	struct ody_apax_ecc_int_w1s_s {
		uint64_t rsp_perr                    : 1;
		uint64_t snp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t dat_mbe                     : 1;
		uint64_t dat_sbe                     : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_ecc_int_w1s_s cn; */
};
typedef union ody_apax_ecc_int_w1s ody_apax_ecc_int_w1s_t;

static inline uint64_t ODY_APAX_ECC_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_ECC_INT_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e48ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_ECC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_ECC_INT_W1S(a) ody_apax_ecc_int_w1s_t
#define bustype_ODY_APAX_ECC_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_ECC_INT_W1S(a) "APAX_ECC_INT_W1S"
#define device_bar_ODY_APAX_ECC_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_ECC_INT_W1S(a) (a)
#define arguments_ODY_APAX_ECC_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_gti_offset
 *
 * APA Global Timestamp Offset Register
 * The amount to add to the global timestamp, in whatever units the timestamp uses
 * (generally 1ns).  This is used to compensate for the propagation latency of the
 * global timstamp bus to all the cores.
 */
union ody_apax_gti_offset {
	uint64_t u;
	struct ody_apax_gti_offset_s {
		uint64_t offset                      : 8;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_apax_gti_offset_s cn; */
};
typedef union ody_apax_gti_offset ody_apax_gti_offset_t;

static inline uint64_t ODY_APAX_GTI_OFFSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_GTI_OFFSET(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001708ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_GTI_OFFSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_GTI_OFFSET(a) ody_apax_gti_offset_t
#define bustype_ODY_APAX_GTI_OFFSET(a) CSR_TYPE_RSL
#define basename_ODY_APAX_GTI_OFFSET(a) "APAX_GTI_OFFSET"
#define device_bar_ODY_APAX_GTI_OFFSET(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_GTI_OFFSET(a) (a)
#define arguments_ODY_APAX_GTI_OFFSET(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_man_pll
 *
 * APA Manual PLL Control Register
 * These registers are used in conjunction with the APA_PLL registers when
 * the APA_PLL[NEXT_MAN] field is set.  Indexed by APA_PLL_E.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register should only occur when both the APA_PLL[NEXT_PGM] and
 * APA_PLL[NEXT_SWITCH] fields are zero.
 *
 * This register is always reset on a chip domain reset.
 */
union ody_apax_man_pll {
	uint64_t u;
	struct ody_apax_man_pll_s {
		uint64_t update_rate                 : 10;
		uint64_t dlf_ki                      : 5;
		uint64_t dlf_kp                      : 5;
		uint64_t icp                         : 4;
		uint64_t vco_fract                   : 10;
		uint64_t vco_mul                     : 10;
		uint64_t bw                          : 2;
		uint64_t post_div                    : 9;
		uint64_t reserved_55                 : 1;
		uint64_t ref_div                     : 4;
		uint64_t power_down                  : 3;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_apax_man_pll_s cn; */
};
typedef union ody_apax_man_pll ody_apax_man_pll_t;

static inline uint64_t ODY_APAX_MAN_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_MAN_PLL(uint64_t a)
{
	if (a <= 89)
		return 0x87e349004008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_MAN_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_MAN_PLL(a) ody_apax_man_pll_t
#define bustype_ODY_APAX_MAN_PLL(a) CSR_TYPE_RSL
#define basename_ODY_APAX_MAN_PLL(a) "APAX_MAN_PLL"
#define device_bar_ODY_APAX_MAN_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_MAN_PLL(a) (a)
#define arguments_ODY_APAX_MAN_PLL(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_msix_pba#
 *
 * APA MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the APA_INT_VEC_E enumeration.
 */
union ody_apax_msix_pbax {
	uint64_t u;
	struct ody_apax_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_apax_msix_pbax_s cn; */
};
typedef union ody_apax_msix_pbax ody_apax_msix_pbax_t;

static inline uint64_t ODY_APAX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b == 0))
		return 0x87e3491f0000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_MSIX_PBAX(a, b) ody_apax_msix_pbax_t
#define bustype_ODY_APAX_MSIX_PBAX(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_MSIX_PBAX(a, b) "APAX_MSIX_PBAX"
#define device_bar_ODY_APAX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_APAX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_APAX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_msix_vec#_addr
 *
 * APA MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union ody_apax_msix_vecx_addr {
	uint64_t u;
	struct ody_apax_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_apax_msix_vecx_addr_s cn; */
};
typedef union ody_apax_msix_vecx_addr ody_apax_msix_vecx_addr_t;

static inline uint64_t ODY_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e349100000ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x7);
	__ody_csr_fatal("APAX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_MSIX_VECX_ADDR(a, b) ody_apax_msix_vecx_addr_t
#define bustype_ODY_APAX_MSIX_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_MSIX_VECX_ADDR(a, b) "APAX_MSIX_VECX_ADDR"
#define device_bar_ODY_APAX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_APAX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_APAX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_msix_vec#_ctl
 *
 * APA MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union ody_apax_msix_vecx_ctl {
	uint64_t u;
	struct ody_apax_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_apax_msix_vecx_ctl_s cn; */
};
typedef union ody_apax_msix_vecx_ctl ody_apax_msix_vecx_ctl_t;

static inline uint64_t ODY_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 7))
		return 0x87e349100008ll + 0x1000000ll * ((a) & 0x7f) + 0x10ll * ((b) & 0x7);
	__ody_csr_fatal("APAX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_MSIX_VECX_CTL(a, b) ody_apax_msix_vecx_ctl_t
#define bustype_ODY_APAX_MSIX_VECX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_MSIX_VECX_CTL(a, b) "APAX_MSIX_VECX_CTL"
#define device_bar_ODY_APAX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_APAX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_APAX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_nderr_info
 *
 * APA Non-Data Error Info Register
 * This register records error information for Non-Data Error interrupts
 * [RSP_PERR, DAT_PERR, SNP_PERR]. The first [RSP_PERR, DAT_PERR, SNP_PERR] error
 * will lock the register until the logged error type is cleared.
 */
union ody_apax_nderr_info {
	uint64_t u;
	struct ody_apax_nderr_info_s {
		uint64_t srcid                       : 11;
		uint64_t opcode                      : 7;
		uint64_t reserved_18_57              : 40;
		uint64_t snp_perr                    : 1;
		uint64_t dat_perr                    : 1;
		uint64_t rsp_perr                    : 1;
		uint64_t reserved_61_63              : 3;
	} s;
	/* struct ody_apax_nderr_info_s cn; */
};
typedef union ody_apax_nderr_info ody_apax_nderr_info_t;

static inline uint64_t ODY_APAX_NDERR_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_NDERR_INFO(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001528ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_NDERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_NDERR_INFO(a) ody_apax_nderr_info_t
#define bustype_ODY_APAX_NDERR_INFO(a) CSR_TYPE_RSL
#define basename_ODY_APAX_NDERR_INFO(a) "APAX_NDERR_INFO"
#define device_bar_ODY_APAX_NDERR_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_NDERR_INFO(a) (a)
#define arguments_ODY_APAX_NDERR_INFO(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_pfc#
 *
 * APA Performance Counter Registers
 */
union ody_apax_pfcx {
	uint64_t u;
	struct ody_apax_pfcx_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_apax_pfcx_s cn; */
};
typedef union ody_apax_pfcx ody_apax_pfcx_t;

static inline uint64_t ODY_APAX_PFCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_PFCX(uint64_t a, uint64_t b)
{
	if ((a <= 89) && (b <= 5))
		return 0x87e349010000ll + 0x1000000ll * ((a) & 0x7f) + 8ll * ((b) & 0x7);
	__ody_csr_fatal("APAX_PFCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_PFCX(a, b) ody_apax_pfcx_t
#define bustype_ODY_APAX_PFCX(a, b) CSR_TYPE_RSL
#define basename_ODY_APAX_PFCX(a, b) "APAX_PFCX"
#define device_bar_ODY_APAX_PFCX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_PFCX(a, b) (a)
#define arguments_ODY_APAX_PFCX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) apa#_pll
 *
 * APA PLL Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * Each index of this register controls a PLL on the chip.  The register is used for
 * typical programming operations and is supplemented with the APA_MAN_PLL
 * register when selected.  Indexed by APA_PLL_E.
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register and to both APA_MAN_PLL and APA_TEST_PLL should only occur
 * when both the NEXT_PGM and NEXT_SWITCH fields are zero.  It is typically necessary
 * to poll this register to confirm this.
 *
 * The register fields are returned to reset values on a chip domain reset unless
 * specifically noted.
 */
union ody_apax_pll {
	uint64_t u;
	struct ody_apax_pll_s {
		uint64_t next_switch                 : 16;
		uint64_t next_pgm                    : 1;
		uint64_t next_man                    : 1;
		uint64_t reserved_18_20              : 3;
		uint64_t next_pll_sel                : 3;
		uint64_t next_mul                    : 7;
		uint64_t reserved_31                 : 1;
		uint64_t init_mul                    : 7;
		uint64_t reserved_39                 : 1;
		uint64_t max_mul                     : 7;
		uint64_t reserved_47                 : 1;
		uint64_t cur_mul                     : 7;
		uint64_t no_rst_chip                 : 1;
		uint64_t no_auto_pgm                 : 1;
		uint64_t cur_pll_sel                 : 3;
		uint64_t reserved_60                 : 1;
		uint64_t alt_ref                     : 1;
		uint64_t pll1_present                : 1;
		uint64_t aro_present                 : 1;
	} s;
	/* struct ody_apax_pll_s cn; */
};
typedef union ody_apax_pll ody_apax_pll_t;

static inline uint64_t ODY_APAX_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_PLL(uint64_t a)
{
	if (a <= 89)
		return 0x87e349004000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_PLL(a) ody_apax_pll_t
#define bustype_ODY_APAX_PLL(a) CSR_TYPE_RSL
#define basename_ODY_APAX_PLL(a) "APAX_PLL"
#define device_bar_ODY_APAX_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_PLL(a) (a)
#define arguments_ODY_APAX_PLL(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_pllro_status
 *
 * APA PLLRO Status Register
 */
union ody_apax_pllro_status {
	uint64_t u;
	struct ody_apax_pllro_status_s {
		uint64_t status                      : 32;
		uint64_t droop                       : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_apax_pllro_status_s cn; */
};
typedef union ody_apax_pllro_status ody_apax_pllro_status_t;

static inline uint64_t ODY_APAX_PLLRO_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_PLLRO_STATUS(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001f00ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_PLLRO_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_PLLRO_STATUS(a) ody_apax_pllro_status_t
#define bustype_ODY_APAX_PLLRO_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_APAX_PLLRO_STATUS(a) "APAX_PLLRO_STATUS"
#define device_bar_ODY_APAX_PLLRO_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_PLLRO_STATUS(a) (a)
#define arguments_ODY_APAX_PLLRO_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_prf
 *
 * APA Performance Counter Control Register
 * This register controls measurement of the number of sent/received flits from APA
 * to/from the Xcalibur mesh.
 */
union ody_apax_prf {
	uint64_t u;
	struct ody_apax_prf_s {
		uint64_t tx_req_en                   : 1;
		uint64_t tx_rsp_en                   : 1;
		uint64_t tx_dat_en                   : 1;
		uint64_t rx_rsp_en                   : 1;
		uint64_t rx_snp_en                   : 1;
		uint64_t rx_dat_en                   : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_apax_prf_s cn; */
};
typedef union ody_apax_prf ody_apax_prf_t;

static inline uint64_t ODY_APAX_PRF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_PRF(uint64_t a)
{
	if (a <= 89)
		return 0x87e349010100ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_PRF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_PRF(a) ody_apax_prf_t
#define bustype_ODY_APAX_PRF(a) CSR_TYPE_RSL
#define basename_ODY_APAX_PRF(a) "APAX_PRF"
#define device_bar_ODY_APAX_PRF(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_PRF(a) (a)
#define arguments_ODY_APAX_PRF(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_rvbaraddr
 *
 * APA Reset Base Address Register
 */
union ody_apax_rvbaraddr {
	uint64_t u;
	struct ody_apax_rvbaraddr_s {
		uint64_t reserved_0_1                : 2;
		uint64_t addr                        : 46;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_apax_rvbaraddr_s cn; */
};
typedef union ody_apax_rvbaraddr ody_apax_rvbaraddr_t;

static inline uint64_t ODY_APAX_RVBARADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_RVBARADDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001400ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_RVBARADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_RVBARADDR(a) ody_apax_rvbaraddr_t
#define bustype_ODY_APAX_RVBARADDR(a) CSR_TYPE_RSL
#define basename_ODY_APAX_RVBARADDR(a) "APAX_RVBARADDR"
#define device_bar_ODY_APAX_RVBARADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_RVBARADDR(a) (a)
#define arguments_ODY_APAX_RVBARADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_test_pll
 *
 * APA PLL Test Register
 * This register controls manual ARO programming and Test features.
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register should only occur when both the APA_PLL[NEXT_PGM] and
 * APA_PLL[NEXT_SWITCH] fields are zero.  Additionally a read operation should occur
 * between writes to this register to allow time for the test setting to be transmitted
 * successfully before new setting are applied.
 */
union ody_apax_test_pll {
	uint64_t u;
	struct ody_apax_test_pll_s {
		uint64_t stop_cnt                    : 32;
		uint64_t stop_clk                    : 1;
		uint64_t msc_enable                  : 1;
		uint64_t testclk_pll1                : 1;
		uint64_t reserved_35_39              : 5;
		uint64_t test_ana                    : 5;
		uint64_t test_rsvd                   : 3;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_apax_test_pll_s cn; */
};
typedef union ody_apax_test_pll ody_apax_test_pll_t;

static inline uint64_t ODY_APAX_TEST_PLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_TEST_PLL(uint64_t a)
{
	if (a <= 89)
		return 0x87e349004010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_TEST_PLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_TEST_PLL(a) ody_apax_test_pll_t
#define bustype_ODY_APAX_TEST_PLL(a) CSR_TYPE_RSL
#define basename_ODY_APAX_TEST_PLL(a) "APAX_TEST_PLL"
#define device_bar_ODY_APAX_TEST_PLL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_TEST_PLL(a) (a)
#define arguments_ODY_APAX_TEST_PLL(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_core
 *
 * APA Watchdog Core Register
 * This register configures the timeouts for a core to receive responses.
 */
union ody_apax_wdog_core {
	uint64_t u;
	struct ody_apax_wdog_core_s {
		uint64_t timeout                     : 31;
		uint64_t enable                      : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_wdog_core_s cn; */
};
typedef union ody_apax_wdog_core ody_apax_wdog_core_t;

static inline uint64_t ODY_APAX_WDOG_CORE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_CORE(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001300ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_CORE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_CORE(a) ody_apax_wdog_core_t
#define bustype_ODY_APAX_WDOG_CORE(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_CORE(a) "APAX_WDOG_CORE"
#define device_bar_ODY_APAX_WDOG_CORE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_CORE(a) (a)
#define arguments_ODY_APAX_WDOG_CORE(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_core_diag
 *
 * APA Watchdog Core Diagnostic Register
 * This register reports and captures wdog timeouts for core. Timeouts indicate that
 * the core did not receive all the expected responses.
 */
union ody_apax_wdog_core_diag {
	uint64_t u;
	struct ody_apax_wdog_core_diag_s {
		uint64_t txnid                       : 12;
		uint64_t reqt                        : 3;
		uint64_t epoch                       : 1;
		uint64_t state                       : 4;
		uint64_t reserved_20_29              : 10;
		uint64_t stale                       : 1;
		uint64_t multi                       : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_wdog_core_diag_s cn; */
};
typedef union ody_apax_wdog_core_diag ody_apax_wdog_core_diag_t;

static inline uint64_t ODY_APAX_WDOG_CORE_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_CORE_DIAG(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001310ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_CORE_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_CORE_DIAG(a) ody_apax_wdog_core_diag_t
#define bustype_ODY_APAX_WDOG_CORE_DIAG(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_CORE_DIAG(a) "APAX_WDOG_CORE_DIAG"
#define device_bar_ODY_APAX_WDOG_CORE_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_CORE_DIAG(a) (a)
#define arguments_ODY_APAX_WDOG_CORE_DIAG(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_int_ena_w1c
 *
 * APA Watchdog Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union ody_apax_wdog_int_ena_w1c {
	uint64_t u;
	struct ody_apax_wdog_int_ena_w1c_s {
		uint64_t wdog_core                   : 1;
		uint64_t wdog_struct_crd             : 1;
		uint64_t wdog_struct_dat             : 1;
		uint64_t wdog_struct_rqb             : 1;
		uint64_t wdog_struct_txnid           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_wdog_int_ena_w1c_s cn; */
};
typedef union ody_apax_wdog_int_ena_w1c ody_apax_wdog_int_ena_w1c_t;

static inline uint64_t ODY_APAX_WDOG_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_INT_ENA_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e30ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_INT_ENA_W1C(a) ody_apax_wdog_int_ena_w1c_t
#define bustype_ODY_APAX_WDOG_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_INT_ENA_W1C(a) "APAX_WDOG_INT_ENA_W1C"
#define device_bar_ODY_APAX_WDOG_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_INT_ENA_W1C(a) (a)
#define arguments_ODY_APAX_WDOG_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_int_ena_w1s
 *
 * APA Watchdog Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union ody_apax_wdog_int_ena_w1s {
	uint64_t u;
	struct ody_apax_wdog_int_ena_w1s_s {
		uint64_t wdog_core                   : 1;
		uint64_t wdog_struct_crd             : 1;
		uint64_t wdog_struct_dat             : 1;
		uint64_t wdog_struct_rqb             : 1;
		uint64_t wdog_struct_txnid           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_wdog_int_ena_w1s_s cn; */
};
typedef union ody_apax_wdog_int_ena_w1s ody_apax_wdog_int_ena_w1s_t;

static inline uint64_t ODY_APAX_WDOG_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_INT_ENA_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e38ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_INT_ENA_W1S(a) ody_apax_wdog_int_ena_w1s_t
#define bustype_ODY_APAX_WDOG_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_INT_ENA_W1S(a) "APAX_WDOG_INT_ENA_W1S"
#define device_bar_ODY_APAX_WDOG_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_INT_ENA_W1S(a) (a)
#define arguments_ODY_APAX_WDOG_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_int_w1c
 *
 * APA Watchdog Interrupt Register
 * This register reports watchdog interrupt status.
 */
union ody_apax_wdog_int_w1c {
	uint64_t u;
	struct ody_apax_wdog_int_w1c_s {
		uint64_t wdog_core                   : 1;
		uint64_t wdog_struct_crd             : 1;
		uint64_t wdog_struct_dat             : 1;
		uint64_t wdog_struct_rqb             : 1;
		uint64_t wdog_struct_txnid           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_wdog_int_w1c_s cn; */
};
typedef union ody_apax_wdog_int_w1c ody_apax_wdog_int_w1c_t;

static inline uint64_t ODY_APAX_WDOG_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_INT_W1C(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e20ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_INT_W1C(a) ody_apax_wdog_int_w1c_t
#define bustype_ODY_APAX_WDOG_INT_W1C(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_INT_W1C(a) "APAX_WDOG_INT_W1C"
#define device_bar_ODY_APAX_WDOG_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_INT_W1C(a) (a)
#define arguments_ODY_APAX_WDOG_INT_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_int_w1s
 *
 * APA Watchdog Interrupt Set Registers
 * This register sets interrupt bits.
 */
union ody_apax_wdog_int_w1s {
	uint64_t u;
	struct ody_apax_wdog_int_w1s_s {
		uint64_t wdog_core                   : 1;
		uint64_t wdog_struct_crd             : 1;
		uint64_t wdog_struct_dat             : 1;
		uint64_t wdog_struct_rqb             : 1;
		uint64_t wdog_struct_txnid           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_apax_wdog_int_w1s_s cn; */
};
typedef union ody_apax_wdog_int_w1s ody_apax_wdog_int_w1s_t;

static inline uint64_t ODY_APAX_WDOG_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_INT_W1S(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001e28ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_INT_W1S(a) ody_apax_wdog_int_w1s_t
#define bustype_ODY_APAX_WDOG_INT_W1S(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_INT_W1S(a) "APAX_WDOG_INT_W1S"
#define device_bar_ODY_APAX_WDOG_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_INT_W1S(a) (a)
#define arguments_ODY_APAX_WDOG_INT_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_struct
 *
 * APA Watchdog Structure Register
 * This register configures the timeouts for APA internal structures to clear.
 */
union ody_apax_wdog_struct {
	uint64_t u;
	struct ody_apax_wdog_struct_s {
		uint64_t timeout                     : 31;
		uint64_t enable                      : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_wdog_struct_s cn; */
};
typedef union ody_apax_wdog_struct ody_apax_wdog_struct_t;

static inline uint64_t ODY_APAX_WDOG_STRUCT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_STRUCT(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001308ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_STRUCT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_STRUCT(a) ody_apax_wdog_struct_t
#define bustype_ODY_APAX_WDOG_STRUCT(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_STRUCT(a) "APAX_WDOG_STRUCT"
#define device_bar_ODY_APAX_WDOG_STRUCT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_STRUCT(a) (a)
#define arguments_ODY_APAX_WDOG_STRUCT(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_struct_crd_diag
 *
 * APA Watchdog Structure Credit Diagnostic Register
 * This register reports and captures watchdog timeouts for CRD, which indicates that
 * an unexpected CHI protocol credit was received.
 */
union ody_apax_wdog_struct_crd_diag {
	uint64_t u;
	struct ody_apax_wdog_struct_crd_diag_s {
		uint64_t pcrdtype                    : 4;
		uint64_t tgtid                       : 11;
		uint64_t reserved_15_29              : 15;
		uint64_t stale                       : 1;
		uint64_t multi                       : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_wdog_struct_crd_diag_s cn; */
};
typedef union ody_apax_wdog_struct_crd_diag ody_apax_wdog_struct_crd_diag_t;

static inline uint64_t ODY_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001318ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_STRUCT_CRD_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) ody_apax_wdog_struct_crd_diag_t
#define bustype_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) "APAX_WDOG_STRUCT_CRD_DIAG"
#define device_bar_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) (a)
#define arguments_ODY_APAX_WDOG_STRUCT_CRD_DIAG(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_struct_dat_diag
 *
 * APA WDOG STRUCT DAT DIAG Register
 * This register reports and captures watchdog timeouts for DAT, which indicates that
 * write data for a store did not get sent.
 */
union ody_apax_wdog_struct_dat_diag {
	uint64_t u;
	struct ody_apax_wdog_struct_dat_diag_s {
		uint64_t dbid                        : 12;
		uint64_t tgtid                       : 11;
		uint64_t has_dbid                    : 1;
		uint64_t datst0                      : 3;
		uint64_t datst1                      : 3;
		uint64_t datst2                      : 3;
		uint64_t datst3                      : 3;
		uint64_t has_lsw_idx                 : 1;
		uint64_t reserved_37_61              : 25;
		uint64_t stale                       : 1;
		uint64_t multi                       : 1;
	} s;
	/* struct ody_apax_wdog_struct_dat_diag_s cn; */
};
typedef union ody_apax_wdog_struct_dat_diag ody_apax_wdog_struct_dat_diag_t;

static inline uint64_t ODY_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001330ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_STRUCT_DAT_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) ody_apax_wdog_struct_dat_diag_t
#define bustype_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) "APAX_WDOG_STRUCT_DAT_DIAG"
#define device_bar_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) (a)
#define arguments_ODY_APAX_WDOG_STRUCT_DAT_DIAG(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_struct_rqb_diag
 *
 * APA WDOG STRUCT RQB DIAG Register
 * This register reports and captures watchdog timeouts for RQB, which indicates that a
 * request has not been acknowledged.
 */
union ody_apax_wdog_struct_rqb_diag {
	uint64_t u;
	struct ody_apax_wdog_struct_rqb_diag_s {
		uint64_t reserved_0_11               : 12;
		uint64_t txnid_new                   : 12;
		uint64_t pcrdtype                    : 4;
		uint64_t tgtid                       : 11;
		uint64_t reserved_39                 : 1;
		uint64_t state                       : 3;
		uint64_t reserved_43_61              : 19;
		uint64_t stale                       : 1;
		uint64_t multi                       : 1;
	} s;
	/* struct ody_apax_wdog_struct_rqb_diag_s cn; */
};
typedef union ody_apax_wdog_struct_rqb_diag ody_apax_wdog_struct_rqb_diag_t;

static inline uint64_t ODY_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001328ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_STRUCT_RQB_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) ody_apax_wdog_struct_rqb_diag_t
#define bustype_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) "APAX_WDOG_STRUCT_RQB_DIAG"
#define device_bar_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) (a)
#define arguments_ODY_APAX_WDOG_STRUCT_RQB_DIAG(a) (a), -1, -1, -1

/**
 * Register (RSL) apa#_wdog_struct_txnid_diag
 *
 * APA WDOG STRUCT TXNID DIAG Register
 * This register reports and captures watchdog timeouts for TXNID, which indicates that
 * a completion was not received.
 */
union ody_apax_wdog_struct_txnid_diag {
	uint64_t u;
	struct ody_apax_wdog_struct_txnid_diag_s {
		uint64_t txnid_orig                  : 12;
		uint64_t txnid_new                   : 8;
		uint64_t reserved_20_29              : 10;
		uint64_t stale                       : 1;
		uint64_t multi                       : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_apax_wdog_struct_txnid_diag_s cn; */
};
typedef union ody_apax_wdog_struct_txnid_diag ody_apax_wdog_struct_txnid_diag_t;

static inline uint64_t ODY_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a)
{
	if (a <= 89)
		return 0x87e349001320ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("APAX_WDOG_STRUCT_TXNID_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) ody_apax_wdog_struct_txnid_diag_t
#define bustype_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) CSR_TYPE_RSL
#define basename_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) "APAX_WDOG_STRUCT_TXNID_DIAG"
#define device_bar_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a)
#define arguments_ODY_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_APA_H__ */
