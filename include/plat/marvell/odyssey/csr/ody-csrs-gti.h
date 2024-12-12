#ifndef __ODY_CSRS_GTI_H__
#define __ODY_CSRS_GTI_H__
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
 * GTI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration gti_bar_e
 *
 * GTI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_GTI_BAR_E_GTI_PF_BAR0 (0x802000000000ll)
#define ODY_GTI_BAR_E_GTI_PF_BAR0_SIZE 0x100000ull
#define ODY_GTI_BAR_E_GTI_PF_BAR4 (0x80200f000000ll)
#define ODY_GTI_BAR_E_GTI_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration gti_int_vec_e
 *
 * GTI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_GTI_INT_VEC_E_CORE_WDOG0X_DEL3T(a) (0xa + (a))
#define ODY_GTI_INT_VEC_E_CORE_WDOG0X_INT(a) (0x5c + (a))
#define ODY_GTI_INT_VEC_E_CORE_WDOG1X_DEL3T(a) (0x4a + (a))
#define ODY_GTI_INT_VEC_E_CORE_WDOG1X_INT(a) (0x9c + (a))
#define ODY_GTI_INT_VEC_E_ERROR (8)
#define ODY_GTI_INT_VEC_E_MAILBOX_RX (7)
#define ODY_GTI_INT_VEC_E_SECURE_WATCHDOG (4)
#define ODY_GTI_INT_VEC_E_SECURE_WATCHDOG_CLEAR (5)
#define ODY_GTI_INT_VEC_E_SPARE (9)
#define ODY_GTI_INT_VEC_E_TX_TIMESTAMP (6)
#define ODY_GTI_INT_VEC_E_WAKE (0)
#define ODY_GTI_INT_VEC_E_WAKE_CLEAR (1)
#define ODY_GTI_INT_VEC_E_WATCHDOG (2)
#define ODY_GTI_INT_VEC_E_WATCHDOG_CLEAR (3)

/**
 * Register (NCB) gti_active_pc
 *
 * GTI Active Cycles Register
 */
union ody_gti_active_pc {
	uint64_t u;
	struct ody_gti_active_pc_s {
		uint64_t act_cyc                     : 64;
	} s;
	/* struct ody_gti_active_pc_s cn; */
};
typedef union ody_gti_active_pc ody_gti_active_pc_t;

#define ODY_GTI_ACTIVE_PC ODY_GTI_ACTIVE_PC_FUNC()
static inline uint64_t ODY_GTI_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_ACTIVE_PC_FUNC(void)
{
	return 0x802000000108ll;
}

#define typedef_ODY_GTI_ACTIVE_PC ody_gti_active_pc_t
#define bustype_ODY_GTI_ACTIVE_PC CSR_TYPE_NCB
#define basename_ODY_GTI_ACTIVE_PC "GTI_ACTIVE_PC"
#define device_bar_ODY_GTI_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_ACTIVE_PC 0
#define arguments_ODY_GTI_ACTIVE_PC -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cidr0
 *
 * GTI Base Component Identification Register 0
 */
union ody_gti_bz_cidr0 {
	uint32_t u;
	struct ody_gti_bz_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_cidr0_s cn; */
};
typedef union ody_gti_bz_cidr0 ody_gti_bz_cidr0_t;

#define ODY_GTI_BZ_CIDR0 ODY_GTI_BZ_CIDR0_FUNC()
static inline uint64_t ODY_GTI_BZ_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CIDR0_FUNC(void)
{
	return 0x802000030ff0ll;
}

#define typedef_ODY_GTI_BZ_CIDR0 ody_gti_bz_cidr0_t
#define bustype_ODY_GTI_BZ_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CIDR0 "GTI_BZ_CIDR0"
#define device_bar_ODY_GTI_BZ_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CIDR0 0
#define arguments_ODY_GTI_BZ_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cidr1
 *
 * GTI Base Component Identification Register 1
 */
union ody_gti_bz_cidr1 {
	uint32_t u;
	struct ody_gti_bz_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_cidr1_s cn; */
};
typedef union ody_gti_bz_cidr1 ody_gti_bz_cidr1_t;

#define ODY_GTI_BZ_CIDR1 ODY_GTI_BZ_CIDR1_FUNC()
static inline uint64_t ODY_GTI_BZ_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CIDR1_FUNC(void)
{
	return 0x802000030ff4ll;
}

#define typedef_ODY_GTI_BZ_CIDR1 ody_gti_bz_cidr1_t
#define bustype_ODY_GTI_BZ_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CIDR1 "GTI_BZ_CIDR1"
#define device_bar_ODY_GTI_BZ_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CIDR1 0
#define arguments_ODY_GTI_BZ_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cidr2
 *
 * GTI Base Component Identification Register 2
 */
union ody_gti_bz_cidr2 {
	uint32_t u;
	struct ody_gti_bz_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_cidr2_s cn; */
};
typedef union ody_gti_bz_cidr2 ody_gti_bz_cidr2_t;

#define ODY_GTI_BZ_CIDR2 ODY_GTI_BZ_CIDR2_FUNC()
static inline uint64_t ODY_GTI_BZ_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CIDR2_FUNC(void)
{
	return 0x802000030ff8ll;
}

#define typedef_ODY_GTI_BZ_CIDR2 ody_gti_bz_cidr2_t
#define bustype_ODY_GTI_BZ_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CIDR2 "GTI_BZ_CIDR2"
#define device_bar_ODY_GTI_BZ_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CIDR2 0
#define arguments_ODY_GTI_BZ_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cidr3
 *
 * GTI Base Component Identification Register 3
 */
union ody_gti_bz_cidr3 {
	uint32_t u;
	struct ody_gti_bz_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_cidr3_s cn; */
};
typedef union ody_gti_bz_cidr3 ody_gti_bz_cidr3_t;

#define ODY_GTI_BZ_CIDR3 ODY_GTI_BZ_CIDR3_FUNC()
static inline uint64_t ODY_GTI_BZ_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CIDR3_FUNC(void)
{
	return 0x802000030ffcll;
}

#define typedef_ODY_GTI_BZ_CIDR3 ody_gti_bz_cidr3_t
#define bustype_ODY_GTI_BZ_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CIDR3 "GTI_BZ_CIDR3"
#define device_bar_ODY_GTI_BZ_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CIDR3 0
#define arguments_ODY_GTI_BZ_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cntp_ctl
 *
 * GTI Base Physical Timer Control Register
 */
