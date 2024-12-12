#ifndef __ODY_CSRS_DSUUB_H__
#define __ODY_CSRS_DSUUB_H__
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
 * DSUUB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dsuub_bar_e
 *
 * DSUUB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_DSUUB_BAR_E_DSUUBX_PF_BAR0(a) (0x87e2ef000000ll + 0x1000000ll * (a))
#define ODY_DSUUB_BAR_E_DSUUBX_PF_BAR0_SIZE 0x1000000ull

/**
 * Register (RSL32b) dsuub#_amcfgr
 *
 * Dsuub Activity Monitors Configuration Register
 * Global configuration register for the activity monitors.
 *
 * Provides information on supported features, the number of counter groups implemented, the total
 * number of activity monitor event counters implemented, and the size of the counters. AMCFGR is
 * applicable to both the architected and the auxiliary counter groups.
 */
union ody_dsuubx_amcfgr {
	uint32_t u;
	struct ody_dsuubx_amcfgr_s {
		uint32_t n                           : 8;
		uint32_t size                        : 6;
		uint32_t reserved_14_23              : 10;
		uint32_t hdbg                        : 1;
		uint32_t reserved_25_27              : 3;
		uint32_t ncg                         : 4;
	} s;
	/* struct ody_dsuubx_amcfgr_s cn; */
};
typedef union ody_dsuubx_amcfgr ody_dsuubx_amcfgr_t;

static inline uint64_t ODY_DSUUBX_AMCFGR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCFGR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090e00ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCFGR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCFGR(a) ody_dsuubx_amcfgr_t
#define bustype_ODY_DSUUBX_AMCFGR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCFGR(a) "DSUUBX_AMCFGR"
#define device_bar_ODY_DSUUBX_AMCFGR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCFGR(a) (a)
#define arguments_ODY_DSUUBX_AMCFGR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcgcr
 *
 * Dsuub Activity Monitors Counter Group Configuration Register
 * Provides information on the number of activity monitor event counters implemented within each
 * counter group.
 */
union ody_dsuubx_amcgcr {
	uint32_t u;
	struct ody_dsuubx_amcgcr_s {
		uint32_t cg0nc                       : 8;
		uint32_t cg1nc                       : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dsuubx_amcgcr_s cn; */
};
typedef union ody_dsuubx_amcgcr ody_dsuubx_amcgcr_t;

static inline uint64_t ODY_DSUUBX_AMCGCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCGCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090ce0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCGCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCGCR(a) ody_dsuubx_amcgcr_t
#define bustype_ODY_DSUUBX_AMCGCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCGCR(a) "DSUUBX_AMCGCR"
#define device_bar_ODY_DSUUBX_AMCGCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCGCR(a) (a)
#define arguments_ODY_DSUUBX_AMCGCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcidr0
 *
 * Dsuub Activity Monitors Component Identification Register 0
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union ody_dsuubx_amcidr0 {
	uint32_t u;
	struct ody_dsuubx_amcidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_amcidr0_s cn; */
};
typedef union ody_dsuubx_amcidr0 ody_dsuubx_amcidr0_t;

static inline uint64_t ODY_DSUUBX_AMCIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090ff0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCIDR0(a) ody_dsuubx_amcidr0_t
#define bustype_ODY_DSUUBX_AMCIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCIDR0(a) "DSUUBX_AMCIDR0"
#define device_bar_ODY_DSUUBX_AMCIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCIDR0(a) (a)
#define arguments_ODY_DSUUBX_AMCIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcidr1
 *
 * Dsuub Activity Monitors Component Identification Register 1
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union ody_dsuubx_amcidr1 {
	uint32_t u;
	struct ody_dsuubx_amcidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t clas                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_amcidr1_s cn; */
};
typedef union ody_dsuubx_amcidr1 ody_dsuubx_amcidr1_t;

static inline uint64_t ODY_DSUUBX_AMCIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090ff4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCIDR1(a) ody_dsuubx_amcidr1_t
#define bustype_ODY_DSUUBX_AMCIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCIDR1(a) "DSUUBX_AMCIDR1"
#define device_bar_ODY_DSUUBX_AMCIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCIDR1(a) (a)
#define arguments_ODY_DSUUBX_AMCIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcidr2
 *
 * Dsuub Activity Monitors Component Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union ody_dsuubx_amcidr2 {
	uint32_t u;
	struct ody_dsuubx_amcidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_amcidr2_s cn; */
};
typedef union ody_dsuubx_amcidr2 ody_dsuubx_amcidr2_t;

static inline uint64_t ODY_DSUUBX_AMCIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090ff8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCIDR2(a) ody_dsuubx_amcidr2_t
#define bustype_ODY_DSUUBX_AMCIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCIDR2(a) "DSUUBX_AMCIDR2"
#define device_bar_ODY_DSUUBX_AMCIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCIDR2(a) (a)
#define arguments_ODY_DSUUBX_AMCIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcidr3
 *
 * Dsuub Activity Monitors Component Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union ody_dsuubx_amcidr3 {
	uint32_t u;
	struct ody_dsuubx_amcidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_amcidr3_s cn; */
};
typedef union ody_dsuubx_amcidr3 ody_dsuubx_amcidr3_t;

static inline uint64_t ODY_DSUUBX_AMCIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCIDR3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090ffcll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCIDR3(a) ody_dsuubx_amcidr3_t
#define bustype_ODY_DSUUBX_AMCIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCIDR3(a) "DSUUBX_AMCIDR3"
#define device_bar_ODY_DSUUBX_AMCIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCIDR3(a) (a)
#define arguments_ODY_DSUUBX_AMCIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcntenclr0
 *
 * Dsuub Activity Monitors Count Enable Clear Register 0
 * Disable control bits for the architected activity monitors event counters, AMEVCNTR0\<n\>.
 */
union ody_dsuubx_amcntenclr0 {
	uint32_t u;
	struct ody_dsuubx_amcntenclr0_s {
		uint32_t p                           : 32;
	} s;
	/* struct ody_dsuubx_amcntenclr0_s cn; */
};
typedef union ody_dsuubx_amcntenclr0 ody_dsuubx_amcntenclr0_t;

static inline uint64_t ODY_DSUUBX_AMCNTENCLR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCNTENCLR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090c20ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCNTENCLR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCNTENCLR0(a) ody_dsuubx_amcntenclr0_t
#define bustype_ODY_DSUUBX_AMCNTENCLR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCNTENCLR0(a) "DSUUBX_AMCNTENCLR0"
#define device_bar_ODY_DSUUBX_AMCNTENCLR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCNTENCLR0(a) (a)
#define arguments_ODY_DSUUBX_AMCNTENCLR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcntenclr1
 *
 * Dsuub Activity Monitors Count Enable Clear Register 1
 * Disable control bits for the architected activity monitors event counters, AMEVCNTR1\<n\>.
 */
union ody_dsuubx_amcntenclr1 {
	uint32_t u;
	struct ody_dsuubx_amcntenclr1_s {
		uint32_t p                           : 32;
	} s;
	/* struct ody_dsuubx_amcntenclr1_s cn; */
};
typedef union ody_dsuubx_amcntenclr1 ody_dsuubx_amcntenclr1_t;

static inline uint64_t ODY_DSUUBX_AMCNTENCLR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCNTENCLR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090c24ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCNTENCLR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCNTENCLR1(a) ody_dsuubx_amcntenclr1_t
#define bustype_ODY_DSUUBX_AMCNTENCLR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCNTENCLR1(a) "DSUUBX_AMCNTENCLR1"
#define device_bar_ODY_DSUUBX_AMCNTENCLR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCNTENCLR1(a) (a)
#define arguments_ODY_DSUUBX_AMCNTENCLR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcntenset0
 *
 * Dsuub Activity Monitors Count Enable Set Register 0
 * Enable control bits for the architected activity monitors event counters, AMEVCNTR0\<n\>.
 */
union ody_dsuubx_amcntenset0 {
	uint32_t u;
	struct ody_dsuubx_amcntenset0_s {
		uint32_t p                           : 32;
	} s;
	/* struct ody_dsuubx_amcntenset0_s cn; */
};
typedef union ody_dsuubx_amcntenset0 ody_dsuubx_amcntenset0_t;

static inline uint64_t ODY_DSUUBX_AMCNTENSET0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCNTENSET0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090c00ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCNTENSET0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCNTENSET0(a) ody_dsuubx_amcntenset0_t
#define bustype_ODY_DSUUBX_AMCNTENSET0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCNTENSET0(a) "DSUUBX_AMCNTENSET0"
#define device_bar_ODY_DSUUBX_AMCNTENSET0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCNTENSET0(a) (a)
#define arguments_ODY_DSUUBX_AMCNTENSET0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcntenset1
 *
 * Dsuub Activity Monitors Count Enable Set Register 1
 * Enable control bits for the auxiliary activity monitors event counters, AMEVCNTR1\<n\>.
 */
union ody_dsuubx_amcntenset1 {
	uint32_t u;
	struct ody_dsuubx_amcntenset1_s {
		uint32_t p                           : 32;
	} s;
	/* struct ody_dsuubx_amcntenset1_s cn; */
};
typedef union ody_dsuubx_amcntenset1 ody_dsuubx_amcntenset1_t;

static inline uint64_t ODY_DSUUBX_AMCNTENSET1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCNTENSET1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090c04ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCNTENSET1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCNTENSET1(a) ody_dsuubx_amcntenset1_t
#define bustype_ODY_DSUUBX_AMCNTENSET1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCNTENSET1(a) "DSUUBX_AMCNTENSET1"
#define device_bar_ODY_DSUUBX_AMCNTENSET1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCNTENSET1(a) (a)
#define arguments_ODY_DSUUBX_AMCNTENSET1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amcr
 *
 * Dsuub Activity Monitors Control Register
 * Global control register for the activity monitors implementation. AMCR is applicable to both the
 * architected and the auxiliary counter groups.
 */
union ody_dsuubx_amcr {
	uint32_t u;
	struct ody_dsuubx_amcr_s {
		uint32_t reserved_0_9                : 10;
		uint32_t hdbg                        : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_dsuubx_amcr_s cn; */
};
typedef union ody_dsuubx_amcr ody_dsuubx_amcr_t;

static inline uint64_t ODY_DSUUBX_AMCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090e04ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMCR(a) ody_dsuubx_amcr_t
#define bustype_ODY_DSUUBX_AMCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMCR(a) "DSUUBX_AMCR"
#define device_bar_ODY_DSUUBX_AMCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMCR(a) (a)
#define arguments_ODY_DSUUBX_AMCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amdevaff0
 *
 * Dsuub Activity Monitors Device Affinity Register 0
 * Copy of the low half of the PE MPIDR_EL1 register that allows a debugger to determine which PE
 * in a multiprocessor system the AMU component relates to.
 */
union ody_dsuubx_amdevaff0 {
	uint32_t u;
	struct ody_dsuubx_amdevaff0_s {
		uint32_t mpidrel1lo                  : 32;
	} s;
	/* struct ody_dsuubx_amdevaff0_s cn; */
};
typedef union ody_dsuubx_amdevaff0 ody_dsuubx_amdevaff0_t;

static inline uint64_t ODY_DSUUBX_AMDEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMDEVAFF0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fa8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMDEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMDEVAFF0(a) ody_dsuubx_amdevaff0_t
#define bustype_ODY_DSUUBX_AMDEVAFF0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMDEVAFF0(a) "DSUUBX_AMDEVAFF0"
#define device_bar_ODY_DSUUBX_AMDEVAFF0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMDEVAFF0(a) (a)
#define arguments_ODY_DSUUBX_AMDEVAFF0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amdevaff1
 *
 * Dsuub Activity Monitors Device Affinity Register 1
 * Copy of the high half of the PE MPIDR_EL1 register that allows a debugger to determine which PE
 * in a multiprocessor system the AMU component relates to.
 */
union ody_dsuubx_amdevaff1 {
	uint32_t u;
	struct ody_dsuubx_amdevaff1_s {
		uint32_t mpidrel1hi                  : 32;
	} s;
	/* struct ody_dsuubx_amdevaff1_s cn; */
};
typedef union ody_dsuubx_amdevaff1 ody_dsuubx_amdevaff1_t;

static inline uint64_t ODY_DSUUBX_AMDEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMDEVAFF1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090facll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMDEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMDEVAFF1(a) ody_dsuubx_amdevaff1_t
#define bustype_ODY_DSUUBX_AMDEVAFF1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMDEVAFF1(a) "DSUUBX_AMDEVAFF1"
#define device_bar_ODY_DSUUBX_AMDEVAFF1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMDEVAFF1(a) (a)
#define arguments_ODY_DSUUBX_AMDEVAFF1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amdevarch
 *
 * Dsuub Activity Monitors Device Architecture Register
 * Identifies the programmers' model architecture of the AMU component.
 */
union ody_dsuubx_amdevarch {
	uint32_t u;
	struct ody_dsuubx_amdevarch_s {
		uint32_t archid                      : 16;
		uint32_t revision                    : 4;
		uint32_t present                     : 1;
		uint32_t architect                   : 11;
	} s;
	/* struct ody_dsuubx_amdevarch_s cn; */
};
typedef union ody_dsuubx_amdevarch ody_dsuubx_amdevarch_t;

static inline uint64_t ODY_DSUUBX_AMDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMDEVARCH(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fbcll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMDEVARCH(a) ody_dsuubx_amdevarch_t
#define bustype_ODY_DSUUBX_AMDEVARCH(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMDEVARCH(a) "DSUUBX_AMDEVARCH"
#define device_bar_ODY_DSUUBX_AMDEVARCH(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMDEVARCH(a) (a)
#define arguments_ODY_DSUUBX_AMDEVARCH(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amdevtype
 *
 * Dsuub Activity Monitors Device Type Register
 * Indicates to a debugger that this component is part of a PE's performance monitor interface.
 */
union ody_dsuubx_amdevtype {
	uint32_t u;
	struct ody_dsuubx_amdevtype_s {
		uint32_t major                       : 4;
		uint32_t sub                         : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_amdevtype_s cn; */
};
typedef union ody_dsuubx_amdevtype ody_dsuubx_amdevtype_t;

static inline uint64_t ODY_DSUUBX_AMDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMDEVTYPE(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fccll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMDEVTYPE(a) ody_dsuubx_amdevtype_t
#define bustype_ODY_DSUUBX_AMDEVTYPE(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMDEVTYPE(a) "DSUUBX_AMDEVTYPE"
#define device_bar_ODY_DSUUBX_AMDEVTYPE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMDEVTYPE(a) (a)
#define arguments_ODY_DSUUBX_AMDEVTYPE(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr00
 *
 * Dsuub Activity Monitors Event Type Registers 00
 * Provides access to the architected activity monitor event counters.
 */
union ody_dsuubx_amevcntr00 {
	uint64_t u;
	struct ody_dsuubx_amevcntr00_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr00_s cn; */
};
typedef union ody_dsuubx_amevcntr00 ody_dsuubx_amevcntr00_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR00(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR00(a) ody_dsuubx_amevcntr00_t
#define bustype_ODY_DSUUBX_AMEVCNTR00(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR00(a) "DSUUBX_AMEVCNTR00"
#define device_bar_ODY_DSUUBX_AMEVCNTR00(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR00(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR00(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr01
 *
 * Dsuub Activity Monitors Event Type Registers 01
 * Provides access to the architected activity monitor event counters.
 */
union ody_dsuubx_amevcntr01 {
	uint64_t u;
	struct ody_dsuubx_amevcntr01_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr01_s cn; */
};
typedef union ody_dsuubx_amevcntr01 ody_dsuubx_amevcntr01_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR01(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR01(a) ody_dsuubx_amevcntr01_t
#define bustype_ODY_DSUUBX_AMEVCNTR01(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR01(a) "DSUUBX_AMEVCNTR01"
#define device_bar_ODY_DSUUBX_AMEVCNTR01(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR01(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR01(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr02
 *
 * Dsuub Activity Monitors Event Type Registers 02
 * Provides access to the architected activity monitor event counters.
 */
union ody_dsuubx_amevcntr02 {
	uint64_t u;
	struct ody_dsuubx_amevcntr02_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr02_s cn; */
};
typedef union ody_dsuubx_amevcntr02 ody_dsuubx_amevcntr02_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR02(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR02(a) ody_dsuubx_amevcntr02_t
#define bustype_ODY_DSUUBX_AMEVCNTR02(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR02(a) "DSUUBX_AMEVCNTR02"
#define device_bar_ODY_DSUUBX_AMEVCNTR02(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR02(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR02(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr03
 *
 * Dsuub Activity Monitors Event Type Registers 03
 * Provides access to the architected activity monitor event counters.
 */
union ody_dsuubx_amevcntr03 {
	uint64_t u;
	struct ody_dsuubx_amevcntr03_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr03_s cn; */
};
typedef union ody_dsuubx_amevcntr03 ody_dsuubx_amevcntr03_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR03(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090018ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR03(a) ody_dsuubx_amevcntr03_t
#define bustype_ODY_DSUUBX_AMEVCNTR03(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR03(a) "DSUUBX_AMEVCNTR03"
#define device_bar_ODY_DSUUBX_AMEVCNTR03(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR03(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR03(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr10
 *
 * Dsuub Activity Monitors Event Type Registers 10
 * Provides access to the auxiliary activity monitor event counters.
 */
union ody_dsuubx_amevcntr10 {
	uint64_t u;
	struct ody_dsuubx_amevcntr10_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr10_s cn; */
};
typedef union ody_dsuubx_amevcntr10 ody_dsuubx_amevcntr10_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR10(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090100ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR10(a) ody_dsuubx_amevcntr10_t
#define bustype_ODY_DSUUBX_AMEVCNTR10(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR10(a) "DSUUBX_AMEVCNTR10"
#define device_bar_ODY_DSUUBX_AMEVCNTR10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR10(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR10(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr11
 *
 * Dsuub Activity Monitors Event Type Registers 11
 * Provides access to the auxiliary activity monitor event counters.
 */
union ody_dsuubx_amevcntr11 {
	uint64_t u;
	struct ody_dsuubx_amevcntr11_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr11_s cn; */
};
typedef union ody_dsuubx_amevcntr11 ody_dsuubx_amevcntr11_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR11(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090108ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR11(a) ody_dsuubx_amevcntr11_t
#define bustype_ODY_DSUUBX_AMEVCNTR11(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR11(a) "DSUUBX_AMEVCNTR11"
#define device_bar_ODY_DSUUBX_AMEVCNTR11(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR11(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR11(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_amevcntr12
 *
 * Dsuub Activity Monitors Event Type Registers 12
 * Provides access to the auxiliary activity monitor event counters.
 */
union ody_dsuubx_amevcntr12 {
	uint64_t u;
	struct ody_dsuubx_amevcntr12_s {
		uint64_t acnt                        : 64;
	} s;
	/* struct ody_dsuubx_amevcntr12_s cn; */
};
typedef union ody_dsuubx_amevcntr12 ody_dsuubx_amevcntr12_t;

static inline uint64_t ODY_DSUUBX_AMEVCNTR12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVCNTR12(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090110ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVCNTR12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVCNTR12(a) ody_dsuubx_amevcntr12_t
#define bustype_ODY_DSUUBX_AMEVCNTR12(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_AMEVCNTR12(a) "DSUUBX_AMEVCNTR12"
#define device_bar_ODY_DSUUBX_AMEVCNTR12(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVCNTR12(a) (a)
#define arguments_ODY_DSUUBX_AMEVCNTR12(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper00
 *
 * Dsuub Activity Monitors Event Type Registers 00
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR00_EL0 counts.
 */
union ody_dsuubx_amevtyper00 {
	uint32_t u;
	struct ody_dsuubx_amevtyper00_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper00_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper00 ody_dsuubx_amevtyper00_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER00(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090400ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER00(a) ody_dsuubx_amevtyper00_t
#define bustype_ODY_DSUUBX_AMEVTYPER00(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER00(a) "DSUUBX_AMEVTYPER00"
#define device_bar_ODY_DSUUBX_AMEVTYPER00(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER00(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER00(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper01
 *
 * Dsuub Activity Monitors Event Type Registers 01
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR01_EL0 counts.
 */
union ody_dsuubx_amevtyper01 {
	uint32_t u;
	struct ody_dsuubx_amevtyper01_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper01_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper01 ody_dsuubx_amevtyper01_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER01(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090404ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER01(a) ody_dsuubx_amevtyper01_t
#define bustype_ODY_DSUUBX_AMEVTYPER01(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER01(a) "DSUUBX_AMEVTYPER01"
#define device_bar_ODY_DSUUBX_AMEVTYPER01(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER01(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER01(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper02
 *
 * Dsuub Activity Monitors Event Type Registers 02
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR02_EL0 counts.
 */
union ody_dsuubx_amevtyper02 {
	uint32_t u;
	struct ody_dsuubx_amevtyper02_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper02_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper02 ody_dsuubx_amevtyper02_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER02(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090408ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER02(a) ody_dsuubx_amevtyper02_t
#define bustype_ODY_DSUUBX_AMEVTYPER02(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER02(a) "DSUUBX_AMEVTYPER02"
#define device_bar_ODY_DSUUBX_AMEVTYPER02(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER02(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER02(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper03
 *
 * Dsuub Activity Monitors Event Type Registers 03
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR03_EL0 counts.
 */
union ody_dsuubx_amevtyper03 {
	uint32_t u;
	struct ody_dsuubx_amevtyper03_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper03_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper03 ody_dsuubx_amevtyper03_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER03(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef09040cll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER03(a) ody_dsuubx_amevtyper03_t
#define bustype_ODY_DSUUBX_AMEVTYPER03(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER03(a) "DSUUBX_AMEVTYPER03"
#define device_bar_ODY_DSUUBX_AMEVTYPER03(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER03(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER03(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper10
 *
 * Dsuub Activity Monitors Event Type Registers 10
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR10_EL0 counts.
 */
union ody_dsuubx_amevtyper10 {
	uint32_t u;
	struct ody_dsuubx_amevtyper10_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper10_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper10 ody_dsuubx_amevtyper10_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER10(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090480ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER10(a) ody_dsuubx_amevtyper10_t
#define bustype_ODY_DSUUBX_AMEVTYPER10(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER10(a) "DSUUBX_AMEVTYPER10"
#define device_bar_ODY_DSUUBX_AMEVTYPER10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER10(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER10(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper11
 *
 * Dsuub Activity Monitors Event Type Registers 11
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR11_EL0 counts.
 */
union ody_dsuubx_amevtyper11 {
	uint32_t u;
	struct ody_dsuubx_amevtyper11_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper11_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper11 ody_dsuubx_amevtyper11_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER11(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090484ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER11(a) ody_dsuubx_amevtyper11_t
#define bustype_ODY_DSUUBX_AMEVTYPER11(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER11(a) "DSUUBX_AMEVTYPER11"
#define device_bar_ODY_DSUUBX_AMEVTYPER11(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER11(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER11(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amevtyper12
 *
 * Dsuub Activity Monitors Event Type Registers 12
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR12_EL0 counts.
 */
union ody_dsuubx_amevtyper12 {
	uint32_t u;
	struct ody_dsuubx_amevtyper12_s {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	struct ody_dsuubx_amevtyper12_cn {
		uint32_t evtcount                    : 16;
		uint32_t reserved_16_24              : 9;
		uint32_t reserved_25_31              : 7;
	} cn;
};
typedef union ody_dsuubx_amevtyper12 ody_dsuubx_amevtyper12_t;

static inline uint64_t ODY_DSUUBX_AMEVTYPER12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMEVTYPER12(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090488ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMEVTYPER12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMEVTYPER12(a) ody_dsuubx_amevtyper12_t
#define bustype_ODY_DSUUBX_AMEVTYPER12(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMEVTYPER12(a) "DSUUBX_AMEVTYPER12"
#define device_bar_ODY_DSUUBX_AMEVTYPER12(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMEVTYPER12(a) (a)
#define arguments_ODY_DSUUBX_AMEVTYPER12(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_amiidr
 *
 * Dsuub Activity Monitors Implementation Identification Register
 * Defines the implementer and revisions of the AMU.
 */
union ody_dsuubx_amiidr {
	uint32_t u;
	struct ody_dsuubx_amiidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t productid                   : 12;
	} s;
	/* struct ody_dsuubx_amiidr_s cn; */
};
typedef union ody_dsuubx_amiidr ody_dsuubx_amiidr_t;

static inline uint64_t ODY_DSUUBX_AMIIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMIIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090e08ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMIIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMIIDR(a) ody_dsuubx_amiidr_t
#define bustype_ODY_DSUUBX_AMIIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMIIDR(a) "DSUUBX_AMIIDR"
#define device_bar_ODY_DSUUBX_AMIIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMIIDR(a) (a)
#define arguments_ODY_DSUUBX_AMIIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_ampidr0
 *
 * Dsuub Activity Monitors Peripheral Identification Register 0
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union ody_dsuubx_ampidr0 {
	uint32_t u;
	struct ody_dsuubx_ampidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_ampidr0_s cn; */
};
typedef union ody_dsuubx_ampidr0 ody_dsuubx_ampidr0_t;

static inline uint64_t ODY_DSUUBX_AMPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMPIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fe0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMPIDR0(a) ody_dsuubx_ampidr0_t
#define bustype_ODY_DSUUBX_AMPIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMPIDR0(a) "DSUUBX_AMPIDR0"
#define device_bar_ODY_DSUUBX_AMPIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMPIDR0(a) (a)
#define arguments_ODY_DSUUBX_AMPIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_ampidr1
 *
 * Dsuub Activity Monitors Peripheral Identification Register 1
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union ody_dsuubx_ampidr1 {
	uint32_t u;
	struct ody_dsuubx_ampidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_ampidr1_s cn; */
};
typedef union ody_dsuubx_ampidr1 ody_dsuubx_ampidr1_t;

static inline uint64_t ODY_DSUUBX_AMPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMPIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fe4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMPIDR1(a) ody_dsuubx_ampidr1_t
#define bustype_ODY_DSUUBX_AMPIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMPIDR1(a) "DSUUBX_AMPIDR1"
#define device_bar_ODY_DSUUBX_AMPIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMPIDR1(a) (a)
#define arguments_ODY_DSUUBX_AMPIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_ampidr2
 *
 * Dsuub Activity Monitors Peripheral Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union ody_dsuubx_ampidr2 {
	uint32_t u;
	struct ody_dsuubx_ampidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_ampidr2_s cn; */
};
typedef union ody_dsuubx_ampidr2 ody_dsuubx_ampidr2_t;

static inline uint64_t ODY_DSUUBX_AMPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMPIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fe8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMPIDR2(a) ody_dsuubx_ampidr2_t
#define bustype_ODY_DSUUBX_AMPIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMPIDR2(a) "DSUUBX_AMPIDR2"
#define device_bar_ODY_DSUUBX_AMPIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMPIDR2(a) (a)
#define arguments_ODY_DSUUBX_AMPIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_ampidr3
 *
 * Dsuub Activity Monitors Peripheral Identification Register 3
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union ody_dsuubx_ampidr3 {
	uint32_t u;
	struct ody_dsuubx_ampidr3_s {
		uint32_t cmod                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_ampidr3_s cn; */
};
typedef union ody_dsuubx_ampidr3 ody_dsuubx_ampidr3_t;

static inline uint64_t ODY_DSUUBX_AMPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMPIDR3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fecll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMPIDR3(a) ody_dsuubx_ampidr3_t
#define bustype_ODY_DSUUBX_AMPIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMPIDR3(a) "DSUUBX_AMPIDR3"
#define device_bar_ODY_DSUUBX_AMPIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMPIDR3(a) (a)
#define arguments_ODY_DSUUBX_AMPIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_ampidr4
 *
 * Dsuub Activity Monitors Peripheral Identification Register 4
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union ody_dsuubx_ampidr4 {
	uint32_t u;
	struct ody_dsuubx_ampidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_ampidr4_s cn; */
};
typedef union ody_dsuubx_ampidr4 ody_dsuubx_ampidr4_t;

static inline uint64_t ODY_DSUUBX_AMPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_AMPIDR4(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef090fd0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_AMPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_AMPIDR4(a) ody_dsuubx_ampidr4_t
#define bustype_ODY_DSUUBX_AMPIDR4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_AMPIDR4(a) "DSUUBX_AMPIDR4"
#define device_bar_ODY_DSUUBX_AMPIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_AMPIDR4(a) (a)
#define arguments_ODY_DSUUBX_AMPIDR4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aidr
 *
 * DSUUB Cluster Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union ody_dsuubx_cluster_ppu_aidr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_aidr_s {
		uint32_t arch_rev_minor              : 4;
		uint32_t arch_rev_major              : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_aidr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_aidr ody_dsuubx_cluster_ppu_aidr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fccll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) ody_dsuubx_cluster_ppu_aidr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) "DSUUBX_CLUSTER_PPU_AIDR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_AIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aimr
 *
 * DSUUB Cluster Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (DSUUB_PPU_IMR), Input Edge Sensitivity Register
 * (DSUUB_PPU_IESR),
 * and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union ody_dsuubx_cluster_ppu_aimr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_aimr_s {
		uint32_t unspt_policy_irq_mask       : 1;
		uint32_t dyn_accept_irq_mask         : 1;
		uint32_t dyn_deny_irq_mask           : 1;
		uint32_t sta_policy_pwr_irq_mask     : 1;
		uint32_t sta_policy_op_irq_mask      : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dsuubx_cluster_ppu_aimr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_aimr ody_dsuubx_cluster_ppu_aimr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030034ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) ody_dsuubx_cluster_ppu_aimr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) "DSUUBX_CLUSTER_PPU_AIMR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_AIMR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aisr
 *
 * DSUUB Cluster Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 * A write of 1 to an event bit clears that event. A write of 0 has no effect. The
 * interrupt output
 * stays HIGH until all status bits in the Interrupt Status Register (DSUUB_PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (DSUUB_PPU_ISR). Status bits in this register are only cleared by
 * writing to this register.
 */
union ody_dsuubx_cluster_ppu_aisr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_aisr_s {
		uint32_t unspt_policy_irq            : 1;
		uint32_t dyn_accept_irq              : 1;
		uint32_t dyn_deny_irq                : 1;
		uint32_t sta_policy_pwr_irq          : 1;
		uint32_t sta_policy_op_irq           : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_dsuubx_cluster_ppu_aisr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_aisr ody_dsuubx_cluster_ppu_aisr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_AISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef03003cll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_AISR(a) ody_dsuubx_cluster_ppu_aisr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_AISR(a) "DSUUBX_CLUSTER_PPU_AISR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_AISR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_AISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr0
 *
 * DSUUB Cluster PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_cidr0 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_cidr0_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_cidr0 ody_dsuubx_cluster_ppu_cidr0_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030ff0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) ody_dsuubx_cluster_ppu_cidr0_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) "DSUUBX_CLUSTER_PPU_CIDR0"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_CIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr1
 *
 * DSUUB Cluster PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_cidr1 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t clas                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_cidr1_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_cidr1 ody_dsuubx_cluster_ppu_cidr1_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030ff4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) ody_dsuubx_cluster_ppu_cidr1_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) "DSUUBX_CLUSTER_PPU_CIDR1"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_CIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr2
 *
 * DSUUB Cluster PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_cidr2 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_cidr2_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_cidr2 ody_dsuubx_cluster_ppu_cidr2_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030ff8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) ody_dsuubx_cluster_ppu_cidr2_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) "DSUUBX_CLUSTER_PPU_CIDR2"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_CIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr0
 *
 * DSUUB Cluster Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union ody_dsuubx_cluster_ppu_dcdr0 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_dcdr0_s {
		uint32_t clken_rst_dly               : 8;
		uint32_t iso_clken_dly               : 8;
		uint32_t rst_hwstat_dly              : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dsuubx_cluster_ppu_dcdr0_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_dcdr0 ody_dsuubx_cluster_ppu_dcdr0_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030170ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) ody_dsuubx_cluster_ppu_dcdr0_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) "DSUUBX_CLUSTER_PPU_DCDR0"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_DCDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr1
 *
 * DSUUB Cluster Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union ody_dsuubx_cluster_ppu_dcdr1 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_dcdr1_s {
		uint32_t iso_rst_dly                 : 8;
		uint32_t clken_iso_dly               : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dsuubx_cluster_ppu_dcdr1_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_dcdr1 ody_dsuubx_cluster_ppu_dcdr1_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030174ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) ody_dsuubx_cluster_ppu_dcdr1_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) "DSUUBX_CLUSTER_PPU_DCDR1"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_DCDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_disr
 *
 * DSUUB Cluster Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union ody_dsuubx_cluster_ppu_disr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_disr_s {
		uint32_t pwr_devactive_status        : 11;
		uint32_t reserved_11_23              : 13;
		uint32_t op_devactive_status         : 3;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dsuubx_cluster_ppu_disr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_disr ody_dsuubx_cluster_ppu_disr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_DISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_DISR(a) ody_dsuubx_cluster_ppu_disr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_DISR(a) "DSUUBX_CLUSTER_PPU_DISR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_DISR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_DISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_fulrr
 *
 * DSUUB Cluster Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union ody_dsuubx_cluster_ppu_fulrr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_fulrr_s {
		uint32_t full_ret_ram_cfg            : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_fulrr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_fulrr ody_dsuubx_cluster_ppu_fulrr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030054ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) ody_dsuubx_cluster_ppu_fulrr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) "DSUUBX_CLUSTER_PPU_FULRR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_FULRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_funrr
 *
 * DSUUB Cluster Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union ody_dsuubx_cluster_ppu_funrr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_funrr_s {
		uint32_t func_ret_ram_cfg            : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_funrr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_funrr ody_dsuubx_cluster_ppu_funrr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030050ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) ody_dsuubx_cluster_ppu_funrr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) "DSUUBX_CLUSTER_PPU_FUNRR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_FUNRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr0
 *
 * DSUUB Cluster PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 1 (DSUUB_
 * PPU_IDR1).
 */
union ody_dsuubx_cluster_ppu_idr0 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_idr0_s {
		uint32_t devchan                     : 4;
		uint32_t num_opmode                  : 4;
		uint32_t sta_off_spt                 : 1;
		uint32_t sta_off_emu_spt             : 1;
		uint32_t sta_mem_ret_spt             : 1;
		uint32_t sta_mem_ret_emu_spt         : 1;
		uint32_t sta_lgc_ret_spt             : 1;
		uint32_t sta_mem_off_spt             : 1;
		uint32_t sta_full_ret_spt            : 1;
		uint32_t sta_func_ret_spt            : 1;
		uint32_t sta_on_spt                  : 1;
		uint32_t sta_wrm_rst_spt             : 1;
		uint32_t sta_dbg_recov_spt           : 1;
		uint32_t reserved_19                 : 1;
		uint32_t dyn_off_spt                 : 1;
		uint32_t dyn_off_emu_spt             : 1;
		uint32_t dyn_mem_ret_spt             : 1;
		uint32_t dyn_mem_ret_emu_spt         : 1;
		uint32_t dyn_lgc_ret_spt             : 1;
		uint32_t dyn_mem_off_spt             : 1;
		uint32_t dyn_full_ret_spt            : 1;
		uint32_t dyn_func_ret_spt            : 1;
		uint32_t dyn_on_spt                  : 1;
		uint32_t dyn_wrm_rst_spt             : 1;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dsuubx_cluster_ppu_idr0_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_idr0 ody_dsuubx_cluster_ppu_idr0_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fb0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) ody_dsuubx_cluster_ppu_idr0_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) "DSUUBX_CLUSTER_PPU_IDR0"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_IDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr1
 *
 * DSUUB Cluster PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 0 (DSUUB_
 * PPU_IDR0).
 */
union ody_dsuubx_cluster_ppu_idr1 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_idr1_s {
		uint32_t pwr_mode_entry_del_spt      : 1;
		uint32_t sw_dev_del_spt              : 1;
		uint32_t lock_spt                    : 1;
		uint32_t reserved_3                  : 1;
		uint32_t mem_ret_ram_reg             : 1;
		uint32_t full_ret_ram_reg            : 1;
		uint32_t func_ret_ram_reg            : 1;
		uint32_t reserved_7                  : 1;
		uint32_t sta_policy_pwr_irq_spt      : 1;
		uint32_t sta_policy_op_irq_spt       : 1;
		uint32_t op_active                   : 1;
		uint32_t reserved_11                 : 1;
		uint32_t off_mem_ret_trans           : 1;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dsuubx_cluster_ppu_idr1_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_idr1 ody_dsuubx_cluster_ppu_idr1_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fb4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) ody_dsuubx_cluster_ppu_idr1_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) "DSUUBX_CLUSTER_PPU_IDR1"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_IDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iesr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union ody_dsuubx_cluster_ppu_iesr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_iesr_s {
		uint32_t reserved_0_1                : 2;
		uint32_t devactive01_edge            : 2;
		uint32_t devactive02_edge            : 2;
		uint32_t devactive03_edge            : 2;
		uint32_t reserved_8_13               : 6;
		uint32_t devactive07_edge            : 2;
		uint32_t devactive08_edge            : 2;
		uint32_t devactive09_edge            : 2;
		uint32_t devactive10_edge            : 2;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dsuubx_cluster_ppu_iesr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_iesr ody_dsuubx_cluster_ppu_iesr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IESR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030040ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_IESR(a) ody_dsuubx_cluster_ppu_iesr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_IESR(a) "DSUUBX_CLUSTER_PPU_IESR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_IESR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_IESR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iidr
 *
 * DSUUB Cluster Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union ody_dsuubx_cluster_ppu_iidr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t product_id                  : 12;
	} s;
	/* struct ody_dsuubx_cluster_ppu_iidr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_iidr ody_dsuubx_cluster_ppu_iidr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fc8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) ody_dsuubx_cluster_ppu_iidr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) "DSUUBX_CLUSTER_PPU_IIDR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_IIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_imr
 *
 * DSUUB Cluster Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union ody_dsuubx_cluster_ppu_imr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_imr_s {
		uint32_t sta_policy_trn_irq_mask     : 1;
		uint32_t sta_accept_irq_mask         : 1;
		uint32_t sta_deny_irq_mask           : 1;
		uint32_t emu_accept_irq_mask         : 1;
		uint32_t emu_deny_irq_mask           : 1;
		uint32_t locked_irq_mask             : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dsuubx_cluster_ppu_imr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_imr ody_dsuubx_cluster_ppu_imr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_IMR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030030ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_IMR(a) ody_dsuubx_cluster_ppu_imr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_IMR(a) "DSUUBX_CLUSTER_PPU_IMR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_IMR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_IMR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_isr
 *
 * DSUUB Cluster Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (DSUUB_PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (DSUUB_PPU_AISR).
 */
union ody_dsuubx_cluster_ppu_isr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_isr_s {
		uint32_t sta_policy_trn_irq          : 1;
		uint32_t sta_accept_irq              : 1;
		uint32_t sta_deny_irq                : 1;
		uint32_t emu_accept_irq              : 1;
		uint32_t emu_deny_irq                : 1;
		uint32_t locked_irq                  : 1;
		uint32_t reserved_6                  : 1;
		uint32_t other_irq                   : 1;
		uint32_t reserved_8                  : 1;
		uint32_t pwr_active_edge_irq1        : 1;
		uint32_t pwr_active_edge_irq2        : 1;
		uint32_t pwr_active_edge_irq3        : 1;
		uint32_t reserved_12_14              : 3;
		uint32_t pwr_active_edge_irq7        : 1;
		uint32_t pwr_active_edge_irq8        : 1;
		uint32_t pwr_active_edge_irq9        : 1;
		uint32_t pwr_active_edge_irq10       : 1;
		uint32_t reserved_19_23              : 5;
		uint32_t op_active_edge_irq0         : 1;
		uint32_t op_active_edge_irq1         : 1;
		uint32_t op_active_edge_irq2         : 1;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dsuubx_cluster_ppu_isr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_isr ody_dsuubx_cluster_ppu_isr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_ISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030038ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_ISR(a) ody_dsuubx_cluster_ppu_isr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_ISR(a) "DSUUBX_CLUSTER_PPU_ISR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_ISR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_ISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_memrr
 *
 * DSUUB Cluster Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union ody_dsuubx_cluster_ppu_memrr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_memrr_s {
		uint32_t mem_ret_ram_cfg             : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_memrr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_memrr ody_dsuubx_cluster_ppu_memrr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030058ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) ody_dsuubx_cluster_ppu_memrr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) "DSUUBX_CLUSTER_PPU_MEMRR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_MEMRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_misr
 *
 * DSUUB Cluster Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union ody_dsuubx_cluster_ppu_misr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_misr_s {
		uint32_t pcsmpaccept_status          : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t devaccept_status            : 1;
		uint32_t reserved_9_15               : 7;
		uint32_t devdeny_status              : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dsuubx_cluster_ppu_misr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_misr ody_dsuubx_cluster_ppu_misr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_MISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030014ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_MISR(a) ody_dsuubx_cluster_ppu_misr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_MISR(a) "DSUUBX_CLUSTER_PPU_MISR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_MISR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_MISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_opsr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union ody_dsuubx_cluster_ppu_opsr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_opsr_s {
		uint32_t devactive16_edge            : 2;
		uint32_t devactive17_edge            : 2;
		uint32_t devactive18_edge            : 2;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dsuubx_cluster_ppu_opsr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_opsr ody_dsuubx_cluster_ppu_opsr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030044ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) ody_dsuubx_cluster_ppu_opsr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) "DSUUBX_CLUSTER_PPU_OPSR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_OPSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr0
 *
 * DSUUB Cluster PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr0 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr0_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr0 ody_dsuubx_cluster_ppu_pidr0_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fe0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) ody_dsuubx_cluster_ppu_pidr0_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) "DSUUBX_CLUSTER_PPU_PIDR0"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr1
 *
 * DSUUB Cluster PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr1 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr1_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr1 ody_dsuubx_cluster_ppu_pidr1_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fe4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) ody_dsuubx_cluster_ppu_pidr1_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) "DSUUBX_CLUSTER_PPU_PIDR1"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr2
 *
 * DSUUB Cluster PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr2 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr2_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr2 ody_dsuubx_cluster_ppu_pidr2_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fe8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) ody_dsuubx_cluster_ppu_pidr2_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) "DSUUBX_CLUSTER_PPU_PIDR2"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr3
 *
 * DSUUB Cluster PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr3 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr3_s {
		uint32_t cmod                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr3_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr3 ody_dsuubx_cluster_ppu_pidr3_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fecll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) ody_dsuubx_cluster_ppu_pidr3_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) "DSUUBX_CLUSTER_PPU_PIDR3"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr4
 *
 * DSUUB Cluster PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr4 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr4_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr4 ody_dsuubx_cluster_ppu_pidr4_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fd0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) ody_dsuubx_cluster_ppu_pidr4_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) "DSUUBX_CLUSTER_PPU_PIDR4"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr5
 *
 * DSUUB Cluster PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr5 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr5_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr5 ody_dsuubx_cluster_ppu_pidr5_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fd4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) ody_dsuubx_cluster_ppu_pidr5_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) "DSUUBX_CLUSTER_PPU_PIDR5"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr6
 *
 * DSUUB Cluster PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr6 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr6_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr6 ody_dsuubx_cluster_ppu_pidr6_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fd8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) ody_dsuubx_cluster_ppu_pidr6_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) "DSUUBX_CLUSTER_PPU_PIDR6"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr7
 *
 * DSUUB Cluster PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_cluster_ppu_pidr7 {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pidr7_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pidr7 ody_dsuubx_cluster_ppu_pidr7_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030fdcll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) ody_dsuubx_cluster_ppu_pidr7_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) "DSUUBX_CLUSTER_PPU_PIDR7"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PIDR7(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pmer
 *
 * DSUUB Cluster Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union ody_dsuubx_cluster_ppu_pmer {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pmer_s {
		uint32_t emu_en                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pmer_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pmer ody_dsuubx_cluster_ppu_pmer_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PMER(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030004ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PMER(a) ody_dsuubx_cluster_ppu_pmer_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PMER(a) "DSUUBX_CLUSTER_PPU_PMER"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PMER(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PMER(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_ptcr
 *
 * DSUUB Cluster Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union ody_dsuubx_cluster_ppu_ptcr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_ptcr_s {
		uint32_t warm_rst_devreqen           : 1;
		uint32_t dbg_recov_porst_en          : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dsuubx_cluster_ppu_ptcr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_ptcr ody_dsuubx_cluster_ppu_ptcr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030024ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) ody_dsuubx_cluster_ppu_ptcr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) "DSUUBX_CLUSTER_PPU_PTCR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PTCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwcr
 *
 * DSUUB Cluster Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union ody_dsuubx_cluster_ppu_pwcr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pwcr_s {
		uint32_t devreqen                    : 1;
		uint32_t reserved_1_8                : 8;
		uint32_t pwr_devactiveen1            : 1;
		uint32_t pwr_devactiveen2            : 1;
		uint32_t pwr_devactiveen3            : 1;
		uint32_t reserved_12                 : 1;
		uint32_t pwr_devactiveen5            : 1;
		uint32_t reserved_14                 : 1;
		uint32_t pwr_devactiveen7            : 1;
		uint32_t pwr_devactiveen8            : 1;
		uint32_t pwr_devactiveen9            : 1;
		uint32_t pwr_devactiveen10           : 1;
		uint32_t reserved_19_23              : 5;
		uint32_t op_devactiveen0             : 1;
		uint32_t op_devactiveen1             : 1;
		uint32_t op_devactiveen2             : 1;
		uint32_t reserved_27_31              : 5;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pwcr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pwcr ody_dsuubx_cluster_ppu_pwcr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030020ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) ody_dsuubx_cluster_ppu_pwcr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) "DSUUBX_CLUSTER_PPU_PWCR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PWCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwpr
 *
 * DSUUB Cluster Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (DSUUB_PPU_PWSR).
 */
union ody_dsuubx_cluster_ppu_pwpr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pwpr_s {
		uint32_t pwr_policy                  : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t pwr_dyn_en                  : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t lock_en                     : 1;
		uint32_t reserved_13_15              : 3;
		uint32_t op_policy                   : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t op_dyn_en                   : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pwpr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pwpr ody_dsuubx_cluster_ppu_pwpr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) ody_dsuubx_cluster_ppu_pwpr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) "DSUUBX_CLUSTER_PPU_PWPR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PWPR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwsr
 *
 * DSUUB Cluster Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union ody_dsuubx_cluster_ppu_pwsr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_pwsr_s {
		uint32_t pwr_status                  : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t pwr_dyn_status              : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t lock_status                 : 1;
		uint32_t reserved_13_15              : 3;
		uint32_t op_status                   : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t op_dyn_status               : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_dsuubx_cluster_ppu_pwsr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_pwsr ody_dsuubx_cluster_ppu_pwsr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) ody_dsuubx_cluster_ppu_pwsr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) "DSUUBX_CLUSTER_PPU_PWSR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_PWSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_stsr
 *
 * DSUUB Cluster Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union ody_dsuubx_cluster_ppu_stsr {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_stsr_s {
		uint32_t stored_devdeny              : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_cluster_ppu_stsr_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_stsr ody_dsuubx_cluster_ppu_stsr_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_STSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef030018ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_STSR(a) ody_dsuubx_cluster_ppu_stsr_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_STSR(a) "DSUUBX_CLUSTER_PPU_STSR"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_STSR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_STSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_unlk
 *
 * DSUUB Cluster Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union ody_dsuubx_cluster_ppu_unlk {
	uint32_t u;
	struct ody_dsuubx_cluster_ppu_unlk_s {
		uint32_t unlock                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dsuubx_cluster_ppu_unlk_s cn; */
};
typedef union ody_dsuubx_cluster_ppu_unlk ody_dsuubx_cluster_ppu_unlk_t;

static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef03001cll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTER_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) ody_dsuubx_cluster_ppu_unlk_t
#define bustype_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) "DSUUBX_CLUSTER_PPU_UNLK"
#define device_bar_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) (a)
#define arguments_ODY_DSUUBX_CLUSTER_PPU_UNLK(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterbusqos
 *
 * DSUUB Cluster Bus QoS Control Register
 * Determines the value driven on the CHI bus QoS field.
 */
union ody_dsuubx_clusterbusqos {
	uint64_t u;
	struct ody_dsuubx_clusterbusqos_s {
		uint64_t qos                         : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_dsuubx_clusterbusqos_s cn; */
};
typedef union ody_dsuubx_clusterbusqos ody_dsuubx_clusterbusqos_t;

static inline uint64_t ODY_DSUUBX_CLUSTERBUSQOS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERBUSQOS(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000048ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERBUSQOS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERBUSQOS(a) ody_dsuubx_clusterbusqos_t
#define bustype_ODY_DSUUBX_CLUSTERBUSQOS(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERBUSQOS(a) "DSUUBX_CLUSTERBUSQOS"
#define device_bar_ODY_DSUUBX_CLUSTERBUSQOS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERBUSQOS(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERBUSQOS(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clustercfr
 *
 * DSUUB Cluster Configuration Register
 * Contains details of the hardware configuration of the cluster.
 */
union ody_dsuubx_clustercfr {
	uint64_t u;
	struct ody_dsuubx_clustercfr_s {
		uint64_t numcore                     : 3;
		uint64_t reserved_3                  : 1;
		uint64_t numpe                       : 4;
		uint64_t reserved_8                  : 1;
		uint64_t l3                          : 1;
		uint64_t wrlat                       : 2;
		uint64_t rdlat                       : 1;
		uint64_t rdslc                       : 1;
		uint64_t ecc                         : 1;
		uint64_t nummas                      : 2;
		uint64_t mas                         : 1;
		uint64_t reserved_18                 : 1;
		uint64_t acpw                        : 1;
		uint64_t acp                         : 1;
		uint64_t reserved_21                 : 1;
		uint64_t ppw                         : 1;
		uint64_t pp                          : 1;
		uint64_t reserved_24                 : 1;
		uint64_t trsh                        : 2;
		uint64_t trsv                        : 2;
		uint64_t crs                         : 16;
		uint64_t reserved_45_50              : 6;
		uint64_t l3slc                       : 3;
		uint64_t reserved_54                 : 1;
		uint64_t sfidx                       : 4;
		uint64_t sfway                       : 2;
		uint64_t nodes                       : 3;
	} s;
	/* struct ody_dsuubx_clustercfr_s cn; */
};
typedef union ody_dsuubx_clustercfr ody_dsuubx_clustercfr_t;

static inline uint64_t ODY_DSUUBX_CLUSTERCFR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERCFR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000050ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERCFR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERCFR(a) ody_dsuubx_clustercfr_t
#define bustype_ODY_DSUUBX_CLUSTERCFR(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERCFR(a) "DSUUBX_CLUSTERCFR"
#define device_bar_ODY_DSUUBX_CLUSTERCFR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERCFR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERCFR(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterectlr
 *
 * DSUUB Cluster Extended Control Register
 * This register should be used for dynamically changing implementation specific
 * control bits.
 */
union ody_dsuubx_clusterectlr {
	uint64_t u;
	struct ody_dsuubx_clusterectlr_s {
		uint64_t reserved_0                  : 1;
		uint64_t enpoisnpp                   : 1;
		uint64_t disevpwr                    : 1;
		uint64_t disevict                    : 1;
		uint64_t enpoisn                     : 1;
		uint64_t nol3stash                   : 2;
		uint64_t disatom                     : 1;
		uint64_t pfmtch                      : 3;
		uint64_t reserved_11_14              : 4;
		uint64_t l3wrlat                     : 2;
		uint64_t l3rdlat                     : 1;
		uint64_t reserved_18_41              : 24;
		uint64_t dsfp                        : 1;
		uint64_t efc                         : 1;
		uint64_t dcc                         : 2;
		uint64_t reserved_46_63              : 18;
	} s;
	/* struct ody_dsuubx_clusterectlr_s cn; */
};
typedef union ody_dsuubx_clusterectlr ody_dsuubx_clusterectlr_t;

static inline uint64_t ODY_DSUUBX_CLUSTERECTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERECTLR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000060ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERECTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERECTLR(a) ody_dsuubx_clusterectlr_t
#define bustype_ODY_DSUUBX_CLUSTERECTLR(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERECTLR(a) "DSUUBX_CLUSTERECTLR"
#define device_bar_ODY_DSUUBX_CLUSTERECTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERECTLR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERECTLR(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusteridr
 *
 * DSUUB Cluster Main Revision Register
 * Holds the revision and patch level of the cluster.
 */
union ody_dsuubx_clusteridr {
	uint64_t u;
	struct ody_dsuubx_clusteridr_s {
		uint64_t revision                    : 4;
		uint64_t variant                     : 4;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_dsuubx_clusteridr_s cn; */
};
typedef union ody_dsuubx_clusteridr ody_dsuubx_clusteridr_t;

static inline uint64_t ODY_DSUUBX_CLUSTERIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERIDR(a) ody_dsuubx_clusteridr_t
#define bustype_ODY_DSUUBX_CLUSTERIDR(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERIDR(a) "DSUUBX_CLUSTERIDR"
#define device_bar_ODY_DSUUBX_CLUSTERIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERIDR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERIDR(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3dnth0
 *
 * DSUUB Cluster L3 Downsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3dnth0 {
	uint64_t u;
	struct ody_dsuubx_clusterl3dnth0_s {
		uint64_t dnth0                       : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3dnth0_s cn; */
};
typedef union ody_dsuubx_clusterl3dnth0 ody_dsuubx_clusterl3dnth0_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3DNTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3DNTH0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000028ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3DNTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3DNTH0(a) ody_dsuubx_clusterl3dnth0_t
#define bustype_ODY_DSUUBX_CLUSTERL3DNTH0(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3DNTH0(a) "DSUUBX_CLUSTERL3DNTH0"
#define device_bar_ODY_DSUUBX_CLUSTERL3DNTH0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3DNTH0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3DNTH0(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3dnth1
 *
 * DSUUB Cluster L3 Downsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3dnth1 {
	uint64_t u;
	struct ody_dsuubx_clusterl3dnth1_s {
		uint64_t dnth0                       : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3dnth1_s cn; */
};
typedef union ody_dsuubx_clusterl3dnth1 ody_dsuubx_clusterl3dnth1_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3DNTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3DNTH1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000030ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3DNTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3DNTH1(a) ody_dsuubx_clusterl3dnth1_t
#define bustype_ODY_DSUUBX_CLUSTERL3DNTH1(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3DNTH1(a) "DSUUBX_CLUSTERL3DNTH1"
#define device_bar_ODY_DSUUBX_CLUSTERL3DNTH1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3DNTH1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3DNTH1(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3hit
 *
 * DSUUB Cluster L3 Hit Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3hit {
	uint64_t u;
	struct ody_dsuubx_clusterl3hit_s {
		uint64_t hitcnt                      : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3hit_s cn; */
};
typedef union ody_dsuubx_clusterl3hit ody_dsuubx_clusterl3hit_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3HIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3HIT(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000018ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3HIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3HIT(a) ody_dsuubx_clusterl3hit_t
#define bustype_ODY_DSUUBX_CLUSTERL3HIT(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3HIT(a) "DSUUBX_CLUSTERL3HIT"
#define device_bar_ODY_DSUUBX_CLUSTERL3HIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3HIT(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3HIT(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3miss
 *
 * DSUUB Cluster L3 Miss Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3miss {
	uint64_t u;
	struct ody_dsuubx_clusterl3miss_s {
		uint64_t misscnt                     : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3miss_s cn; */
};
typedef union ody_dsuubx_clusterl3miss ody_dsuubx_clusterl3miss_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3MISS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3MISS(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000020ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3MISS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3MISS(a) ody_dsuubx_clusterl3miss_t
#define bustype_ODY_DSUUBX_CLUSTERL3MISS(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3MISS(a) "DSUUBX_CLUSTERL3MISS"
#define device_bar_ODY_DSUUBX_CLUSTERL3MISS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3MISS(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3MISS(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3upth0
 *
 * DSUUB Cluster L3 Upsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3upth0 {
	uint64_t u;
	struct ody_dsuubx_clusterl3upth0_s {
		uint64_t upth0                       : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3upth0_s cn; */
};
typedef union ody_dsuubx_clusterl3upth0 ody_dsuubx_clusterl3upth0_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3UPTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3UPTH0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000038ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3UPTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3UPTH0(a) ody_dsuubx_clusterl3upth0_t
#define bustype_ODY_DSUUBX_CLUSTERL3UPTH0(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3UPTH0(a) "DSUUBX_CLUSTERL3UPTH0"
#define device_bar_ODY_DSUUBX_CLUSTERL3UPTH0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3UPTH0(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3UPTH0(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterl3upth1
 *
 * DSUUB Cluster L3 Upsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union ody_dsuubx_clusterl3upth1 {
	uint64_t u;
	struct ody_dsuubx_clusterl3upth1_s {
		uint64_t upth1                       : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_dsuubx_clusterl3upth1_s cn; */
};
typedef union ody_dsuubx_clusterl3upth1 ody_dsuubx_clusterl3upth1_t;

static inline uint64_t ODY_DSUUBX_CLUSTERL3UPTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERL3UPTH1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000040ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERL3UPTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERL3UPTH1(a) ody_dsuubx_clusterl3upth1_t
#define bustype_ODY_DSUUBX_CLUSTERL3UPTH1(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERL3UPTH1(a) "DSUUBX_CLUSTERL3UPTH1"
#define device_bar_ODY_DSUUBX_CLUSTERL3UPTH1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERL3UPTH1(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERL3UPTH1(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterpwrctlr
 *
 * DSUUB Cluster Power Control Register
 * This register controls power features of the cluster.
 */
union ody_dsuubx_clusterpwrctlr {
	uint64_t u;
	struct ody_dsuubx_clusterpwrctlr_s {
		uint64_t retctl                      : 3;
		uint64_t reserved_3                  : 1;
		uint64_t prtnrq                      : 2;
		uint64_t slcrq                       : 1;
		uint64_t reserved_7_11               : 5;
		uint64_t autoprtn                    : 3;
		uint64_t reserved_15_17              : 3;
		uint64_t lslp                        : 1;
		uint64_t reserved_19_63              : 45;
	} s;
	/* struct ody_dsuubx_clusterpwrctlr_s cn; */
};
typedef union ody_dsuubx_clusterpwrctlr ody_dsuubx_clusterpwrctlr_t;

static inline uint64_t ODY_DSUUBX_CLUSTERPWRCTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERPWRCTLR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERPWRCTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERPWRCTLR(a) ody_dsuubx_clusterpwrctlr_t
#define bustype_ODY_DSUUBX_CLUSTERPWRCTLR(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERPWRCTLR(a) "DSUUBX_CLUSTERPWRCTLR"
#define device_bar_ODY_DSUUBX_CLUSTERPWRCTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERPWRCTLR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERPWRCTLR(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_clusterrevidr
 *
 * DSUUB Cluster ECO ID Register
 * Enables ECO patches to be applied to the cluster level to be identified by software.
 */
union ody_dsuubx_clusterrevidr {
	uint64_t u;
	struct ody_dsuubx_clusterrevidr_s {
		uint64_t ecoid                       : 64;
	} s;
	/* struct ody_dsuubx_clusterrevidr_s cn; */
};
typedef union ody_dsuubx_clusterrevidr ody_dsuubx_clusterrevidr_t;

static inline uint64_t ODY_DSUUBX_CLUSTERREVIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CLUSTERREVIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef000008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CLUSTERREVIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CLUSTERREVIDR(a) ody_dsuubx_clusterrevidr_t
#define bustype_ODY_DSUUBX_CLUSTERREVIDR(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CLUSTERREVIDR(a) "DSUUBX_CLUSTERREVIDR"
#define device_bar_ODY_DSUUBX_CLUSTERREVIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CLUSTERREVIDR(a) (a)
#define arguments_ODY_DSUUBX_CLUSTERREVIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_aidr
 *
 * DSUUB Core Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union ody_dsuubx_core_ppu_aidr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_aidr_s {
		uint32_t arch_rev_minor              : 4;
		uint32_t arch_rev_major              : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_aidr_s cn; */
};
typedef union ody_dsuubx_core_ppu_aidr ody_dsuubx_core_ppu_aidr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_AIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fccll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_AIDR(a) ody_dsuubx_core_ppu_aidr_t
#define bustype_ODY_DSUUBX_CORE_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_AIDR(a) "DSUUBX_CORE_PPU_AIDR"
#define device_bar_ODY_DSUUBX_CORE_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_AIDR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_AIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_aimr
 *
 * DSUUB Core Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (PPU_IMR), Input Edge Sensitivity Register (PPU_IESR), and the
 * Operating Mode Active Edge Sensitivity Register (PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union ody_dsuubx_core_ppu_aimr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_aimr_s {
		uint32_t unspt_policy_irq_mask       : 1;
		uint32_t dyn_accept_irq_mask         : 1;
		uint32_t dyn_deny_irq_mask           : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dsuubx_core_ppu_aimr_s cn; */
};
typedef union ody_dsuubx_core_ppu_aimr ody_dsuubx_core_ppu_aimr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_AIMR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080034ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_AIMR(a) ody_dsuubx_core_ppu_aimr_t
#define bustype_ODY_DSUUBX_CORE_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_AIMR(a) "DSUUBX_CORE_PPU_AIMR"
#define device_bar_ODY_DSUUBX_CORE_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_AIMR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_AIMR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_aisr
 *
 * DSUUB Core Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events can be active
 * at the same time. When an interrupt event is masked by the corresponding bit in PPU_AIMR, an
 * occurrence of that event does not set the status bit.
 * A write of 1 to a set event bit clears that event. A write of 0 has no effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (PPU_ISR). Status bits in this register (PPU_AISR) are only cleared
 * by writing to this
 * register.
 */
union ody_dsuubx_core_ppu_aisr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_aisr_s {
		uint32_t unspt_policy_irq            : 1;
		uint32_t dyn_accept_irq              : 1;
		uint32_t dyn_deny_irq                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_dsuubx_core_ppu_aisr_s cn; */
};
typedef union ody_dsuubx_core_ppu_aisr ody_dsuubx_core_ppu_aisr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_AISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef08003cll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_AISR(a) ody_dsuubx_core_ppu_aisr_t
#define bustype_ODY_DSUUBX_CORE_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_AISR(a) "DSUUBX_CORE_PPU_AISR"
#define device_bar_ODY_DSUUBX_CORE_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_AISR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_AISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr0
 *
 * DSUUB Core PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_cidr0 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_cidr0_s cn; */
};
typedef union ody_dsuubx_core_ppu_cidr0 ody_dsuubx_core_ppu_cidr0_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080ff0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_CIDR0(a) ody_dsuubx_core_ppu_cidr0_t
#define bustype_ODY_DSUUBX_CORE_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_CIDR0(a) "DSUUBX_CORE_PPU_CIDR0"
#define device_bar_ODY_DSUUBX_CORE_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_CIDR0(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_CIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr1
 *
 * DSUUB Core PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_cidr1 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t clas                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_cidr1_s cn; */
};
typedef union ody_dsuubx_core_ppu_cidr1 ody_dsuubx_core_ppu_cidr1_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080ff4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_CIDR1(a) ody_dsuubx_core_ppu_cidr1_t
#define bustype_ODY_DSUUBX_CORE_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_CIDR1(a) "DSUUBX_CORE_PPU_CIDR1"
#define device_bar_ODY_DSUUBX_CORE_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_CIDR1(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_CIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr2
 *
 * DSUUB Core PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_cidr2 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_cidr2_s cn; */
};
typedef union ody_dsuubx_core_ppu_cidr2 ody_dsuubx_core_ppu_cidr2_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_CIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080ff8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_CIDR2(a) ody_dsuubx_core_ppu_cidr2_t
#define bustype_ODY_DSUUBX_CORE_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_CIDR2(a) "DSUUBX_CORE_PPU_CIDR2"
#define device_bar_ODY_DSUUBX_CORE_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_CIDR2(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_CIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr0
 *
 * DSUUB Core Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union ody_dsuubx_core_ppu_dcdr0 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_dcdr0_s {
		uint32_t clken_rst_dly               : 8;
		uint32_t iso_clken_dly               : 8;
		uint32_t rst_hwstat_dly              : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_dsuubx_core_ppu_dcdr0_s cn; */
};
typedef union ody_dsuubx_core_ppu_dcdr0 ody_dsuubx_core_ppu_dcdr0_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_DCDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080170ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_DCDR0(a) ody_dsuubx_core_ppu_dcdr0_t
#define bustype_ODY_DSUUBX_CORE_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_DCDR0(a) "DSUUBX_CORE_PPU_DCDR0"
#define device_bar_ODY_DSUUBX_CORE_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_DCDR0(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_DCDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr1
 *
 * DSUUB Core Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union ody_dsuubx_core_ppu_dcdr1 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_dcdr1_s {
		uint32_t iso_rst_dly                 : 8;
		uint32_t clken_iso_dly               : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_dsuubx_core_ppu_dcdr1_s cn; */
};
typedef union ody_dsuubx_core_ppu_dcdr1 ody_dsuubx_core_ppu_dcdr1_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_DCDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080174ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_DCDR1(a) ody_dsuubx_core_ppu_dcdr1_t
#define bustype_ODY_DSUUBX_CORE_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_DCDR1(a) "DSUUBX_CORE_PPU_DCDR1"
#define device_bar_ODY_DSUUBX_CORE_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_DCDR1(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_DCDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_disr
 *
 * DSUUB Core Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union ody_dsuubx_core_ppu_disr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_disr_s {
		uint32_t pwr_devactive_status        : 11;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_dsuubx_core_ppu_disr_s cn; */
};
typedef union ody_dsuubx_core_ppu_disr ody_dsuubx_core_ppu_disr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_DISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_DISR(a) ody_dsuubx_core_ppu_disr_t
#define bustype_ODY_DSUUBX_CORE_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_DISR(a) "DSUUBX_CORE_PPU_DISR"
#define device_bar_ODY_DSUUBX_CORE_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_DISR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_DISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_fulrr
 *
 * DSUUB Core Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union ody_dsuubx_core_ppu_fulrr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_fulrr_s {
		uint32_t full_ret_ram_cfg            : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_fulrr_s cn; */
};
typedef union ody_dsuubx_core_ppu_fulrr ody_dsuubx_core_ppu_fulrr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_FULRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080054ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_FULRR(a) ody_dsuubx_core_ppu_fulrr_t
#define bustype_ODY_DSUUBX_CORE_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_FULRR(a) "DSUUBX_CORE_PPU_FULRR"
#define device_bar_ODY_DSUUBX_CORE_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_FULRR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_FULRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_funrr
 *
 * DSUUB Core Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union ody_dsuubx_core_ppu_funrr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_funrr_s {
		uint32_t func_ret_ram_cfg            : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_funrr_s cn; */
};
typedef union ody_dsuubx_core_ppu_funrr ody_dsuubx_core_ppu_funrr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_FUNRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080050ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_FUNRR(a) ody_dsuubx_core_ppu_funrr_t
#define bustype_ODY_DSUUBX_CORE_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_FUNRR(a) "DSUUBX_CORE_PPU_FUNRR"
#define device_bar_ODY_DSUUBX_CORE_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_FUNRR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_FUNRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr0
 *
 * DSUUB Core PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification Register 1
 * (PPU_IDR1).
 */
union ody_dsuubx_core_ppu_idr0 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_idr0_s {
		uint32_t devchan                     : 4;
		uint32_t num_opmode                  : 4;
		uint32_t sta_off_spt                 : 1;
		uint32_t sta_off_emu_spt             : 1;
		uint32_t sta_mem_ret_spt             : 1;
		uint32_t sta_mem_ret_emu_spt         : 1;
		uint32_t sta_lgc_ret_spt             : 1;
		uint32_t sta_mem_off_spt             : 1;
		uint32_t sta_full_ret_spt            : 1;
		uint32_t sta_func_ret_spt            : 1;
		uint32_t sta_on_spt                  : 1;
		uint32_t sta_wrm_rst_spt             : 1;
		uint32_t sta_dbg_recov_spt           : 1;
		uint32_t reserved_19                 : 1;
		uint32_t dyn_off_spt                 : 1;
		uint32_t dyn_off_emu_spt             : 1;
		uint32_t dyn_mem_ret_spt             : 1;
		uint32_t dyn_mem_ret_emu_spt         : 1;
		uint32_t dyn_lgc_ret_spt             : 1;
		uint32_t dyn_mem_off_spt             : 1;
		uint32_t dyn_full_ret_spt            : 1;
		uint32_t dyn_func_ret_spt            : 1;
		uint32_t dyn_on_spt                  : 1;
		uint32_t dyn_wrm_rst_spt             : 1;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_dsuubx_core_ppu_idr0_s cn; */
};
typedef union ody_dsuubx_core_ppu_idr0 ody_dsuubx_core_ppu_idr0_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_IDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fb0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_IDR0(a) ody_dsuubx_core_ppu_idr0_t
#define bustype_ODY_DSUUBX_CORE_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_IDR0(a) "DSUUBX_CORE_PPU_IDR0"
#define device_bar_ODY_DSUUBX_CORE_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_IDR0(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_IDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr1
 *
 * DSUUB Core PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification Register 0
 * (PPU_IDR0).
 */
union ody_dsuubx_core_ppu_idr1 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_idr1_s {
		uint32_t pwr_mode_entry_del_spt      : 1;
		uint32_t sw_dev_del_spt              : 1;
		uint32_t lock_spt                    : 1;
		uint32_t reserved_3                  : 1;
		uint32_t mem_ret_ram_reg             : 1;
		uint32_t full_ret_ram_reg            : 1;
		uint32_t func_ret_ram_reg            : 1;
		uint32_t reserved_7                  : 1;
		uint32_t sta_policy_pwr_irq_spt      : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t off_mem_ret_trans           : 1;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dsuubx_core_ppu_idr1_s cn; */
};
typedef union ody_dsuubx_core_ppu_idr1 ody_dsuubx_core_ppu_idr1_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_IDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fb4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_IDR1(a) ody_dsuubx_core_ppu_idr1_t
#define bustype_ODY_DSUUBX_CORE_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_IDR1(a) "DSUUBX_CORE_PPU_IDR1"
#define device_bar_ODY_DSUUBX_CORE_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_IDR1(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_IDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_iesr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union ody_dsuubx_core_ppu_iesr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_iesr_s {
		uint32_t reserved_0_1                : 2;
		uint32_t devactive01_edge            : 2;
		uint32_t reserved_4_9                : 6;
		uint32_t devactive05_edge            : 2;
		uint32_t reserved_12_13              : 2;
		uint32_t devactive07_edge            : 2;
		uint32_t devactive08_edge            : 2;
		uint32_t devactive09_edge            : 2;
		uint32_t devactive10_edge            : 2;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_dsuubx_core_ppu_iesr_s cn; */
};
typedef union ody_dsuubx_core_ppu_iesr ody_dsuubx_core_ppu_iesr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_IESR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080040ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_IESR(a) ody_dsuubx_core_ppu_iesr_t
#define bustype_ODY_DSUUBX_CORE_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_IESR(a) "DSUUBX_CORE_PPU_IESR"
#define device_bar_ODY_DSUUBX_CORE_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_IESR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_IESR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_iidr
 *
 * DSUUB Core Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union ody_dsuubx_core_ppu_iidr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t product_id                  : 12;
	} s;
	/* struct ody_dsuubx_core_ppu_iidr_s cn; */
};
typedef union ody_dsuubx_core_ppu_iidr ody_dsuubx_core_ppu_iidr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_IIDR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fc8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_IIDR(a) ody_dsuubx_core_ppu_iidr_t
#define bustype_ODY_DSUUBX_CORE_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_IIDR(a) "DSUUBX_CORE_PPU_IIDR"
#define device_bar_ODY_DSUUBX_CORE_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_IIDR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_IIDR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_imr
 *
 * DSUUB Core Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union ody_dsuubx_core_ppu_imr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_imr_s {
		uint32_t sta_policy_trn_irq_mask     : 1;
		uint32_t sta_accept_irq_mask         : 1;
		uint32_t sta_deny_irq_mask           : 1;
		uint32_t emu_accept_irq_mask         : 1;
		uint32_t emu_deny_irq_mask           : 1;
		uint32_t locked_irq_mask             : 1;
		uint32_t reserved_6_31               : 26;
	} s;
	/* struct ody_dsuubx_core_ppu_imr_s cn; */
};
typedef union ody_dsuubx_core_ppu_imr ody_dsuubx_core_ppu_imr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_IMR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080030ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_IMR(a) ody_dsuubx_core_ppu_imr_t
#define bustype_ODY_DSUUBX_CORE_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_IMR(a) "DSUUBX_CORE_PPU_IMR"
#define device_bar_ODY_DSUUBX_CORE_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_IMR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_IMR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_isr
 *
 * DSUUB Core Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (PPU_AISR).
 */
union ody_dsuubx_core_ppu_isr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_isr_s {
		uint32_t sta_policy_trn_irq          : 1;
		uint32_t sta_accept_irq              : 1;
		uint32_t sta_deny_irq                : 1;
		uint32_t emu_accept_irq              : 1;
		uint32_t emu_deny_irq                : 1;
		uint32_t locked_irq                  : 1;
		uint32_t reserved_6                  : 1;
		uint32_t other_irq                   : 1;
		uint32_t reserved_8                  : 1;
		uint32_t pwr_active_edge_irq1        : 1;
		uint32_t reserved_10_12              : 3;
		uint32_t pwr_active_edge_irq5        : 1;
		uint32_t reserved_14                 : 1;
		uint32_t pwr_active_edge_irq7        : 1;
		uint32_t pwr_active_edge_irq8        : 1;
		uint32_t pwr_active_edge_irq9        : 1;
		uint32_t pwr_active_edge_irq10       : 1;
		uint32_t reserved_19_31              : 13;
	} s;
	/* struct ody_dsuubx_core_ppu_isr_s cn; */
};
typedef union ody_dsuubx_core_ppu_isr ody_dsuubx_core_ppu_isr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_ISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080038ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_ISR(a) ody_dsuubx_core_ppu_isr_t
#define bustype_ODY_DSUUBX_CORE_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_ISR(a) "DSUUBX_CORE_PPU_ISR"
#define device_bar_ODY_DSUUBX_CORE_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_ISR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_ISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_memrr
 *
 * DSUUB Core Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union ody_dsuubx_core_ppu_memrr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_memrr_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_core_ppu_memrr_s cn; */
};
typedef union ody_dsuubx_core_ppu_memrr ody_dsuubx_core_ppu_memrr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_MEMRR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080058ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_MEMRR(a) ody_dsuubx_core_ppu_memrr_t
#define bustype_ODY_DSUUBX_CORE_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_MEMRR(a) "DSUUBX_CORE_PPU_MEMRR"
#define device_bar_ODY_DSUUBX_CORE_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_MEMRR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_MEMRR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_misr
 *
 * DSUUB Core Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union ody_dsuubx_core_ppu_misr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_misr_s {
		uint32_t pcsmpaccept_status          : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t devaccept_status            : 1;
		uint32_t reserved_9_15               : 7;
		uint32_t devdeny_status              : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_dsuubx_core_ppu_misr_s cn; */
};
typedef union ody_dsuubx_core_ppu_misr ody_dsuubx_core_ppu_misr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_MISR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080014ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_MISR(a) ody_dsuubx_core_ppu_misr_t
#define bustype_ODY_DSUUBX_CORE_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_MISR(a) "DSUUBX_CORE_PPU_MISR"
#define device_bar_ODY_DSUUBX_CORE_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_MISR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_MISR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_opsr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union ody_dsuubx_core_ppu_opsr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_opsr_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_core_ppu_opsr_s cn; */
};
typedef union ody_dsuubx_core_ppu_opsr ody_dsuubx_core_ppu_opsr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_OPSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080044ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_OPSR(a) ody_dsuubx_core_ppu_opsr_t
#define bustype_ODY_DSUUBX_CORE_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_OPSR(a) "DSUUBX_CORE_PPU_OPSR"
#define device_bar_ODY_DSUUBX_CORE_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_OPSR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_OPSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr0
 *
 * DSUUB Core PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr0 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr0_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr0 ody_dsuubx_core_ppu_pidr0_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR0(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fe0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR0(a) ody_dsuubx_core_ppu_pidr0_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR0(a) "DSUUBX_CORE_PPU_PIDR0"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR0(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR0(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr1
 *
 * DSUUB Core PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr1 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr1_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr1 ody_dsuubx_core_ppu_pidr1_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fe4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR1(a) ody_dsuubx_core_ppu_pidr1_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR1(a) "DSUUBX_CORE_PPU_PIDR1"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR1(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR1(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr2
 *
 * DSUUB Core PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr2 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr2_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr2 ody_dsuubx_core_ppu_pidr2_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR2(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fe8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR2(a) ody_dsuubx_core_ppu_pidr2_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR2(a) "DSUUBX_CORE_PPU_PIDR2"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR2(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR2(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr3
 *
 * DSUUB Core PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr3 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr3_s {
		uint32_t cmod                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr3_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr3 ody_dsuubx_core_ppu_pidr3_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fecll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR3(a) ody_dsuubx_core_ppu_pidr3_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR3(a) "DSUUBX_CORE_PPU_PIDR3"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR3(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR3(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr4
 *
 * DSUUB Core PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr4 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr4_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr4 ody_dsuubx_core_ppu_pidr4_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR4(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fd0ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR4(a) ody_dsuubx_core_ppu_pidr4_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR4(a) "DSUUBX_CORE_PPU_PIDR4"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR4(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR4(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr5
 *
 * DSUUB Core PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr5 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr5_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr5 ody_dsuubx_core_ppu_pidr5_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR5(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fd4ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR5(a) ody_dsuubx_core_ppu_pidr5_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR5(a) "DSUUBX_CORE_PPU_PIDR5"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR5(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR5(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr6
 *
 * DSUUB Core PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr6 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr6_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr6 ody_dsuubx_core_ppu_pidr6_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR6(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fd8ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR6(a) ody_dsuubx_core_ppu_pidr6_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR6(a) "DSUUBX_CORE_PPU_PIDR6"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR6(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR6(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr7
 *
 * DSUUB Core PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union ody_dsuubx_core_ppu_pidr7 {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_dsuubx_core_ppu_pidr7_s cn; */
};
typedef union ody_dsuubx_core_ppu_pidr7 ody_dsuubx_core_ppu_pidr7_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PIDR7(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080fdcll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PIDR7(a) ody_dsuubx_core_ppu_pidr7_t
#define bustype_ODY_DSUUBX_CORE_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PIDR7(a) "DSUUBX_CORE_PPU_PIDR7"
#define device_bar_ODY_DSUUBX_CORE_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PIDR7(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PIDR7(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pmer
 *
 * DSUUB Core Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union ody_dsuubx_core_ppu_pmer {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pmer_s {
		uint32_t emu_en                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dsuubx_core_ppu_pmer_s cn; */
};
typedef union ody_dsuubx_core_ppu_pmer ody_dsuubx_core_ppu_pmer_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PMER(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080004ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PMER(a) ody_dsuubx_core_ppu_pmer_t
#define bustype_ODY_DSUUBX_CORE_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PMER(a) "DSUUBX_CORE_PPU_PMER"
#define device_bar_ODY_DSUUBX_CORE_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PMER(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PMER(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_ptcr
 *
 * DSUUB Core Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union ody_dsuubx_core_ppu_ptcr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_ptcr_s {
		uint32_t warm_rst_devreqen           : 1;
		uint32_t dbg_recov_porst_en          : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_dsuubx_core_ppu_ptcr_s cn; */
};
typedef union ody_dsuubx_core_ppu_ptcr ody_dsuubx_core_ppu_ptcr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PTCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080024ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PTCR(a) ody_dsuubx_core_ppu_ptcr_t
#define bustype_ODY_DSUUBX_CORE_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PTCR(a) "DSUUBX_CORE_PPU_PTCR"
#define device_bar_ODY_DSUUBX_CORE_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PTCR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PTCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwcr
 *
 * DSUUB Core Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union ody_dsuubx_core_ppu_pwcr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pwcr_s {
		uint32_t devreqen                    : 1;
		uint32_t reserved_1_8                : 8;
		uint32_t pwr_devactiveen1            : 1;
		uint32_t reserved_10_12              : 3;
		uint32_t pwr_devactiveen5            : 1;
		uint32_t reserved_14                 : 1;
		uint32_t pwr_devactiveen7            : 1;
		uint32_t pwr_devactiveen8            : 1;
		uint32_t pwr_devactiveen9            : 1;
		uint32_t pwr_devactiveen10           : 1;
		uint32_t reserved_19_31              : 13;
	} s;
	/* struct ody_dsuubx_core_ppu_pwcr_s cn; */
};
typedef union ody_dsuubx_core_ppu_pwcr ody_dsuubx_core_ppu_pwcr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PWCR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080020ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PWCR(a) ody_dsuubx_core_ppu_pwcr_t
#define bustype_ODY_DSUUBX_CORE_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PWCR(a) "DSUUBX_CORE_PPU_PWCR"
#define device_bar_ODY_DSUUBX_CORE_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PWCR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PWCR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwpr
 *
 * DSUUB Core Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (PPU_PWSR).
 */
union ody_dsuubx_core_ppu_pwpr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pwpr_s {
		uint32_t pwr_policy                  : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t pwr_dyn_en                  : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t lock_en                     : 1;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dsuubx_core_ppu_pwpr_s cn; */
};
typedef union ody_dsuubx_core_ppu_pwpr ody_dsuubx_core_ppu_pwpr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PWPR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PWPR(a) ody_dsuubx_core_ppu_pwpr_t
#define bustype_ODY_DSUUBX_CORE_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PWPR(a) "DSUUBX_CORE_PPU_PWPR"
#define device_bar_ODY_DSUUBX_CORE_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PWPR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PWPR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwsr
 *
 * DSUUB Core Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union ody_dsuubx_core_ppu_pwsr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_pwsr_s {
		uint32_t pwr_status                  : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t pwr_dyn_status              : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t lock_status                 : 1;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_dsuubx_core_ppu_pwsr_s cn; */
};
typedef union ody_dsuubx_core_ppu_pwsr ody_dsuubx_core_ppu_pwsr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_PWSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080008ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_PWSR(a) ody_dsuubx_core_ppu_pwsr_t
#define bustype_ODY_DSUUBX_CORE_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_PWSR(a) "DSUUBX_CORE_PPU_PWSR"
#define device_bar_ODY_DSUUBX_CORE_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_PWSR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_PWSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_stsr
 *
 * DSUUB Core Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union ody_dsuubx_core_ppu_stsr {
	uint32_t u;
	struct ody_dsuubx_core_ppu_stsr_s {
		uint32_t stored_devdeny              : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_dsuubx_core_ppu_stsr_s cn; */
};
typedef union ody_dsuubx_core_ppu_stsr ody_dsuubx_core_ppu_stsr_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_STSR(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef080018ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_STSR(a) ody_dsuubx_core_ppu_stsr_t
#define bustype_ODY_DSUUBX_CORE_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_STSR(a) "DSUUBX_CORE_PPU_STSR"
#define device_bar_ODY_DSUUBX_CORE_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_STSR(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_STSR(a) (a), -1, -1, -1

/**
 * Register (RSL32b) dsuub#_core_ppu_unlk
 *
 * DSUUB Core Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union ody_dsuubx_core_ppu_unlk {
	uint32_t u;
	struct ody_dsuubx_core_ppu_unlk_s {
		uint32_t unlock                      : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_dsuubx_core_ppu_unlk_s cn; */
};
typedef union ody_dsuubx_core_ppu_unlk ody_dsuubx_core_ppu_unlk_t;

static inline uint64_t ODY_DSUUBX_CORE_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CORE_PPU_UNLK(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef08001cll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CORE_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CORE_PPU_UNLK(a) ody_dsuubx_core_ppu_unlk_t
#define bustype_ODY_DSUUBX_CORE_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_ODY_DSUUBX_CORE_PPU_UNLK(a) "DSUUBX_CORE_PPU_UNLK"
#define device_bar_ODY_DSUUBX_CORE_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CORE_PPU_UNLK(a) (a)
#define arguments_ODY_DSUUBX_CORE_PPU_UNLK(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_cpumpmmcr_el3
 *
 * Dsuub MPMM Control Register
 * This register controls whether MPMM is enabled and selects the currently active MPMM "gear."
 */
union ody_dsuubx_cpumpmmcr_el3 {
	uint64_t u;
	struct ody_dsuubx_cpumpmmcr_el3_s {
		uint64_t mpmm_en                     : 1;
		uint64_t mpmm_gear                   : 2;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_dsuubx_cpumpmmcr_el3_s cn; */
};
typedef union ody_dsuubx_cpumpmmcr_el3 ody_dsuubx_cpumpmmcr_el3_t;

static inline uint64_t ODY_DSUUBX_CPUMPMMCR_EL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CPUMPMMCR_EL3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef0b0010ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CPUMPMMCR_EL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CPUMPMMCR_EL3(a) ody_dsuubx_cpumpmmcr_el3_t
#define bustype_ODY_DSUUBX_CPUMPMMCR_EL3(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CPUMPMMCR_EL3(a) "DSUUBX_CPUMPMMCR_EL3"
#define device_bar_ODY_DSUUBX_CPUMPMMCR_EL3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CPUMPMMCR_EL3(a) (a)
#define arguments_ODY_DSUUBX_CPUMPMMCR_EL3(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_cpuppmcr_el3
 *
 * Dsuub Global PPM Configuration Register
 * This register controls global PPM features and allows discovery of the PPM implementation details.
 */
union ody_dsuubx_cpuppmcr_el3 {
	uint64_t u;
	struct ody_dsuubx_cpuppmcr_el3_s {
		uint64_t mpmmpinctl                  : 1;
		uint64_t pdppinctl                   : 1;
		uint64_t reserved_2_7                : 6;
		uint64_t mpmm_gears                  : 3;
		uint64_t reserved_11_15              : 5;
		uint64_t pdp_setps                   : 2;
		uint64_t pdp_extms                   : 1;
		uint64_t reserved_19_63              : 45;
	} s;
	/* struct ody_dsuubx_cpuppmcr_el3_s cn; */
};
typedef union ody_dsuubx_cpuppmcr_el3 ody_dsuubx_cpuppmcr_el3_t;

static inline uint64_t ODY_DSUUBX_CPUPPMCR_EL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CPUPPMCR_EL3(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef0b0000ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CPUPPMCR_EL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CPUPPMCR_EL3(a) ody_dsuubx_cpuppmcr_el3_t
#define bustype_ODY_DSUUBX_CPUPPMCR_EL3(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CPUPPMCR_EL3(a) "DSUUBX_CPUPPMCR_EL3"
#define device_bar_ODY_DSUUBX_CPUPPMCR_EL3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CPUPPMCR_EL3(a) (a)
#define arguments_ODY_DSUUBX_CPUPPMCR_EL3(a) (a), -1, -1, -1

/**
 * Register (RSL) dsuub#_cpuppmpdpcr_el1
 *
 * Dsuub PDP Control Register
 * This register controls the aggressiveness of the PDP feature. The core and external memory
 * system reduction features may be independently controlled.
 */
union ody_dsuubx_cpuppmpdpcr_el1 {
	uint64_t u;
	struct ody_dsuubx_cpuppmpdpcr_el1_s {
		uint64_t pdp_core_set                : 2;
		uint64_t reserved_2_31               : 30;
		uint64_t pdp_extms_set               : 2;
		uint64_t reserved_34_63              : 30;
	} s;
	/* struct ody_dsuubx_cpuppmpdpcr_el1_s cn; */
};
typedef union ody_dsuubx_cpuppmpdpcr_el1 ody_dsuubx_cpuppmpdpcr_el1_t;

static inline uint64_t ODY_DSUUBX_CPUPPMPDPCR_EL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_DSUUBX_CPUPPMPDPCR_EL1(uint64_t a)
{
	if (a <= 89)
		return 0x87e2ef0b0020ll + 0x1000000ll * ((a) & 0x7f);
	__ody_csr_fatal("DSUUBX_CPUPPMPDPCR_EL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) ody_dsuubx_cpuppmpdpcr_el1_t
#define bustype_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) CSR_TYPE_RSL
#define basename_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) "DSUUBX_CPUPPMPDPCR_EL1"
#define device_bar_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) (a)
#define arguments_ODY_DSUUBX_CPUPPMPDPCR_EL1(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_DSUUB_H__ */