union ody_gti_bz_cntp_ctl {
	uint32_t u;
	struct ody_gti_bz_cntp_ctl_s {
		uint32_t enable                      : 1;
		uint32_t imask                       : 1;
		uint32_t istatus                     : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_gti_bz_cntp_ctl_s cn; */
};
typedef union ody_gti_bz_cntp_ctl ody_gti_bz_cntp_ctl_t;

#define ODY_GTI_BZ_CNTP_CTL ODY_GTI_BZ_CNTP_CTL_FUNC()
static inline uint64_t ODY_GTI_BZ_CNTP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CNTP_CTL_FUNC(void)
{
	return 0x80200003002cll;
}

#define typedef_ODY_GTI_BZ_CNTP_CTL ody_gti_bz_cntp_ctl_t
#define bustype_ODY_GTI_BZ_CNTP_CTL CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CNTP_CTL "GTI_BZ_CNTP_CTL"
#define device_bar_ODY_GTI_BZ_CNTP_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CNTP_CTL 0
#define arguments_ODY_GTI_BZ_CNTP_CTL -1, -1, -1, -1

/**
 * Register (NCB) gti_bz_cntp_cval
 *
 * GTI Base Physical Timer Compare Value Register
 */
union ody_gti_bz_cntp_cval {
	uint64_t u;
	struct ody_gti_bz_cntp_cval_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_gti_bz_cntp_cval_s cn; */
};
typedef union ody_gti_bz_cntp_cval ody_gti_bz_cntp_cval_t;

#define ODY_GTI_BZ_CNTP_CVAL ODY_GTI_BZ_CNTP_CVAL_FUNC()
static inline uint64_t ODY_GTI_BZ_CNTP_CVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CNTP_CVAL_FUNC(void)
{
	return 0x802000030020ll;
}

#define typedef_ODY_GTI_BZ_CNTP_CVAL ody_gti_bz_cntp_cval_t
#define bustype_ODY_GTI_BZ_CNTP_CVAL CSR_TYPE_NCB
#define basename_ODY_GTI_BZ_CNTP_CVAL "GTI_BZ_CNTP_CVAL"
#define device_bar_ODY_GTI_BZ_CNTP_CVAL 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CNTP_CVAL 0
#define arguments_ODY_GTI_BZ_CNTP_CVAL -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_cntp_tval
 *
 * GTI Base Physical Timer Value Register
 */
union ody_gti_bz_cntp_tval {
	uint32_t u;
	struct ody_gti_bz_cntp_tval_s {
		uint32_t timervalue                  : 32;
	} s;
	/* struct ody_gti_bz_cntp_tval_s cn; */
};
typedef union ody_gti_bz_cntp_tval ody_gti_bz_cntp_tval_t;

#define ODY_GTI_BZ_CNTP_TVAL ODY_GTI_BZ_CNTP_TVAL_FUNC()
static inline uint64_t ODY_GTI_BZ_CNTP_TVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_CNTP_TVAL_FUNC(void)
{
	return 0x802000030028ll;
}

#define typedef_ODY_GTI_BZ_CNTP_TVAL ody_gti_bz_cntp_tval_t
#define bustype_ODY_GTI_BZ_CNTP_TVAL CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_CNTP_TVAL "GTI_BZ_CNTP_TVAL"
#define device_bar_ODY_GTI_BZ_CNTP_TVAL 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_CNTP_TVAL 0
#define arguments_ODY_GTI_BZ_CNTP_TVAL -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr0
 *
 * GTI Base Peripheral Identification Register 0
 */
union ody_gti_bz_pidr0 {
	uint32_t u;
	struct ody_gti_bz_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_pidr0_s cn; */
};
typedef union ody_gti_bz_pidr0 ody_gti_bz_pidr0_t;

#define ODY_GTI_BZ_PIDR0 ODY_GTI_BZ_PIDR0_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR0_FUNC(void)
{
	return 0x802000030fe0ll;
}

#define typedef_ODY_GTI_BZ_PIDR0 ody_gti_bz_pidr0_t
#define bustype_ODY_GTI_BZ_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR0 "GTI_BZ_PIDR0"
#define device_bar_ODY_GTI_BZ_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR0 0
#define arguments_ODY_GTI_BZ_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr1
 *
 * GTI Base Peripheral Identification Register 1
 */
union ody_gti_bz_pidr1 {
	uint32_t u;
	struct ody_gti_bz_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_pidr1_s cn; */
};
typedef union ody_gti_bz_pidr1 ody_gti_bz_pidr1_t;

#define ODY_GTI_BZ_PIDR1 ODY_GTI_BZ_PIDR1_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR1_FUNC(void)
{
	return 0x802000030fe4ll;
}

#define typedef_ODY_GTI_BZ_PIDR1 ody_gti_bz_pidr1_t
#define bustype_ODY_GTI_BZ_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR1 "GTI_BZ_PIDR1"
#define device_bar_ODY_GTI_BZ_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR1 0
#define arguments_ODY_GTI_BZ_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr2
 *
 * GTI Base Peripheral Identification Register 2
 */
union ody_gti_bz_pidr2 {
	uint32_t u;
	struct ody_gti_bz_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_pidr2_s cn; */
};
typedef union ody_gti_bz_pidr2 ody_gti_bz_pidr2_t;

#define ODY_GTI_BZ_PIDR2 ODY_GTI_BZ_PIDR2_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR2_FUNC(void)
{
	return 0x802000030fe8ll;
}

#define typedef_ODY_GTI_BZ_PIDR2 ody_gti_bz_pidr2_t
#define bustype_ODY_GTI_BZ_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR2 "GTI_BZ_PIDR2"
#define device_bar_ODY_GTI_BZ_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR2 0
#define arguments_ODY_GTI_BZ_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr3
 *
 * GTI Base Peripheral Identification Register 3
 */
union ody_gti_bz_pidr3 {
	uint32_t u;
	struct ody_gti_bz_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_pidr3_s cn; */
};
typedef union ody_gti_bz_pidr3 ody_gti_bz_pidr3_t;

#define ODY_GTI_BZ_PIDR3 ODY_GTI_BZ_PIDR3_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR3_FUNC(void)
{
	return 0x802000030fecll;
}

#define typedef_ODY_GTI_BZ_PIDR3 ody_gti_bz_pidr3_t
#define bustype_ODY_GTI_BZ_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR3 "GTI_BZ_PIDR3"
#define device_bar_ODY_GTI_BZ_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR3 0
#define arguments_ODY_GTI_BZ_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr4
 *
 * GTI Base Peripheral Identification Register 4
 */
union ody_gti_bz_pidr4 {
	uint32_t u;
	struct ody_gti_bz_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_bz_pidr4_s cn; */
};
typedef union ody_gti_bz_pidr4 ody_gti_bz_pidr4_t;

#define ODY_GTI_BZ_PIDR4 ODY_GTI_BZ_PIDR4_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR4_FUNC(void)
{
	return 0x802000030fd0ll;
}

#define typedef_ODY_GTI_BZ_PIDR4 ody_gti_bz_pidr4_t
#define bustype_ODY_GTI_BZ_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR4 "GTI_BZ_PIDR4"
#define device_bar_ODY_GTI_BZ_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR4 0
#define arguments_ODY_GTI_BZ_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr5
 *
 * GTI Base Peripheral Identification Register 5
 */
union ody_gti_bz_pidr5 {
	uint32_t u;
	struct ody_gti_bz_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_bz_pidr5_s cn; */
};
typedef union ody_gti_bz_pidr5 ody_gti_bz_pidr5_t;

#define ODY_GTI_BZ_PIDR5 ODY_GTI_BZ_PIDR5_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR5_FUNC(void)
{
	return 0x802000030fd4ll;
}

#define typedef_ODY_GTI_BZ_PIDR5 ody_gti_bz_pidr5_t
#define bustype_ODY_GTI_BZ_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR5 "GTI_BZ_PIDR5"
#define device_bar_ODY_GTI_BZ_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR5 0
#define arguments_ODY_GTI_BZ_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr6
 *
 * GTI Base Peripheral Identification Register 6
 */
union ody_gti_bz_pidr6 {
	uint32_t u;
	struct ody_gti_bz_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_bz_pidr6_s cn; */
};
typedef union ody_gti_bz_pidr6 ody_gti_bz_pidr6_t;

#define ODY_GTI_BZ_PIDR6 ODY_GTI_BZ_PIDR6_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR6_FUNC(void)
{
	return 0x802000030fd8ll;
}

#define typedef_ODY_GTI_BZ_PIDR6 ody_gti_bz_pidr6_t
#define bustype_ODY_GTI_BZ_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR6 "GTI_BZ_PIDR6"
#define device_bar_ODY_GTI_BZ_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR6 0
#define arguments_ODY_GTI_BZ_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_bz_pidr7
 *
 * GTI Base Peripheral Identification Register 7
 */
union ody_gti_bz_pidr7 {
	uint32_t u;
	struct ody_gti_bz_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_bz_pidr7_s cn; */
};
typedef union ody_gti_bz_pidr7 ody_gti_bz_pidr7_t;

#define ODY_GTI_BZ_PIDR7 ODY_GTI_BZ_PIDR7_FUNC()
static inline uint64_t ODY_GTI_BZ_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_BZ_PIDR7_FUNC(void)
{
	return 0x802000030fdcll;
}

#define typedef_ODY_GTI_BZ_PIDR7 ody_gti_bz_pidr7_t
#define bustype_ODY_GTI_BZ_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GTI_BZ_PIDR7 "GTI_BZ_PIDR7"
#define device_bar_ODY_GTI_BZ_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_BZ_PIDR7 0
#define arguments_ODY_GTI_BZ_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cidr0
 *
 * GTI Counter Control Component Identification Secure Register 0
 */
union ody_gti_cc_cidr0 {
	uint32_t u;
	struct ody_gti_cc_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_cidr0_s cn; */
};
typedef union ody_gti_cc_cidr0 ody_gti_cc_cidr0_t;

#define ODY_GTI_CC_CIDR0 ODY_GTI_CC_CIDR0_FUNC()
static inline uint64_t ODY_GTI_CC_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CIDR0_FUNC(void)
{
	return 0x802000000ff0ll;
}

#define typedef_ODY_GTI_CC_CIDR0 ody_gti_cc_cidr0_t
#define bustype_ODY_GTI_CC_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CIDR0 "GTI_CC_CIDR0"
#define device_bar_ODY_GTI_CC_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CIDR0 0
#define arguments_ODY_GTI_CC_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cidr1
 *
 * GTI Counter Control Component Identification Secure Register 1
 */
union ody_gti_cc_cidr1 {
	uint32_t u;
	struct ody_gti_cc_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_cidr1_s cn; */
};
typedef union ody_gti_cc_cidr1 ody_gti_cc_cidr1_t;

#define ODY_GTI_CC_CIDR1 ODY_GTI_CC_CIDR1_FUNC()
static inline uint64_t ODY_GTI_CC_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CIDR1_FUNC(void)
{
	return 0x802000000ff4ll;
}

#define typedef_ODY_GTI_CC_CIDR1 ody_gti_cc_cidr1_t
#define bustype_ODY_GTI_CC_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CIDR1 "GTI_CC_CIDR1"
#define device_bar_ODY_GTI_CC_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CIDR1 0
#define arguments_ODY_GTI_CC_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cidr2
 *
 * GTI Counter Control Component Identification Secure Register 2
 */
union ody_gti_cc_cidr2 {
	uint32_t u;
	struct ody_gti_cc_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_cidr2_s cn; */
};
typedef union ody_gti_cc_cidr2 ody_gti_cc_cidr2_t;

#define ODY_GTI_CC_CIDR2 ODY_GTI_CC_CIDR2_FUNC()
static inline uint64_t ODY_GTI_CC_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CIDR2_FUNC(void)
{
	return 0x802000000ff8ll;
}

#define typedef_ODY_GTI_CC_CIDR2 ody_gti_cc_cidr2_t
#define bustype_ODY_GTI_CC_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CIDR2 "GTI_CC_CIDR2"
#define device_bar_ODY_GTI_CC_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CIDR2 0
#define arguments_ODY_GTI_CC_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cidr3
 *
 * GTI Counter Control Component Identification Secure Register 3
 */
union ody_gti_cc_cidr3 {
	uint32_t u;
	struct ody_gti_cc_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_cidr3_s cn; */
};
typedef union ody_gti_cc_cidr3 ody_gti_cc_cidr3_t;

#define ODY_GTI_CC_CIDR3 ODY_GTI_CC_CIDR3_FUNC()
static inline uint64_t ODY_GTI_CC_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CIDR3_FUNC(void)
{
	return 0x802000000ffcll;
}

#define typedef_ODY_GTI_CC_CIDR3 ody_gti_cc_cidr3_t
#define bustype_ODY_GTI_CC_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CIDR3 "GTI_CC_CIDR3"
#define device_bar_ODY_GTI_CC_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CIDR3 0
#define arguments_ODY_GTI_CC_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB) gti_cc_cntadd
 *
 * GTI Counter Control Atomic Add Secure Register
 * Implementation defined register.
 */
union ody_gti_cc_cntadd {
	uint64_t u;
	struct ody_gti_cc_cntadd_s {
		uint64_t cntadd                      : 64;
	} s;
	/* struct ody_gti_cc_cntadd_s cn; */
};
typedef union ody_gti_cc_cntadd ody_gti_cc_cntadd_t;

#define ODY_GTI_CC_CNTADD ODY_GTI_CC_CNTADD_FUNC()
static inline uint64_t ODY_GTI_CC_CNTADD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTADD_FUNC(void)
{
	return 0x8020000000c8ll;
}

#define typedef_ODY_GTI_CC_CNTADD ody_gti_cc_cntadd_t
#define bustype_ODY_GTI_CC_CNTADD CSR_TYPE_NCB
#define basename_ODY_GTI_CC_CNTADD "GTI_CC_CNTADD"
#define device_bar_ODY_GTI_CC_CNTADD 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTADD 0
#define arguments_ODY_GTI_CC_CNTADD -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntcr
 *
 * GTI Counter Control Secure Register
 */
union ody_gti_cc_cntcr {
	uint32_t u;
	struct ody_gti_cc_cntcr_s {
		uint32_t en                          : 1;
		uint32_t hdbg                        : 1;
		uint32_t scen                        : 1;
		uint32_t reserved_3_7                : 5;
		uint32_t fcreq                       : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_gti_cc_cntcr_s cn; */
};
typedef union ody_gti_cc_cntcr ody_gti_cc_cntcr_t;

#define ODY_GTI_CC_CNTCR ODY_GTI_CC_CNTCR_FUNC()
static inline uint64_t ODY_GTI_CC_CNTCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTCR_FUNC(void)
{
	return 0x802000000000ll;
}

#define typedef_ODY_GTI_CC_CNTCR ody_gti_cc_cntcr_t
#define bustype_ODY_GTI_CC_CNTCR CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTCR "GTI_CC_CNTCR"
#define device_bar_ODY_GTI_CC_CNTCR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTCR 0
#define arguments_ODY_GTI_CC_CNTCR -1, -1, -1, -1

/**
 * Register (NCB) gti_cc_cntcv
 *
 * GTI Counter Control Count Value Secure Register
 */
union ody_gti_cc_cntcv {
	uint64_t u;
	struct ody_gti_cc_cntcv_s {
		uint64_t cnt                         : 64;
	} s;
	/* struct ody_gti_cc_cntcv_s cn; */
};
typedef union ody_gti_cc_cntcv ody_gti_cc_cntcv_t;

#define ODY_GTI_CC_CNTCV ODY_GTI_CC_CNTCV_FUNC()
static inline uint64_t ODY_GTI_CC_CNTCV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTCV_FUNC(void)
{
	return 0x802000000008ll;
}

#define typedef_ODY_GTI_CC_CNTCV ody_gti_cc_cntcv_t
#define bustype_ODY_GTI_CC_CNTCV CSR_TYPE_NCB
#define basename_ODY_GTI_CC_CNTCV "GTI_CC_CNTCV"
#define device_bar_ODY_GTI_CC_CNTCV 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTCV 0
#define arguments_ODY_GTI_CC_CNTCV -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntfid0
 *
 * GTI Counter Control Frequency Mode Table Secure Register 0
 */
union ody_gti_cc_cntfid0 {
	uint32_t u;
	struct ody_gti_cc_cntfid0_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_gti_cc_cntfid0_s cn; */
};
typedef union ody_gti_cc_cntfid0 ody_gti_cc_cntfid0_t;

#define ODY_GTI_CC_CNTFID0 ODY_GTI_CC_CNTFID0_FUNC()
static inline uint64_t ODY_GTI_CC_CNTFID0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTFID0_FUNC(void)
{
	return 0x802000000020ll;
}

#define typedef_ODY_GTI_CC_CNTFID0 ody_gti_cc_cntfid0_t
#define bustype_ODY_GTI_CC_CNTFID0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTFID0 "GTI_CC_CNTFID0"
#define device_bar_ODY_GTI_CC_CNTFID0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTFID0 0
#define arguments_ODY_GTI_CC_CNTFID0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntfid1
 *
 * GTI Counter Control Frequency Mode Table Secure Register 1
 */
union ody_gti_cc_cntfid1 {
	uint32_t u;
	struct ody_gti_cc_cntfid1_s {
		uint32_t constant                    : 32;
	} s;
	/* struct ody_gti_cc_cntfid1_s cn; */
};
typedef union ody_gti_cc_cntfid1 ody_gti_cc_cntfid1_t;

#define ODY_GTI_CC_CNTFID1 ODY_GTI_CC_CNTFID1_FUNC()
static inline uint64_t ODY_GTI_CC_CNTFID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTFID1_FUNC(void)
{
	return 0x802000000024ll;
}

#define typedef_ODY_GTI_CC_CNTFID1 ody_gti_cc_cntfid1_t
#define bustype_ODY_GTI_CC_CNTFID1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTFID1 "GTI_CC_CNTFID1"
#define device_bar_ODY_GTI_CC_CNTFID1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTFID1 0
#define arguments_ODY_GTI_CC_CNTFID1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntid
 *
 * GTI Counter Control Counter Identification Register
 */
union ody_gti_cc_cntid {
	uint32_t u;
	struct ody_gti_cc_cntid_s {
		uint32_t cntsc                       : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_gti_cc_cntid_s cn; */
};
typedef union ody_gti_cc_cntid ody_gti_cc_cntid_t;

#define ODY_GTI_CC_CNTID ODY_GTI_CC_CNTID_FUNC()
static inline uint64_t ODY_GTI_CC_CNTID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTID_FUNC(void)
{
	return 0x80200000001cll;
}

#define typedef_ODY_GTI_CC_CNTID ody_gti_cc_cntid_t
#define bustype_ODY_GTI_CC_CNTID CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTID "GTI_CC_CNTID"
#define device_bar_ODY_GTI_CC_CNTID 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTID 0
#define arguments_ODY_GTI_CC_CNTID -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntracc
 *
 * GTI Counter Control Count Rate Accumulator Secure Register
 * Implementation defined register.
 */
union ody_gti_cc_cntracc {
	uint32_t u;
	struct ody_gti_cc_cntracc_s {
		uint32_t cntracc                     : 24;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_gti_cc_cntracc_s cn; */
};
typedef union ody_gti_cc_cntracc ody_gti_cc_cntracc_t;

#define ODY_GTI_CC_CNTRACC ODY_GTI_CC_CNTRACC_FUNC()
static inline uint64_t ODY_GTI_CC_CNTRACC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTRACC_FUNC(void)
{
	return 0x8020000000c4ll;
}

#define typedef_ODY_GTI_CC_CNTRACC ody_gti_cc_cntracc_t
#define bustype_ODY_GTI_CC_CNTRACC CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTRACC "GTI_CC_CNTRACC"
#define device_bar_ODY_GTI_CC_CNTRACC 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTRACC 0
#define arguments_ODY_GTI_CC_CNTRACC -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntrate
 *
 * GTI Counter Control Count Rate Secure Register
 * Implementation defined register.
 */
union ody_gti_cc_cntrate {
	uint32_t u;
	struct ody_gti_cc_cntrate_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_cc_cntrate_s cn; */
};
typedef union ody_gti_cc_cntrate ody_gti_cc_cntrate_t;

#define ODY_GTI_CC_CNTRATE ODY_GTI_CC_CNTRATE_FUNC()
static inline uint64_t ODY_GTI_CC_CNTRATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTRATE_FUNC(void)
{
	return 0x8020000000c0ll;
}

#define typedef_ODY_GTI_CC_CNTRATE ody_gti_cc_cntrate_t
#define bustype_ODY_GTI_CC_CNTRATE CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTRATE "GTI_CC_CNTRATE"
#define device_bar_ODY_GTI_CC_CNTRATE 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTRATE 0
#define arguments_ODY_GTI_CC_CNTRATE -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntscr
 *
 * GTI Counter Control Counter Scale Register
 */
union ody_gti_cc_cntscr {
	uint32_t u;
	struct ody_gti_cc_cntscr_s {
		uint32_t scaleval                    : 32;
	} s;
	/* struct ody_gti_cc_cntscr_s cn; */
};
typedef union ody_gti_cc_cntscr ody_gti_cc_cntscr_t;

#define ODY_GTI_CC_CNTSCR ODY_GTI_CC_CNTSCR_FUNC()
static inline uint64_t ODY_GTI_CC_CNTSCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTSCR_FUNC(void)
{
	return 0x802000000010ll;
}

#define typedef_ODY_GTI_CC_CNTSCR ody_gti_cc_cntscr_t
#define bustype_ODY_GTI_CC_CNTSCR CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTSCR "GTI_CC_CNTSCR"
#define device_bar_ODY_GTI_CC_CNTSCR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTSCR 0
#define arguments_ODY_GTI_CC_CNTSCR -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_cntsr
 *
 * GTI Counter Control Status Secure Register
 */
union ody_gti_cc_cntsr {
	uint32_t u;
	struct ody_gti_cc_cntsr_s {
		uint32_t reserved_0                  : 1;
		uint32_t dbgh                        : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t fcack                       : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_gti_cc_cntsr_s cn; */
};
typedef union ody_gti_cc_cntsr ody_gti_cc_cntsr_t;

#define ODY_GTI_CC_CNTSR ODY_GTI_CC_CNTSR_FUNC()
static inline uint64_t ODY_GTI_CC_CNTSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_CNTSR_FUNC(void)
{
	return 0x802000000004ll;
}

#define typedef_ODY_GTI_CC_CNTSR ody_gti_cc_cntsr_t
#define bustype_ODY_GTI_CC_CNTSR CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_CNTSR "GTI_CC_CNTSR"
#define device_bar_ODY_GTI_CC_CNTSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_CNTSR 0
#define arguments_ODY_GTI_CC_CNTSR -1, -1, -1, -1

/**
 * Register (NCB) gti_cc_imp_ctl
 *
 * GTI Counter Control Implementation Control Register
 * Implementation defined register.
 */
union ody_gti_cc_imp_ctl {
	uint64_t u;
	struct ody_gti_cc_imp_ctl_s {
		uint64_t clk_src                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gti_cc_imp_ctl_s cn; */
};
typedef union ody_gti_cc_imp_ctl ody_gti_cc_imp_ctl_t;

#define ODY_GTI_CC_IMP_CTL ODY_GTI_CC_IMP_CTL_FUNC()
static inline uint64_t ODY_GTI_CC_IMP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_IMP_CTL_FUNC(void)
{
	return 0x802000000100ll;
}

#define typedef_ODY_GTI_CC_IMP_CTL ody_gti_cc_imp_ctl_t
#define bustype_ODY_GTI_CC_IMP_CTL CSR_TYPE_NCB
#define basename_ODY_GTI_CC_IMP_CTL "GTI_CC_IMP_CTL"
#define device_bar_ODY_GTI_CC_IMP_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_IMP_CTL 0
#define arguments_ODY_GTI_CC_IMP_CTL -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr0
 *
 * GTI Counter Control Peripheral Identification Secure Register 0
 */
union ody_gti_cc_pidr0 {
	uint32_t u;
	struct ody_gti_cc_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_pidr0_s cn; */
};
typedef union ody_gti_cc_pidr0 ody_gti_cc_pidr0_t;

#define ODY_GTI_CC_PIDR0 ODY_GTI_CC_PIDR0_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR0_FUNC(void)
{
	return 0x802000000fe0ll;
}

#define typedef_ODY_GTI_CC_PIDR0 ody_gti_cc_pidr0_t
#define bustype_ODY_GTI_CC_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR0 "GTI_CC_PIDR0"
#define device_bar_ODY_GTI_CC_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR0 0
#define arguments_ODY_GTI_CC_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr1
 *
 * GTI Counter Control Peripheral Identification Secure Register 1
 */
union ody_gti_cc_pidr1 {
	uint32_t u;
	struct ody_gti_cc_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_pidr1_s cn; */
};
typedef union ody_gti_cc_pidr1 ody_gti_cc_pidr1_t;

#define ODY_GTI_CC_PIDR1 ODY_GTI_CC_PIDR1_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR1_FUNC(void)
{
	return 0x802000000fe4ll;
}

#define typedef_ODY_GTI_CC_PIDR1 ody_gti_cc_pidr1_t
#define bustype_ODY_GTI_CC_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR1 "GTI_CC_PIDR1"
#define device_bar_ODY_GTI_CC_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR1 0
#define arguments_ODY_GTI_CC_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr2
 *
 * GTI Counter Control Peripheral Identification Secure Register 2
 */
union ody_gti_cc_pidr2 {
	uint32_t u;
	struct ody_gti_cc_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_pidr2_s cn; */
};
typedef union ody_gti_cc_pidr2 ody_gti_cc_pidr2_t;

#define ODY_GTI_CC_PIDR2 ODY_GTI_CC_PIDR2_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR2_FUNC(void)
{
	return 0x802000000fe8ll;
}

#define typedef_ODY_GTI_CC_PIDR2 ody_gti_cc_pidr2_t
#define bustype_ODY_GTI_CC_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR2 "GTI_CC_PIDR2"
#define device_bar_ODY_GTI_CC_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR2 0
#define arguments_ODY_GTI_CC_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr3
 *
 * GTI Counter Control Peripheral Identification Secure Register 3
 */
union ody_gti_cc_pidr3 {
	uint32_t u;
	struct ody_gti_cc_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_pidr3_s cn; */
};
typedef union ody_gti_cc_pidr3 ody_gti_cc_pidr3_t;

#define ODY_GTI_CC_PIDR3 ODY_GTI_CC_PIDR3_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR3_FUNC(void)
{
	return 0x802000000fecll;
}

#define typedef_ODY_GTI_CC_PIDR3 ody_gti_cc_pidr3_t
#define bustype_ODY_GTI_CC_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR3 "GTI_CC_PIDR3"
#define device_bar_ODY_GTI_CC_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR3 0
#define arguments_ODY_GTI_CC_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr4
 *
 * GTI Counter Control Peripheral Identification Secure Register 4
 */
union ody_gti_cc_pidr4 {
	uint32_t u;
	struct ody_gti_cc_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_cc_pidr4_s cn; */
};
typedef union ody_gti_cc_pidr4 ody_gti_cc_pidr4_t;

#define ODY_GTI_CC_PIDR4 ODY_GTI_CC_PIDR4_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR4_FUNC(void)
{
	return 0x802000000fd0ll;
}

#define typedef_ODY_GTI_CC_PIDR4 ody_gti_cc_pidr4_t
#define bustype_ODY_GTI_CC_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR4 "GTI_CC_PIDR4"
#define device_bar_ODY_GTI_CC_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR4 0
#define arguments_ODY_GTI_CC_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr5
 *
 * GTI Counter Control Peripheral Identification Secure Register 5
 */
union ody_gti_cc_pidr5 {
	uint32_t u;
	struct ody_gti_cc_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_cc_pidr5_s cn; */
};
typedef union ody_gti_cc_pidr5 ody_gti_cc_pidr5_t;

#define ODY_GTI_CC_PIDR5 ODY_GTI_CC_PIDR5_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR5_FUNC(void)
{
	return 0x802000000fd4ll;
}

#define typedef_ODY_GTI_CC_PIDR5 ody_gti_cc_pidr5_t
#define bustype_ODY_GTI_CC_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR5 "GTI_CC_PIDR5"
#define device_bar_ODY_GTI_CC_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR5 0
#define arguments_ODY_GTI_CC_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr6
 *
 * GTI Counter Control Peripheral Identification Secure Register 6
 */
union ody_gti_cc_pidr6 {
	uint32_t u;
	struct ody_gti_cc_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_cc_pidr6_s cn; */
};
typedef union ody_gti_cc_pidr6 ody_gti_cc_pidr6_t;

#define ODY_GTI_CC_PIDR6 ODY_GTI_CC_PIDR6_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR6_FUNC(void)
{
	return 0x802000000fd8ll;
}

#define typedef_ODY_GTI_CC_PIDR6 ody_gti_cc_pidr6_t
#define bustype_ODY_GTI_CC_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR6 "GTI_CC_PIDR6"
#define device_bar_ODY_GTI_CC_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR6 0
#define arguments_ODY_GTI_CC_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_cc_pidr7
 *
 * GTI Counter Control Peripheral Identification Secure Register 7
 */
union ody_gti_cc_pidr7 {
	uint32_t u;
	struct ody_gti_cc_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_cc_pidr7_s cn; */
};
typedef union ody_gti_cc_pidr7 ody_gti_cc_pidr7_t;

#define ODY_GTI_CC_PIDR7 ODY_GTI_CC_PIDR7_FUNC()
static inline uint64_t ODY_GTI_CC_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CC_PIDR7_FUNC(void)
{
	return 0x802000000fdcll;
}

#define typedef_ODY_GTI_CC_PIDR7 ody_gti_cc_pidr7_t
#define bustype_ODY_GTI_CC_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CC_PIDR7 "GTI_CC_PIDR7"
#define device_bar_ODY_GTI_CC_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CC_PIDR7 0
#define arguments_ODY_GTI_CC_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_const
 *
 * GTI Constants Register
 */
union ody_gti_const {
	uint32_t u;
	struct ody_gti_const_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_const_s cn; */
};
typedef union ody_gti_const ody_gti_const_t;

#define ODY_GTI_CONST ODY_GTI_CONST_FUNC()
static inline uint64_t ODY_GTI_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CONST_FUNC(void)
{
	return 0x8020000e0004ll;
}

#define typedef_ODY_GTI_CONST ody_gti_const_t
#define bustype_ODY_GTI_CONST CSR_TYPE_NCB32b
#define basename_ODY_GTI_CONST "GTI_CONST"
#define device_bar_ODY_GTI_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CONST 0
#define arguments_ODY_GTI_CONST -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cidr0
 *
 * GTI Control Component Identification Register 0
 */
union ody_gti_ctl_cidr0 {
	uint32_t u;
	struct ody_gti_ctl_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_cidr0_s cn; */
};
typedef union ody_gti_ctl_cidr0 ody_gti_ctl_cidr0_t;

#define ODY_GTI_CTL_CIDR0 ODY_GTI_CTL_CIDR0_FUNC()
static inline uint64_t ODY_GTI_CTL_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CIDR0_FUNC(void)
{
	return 0x802000020ff0ll;
}

#define typedef_ODY_GTI_CTL_CIDR0 ody_gti_ctl_cidr0_t
#define bustype_ODY_GTI_CTL_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CIDR0 "GTI_CTL_CIDR0"
#define device_bar_ODY_GTI_CTL_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CIDR0 0
#define arguments_ODY_GTI_CTL_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cidr1
 *
 * GTI Control Component Identification Register 1
 */
union ody_gti_ctl_cidr1 {
	uint32_t u;
	struct ody_gti_ctl_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_cidr1_s cn; */
};
typedef union ody_gti_ctl_cidr1 ody_gti_ctl_cidr1_t;

#define ODY_GTI_CTL_CIDR1 ODY_GTI_CTL_CIDR1_FUNC()
static inline uint64_t ODY_GTI_CTL_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CIDR1_FUNC(void)
{
	return 0x802000020ff4ll;
}

#define typedef_ODY_GTI_CTL_CIDR1 ody_gti_ctl_cidr1_t
#define bustype_ODY_GTI_CTL_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CIDR1 "GTI_CTL_CIDR1"
#define device_bar_ODY_GTI_CTL_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CIDR1 0
#define arguments_ODY_GTI_CTL_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cidr2
 *
 * GTI Control Component Identification Register 2
 */
union ody_gti_ctl_cidr2 {
	uint32_t u;
	struct ody_gti_ctl_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_cidr2_s cn; */
};
typedef union ody_gti_ctl_cidr2 ody_gti_ctl_cidr2_t;

#define ODY_GTI_CTL_CIDR2 ODY_GTI_CTL_CIDR2_FUNC()
static inline uint64_t ODY_GTI_CTL_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CIDR2_FUNC(void)
{
	return 0x802000020ff8ll;
}

#define typedef_ODY_GTI_CTL_CIDR2 ody_gti_ctl_cidr2_t
#define bustype_ODY_GTI_CTL_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CIDR2 "GTI_CTL_CIDR2"
#define device_bar_ODY_GTI_CTL_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CIDR2 0
#define arguments_ODY_GTI_CTL_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cidr3
 *
 * GTI Control Component Identification Register 3
 */
union ody_gti_ctl_cidr3 {
	uint32_t u;
	struct ody_gti_ctl_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_cidr3_s cn; */
};
typedef union ody_gti_ctl_cidr3 ody_gti_ctl_cidr3_t;

#define ODY_GTI_CTL_CIDR3 ODY_GTI_CTL_CIDR3_FUNC()
static inline uint64_t ODY_GTI_CTL_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CIDR3_FUNC(void)
{
	return 0x802000020ffcll;
}

#define typedef_ODY_GTI_CTL_CIDR3 ody_gti_ctl_cidr3_t
#define bustype_ODY_GTI_CTL_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CIDR3 "GTI_CTL_CIDR3"
#define device_bar_ODY_GTI_CTL_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CIDR3 0
#define arguments_ODY_GTI_CTL_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cntacr0
 *
 * GTI Control Access Control 0 Register
 */
union ody_gti_ctl_cntacr0 {
	uint32_t u;
	struct ody_gti_ctl_cntacr0_s {
		uint32_t constant                    : 32;
	} s;
	/* struct ody_gti_ctl_cntacr0_s cn; */
};
typedef union ody_gti_ctl_cntacr0 ody_gti_ctl_cntacr0_t;

#define ODY_GTI_CTL_CNTACR0 ODY_GTI_CTL_CNTACR0_FUNC()
static inline uint64_t ODY_GTI_CTL_CNTACR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CNTACR0_FUNC(void)
{
	return 0x802000020040ll;
}

#define typedef_ODY_GTI_CTL_CNTACR0 ody_gti_ctl_cntacr0_t
#define bustype_ODY_GTI_CTL_CNTACR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CNTACR0 "GTI_CTL_CNTACR0"
#define device_bar_ODY_GTI_CTL_CNTACR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CNTACR0 0
#define arguments_ODY_GTI_CTL_CNTACR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cntfrq
 *
 * GTI Control Counter Frequency Secure Register
 */
union ody_gti_ctl_cntfrq {
	uint32_t u;
	struct ody_gti_ctl_cntfrq_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_gti_ctl_cntfrq_s cn; */
};
typedef union ody_gti_ctl_cntfrq ody_gti_ctl_cntfrq_t;

#define ODY_GTI_CTL_CNTFRQ ODY_GTI_CTL_CNTFRQ_FUNC()
static inline uint64_t ODY_GTI_CTL_CNTFRQ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CNTFRQ_FUNC(void)
{
	return 0x802000020000ll;
}

#define typedef_ODY_GTI_CTL_CNTFRQ ody_gti_ctl_cntfrq_t
#define bustype_ODY_GTI_CTL_CNTFRQ CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CNTFRQ "GTI_CTL_CNTFRQ"
#define device_bar_ODY_GTI_CTL_CNTFRQ 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CNTFRQ 0
#define arguments_ODY_GTI_CTL_CNTFRQ -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cntnsar
 *
 * GTI Control Counter Nonsecure Access Secure Register
 */
union ody_gti_ctl_cntnsar {
	uint32_t u;
	struct ody_gti_ctl_cntnsar_s {
		uint32_t constant                    : 32;
	} s;
	/* struct ody_gti_ctl_cntnsar_s cn; */
};
typedef union ody_gti_ctl_cntnsar ody_gti_ctl_cntnsar_t;

#define ODY_GTI_CTL_CNTNSAR ODY_GTI_CTL_CNTNSAR_FUNC()
static inline uint64_t ODY_GTI_CTL_CNTNSAR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CNTNSAR_FUNC(void)
{
	return 0x802000020004ll;
}

#define typedef_ODY_GTI_CTL_CNTNSAR ody_gti_ctl_cntnsar_t
#define bustype_ODY_GTI_CTL_CNTNSAR CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CNTNSAR "GTI_CTL_CNTNSAR"
#define device_bar_ODY_GTI_CTL_CNTNSAR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CNTNSAR 0
#define arguments_ODY_GTI_CTL_CNTNSAR -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_cnttidr
 *
 * GTI Control Counter Timer ID Register
 */
union ody_gti_ctl_cnttidr {
	uint32_t u;
	struct ody_gti_ctl_cnttidr_s {
		uint32_t constant                    : 32;
	} s;
	/* struct ody_gti_ctl_cnttidr_s cn; */
};
typedef union ody_gti_ctl_cnttidr ody_gti_ctl_cnttidr_t;

#define ODY_GTI_CTL_CNTTIDR ODY_GTI_CTL_CNTTIDR_FUNC()
static inline uint64_t ODY_GTI_CTL_CNTTIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_CNTTIDR_FUNC(void)
{
	return 0x802000020008ll;
}

#define typedef_ODY_GTI_CTL_CNTTIDR ody_gti_ctl_cnttidr_t
#define bustype_ODY_GTI_CTL_CNTTIDR CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_CNTTIDR "GTI_CTL_CNTTIDR"
#define device_bar_ODY_GTI_CTL_CNTTIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_CNTTIDR 0
#define arguments_ODY_GTI_CTL_CNTTIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr0
 *
 * GTI Control Peripheral Identification Register 0
 */
union ody_gti_ctl_pidr0 {
	uint32_t u;
	struct ody_gti_ctl_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_pidr0_s cn; */
};
typedef union ody_gti_ctl_pidr0 ody_gti_ctl_pidr0_t;

#define ODY_GTI_CTL_PIDR0 ODY_GTI_CTL_PIDR0_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR0_FUNC(void)
{
	return 0x802000020fe0ll;
}

#define typedef_ODY_GTI_CTL_PIDR0 ody_gti_ctl_pidr0_t
#define bustype_ODY_GTI_CTL_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR0 "GTI_CTL_PIDR0"
#define device_bar_ODY_GTI_CTL_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR0 0
#define arguments_ODY_GTI_CTL_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr1
 *
 * GTI Control Peripheral Identification Register 1
 */
union ody_gti_ctl_pidr1 {
	uint32_t u;
	struct ody_gti_ctl_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_pidr1_s cn; */
};
typedef union ody_gti_ctl_pidr1 ody_gti_ctl_pidr1_t;

#define ODY_GTI_CTL_PIDR1 ODY_GTI_CTL_PIDR1_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR1_FUNC(void)
{
	return 0x802000020fe4ll;
}

#define typedef_ODY_GTI_CTL_PIDR1 ody_gti_ctl_pidr1_t
#define bustype_ODY_GTI_CTL_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR1 "GTI_CTL_PIDR1"
#define device_bar_ODY_GTI_CTL_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR1 0
#define arguments_ODY_GTI_CTL_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr2
 *
 * GTI Control Peripheral Identification Register 2
 */
union ody_gti_ctl_pidr2 {
	uint32_t u;
	struct ody_gti_ctl_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_pidr2_s cn; */
};
typedef union ody_gti_ctl_pidr2 ody_gti_ctl_pidr2_t;

#define ODY_GTI_CTL_PIDR2 ODY_GTI_CTL_PIDR2_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR2_FUNC(void)
{
	return 0x802000020fe8ll;
}

#define typedef_ODY_GTI_CTL_PIDR2 ody_gti_ctl_pidr2_t
#define bustype_ODY_GTI_CTL_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR2 "GTI_CTL_PIDR2"
#define device_bar_ODY_GTI_CTL_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR2 0
#define arguments_ODY_GTI_CTL_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr3
 *
 * GTI Control Peripheral Identification Register 3
 */
union ody_gti_ctl_pidr3 {
	uint32_t u;
	struct ody_gti_ctl_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_pidr3_s cn; */
};
typedef union ody_gti_ctl_pidr3 ody_gti_ctl_pidr3_t;

#define ODY_GTI_CTL_PIDR3 ODY_GTI_CTL_PIDR3_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR3_FUNC(void)
{
	return 0x802000020fecll;
}

#define typedef_ODY_GTI_CTL_PIDR3 ody_gti_ctl_pidr3_t
#define bustype_ODY_GTI_CTL_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR3 "GTI_CTL_PIDR3"
#define device_bar_ODY_GTI_CTL_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR3 0
#define arguments_ODY_GTI_CTL_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr4
 *
 * GTI Control Peripheral Identification Register 4
 */
union ody_gti_ctl_pidr4 {
	uint32_t u;
	struct ody_gti_ctl_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_ctl_pidr4_s cn; */
};
typedef union ody_gti_ctl_pidr4 ody_gti_ctl_pidr4_t;

#define ODY_GTI_CTL_PIDR4 ODY_GTI_CTL_PIDR4_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR4_FUNC(void)
{
	return 0x802000020fd0ll;
}

#define typedef_ODY_GTI_CTL_PIDR4 ody_gti_ctl_pidr4_t
#define bustype_ODY_GTI_CTL_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR4 "GTI_CTL_PIDR4"
#define device_bar_ODY_GTI_CTL_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR4 0
#define arguments_ODY_GTI_CTL_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr5
 *
 * GTI Control Peripheral Identification Register 5
 */
union ody_gti_ctl_pidr5 {
	uint32_t u;
	struct ody_gti_ctl_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_ctl_pidr5_s cn; */
};
typedef union ody_gti_ctl_pidr5 ody_gti_ctl_pidr5_t;

#define ODY_GTI_CTL_PIDR5 ODY_GTI_CTL_PIDR5_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR5_FUNC(void)
{
	return 0x802000020fd4ll;
}

#define typedef_ODY_GTI_CTL_PIDR5 ody_gti_ctl_pidr5_t
#define bustype_ODY_GTI_CTL_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR5 "GTI_CTL_PIDR5"
#define device_bar_ODY_GTI_CTL_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR5 0
#define arguments_ODY_GTI_CTL_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr6
 *
 * GTI Control Peripheral Identification Register 6
 */
union ody_gti_ctl_pidr6 {
	uint32_t u;
	struct ody_gti_ctl_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_ctl_pidr6_s cn; */
};
typedef union ody_gti_ctl_pidr6 ody_gti_ctl_pidr6_t;

#define ODY_GTI_CTL_PIDR6 ODY_GTI_CTL_PIDR6_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR6_FUNC(void)
{
	return 0x802000020fd8ll;
}

#define typedef_ODY_GTI_CTL_PIDR6 ody_gti_ctl_pidr6_t
#define bustype_ODY_GTI_CTL_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR6 "GTI_CTL_PIDR6"
#define device_bar_ODY_GTI_CTL_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR6 0
#define arguments_ODY_GTI_CTL_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_ctl_pidr7
 *
 * GTI Control Peripheral Identification Register 7
 */
union ody_gti_ctl_pidr7 {
	uint32_t u;
	struct ody_gti_ctl_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_ctl_pidr7_s cn; */
};
typedef union ody_gti_ctl_pidr7 ody_gti_ctl_pidr7_t;

#define ODY_GTI_CTL_PIDR7 ODY_GTI_CTL_PIDR7_FUNC()
static inline uint64_t ODY_GTI_CTL_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CTL_PIDR7_FUNC(void)
{
	return 0x802000020fdcll;
}

#define typedef_ODY_GTI_CTL_PIDR7 ody_gti_ctl_pidr7_t
#define bustype_ODY_GTI_CTL_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GTI_CTL_PIDR7 "GTI_CTL_PIDR7"
#define device_bar_ODY_GTI_CTL_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CTL_PIDR7 0
#define arguments_ODY_GTI_CTL_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t0
 *
 * GTI Per-core Watchdog SCP Interrupt Register
 * Generic timer per-core watchdog SCP interrupts from 0 to 63 core.
 */
union ody_gti_cwd_del3t0 {
	uint64_t u;
	struct ody_gti_cwd_del3t0_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_del3t0_s cn; */
};
typedef union ody_gti_cwd_del3t0 ody_gti_cwd_del3t0_t;

#define ODY_GTI_CWD_DEL3T0 ODY_GTI_CWD_DEL3T0_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T0_FUNC(void)
{
	return 0x802000040880ll;
}

#define typedef_ODY_GTI_CWD_DEL3T0 ody_gti_cwd_del3t0_t
#define bustype_ODY_GTI_CWD_DEL3T0 CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T0 "GTI_CWD_DEL3T0"
#define device_bar_ODY_GTI_CWD_DEL3T0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T0 0
#define arguments_ODY_GTI_CWD_DEL3T0 -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t0_ena_clr
 *
 * GTI Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_gti_cwd_del3t0_ena_clr {
	uint64_t u;
	struct ody_gti_cwd_del3t0_ena_clr_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_del3t0_ena_clr_s cn; */
};
typedef union ody_gti_cwd_del3t0_ena_clr ody_gti_cwd_del3t0_ena_clr_t;

#define ODY_GTI_CWD_DEL3T0_ENA_CLR ODY_GTI_CWD_DEL3T0_ENA_CLR_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T0_ENA_CLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T0_ENA_CLR_FUNC(void)
{
	return 0x8020000408c0ll;
}

#define typedef_ODY_GTI_CWD_DEL3T0_ENA_CLR ody_gti_cwd_del3t0_ena_clr_t
#define bustype_ODY_GTI_CWD_DEL3T0_ENA_CLR CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T0_ENA_CLR "GTI_CWD_DEL3T0_ENA_CLR"
#define device_bar_ODY_GTI_CWD_DEL3T0_ENA_CLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T0_ENA_CLR 0
#define arguments_ODY_GTI_CWD_DEL3T0_ENA_CLR -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t0_ena_set
 *
 * GTI Per-core Watchdog SCP Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gti_cwd_del3t0_ena_set {
	uint64_t u;
	struct ody_gti_cwd_del3t0_ena_set_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_del3t0_ena_set_s cn; */
};
typedef union ody_gti_cwd_del3t0_ena_set ody_gti_cwd_del3t0_ena_set_t;

#define ODY_GTI_CWD_DEL3T0_ENA_SET ODY_GTI_CWD_DEL3T0_ENA_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T0_ENA_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T0_ENA_SET_FUNC(void)
{
	return 0x8020000408e0ll;
}

#define typedef_ODY_GTI_CWD_DEL3T0_ENA_SET ody_gti_cwd_del3t0_ena_set_t
#define bustype_ODY_GTI_CWD_DEL3T0_ENA_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T0_ENA_SET "GTI_CWD_DEL3T0_ENA_SET"
#define device_bar_ODY_GTI_CWD_DEL3T0_ENA_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T0_ENA_SET 0
#define arguments_ODY_GTI_CWD_DEL3T0_ENA_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t0_set
 *
 * GTI Per-core Watchdog SCP Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gti_cwd_del3t0_set {
	uint64_t u;
	struct ody_gti_cwd_del3t0_set_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_del3t0_set_s cn; */
};
typedef union ody_gti_cwd_del3t0_set ody_gti_cwd_del3t0_set_t;

#define ODY_GTI_CWD_DEL3T0_SET ODY_GTI_CWD_DEL3T0_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T0_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T0_SET_FUNC(void)
{
	return 0x8020000408a0ll;
}

#define typedef_ODY_GTI_CWD_DEL3T0_SET ody_gti_cwd_del3t0_set_t
#define bustype_ODY_GTI_CWD_DEL3T0_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T0_SET "GTI_CWD_DEL3T0_SET"
#define device_bar_ODY_GTI_CWD_DEL3T0_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T0_SET 0
#define arguments_ODY_GTI_CWD_DEL3T0_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t1
 *
 * GTI Per-core Watchdog SCP Interrupt Register
 * Generic timer per-core watchdog SCP interrupts from 64 to 81 core.
 */
union ody_gti_cwd_del3t1 {
	uint64_t u;
	struct ody_gti_cwd_del3t1_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_del3t1_s cn; */
};
typedef union ody_gti_cwd_del3t1 ody_gti_cwd_del3t1_t;

#define ODY_GTI_CWD_DEL3T1 ODY_GTI_CWD_DEL3T1_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T1_FUNC(void)
{
	return 0x802000040888ll;
}

#define typedef_ODY_GTI_CWD_DEL3T1 ody_gti_cwd_del3t1_t
#define bustype_ODY_GTI_CWD_DEL3T1 CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T1 "GTI_CWD_DEL3T1"
#define device_bar_ODY_GTI_CWD_DEL3T1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T1 0
#define arguments_ODY_GTI_CWD_DEL3T1 -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t1_ena_clr
 *
 * GTI Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_gti_cwd_del3t1_ena_clr {
	uint64_t u;
	struct ody_gti_cwd_del3t1_ena_clr_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_del3t1_ena_clr_s cn; */
};
typedef union ody_gti_cwd_del3t1_ena_clr ody_gti_cwd_del3t1_ena_clr_t;

#define ODY_GTI_CWD_DEL3T1_ENA_CLR ODY_GTI_CWD_DEL3T1_ENA_CLR_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T1_ENA_CLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T1_ENA_CLR_FUNC(void)
{
	return 0x8020000408c8ll;
}

#define typedef_ODY_GTI_CWD_DEL3T1_ENA_CLR ody_gti_cwd_del3t1_ena_clr_t
#define bustype_ODY_GTI_CWD_DEL3T1_ENA_CLR CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T1_ENA_CLR "GTI_CWD_DEL3T1_ENA_CLR"
#define device_bar_ODY_GTI_CWD_DEL3T1_ENA_CLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T1_ENA_CLR 0
#define arguments_ODY_GTI_CWD_DEL3T1_ENA_CLR -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t1_ena_set
 *
 * GTI Per-core Watchdog SCP Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gti_cwd_del3t1_ena_set {
	uint64_t u;
	struct ody_gti_cwd_del3t1_ena_set_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_del3t1_ena_set_s cn; */
};
typedef union ody_gti_cwd_del3t1_ena_set ody_gti_cwd_del3t1_ena_set_t;

#define ODY_GTI_CWD_DEL3T1_ENA_SET ODY_GTI_CWD_DEL3T1_ENA_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T1_ENA_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T1_ENA_SET_FUNC(void)
{
	return 0x8020000408e8ll;
}

#define typedef_ODY_GTI_CWD_DEL3T1_ENA_SET ody_gti_cwd_del3t1_ena_set_t
#define bustype_ODY_GTI_CWD_DEL3T1_ENA_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T1_ENA_SET "GTI_CWD_DEL3T1_ENA_SET"
#define device_bar_ODY_GTI_CWD_DEL3T1_ENA_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T1_ENA_SET 0
#define arguments_ODY_GTI_CWD_DEL3T1_ENA_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_del3t1_set
 *
 * GTI Per-core Watchdog SCP Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gti_cwd_del3t1_set {
	uint64_t u;
	struct ody_gti_cwd_del3t1_set_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_del3t1_set_s cn; */
};
typedef union ody_gti_cwd_del3t1_set ody_gti_cwd_del3t1_set_t;

#define ODY_GTI_CWD_DEL3T1_SET ODY_GTI_CWD_DEL3T1_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_DEL3T1_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_DEL3T1_SET_FUNC(void)
{
	return 0x8020000408a8ll;
}

#define typedef_ODY_GTI_CWD_DEL3T1_SET ody_gti_cwd_del3t1_set_t
#define bustype_ODY_GTI_CWD_DEL3T1_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_DEL3T1_SET "GTI_CWD_DEL3T1_SET"
#define device_bar_ODY_GTI_CWD_DEL3T1_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_DEL3T1_SET 0
#define arguments_ODY_GTI_CWD_DEL3T1_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int0
 *
 * GTI Per-core Watchdog Interrupt Register
 * Generic timer per-core watchdog interrupts from 0 to 63 core.
 */
union ody_gti_cwd_int0 {
	uint64_t u;
	struct ody_gti_cwd_int0_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_int0_s cn; */
};
typedef union ody_gti_cwd_int0 ody_gti_cwd_int0_t;

#define ODY_GTI_CWD_INT0 ODY_GTI_CWD_INT0_FUNC()
static inline uint64_t ODY_GTI_CWD_INT0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT0_FUNC(void)
{
	return 0x802000040800ll;
}

#define typedef_ODY_GTI_CWD_INT0 ody_gti_cwd_int0_t
#define bustype_ODY_GTI_CWD_INT0 CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT0 "GTI_CWD_INT0"
#define device_bar_ODY_GTI_CWD_INT0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT0 0
#define arguments_ODY_GTI_CWD_INT0 -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int0_ena_clr
 *
 * GTI Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_gti_cwd_int0_ena_clr {
	uint64_t u;
	struct ody_gti_cwd_int0_ena_clr_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_int0_ena_clr_s cn; */
};
typedef union ody_gti_cwd_int0_ena_clr ody_gti_cwd_int0_ena_clr_t;

#define ODY_GTI_CWD_INT0_ENA_CLR ODY_GTI_CWD_INT0_ENA_CLR_FUNC()
static inline uint64_t ODY_GTI_CWD_INT0_ENA_CLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT0_ENA_CLR_FUNC(void)
{
	return 0x802000040840ll;
}

#define typedef_ODY_GTI_CWD_INT0_ENA_CLR ody_gti_cwd_int0_ena_clr_t
#define bustype_ODY_GTI_CWD_INT0_ENA_CLR CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT0_ENA_CLR "GTI_CWD_INT0_ENA_CLR"
#define device_bar_ODY_GTI_CWD_INT0_ENA_CLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT0_ENA_CLR 0
#define arguments_ODY_GTI_CWD_INT0_ENA_CLR -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int0_ena_set
 *
 * GTI Per-core Watchdog Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gti_cwd_int0_ena_set {
	uint64_t u;
	struct ody_gti_cwd_int0_ena_set_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_int0_ena_set_s cn; */
};
typedef union ody_gti_cwd_int0_ena_set ody_gti_cwd_int0_ena_set_t;

#define ODY_GTI_CWD_INT0_ENA_SET ODY_GTI_CWD_INT0_ENA_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_INT0_ENA_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT0_ENA_SET_FUNC(void)
{
	return 0x802000040860ll;
}

#define typedef_ODY_GTI_CWD_INT0_ENA_SET ody_gti_cwd_int0_ena_set_t
#define bustype_ODY_GTI_CWD_INT0_ENA_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT0_ENA_SET "GTI_CWD_INT0_ENA_SET"
#define device_bar_ODY_GTI_CWD_INT0_ENA_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT0_ENA_SET 0
#define arguments_ODY_GTI_CWD_INT0_ENA_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int0_set
 *
 * GTI Per-core Watchdog Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gti_cwd_int0_set {
	uint64_t u;
	struct ody_gti_cwd_int0_set_s {
		uint64_t core                        : 64;
	} s;
	/* struct ody_gti_cwd_int0_set_s cn; */
};
typedef union ody_gti_cwd_int0_set ody_gti_cwd_int0_set_t;

#define ODY_GTI_CWD_INT0_SET ODY_GTI_CWD_INT0_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_INT0_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT0_SET_FUNC(void)
{
	return 0x802000040820ll;
}

#define typedef_ODY_GTI_CWD_INT0_SET ody_gti_cwd_int0_set_t
#define bustype_ODY_GTI_CWD_INT0_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT0_SET "GTI_CWD_INT0_SET"
#define device_bar_ODY_GTI_CWD_INT0_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT0_SET 0
#define arguments_ODY_GTI_CWD_INT0_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int1
 *
 * GTI Per-core Watchdog Interrupt Register
 * Generic timer per-core watchdog interrupts from 64 to 81 core.
 */
union ody_gti_cwd_int1 {
	uint64_t u;
	struct ody_gti_cwd_int1_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_int1_s cn; */
};
typedef union ody_gti_cwd_int1 ody_gti_cwd_int1_t;

#define ODY_GTI_CWD_INT1 ODY_GTI_CWD_INT1_FUNC()
static inline uint64_t ODY_GTI_CWD_INT1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT1_FUNC(void)
{
	return 0x802000040808ll;
}

#define typedef_ODY_GTI_CWD_INT1 ody_gti_cwd_int1_t
#define bustype_ODY_GTI_CWD_INT1 CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT1 "GTI_CWD_INT1"
#define device_bar_ODY_GTI_CWD_INT1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT1 0
#define arguments_ODY_GTI_CWD_INT1 -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int1_ena_clr
 *
 * GTI Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_gti_cwd_int1_ena_clr {
	uint64_t u;
	struct ody_gti_cwd_int1_ena_clr_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_int1_ena_clr_s cn; */
};
typedef union ody_gti_cwd_int1_ena_clr ody_gti_cwd_int1_ena_clr_t;

#define ODY_GTI_CWD_INT1_ENA_CLR ODY_GTI_CWD_INT1_ENA_CLR_FUNC()
static inline uint64_t ODY_GTI_CWD_INT1_ENA_CLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT1_ENA_CLR_FUNC(void)
{
	return 0x802000040848ll;
}

#define typedef_ODY_GTI_CWD_INT1_ENA_CLR ody_gti_cwd_int1_ena_clr_t
#define bustype_ODY_GTI_CWD_INT1_ENA_CLR CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT1_ENA_CLR "GTI_CWD_INT1_ENA_CLR"
#define device_bar_ODY_GTI_CWD_INT1_ENA_CLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT1_ENA_CLR 0
#define arguments_ODY_GTI_CWD_INT1_ENA_CLR -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int1_ena_set
 *
 * GTI Per-core Watchdog Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gti_cwd_int1_ena_set {
	uint64_t u;
	struct ody_gti_cwd_int1_ena_set_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_int1_ena_set_s cn; */
};
typedef union ody_gti_cwd_int1_ena_set ody_gti_cwd_int1_ena_set_t;

#define ODY_GTI_CWD_INT1_ENA_SET ODY_GTI_CWD_INT1_ENA_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_INT1_ENA_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT1_ENA_SET_FUNC(void)
{
	return 0x802000040868ll;
}

#define typedef_ODY_GTI_CWD_INT1_ENA_SET ody_gti_cwd_int1_ena_set_t
#define bustype_ODY_GTI_CWD_INT1_ENA_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT1_ENA_SET "GTI_CWD_INT1_ENA_SET"
#define device_bar_ODY_GTI_CWD_INT1_ENA_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT1_ENA_SET 0
#define arguments_ODY_GTI_CWD_INT1_ENA_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_int1_set
 *
 * GTI Per-core Watchdog Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gti_cwd_int1_set {
	uint64_t u;
	struct ody_gti_cwd_int1_set_s {
		uint64_t core                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gti_cwd_int1_set_s cn; */
};
typedef union ody_gti_cwd_int1_set ody_gti_cwd_int1_set_t;

#define ODY_GTI_CWD_INT1_SET ODY_GTI_CWD_INT1_SET_FUNC()
static inline uint64_t ODY_GTI_CWD_INT1_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_INT1_SET_FUNC(void)
{
	return 0x802000040828ll;
}

#define typedef_ODY_GTI_CWD_INT1_SET ody_gti_cwd_int1_set_t
#define bustype_ODY_GTI_CWD_INT1_SET CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_INT1_SET "GTI_CWD_INT1_SET"
#define device_bar_ODY_GTI_CWD_INT1_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_INT1_SET 0
#define arguments_ODY_GTI_CWD_INT1_SET -1, -1, -1, -1

/**
 * Register (NCB) gti_cwd_poke#
 *
 * GTI Per-core Watchdog Poke Registers
 * Per-core watchdog poke. Writing any value to this register does the following:
 * * Clears any pending interrupt generated by the associated watchdog.
 * * Resets GTI_CWD_WDOG()[STATE] to 0x0.
 * * Sets GTI_CWD_WDOG()[CNT] to (GTI_CWD_WDOG()[LEN] \<\< 8).
 *
 * Reading this register returns the associated GTI_CWD_WDOG() register.
 */
union ody_gti_cwd_pokex {
	uint64_t u;
	struct ody_gti_cwd_pokex_s {
		uint64_t mode                        : 2;
		uint64_t state                       : 2;
		uint64_t len                         : 16;
		uint64_t cnt                         : 24;
		uint64_t dstop                       : 1;
		uint64_t gstop                       : 1;
		uint64_t zero                        : 18;
	} s;
	/* struct ody_gti_cwd_pokex_s cn; */
};
typedef union ody_gti_cwd_pokex ody_gti_cwd_pokex_t;

static inline uint64_t ODY_GTI_CWD_POKEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_POKEX(uint64_t a)
{
	if (a <= 81)
		return 0x802000050000ll + 8ll * ((a) & 0x7f);
	__ody_csr_fatal("GTI_CWD_POKEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_CWD_POKEX(a) ody_gti_cwd_pokex_t
#define bustype_ODY_GTI_CWD_POKEX(a) CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_POKEX(a) "GTI_CWD_POKEX"
#define device_bar_ODY_GTI_CWD_POKEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_POKEX(a) (a)
#define arguments_ODY_GTI_CWD_POKEX(a) (a), -1, -1, -1

/**
 * Register (NCB) gti_cwd_wdog0#
 *
 * GTI CWD Watchdog Registers
 * These registers allow configuring the per-core watchdogs. The number of per-core
 * (from 0 to 63 core: first 64 cores)
 * watchdogs exceeds the number of cores; software may leave the remaining unused, or
 * use them for other purposes.
 */
union ody_gti_cwd_wdog0x {
	uint64_t u;
	struct ody_gti_cwd_wdog0x_s {
		uint64_t mode                        : 2;
		uint64_t state                       : 2;
		uint64_t len                         : 16;
		uint64_t cnt                         : 24;
		uint64_t dstop                       : 1;
		uint64_t gstop                       : 1;
		uint64_t reserved_46_63              : 18;
	} s;
	/* struct ody_gti_cwd_wdog0x_s cn; */
};
typedef union ody_gti_cwd_wdog0x ody_gti_cwd_wdog0x_t;

static inline uint64_t ODY_GTI_CWD_WDOG0X(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_WDOG0X(uint64_t a)
{
	if (a <= 63)
		return 0x802000040000ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("GTI_CWD_WDOG0X", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_CWD_WDOG0X(a) ody_gti_cwd_wdog0x_t
#define bustype_ODY_GTI_CWD_WDOG0X(a) CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_WDOG0X(a) "GTI_CWD_WDOG0X"
#define device_bar_ODY_GTI_CWD_WDOG0X(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_WDOG0X(a) (a)
#define arguments_ODY_GTI_CWD_WDOG0X(a) (a), -1, -1, -1

/**
 * Register (NCB) gti_cwd_wdog1#
 *
 * GTI CWD Watchdog Registers
 * These registers allow configuring the per-core watchdogs. The number of per-core
 * (next cores from 64 to 81: total 82 cores)
 * watchdogs exceeds the number of cores; software may leave the remaining unused, or
 * use them for other purposes.
 */
union ody_gti_cwd_wdog1x {
	uint64_t u;
	struct ody_gti_cwd_wdog1x_s {
		uint64_t mode                        : 2;
		uint64_t state                       : 2;
		uint64_t len                         : 16;
		uint64_t cnt                         : 24;
		uint64_t dstop                       : 1;
		uint64_t gstop                       : 1;
		uint64_t reserved_46_63              : 18;
	} s;
	/* struct ody_gti_cwd_wdog1x_s cn; */
};
typedef union ody_gti_cwd_wdog1x ody_gti_cwd_wdog1x_t;

static inline uint64_t ODY_GTI_CWD_WDOG1X(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_CWD_WDOG1X(uint64_t a)
{
	if (a <= 17)
		return 0x802000040200ll + 8ll * ((a) & 0x1f);
	__ody_csr_fatal("GTI_CWD_WDOG1X", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_CWD_WDOG1X(a) ody_gti_cwd_wdog1x_t
#define bustype_ODY_GTI_CWD_WDOG1X(a) CSR_TYPE_NCB
#define basename_ODY_GTI_CWD_WDOG1X(a) "GTI_CWD_WDOG1X"
#define device_bar_ODY_GTI_CWD_WDOG1X(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_CWD_WDOG1X(a) (a)
#define arguments_ODY_GTI_CWD_WDOG1X(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_force_clken
 *
 * GTI Force Clock Enable Register
 */
union ody_gti_force_clken {
	uint32_t u;
	struct ody_gti_force_clken_s {
		uint32_t clken                       : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_gti_force_clken_s cn; */
};
typedef union ody_gti_force_clken ody_gti_force_clken_t;

#define ODY_GTI_FORCE_CLKEN ODY_GTI_FORCE_CLKEN_FUNC()
static inline uint64_t ODY_GTI_FORCE_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_FORCE_CLKEN_FUNC(void)
{
	return 0x8020000e0000ll;
}

#define typedef_ODY_GTI_FORCE_CLKEN ody_gti_force_clken_t
#define bustype_ODY_GTI_FORCE_CLKEN CSR_TYPE_NCB32b
#define basename_ODY_GTI_FORCE_CLKEN "GTI_FORCE_CLKEN"
#define device_bar_ODY_GTI_FORCE_CLKEN 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_FORCE_CLKEN 0
#define arguments_ODY_GTI_FORCE_CLKEN -1, -1, -1, -1

/**
 * Register (NCB32b) gti_imp_const
 *
 * GTI Implementation Constant Register
 */
union ody_gti_imp_const {
	uint32_t u;
	struct ody_gti_imp_const_s {
		uint32_t wdogs                       : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_imp_const_s cn; */
};
typedef union ody_gti_imp_const ody_gti_imp_const_t;

#define ODY_GTI_IMP_CONST ODY_GTI_IMP_CONST_FUNC()
static inline uint64_t ODY_GTI_IMP_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_IMP_CONST_FUNC(void)
{
	return 0x8020000e0010ll;
}

#define typedef_ODY_GTI_IMP_CONST ody_gti_imp_const_t
#define bustype_ODY_GTI_IMP_CONST CSR_TYPE_NCB32b
#define basename_ODY_GTI_IMP_CONST "GTI_IMP_CONST"
#define device_bar_ODY_GTI_IMP_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_IMP_CONST 0
#define arguments_ODY_GTI_IMP_CONST -1, -1, -1, -1

/**
 * Register (NCB) gti_msix_pba#
 *
 * GTI MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the GTI_INT_VEC_E enumeration.
 */
union ody_gti_msix_pbax {
	uint64_t u;
	struct ody_gti_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_gti_msix_pbax_s cn; */
};
typedef union ody_gti_msix_pbax ody_gti_msix_pbax_t;

static inline uint64_t ODY_GTI_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_MSIX_PBAX(uint64_t a)
{
	if (a <= 2)
		return 0x80200f0f0000ll + 8ll * ((a) & 0x3);
	__ody_csr_fatal("GTI_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_MSIX_PBAX(a) ody_gti_msix_pbax_t
#define bustype_ODY_GTI_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_ODY_GTI_MSIX_PBAX(a) "GTI_MSIX_PBAX"
#define device_bar_ODY_GTI_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GTI_MSIX_PBAX(a) (a)
#define arguments_ODY_GTI_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (NCB) gti_msix_vec#_addr
 *
 * GTI MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the GTI_INT_VEC_E enumeration.
 */
union ody_gti_msix_vecx_addr {
	uint64_t u;
	struct ody_gti_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_gti_msix_vecx_addr_s cn; */
};
typedef union ody_gti_msix_vecx_addr ody_gti_msix_vecx_addr_t;

static inline uint64_t ODY_GTI_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_MSIX_VECX_ADDR(uint64_t a)
{
	if (a <= 173)
		return 0x80200f000000ll + 0x10ll * ((a) & 0xff);
	__ody_csr_fatal("GTI_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_MSIX_VECX_ADDR(a) ody_gti_msix_vecx_addr_t
#define bustype_ODY_GTI_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_GTI_MSIX_VECX_ADDR(a) "GTI_MSIX_VECX_ADDR"
#define device_bar_ODY_GTI_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GTI_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_GTI_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gti_msix_vec#_ctl
 *
 * GTI MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the GTI_INT_VEC_E enumeration.
 */
union ody_gti_msix_vecx_ctl {
	uint64_t u;
	struct ody_gti_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_gti_msix_vecx_ctl_s cn; */
};
typedef union ody_gti_msix_vecx_ctl ody_gti_msix_vecx_ctl_t;

static inline uint64_t ODY_GTI_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_MSIX_VECX_CTL(uint64_t a)
{
	if (a <= 173)
		return 0x80200f000008ll + 0x10ll * ((a) & 0xff);
	__ody_csr_fatal("GTI_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_MSIX_VECX_CTL(a) ody_gti_msix_vecx_ctl_t
#define bustype_ODY_GTI_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_ODY_GTI_MSIX_VECX_CTL(a) "GTI_MSIX_VECX_CTL"
#define device_bar_ODY_GTI_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GTI_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_GTI_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_rd_cidr0
 *
 * GTI Counter Read Component Identification Register 0
 */
union ody_gti_rd_cidr0 {
	uint32_t u;
	struct ody_gti_rd_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_cidr0_s cn; */
};
typedef union ody_gti_rd_cidr0 ody_gti_rd_cidr0_t;

#define ODY_GTI_RD_CIDR0 ODY_GTI_RD_CIDR0_FUNC()
static inline uint64_t ODY_GTI_RD_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_CIDR0_FUNC(void)
{
	return 0x802000010ff0ll;
}

#define typedef_ODY_GTI_RD_CIDR0 ody_gti_rd_cidr0_t
#define bustype_ODY_GTI_RD_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_CIDR0 "GTI_RD_CIDR0"
#define device_bar_ODY_GTI_RD_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_CIDR0 0
#define arguments_ODY_GTI_RD_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_cidr1
 *
 * GTI Counter Read Component Identification Register 1
 */
union ody_gti_rd_cidr1 {
	uint32_t u;
	struct ody_gti_rd_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_cidr1_s cn; */
};
typedef union ody_gti_rd_cidr1 ody_gti_rd_cidr1_t;

#define ODY_GTI_RD_CIDR1 ODY_GTI_RD_CIDR1_FUNC()
static inline uint64_t ODY_GTI_RD_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_CIDR1_FUNC(void)
{
	return 0x802000010ff4ll;
}

#define typedef_ODY_GTI_RD_CIDR1 ody_gti_rd_cidr1_t
#define bustype_ODY_GTI_RD_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_CIDR1 "GTI_RD_CIDR1"
#define device_bar_ODY_GTI_RD_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_CIDR1 0
#define arguments_ODY_GTI_RD_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_cidr2
 *
 * GTI Counter Read Component Identification Register 2
 */
union ody_gti_rd_cidr2 {
	uint32_t u;
	struct ody_gti_rd_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_cidr2_s cn; */
};
typedef union ody_gti_rd_cidr2 ody_gti_rd_cidr2_t;

#define ODY_GTI_RD_CIDR2 ODY_GTI_RD_CIDR2_FUNC()
static inline uint64_t ODY_GTI_RD_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_CIDR2_FUNC(void)
{
	return 0x802000010ff8ll;
}

#define typedef_ODY_GTI_RD_CIDR2 ody_gti_rd_cidr2_t
#define bustype_ODY_GTI_RD_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_CIDR2 "GTI_RD_CIDR2"
#define device_bar_ODY_GTI_RD_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_CIDR2 0
#define arguments_ODY_GTI_RD_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_cidr3
 *
 * GTI Counter Read Component Identification Register 3
 */
union ody_gti_rd_cidr3 {
	uint32_t u;
	struct ody_gti_rd_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_cidr3_s cn; */
};
typedef union ody_gti_rd_cidr3 ody_gti_rd_cidr3_t;

#define ODY_GTI_RD_CIDR3 ODY_GTI_RD_CIDR3_FUNC()
static inline uint64_t ODY_GTI_RD_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_CIDR3_FUNC(void)
{
	return 0x802000010ffcll;
}

#define typedef_ODY_GTI_RD_CIDR3 ody_gti_rd_cidr3_t
#define bustype_ODY_GTI_RD_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_CIDR3 "GTI_RD_CIDR3"
#define device_bar_ODY_GTI_RD_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_CIDR3 0
#define arguments_ODY_GTI_RD_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB) gti_rd_cntcv
 *
 * GTI Counter Read Value Register
 */
union ody_gti_rd_cntcv {
	uint64_t u;
	struct ody_gti_rd_cntcv_s {
		uint64_t cnt                         : 64;
	} s;
	/* struct ody_gti_rd_cntcv_s cn; */
};
typedef union ody_gti_rd_cntcv ody_gti_rd_cntcv_t;

#define ODY_GTI_RD_CNTCV ODY_GTI_RD_CNTCV_FUNC()
static inline uint64_t ODY_GTI_RD_CNTCV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_CNTCV_FUNC(void)
{
	return 0x802000010000ll;
}

#define typedef_ODY_GTI_RD_CNTCV ody_gti_rd_cntcv_t
#define bustype_ODY_GTI_RD_CNTCV CSR_TYPE_NCB
#define basename_ODY_GTI_RD_CNTCV "GTI_RD_CNTCV"
#define device_bar_ODY_GTI_RD_CNTCV 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_CNTCV 0
#define arguments_ODY_GTI_RD_CNTCV -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr0
 *
 * GTI Counter Read Peripheral Identification Register 0
 */
union ody_gti_rd_pidr0 {
	uint32_t u;
	struct ody_gti_rd_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_pidr0_s cn; */
};
typedef union ody_gti_rd_pidr0 ody_gti_rd_pidr0_t;

#define ODY_GTI_RD_PIDR0 ODY_GTI_RD_PIDR0_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR0_FUNC(void)
{
	return 0x802000010fe0ll;
}

#define typedef_ODY_GTI_RD_PIDR0 ody_gti_rd_pidr0_t
#define bustype_ODY_GTI_RD_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR0 "GTI_RD_PIDR0"
#define device_bar_ODY_GTI_RD_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR0 0
#define arguments_ODY_GTI_RD_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr1
 *
 * GTI Counter Read Peripheral Identification Register 1
 */
union ody_gti_rd_pidr1 {
	uint32_t u;
	struct ody_gti_rd_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_pidr1_s cn; */
};
typedef union ody_gti_rd_pidr1 ody_gti_rd_pidr1_t;

#define ODY_GTI_RD_PIDR1 ODY_GTI_RD_PIDR1_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR1_FUNC(void)
{
	return 0x802000010fe4ll;
}

#define typedef_ODY_GTI_RD_PIDR1 ody_gti_rd_pidr1_t
#define bustype_ODY_GTI_RD_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR1 "GTI_RD_PIDR1"
#define device_bar_ODY_GTI_RD_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR1 0
#define arguments_ODY_GTI_RD_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr2
 *
 * GTI Counter Read Peripheral Identification Register 2
 */
union ody_gti_rd_pidr2 {
	uint32_t u;
	struct ody_gti_rd_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_pidr2_s cn; */
};
typedef union ody_gti_rd_pidr2 ody_gti_rd_pidr2_t;

#define ODY_GTI_RD_PIDR2 ODY_GTI_RD_PIDR2_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR2_FUNC(void)
{
	return 0x802000010fe8ll;
}

#define typedef_ODY_GTI_RD_PIDR2 ody_gti_rd_pidr2_t
#define bustype_ODY_GTI_RD_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR2 "GTI_RD_PIDR2"
#define device_bar_ODY_GTI_RD_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR2 0
#define arguments_ODY_GTI_RD_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr3
 *
 * GTI Counter Read Peripheral Identification Register 3
 */
union ody_gti_rd_pidr3 {
	uint32_t u;
	struct ody_gti_rd_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_pidr3_s cn; */
};
typedef union ody_gti_rd_pidr3 ody_gti_rd_pidr3_t;

#define ODY_GTI_RD_PIDR3 ODY_GTI_RD_PIDR3_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR3_FUNC(void)
{
	return 0x802000010fecll;
}

#define typedef_ODY_GTI_RD_PIDR3 ody_gti_rd_pidr3_t
#define bustype_ODY_GTI_RD_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR3 "GTI_RD_PIDR3"
#define device_bar_ODY_GTI_RD_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR3 0
#define arguments_ODY_GTI_RD_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr4
 *
 * GTI Counter Read Peripheral Identification Register 4
 */
union ody_gti_rd_pidr4 {
	uint32_t u;
	struct ody_gti_rd_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_rd_pidr4_s cn; */
};
typedef union ody_gti_rd_pidr4 ody_gti_rd_pidr4_t;

#define ODY_GTI_RD_PIDR4 ODY_GTI_RD_PIDR4_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR4_FUNC(void)
{
	return 0x802000010fd0ll;
}

#define typedef_ODY_GTI_RD_PIDR4 ody_gti_rd_pidr4_t
#define bustype_ODY_GTI_RD_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR4 "GTI_RD_PIDR4"
#define device_bar_ODY_GTI_RD_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR4 0
#define arguments_ODY_GTI_RD_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr5
 *
 * GTI Counter Read Peripheral Identification Register 5
 */
union ody_gti_rd_pidr5 {
	uint32_t u;
	struct ody_gti_rd_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_rd_pidr5_s cn; */
};
typedef union ody_gti_rd_pidr5 ody_gti_rd_pidr5_t;

#define ODY_GTI_RD_PIDR5 ODY_GTI_RD_PIDR5_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR5_FUNC(void)
{
	return 0x802000010fd4ll;
}

#define typedef_ODY_GTI_RD_PIDR5 ody_gti_rd_pidr5_t
#define bustype_ODY_GTI_RD_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR5 "GTI_RD_PIDR5"
#define device_bar_ODY_GTI_RD_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR5 0
#define arguments_ODY_GTI_RD_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr6
 *
 * GTI Counter Read Peripheral Identification Register 6
 */
union ody_gti_rd_pidr6 {
	uint32_t u;
	struct ody_gti_rd_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_rd_pidr6_s cn; */
};
typedef union ody_gti_rd_pidr6 ody_gti_rd_pidr6_t;

#define ODY_GTI_RD_PIDR6 ODY_GTI_RD_PIDR6_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR6_FUNC(void)
{
	return 0x802000010fd8ll;
}

#define typedef_ODY_GTI_RD_PIDR6 ody_gti_rd_pidr6_t
#define bustype_ODY_GTI_RD_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR6 "GTI_RD_PIDR6"
#define device_bar_ODY_GTI_RD_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR6 0
#define arguments_ODY_GTI_RD_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_rd_pidr7
 *
 * GTI Counter Read Peripheral Identification Register 7
 */
union ody_gti_rd_pidr7 {
	uint32_t u;
	struct ody_gti_rd_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_rd_pidr7_s cn; */
};
typedef union ody_gti_rd_pidr7 ody_gti_rd_pidr7_t;

#define ODY_GTI_RD_PIDR7 ODY_GTI_RD_PIDR7_FUNC()
static inline uint64_t ODY_GTI_RD_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_RD_PIDR7_FUNC(void)
{
	return 0x802000010fdcll;
}

#define typedef_ODY_GTI_RD_PIDR7 ody_gti_rd_pidr7_t
#define bustype_ODY_GTI_RD_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GTI_RD_PIDR7 "GTI_RD_PIDR7"
#define device_bar_ODY_GTI_RD_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_RD_PIDR7 0
#define arguments_ODY_GTI_RD_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_cidr0
 *
 * GTI Watchdog Control Component Identification Register 0
 */
union ody_gti_wcx_cidr0 {
	uint32_t u;
	struct ody_gti_wcx_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_cidr0_s cn; */
};
typedef union ody_gti_wcx_cidr0 ody_gti_wcx_cidr0_t;

static inline uint64_t ODY_GTI_WCX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_CIDR0(uint64_t a)
{
	if (a <= 1)
		return 0x802000080ff0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_CIDR0(a) ody_gti_wcx_cidr0_t
#define bustype_ODY_GTI_WCX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_CIDR0(a) "GTI_WCX_CIDR0"
#define device_bar_ODY_GTI_WCX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_CIDR0(a) (a)
#define arguments_ODY_GTI_WCX_CIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_cidr1
 *
 * GTI Watchdog Control Component Identification Register 1
 */
union ody_gti_wcx_cidr1 {
	uint32_t u;
	struct ody_gti_wcx_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_cidr1_s cn; */
};
typedef union ody_gti_wcx_cidr1 ody_gti_wcx_cidr1_t;

static inline uint64_t ODY_GTI_WCX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_CIDR1(uint64_t a)
{
	if (a <= 1)
		return 0x802000080ff4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_CIDR1(a) ody_gti_wcx_cidr1_t
#define bustype_ODY_GTI_WCX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_CIDR1(a) "GTI_WCX_CIDR1"
#define device_bar_ODY_GTI_WCX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_CIDR1(a) (a)
#define arguments_ODY_GTI_WCX_CIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_cidr2
 *
 * GTI Watchdog Control Component Identification Register 2
 */
union ody_gti_wcx_cidr2 {
	uint32_t u;
	struct ody_gti_wcx_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_cidr2_s cn; */
};
typedef union ody_gti_wcx_cidr2 ody_gti_wcx_cidr2_t;

static inline uint64_t ODY_GTI_WCX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_CIDR2(uint64_t a)
{
	if (a <= 1)
		return 0x802000080ff8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_CIDR2(a) ody_gti_wcx_cidr2_t
#define bustype_ODY_GTI_WCX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_CIDR2(a) "GTI_WCX_CIDR2"
#define device_bar_ODY_GTI_WCX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_CIDR2(a) (a)
#define arguments_ODY_GTI_WCX_CIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_cidr3
 *
 * GTI Watchdog Control Component Identification Register 3
 */
union ody_gti_wcx_cidr3 {
	uint32_t u;
	struct ody_gti_wcx_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_cidr3_s cn; */
};
typedef union ody_gti_wcx_cidr3 ody_gti_wcx_cidr3_t;

static inline uint64_t ODY_GTI_WCX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_CIDR3(uint64_t a)
{
	if (a <= 1)
		return 0x802000080ffcll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_CIDR3(a) ody_gti_wcx_cidr3_t
#define bustype_ODY_GTI_WCX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_CIDR3(a) "GTI_WCX_CIDR3"
#define device_bar_ODY_GTI_WCX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_CIDR3(a) (a)
#define arguments_ODY_GTI_WCX_CIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr0
 *
 * GTI Watchdog Control Peripheral Identification Register 0
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_pidr0 {
	uint32_t u;
	struct ody_gti_wcx_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_pidr0_s cn; */
};
typedef union ody_gti_wcx_pidr0 ody_gti_wcx_pidr0_t;

static inline uint64_t ODY_GTI_WCX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR0(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fe0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR0(a) ody_gti_wcx_pidr0_t
#define bustype_ODY_GTI_WCX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR0(a) "GTI_WCX_PIDR0"
#define device_bar_ODY_GTI_WCX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR0(a) (a)
#define arguments_ODY_GTI_WCX_PIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr1
 *
 * GTI Watchdog Control Peripheral Identification Register 1
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_pidr1 {
	uint32_t u;
	struct ody_gti_wcx_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_pidr1_s cn; */
};
typedef union ody_gti_wcx_pidr1 ody_gti_wcx_pidr1_t;

static inline uint64_t ODY_GTI_WCX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR1(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fe4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR1(a) ody_gti_wcx_pidr1_t
#define bustype_ODY_GTI_WCX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR1(a) "GTI_WCX_PIDR1"
#define device_bar_ODY_GTI_WCX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR1(a) (a)
#define arguments_ODY_GTI_WCX_PIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr2
 *
 * GTI Watchdog Control Peripheral Identification Register 2
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_pidr2 {
	uint32_t u;
	struct ody_gti_wcx_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_pidr2_s cn; */
};
typedef union ody_gti_wcx_pidr2 ody_gti_wcx_pidr2_t;

static inline uint64_t ODY_GTI_WCX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR2(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fe8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR2(a) ody_gti_wcx_pidr2_t
#define bustype_ODY_GTI_WCX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR2(a) "GTI_WCX_PIDR2"
#define device_bar_ODY_GTI_WCX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR2(a) (a)
#define arguments_ODY_GTI_WCX_PIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr3
 *
 * GTI Watchdog Control Peripheral Identification Register 3
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_pidr3 {
	uint32_t u;
	struct ody_gti_wcx_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_pidr3_s cn; */
};
typedef union ody_gti_wcx_pidr3 ody_gti_wcx_pidr3_t;

static inline uint64_t ODY_GTI_WCX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR3(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fecll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR3(a) ody_gti_wcx_pidr3_t
#define bustype_ODY_GTI_WCX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR3(a) "GTI_WCX_PIDR3"
#define device_bar_ODY_GTI_WCX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR3(a) (a)
#define arguments_ODY_GTI_WCX_PIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr4
 *
 * GTI Watchdog Control Peripheral Identification Register 4
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_pidr4 {
	uint32_t u;
	struct ody_gti_wcx_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wcx_pidr4_s cn; */
};
typedef union ody_gti_wcx_pidr4 ody_gti_wcx_pidr4_t;

static inline uint64_t ODY_GTI_WCX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR4(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fd0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR4(a) ody_gti_wcx_pidr4_t
#define bustype_ODY_GTI_WCX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR4(a) "GTI_WCX_PIDR4"
#define device_bar_ODY_GTI_WCX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR4(a) (a)
#define arguments_ODY_GTI_WCX_PIDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr5
 *
 * GTI Watchdog Control Peripheral Identification Register 5
 */
union ody_gti_wcx_pidr5 {
	uint32_t u;
	struct ody_gti_wcx_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wcx_pidr5_s cn; */
};
typedef union ody_gti_wcx_pidr5 ody_gti_wcx_pidr5_t;

static inline uint64_t ODY_GTI_WCX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR5(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fd4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR5(a) ody_gti_wcx_pidr5_t
#define bustype_ODY_GTI_WCX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR5(a) "GTI_WCX_PIDR5"
#define device_bar_ODY_GTI_WCX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR5(a) (a)
#define arguments_ODY_GTI_WCX_PIDR5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr6
 *
 * GTI Watchdog Control Peripheral Identification Register 6
 */
union ody_gti_wcx_pidr6 {
	uint32_t u;
	struct ody_gti_wcx_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wcx_pidr6_s cn; */
};
typedef union ody_gti_wcx_pidr6 ody_gti_wcx_pidr6_t;

static inline uint64_t ODY_GTI_WCX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR6(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fd8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR6(a) ody_gti_wcx_pidr6_t
#define bustype_ODY_GTI_WCX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR6(a) "GTI_WCX_PIDR6"
#define device_bar_ODY_GTI_WCX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR6(a) (a)
#define arguments_ODY_GTI_WCX_PIDR6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_pidr7
 *
 * GTI Watchdog Control Peripheral Identification Register 7
 */
union ody_gti_wcx_pidr7 {
	uint32_t u;
	struct ody_gti_wcx_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wcx_pidr7_s cn; */
};
typedef union ody_gti_wcx_pidr7 ody_gti_wcx_pidr7_t;

static inline uint64_t ODY_GTI_WCX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_PIDR7(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fdcll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_PIDR7(a) ody_gti_wcx_pidr7_t
#define bustype_ODY_GTI_WCX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_PIDR7(a) "GTI_WCX_PIDR7"
#define device_bar_ODY_GTI_WCX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_PIDR7(a) (a)
#define arguments_ODY_GTI_WCX_PIDR7(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_w_iidr
 *
 * GTI Watchdog Control Interface Identification Register
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_w_iidr {
	uint32_t u;
	struct ody_gti_wcx_w_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t arch                        : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gti_wcx_w_iidr_s cn; */
};
typedef union ody_gti_wcx_w_iidr ody_gti_wcx_w_iidr_t;

static inline uint64_t ODY_GTI_WCX_W_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_W_IIDR(uint64_t a)
{
	if (a <= 1)
		return 0x802000080fccll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_W_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_W_IIDR(a) ody_gti_wcx_w_iidr_t
#define bustype_ODY_GTI_WCX_W_IIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_W_IIDR(a) "GTI_WCX_W_IIDR"
#define device_bar_ODY_GTI_WCX_W_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_W_IIDR(a) (a)
#define arguments_ODY_GTI_WCX_W_IIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_wcs
 *
 * GTI Watchdog Control and Status Register
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_wcs {
	uint32_t u;
	struct ody_gti_wcx_wcs_s {
		uint32_t en                          : 1;
		uint32_t ws0                         : 1;
		uint32_t ws1                         : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_gti_wcx_wcs_s cn; */
};
typedef union ody_gti_wcx_wcs ody_gti_wcx_wcs_t;

static inline uint64_t ODY_GTI_WCX_WCS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_WCS(uint64_t a)
{
	if (a <= 1)
		return 0x802000080000ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_WCS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_WCS(a) ody_gti_wcx_wcs_t
#define bustype_ODY_GTI_WCX_WCS(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_WCS(a) "GTI_WCX_WCS"
#define device_bar_ODY_GTI_WCX_WCS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_WCS(a) (a)
#define arguments_ODY_GTI_WCX_WCS(a) (a), -1, -1, -1

/**
 * Register (NCB) gti_wc#_wcv
 *
 * GTI Watchdog Control Compare Value Register
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_wcv {
	uint64_t u;
	struct ody_gti_wcx_wcv_s {
		uint64_t wdcv                        : 64;
	} s;
	/* struct ody_gti_wcx_wcv_s cn; */
};
typedef union ody_gti_wcx_wcv ody_gti_wcx_wcv_t;

static inline uint64_t ODY_GTI_WCX_WCV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_WCV(uint64_t a)
{
	if (a <= 1)
		return 0x802000080010ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_WCV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_WCV(a) ody_gti_wcx_wcv_t
#define bustype_ODY_GTI_WCX_WCV(a) CSR_TYPE_NCB
#define basename_ODY_GTI_WCX_WCV(a) "GTI_WCX_WCV"
#define device_bar_ODY_GTI_WCX_WCV(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_WCV(a) (a)
#define arguments_ODY_GTI_WCX_WCV(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wc#_wor
 *
 * GTI Watchdog Control Offset Register
 * GTI_WC(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WC(1) accesses the nonsecure watchdog.
 */
union ody_gti_wcx_wor {
	uint64_t u;
	struct ody_gti_wcx_wor_s {
		uint64_t offset                      : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	struct ody_gti_wcx_wor_cn {
		uint64_t offset                      : 32;
	} cn;
};
typedef union ody_gti_wcx_wor ody_gti_wcx_wor_t;

static inline uint64_t ODY_GTI_WCX_WOR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WCX_WOR(uint64_t a)
{
	if (a <= 1)
		return 0x802000080008ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WCX_WOR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WCX_WOR(a) ody_gti_wcx_wor_t
#define bustype_ODY_GTI_WCX_WOR(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WCX_WOR(a) "GTI_WCX_WOR"
#define device_bar_ODY_GTI_WCX_WOR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WCX_WOR(a) (a)
#define arguments_ODY_GTI_WCX_WOR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_cidr0
 *
 * GTI Watchdog Refresh Component Identification Register 0
 */
union ody_gti_wrx_cidr0 {
	uint32_t u;
	struct ody_gti_wrx_cidr0_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_cidr0_s cn; */
};
typedef union ody_gti_wrx_cidr0 ody_gti_wrx_cidr0_t;

static inline uint64_t ODY_GTI_WRX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_CIDR0(uint64_t a)
{
	if (a <= 1)
		return 0x802000090ff0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_CIDR0(a) ody_gti_wrx_cidr0_t
#define bustype_ODY_GTI_WRX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_CIDR0(a) "GTI_WRX_CIDR0"
#define device_bar_ODY_GTI_WRX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_CIDR0(a) (a)
#define arguments_ODY_GTI_WRX_CIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_cidr1
 *
 * GTI Watchdog Refresh Component Identification Register 1
 */
union ody_gti_wrx_cidr1 {
	uint32_t u;
	struct ody_gti_wrx_cidr1_s {
		uint32_t preamble                    : 4;
		uint32_t cclass                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_cidr1_s cn; */
};
typedef union ody_gti_wrx_cidr1 ody_gti_wrx_cidr1_t;

static inline uint64_t ODY_GTI_WRX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_CIDR1(uint64_t a)
{
	if (a <= 1)
		return 0x802000090ff4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_CIDR1(a) ody_gti_wrx_cidr1_t
#define bustype_ODY_GTI_WRX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_CIDR1(a) "GTI_WRX_CIDR1"
#define device_bar_ODY_GTI_WRX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_CIDR1(a) (a)
#define arguments_ODY_GTI_WRX_CIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_cidr2
 *
 * GTI Watchdog Refresh Component Identification Register 2
 */
union ody_gti_wrx_cidr2 {
	uint32_t u;
	struct ody_gti_wrx_cidr2_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_cidr2_s cn; */
};
typedef union ody_gti_wrx_cidr2 ody_gti_wrx_cidr2_t;

static inline uint64_t ODY_GTI_WRX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_CIDR2(uint64_t a)
{
	if (a <= 1)
		return 0x802000090ff8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_CIDR2(a) ody_gti_wrx_cidr2_t
#define bustype_ODY_GTI_WRX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_CIDR2(a) "GTI_WRX_CIDR2"
#define device_bar_ODY_GTI_WRX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_CIDR2(a) (a)
#define arguments_ODY_GTI_WRX_CIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_cidr3
 *
 * GTI Watchdog Refresh Component Identification Register 3
 */
union ody_gti_wrx_cidr3 {
	uint32_t u;
	struct ody_gti_wrx_cidr3_s {
		uint32_t preamble                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_cidr3_s cn; */
};
typedef union ody_gti_wrx_cidr3 ody_gti_wrx_cidr3_t;

static inline uint64_t ODY_GTI_WRX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_CIDR3(uint64_t a)
{
	if (a <= 1)
		return 0x802000090ffcll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_CIDR3(a) ody_gti_wrx_cidr3_t
#define bustype_ODY_GTI_WRX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_CIDR3(a) "GTI_WRX_CIDR3"
#define device_bar_ODY_GTI_WRX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_CIDR3(a) (a)
#define arguments_ODY_GTI_WRX_CIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr0
 *
 * GTI Watchdog Refresh Peripheral Identification Register 0
 */
union ody_gti_wrx_pidr0 {
	uint32_t u;
	struct ody_gti_wrx_pidr0_s {
		uint32_t partnum0                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_pidr0_s cn; */
};
typedef union ody_gti_wrx_pidr0 ody_gti_wrx_pidr0_t;

static inline uint64_t ODY_GTI_WRX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR0(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fe0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR0(a) ody_gti_wrx_pidr0_t
#define bustype_ODY_GTI_WRX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR0(a) "GTI_WRX_PIDR0"
#define device_bar_ODY_GTI_WRX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR0(a) (a)
#define arguments_ODY_GTI_WRX_PIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr1
 *
 * GTI Watchdog Refresh Peripheral Identification Register 1
 */
union ody_gti_wrx_pidr1 {
	uint32_t u;
	struct ody_gti_wrx_pidr1_s {
		uint32_t partnum1                    : 4;
		uint32_t idcode                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_pidr1_s cn; */
};
typedef union ody_gti_wrx_pidr1 ody_gti_wrx_pidr1_t;

static inline uint64_t ODY_GTI_WRX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR1(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fe4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR1(a) ody_gti_wrx_pidr1_t
#define bustype_ODY_GTI_WRX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR1(a) "GTI_WRX_PIDR1"
#define device_bar_ODY_GTI_WRX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR1(a) (a)
#define arguments_ODY_GTI_WRX_PIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr2
 *
 * GTI Watchdog Refresh Peripheral Identification Register 2
 */
union ody_gti_wrx_pidr2 {
	uint32_t u;
	struct ody_gti_wrx_pidr2_s {
		uint32_t idcode                      : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_pidr2_s cn; */
};
typedef union ody_gti_wrx_pidr2 ody_gti_wrx_pidr2_t;

static inline uint64_t ODY_GTI_WRX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR2(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fe8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR2(a) ody_gti_wrx_pidr2_t
#define bustype_ODY_GTI_WRX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR2(a) "GTI_WRX_PIDR2"
#define device_bar_ODY_GTI_WRX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR2(a) (a)
#define arguments_ODY_GTI_WRX_PIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr3
 *
 * GTI Watchdog Refresh Peripheral Identification Register 3
 */
union ody_gti_wrx_pidr3 {
	uint32_t u;
	struct ody_gti_wrx_pidr3_s {
		uint32_t cust                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_pidr3_s cn; */
};
typedef union ody_gti_wrx_pidr3 ody_gti_wrx_pidr3_t;

static inline uint64_t ODY_GTI_WRX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR3(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fecll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR3(a) ody_gti_wrx_pidr3_t
#define bustype_ODY_GTI_WRX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR3(a) "GTI_WRX_PIDR3"
#define device_bar_ODY_GTI_WRX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR3(a) (a)
#define arguments_ODY_GTI_WRX_PIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr4
 *
 * GTI Watchdog Refresh Peripheral Identification Register 4
 */
union ody_gti_wrx_pidr4 {
	uint32_t u;
	struct ody_gti_wrx_pidr4_s {
		uint32_t jepcont                     : 4;
		uint32_t pagecnt                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gti_wrx_pidr4_s cn; */
};
typedef union ody_gti_wrx_pidr4 ody_gti_wrx_pidr4_t;

static inline uint64_t ODY_GTI_WRX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR4(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fd0ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR4(a) ody_gti_wrx_pidr4_t
#define bustype_ODY_GTI_WRX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR4(a) "GTI_WRX_PIDR4"
#define device_bar_ODY_GTI_WRX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR4(a) (a)
#define arguments_ODY_GTI_WRX_PIDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr5
 *
 * GTI Watchdog Refresh Peripheral Identification Register 5
 */
union ody_gti_wrx_pidr5 {
	uint32_t u;
	struct ody_gti_wrx_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wrx_pidr5_s cn; */
};
typedef union ody_gti_wrx_pidr5 ody_gti_wrx_pidr5_t;

static inline uint64_t ODY_GTI_WRX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR5(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fd4ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR5(a) ody_gti_wrx_pidr5_t
#define bustype_ODY_GTI_WRX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR5(a) "GTI_WRX_PIDR5"
#define device_bar_ODY_GTI_WRX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR5(a) (a)
#define arguments_ODY_GTI_WRX_PIDR5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr6
 *
 * GTI Watchdog Refresh Peripheral Identification Register 6
 */
union ody_gti_wrx_pidr6 {
	uint32_t u;
	struct ody_gti_wrx_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wrx_pidr6_s cn; */
};
typedef union ody_gti_wrx_pidr6 ody_gti_wrx_pidr6_t;

static inline uint64_t ODY_GTI_WRX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR6(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fd8ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR6(a) ody_gti_wrx_pidr6_t
#define bustype_ODY_GTI_WRX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR6(a) "GTI_WRX_PIDR6"
#define device_bar_ODY_GTI_WRX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR6(a) (a)
#define arguments_ODY_GTI_WRX_PIDR6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_pidr7
 *
 * GTI Watchdog Refresh Peripheral Identification Register 7
 */
union ody_gti_wrx_pidr7 {
	uint32_t u;
	struct ody_gti_wrx_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gti_wrx_pidr7_s cn; */
};
typedef union ody_gti_wrx_pidr7 ody_gti_wrx_pidr7_t;

static inline uint64_t ODY_GTI_WRX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_PIDR7(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fdcll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_PIDR7(a) ody_gti_wrx_pidr7_t
#define bustype_ODY_GTI_WRX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_PIDR7(a) "GTI_WRX_PIDR7"
#define device_bar_ODY_GTI_WRX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_PIDR7(a) (a)
#define arguments_ODY_GTI_WRX_PIDR7(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_w_iidr
 *
 * GTI Watchdog Refresh Interface Identification Register
 * GTI_WR(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WR(1) accesses the nonsecure watchdog.
 */
union ody_gti_wrx_w_iidr {
	uint32_t u;
	struct ody_gti_wrx_w_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t arch                        : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gti_wrx_w_iidr_s cn; */
};
typedef union ody_gti_wrx_w_iidr ody_gti_wrx_w_iidr_t;

static inline uint64_t ODY_GTI_WRX_W_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_W_IIDR(uint64_t a)
{
	if (a <= 1)
		return 0x802000090fccll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_W_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_W_IIDR(a) ody_gti_wrx_w_iidr_t
#define bustype_ODY_GTI_WRX_W_IIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_W_IIDR(a) "GTI_WRX_W_IIDR"
#define device_bar_ODY_GTI_WRX_W_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_W_IIDR(a) (a)
#define arguments_ODY_GTI_WRX_W_IIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gti_wr#_wrr
 *
 * GTI Watchdog Refresh Register
 * GTI_WR(0) accesses the secure watchdog and is accessible only by the
 * secure-world. GTI_WR(1) accesses the nonsecure watchdog.
 */
union ody_gti_wrx_wrr {
	uint32_t u;
	struct ody_gti_wrx_wrr_s {
		uint32_t zero                        : 32;
	} s;
	/* struct ody_gti_wrx_wrr_s cn; */
};
typedef union ody_gti_wrx_wrr ody_gti_wrx_wrr_t;

static inline uint64_t ODY_GTI_WRX_WRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GTI_WRX_WRR(uint64_t a)
{
	if (a <= 1)
		return 0x802000090000ll + 0x20000ll * ((a) & 0x1);
	__ody_csr_fatal("GTI_WRX_WRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GTI_WRX_WRR(a) ody_gti_wrx_wrr_t
#define bustype_ODY_GTI_WRX_WRR(a) CSR_TYPE_NCB32b
#define basename_ODY_GTI_WRX_WRR(a) "GTI_WRX_WRR"
#define device_bar_ODY_GTI_WRX_WRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GTI_WRX_WRR(a) (a)
#define arguments_ODY_GTI_WRX_WRR(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_GTI_H__ */
