#ifndef __ODY_CSRS_CST_SHRD_FUNNEL_H__
#define __ODY_CSRS_CST_SHRD_FUNNEL_H__
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
 * CST_SHRD_FUNNEL.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_shrd_funnel_authstatus
 *
 * CST Shrd Funnel Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union ody_cst_shrd_funnel_authstatus {
	uint32_t u;
	struct ody_cst_shrd_funnel_authstatus_s {
		uint32_t nsid                        : 2;
		uint32_t nsnid                       : 2;
		uint32_t sid                         : 2;
		uint32_t snid                        : 2;
		uint32_t hid                         : 2;
		uint32_t hnid                        : 2;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_cst_shrd_funnel_authstatus_s cn; */
};
typedef union ody_cst_shrd_funnel_authstatus ody_cst_shrd_funnel_authstatus_t;

#define ODY_CST_SHRD_FUNNEL_AUTHSTATUS ODY_CST_SHRD_FUNNEL_AUTHSTATUS_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_AUTHSTATUS_FUNC(void)
{
	return 0x87a100060fb8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_AUTHSTATUS ody_cst_shrd_funnel_authstatus_t
#define bustype_ODY_CST_SHRD_FUNNEL_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_AUTHSTATUS "CST_SHRD_FUNNEL_AUTHSTATUS"
#define busnum_ODY_CST_SHRD_FUNNEL_AUTHSTATUS 0
#define arguments_ODY_CST_SHRD_FUNNEL_AUTHSTATUS -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_cidr0
 *
 * CST Shrd Funnel Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union ody_cst_shrd_funnel_cidr0 {
	uint32_t u;
	struct ody_cst_shrd_funnel_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_cidr0_s cn; */
};
typedef union ody_cst_shrd_funnel_cidr0 ody_cst_shrd_funnel_cidr0_t;

#define ODY_CST_SHRD_FUNNEL_CIDR0 ODY_CST_SHRD_FUNNEL_CIDR0_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR0_FUNC(void)
{
	return 0x87a100060ff0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CIDR0 ody_cst_shrd_funnel_cidr0_t
#define bustype_ODY_CST_SHRD_FUNNEL_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CIDR0 "CST_SHRD_FUNNEL_CIDR0"
#define busnum_ODY_CST_SHRD_FUNNEL_CIDR0 0
#define arguments_ODY_CST_SHRD_FUNNEL_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_cidr1
 *
 * CST Shrd Funnel Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union ody_cst_shrd_funnel_cidr1 {
	uint32_t u;
	struct ody_cst_shrd_funnel_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_cidr1_s cn; */
};
typedef union ody_cst_shrd_funnel_cidr1 ody_cst_shrd_funnel_cidr1_t;

#define ODY_CST_SHRD_FUNNEL_CIDR1 ODY_CST_SHRD_FUNNEL_CIDR1_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR1_FUNC(void)
{
	return 0x87a100060ff4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CIDR1 ody_cst_shrd_funnel_cidr1_t
#define bustype_ODY_CST_SHRD_FUNNEL_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CIDR1 "CST_SHRD_FUNNEL_CIDR1"
#define busnum_ODY_CST_SHRD_FUNNEL_CIDR1 0
#define arguments_ODY_CST_SHRD_FUNNEL_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_cidr2
 *
 * CST Shrd Funnel Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union ody_cst_shrd_funnel_cidr2 {
	uint32_t u;
	struct ody_cst_shrd_funnel_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_cidr2_s cn; */
};
typedef union ody_cst_shrd_funnel_cidr2 ody_cst_shrd_funnel_cidr2_t;

#define ODY_CST_SHRD_FUNNEL_CIDR2 ODY_CST_SHRD_FUNNEL_CIDR2_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR2_FUNC(void)
{
	return 0x87a100060ff8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CIDR2 ody_cst_shrd_funnel_cidr2_t
#define bustype_ODY_CST_SHRD_FUNNEL_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CIDR2 "CST_SHRD_FUNNEL_CIDR2"
#define busnum_ODY_CST_SHRD_FUNNEL_CIDR2 0
#define arguments_ODY_CST_SHRD_FUNNEL_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_cidr3
 *
 * CST Shrd Funnel Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union ody_cst_shrd_funnel_cidr3 {
	uint32_t u;
	struct ody_cst_shrd_funnel_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_cidr3_s cn; */
};
typedef union ody_cst_shrd_funnel_cidr3 ody_cst_shrd_funnel_cidr3_t;

#define ODY_CST_SHRD_FUNNEL_CIDR3 ODY_CST_SHRD_FUNNEL_CIDR3_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CIDR3_FUNC(void)
{
	return 0x87a100060ffcll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CIDR3 ody_cst_shrd_funnel_cidr3_t
#define bustype_ODY_CST_SHRD_FUNNEL_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CIDR3 "CST_SHRD_FUNNEL_CIDR3"
#define busnum_ODY_CST_SHRD_FUNNEL_CIDR3 0
#define arguments_ODY_CST_SHRD_FUNNEL_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_claimclr
 *
 * CST Shrd Funnel Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union ody_cst_shrd_funnel_claimclr {
	uint32_t u;
	struct ody_cst_shrd_funnel_claimclr_s {
		uint32_t clr                         : 4;
		uint32_t razwi_0                     : 28;
	} s;
	/* struct ody_cst_shrd_funnel_claimclr_s cn; */
};
typedef union ody_cst_shrd_funnel_claimclr ody_cst_shrd_funnel_claimclr_t;

#define ODY_CST_SHRD_FUNNEL_CLAIMCLR ODY_CST_SHRD_FUNNEL_CLAIMCLR_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CLAIMCLR_FUNC(void)
{
	return 0x87a100060fa4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CLAIMCLR ody_cst_shrd_funnel_claimclr_t
#define bustype_ODY_CST_SHRD_FUNNEL_CLAIMCLR CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CLAIMCLR "CST_SHRD_FUNNEL_CLAIMCLR"
#define busnum_ODY_CST_SHRD_FUNNEL_CLAIMCLR 0
#define arguments_ODY_CST_SHRD_FUNNEL_CLAIMCLR -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_claimset
 *
 * CST Shrd Funnel Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union ody_cst_shrd_funnel_claimset {
	uint32_t u;
	struct ody_cst_shrd_funnel_claimset_s {
		uint32_t set                         : 4;
		uint32_t razwi_0                     : 28;
	} s;
	/* struct ody_cst_shrd_funnel_claimset_s cn; */
};
typedef union ody_cst_shrd_funnel_claimset ody_cst_shrd_funnel_claimset_t;

#define ODY_CST_SHRD_FUNNEL_CLAIMSET ODY_CST_SHRD_FUNNEL_CLAIMSET_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_CLAIMSET_FUNC(void)
{
	return 0x87a100060fa0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_CLAIMSET ody_cst_shrd_funnel_claimset_t
#define bustype_ODY_CST_SHRD_FUNNEL_CLAIMSET CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_CLAIMSET "CST_SHRD_FUNNEL_CLAIMSET"
#define busnum_ODY_CST_SHRD_FUNNEL_CLAIMSET 0
#define arguments_ODY_CST_SHRD_FUNNEL_CLAIMSET -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devaff0
 *
 * CST Shrd Funnel Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union ody_cst_shrd_funnel_devaff0 {
	uint32_t u;
	struct ody_cst_shrd_funnel_devaff0_s {
		uint32_t devaff0                     : 32;
	} s;
	/* struct ody_cst_shrd_funnel_devaff0_s cn; */
};
typedef union ody_cst_shrd_funnel_devaff0 ody_cst_shrd_funnel_devaff0_t;

#define ODY_CST_SHRD_FUNNEL_DEVAFF0 ODY_CST_SHRD_FUNNEL_DEVAFF0_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVAFF0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVAFF0_FUNC(void)
{
	return 0x87a100060fa8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVAFF0 ody_cst_shrd_funnel_devaff0_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVAFF0 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVAFF0 "CST_SHRD_FUNNEL_DEVAFF0"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVAFF0 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVAFF0 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devaff1
 *
 * CST Shrd Funnel Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union ody_cst_shrd_funnel_devaff1 {
	uint32_t u;
	struct ody_cst_shrd_funnel_devaff1_s {
		uint32_t devaff1                     : 32;
	} s;
	/* struct ody_cst_shrd_funnel_devaff1_s cn; */
};
typedef union ody_cst_shrd_funnel_devaff1 ody_cst_shrd_funnel_devaff1_t;

#define ODY_CST_SHRD_FUNNEL_DEVAFF1 ODY_CST_SHRD_FUNNEL_DEVAFF1_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVAFF1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVAFF1_FUNC(void)
{
	return 0x87a100060facll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVAFF1 ody_cst_shrd_funnel_devaff1_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVAFF1 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVAFF1 "CST_SHRD_FUNNEL_DEVAFF1"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVAFF1 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVAFF1 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devarch
 *
 * CST Shrd Funnel Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union ody_cst_shrd_funnel_devarch {
	uint32_t u;
	struct ody_cst_shrd_funnel_devarch_s {
		uint32_t archid                      : 16;
		uint32_t revision                    : 4;
		uint32_t present                     : 1;
		uint32_t architect                   : 11;
	} s;
	/* struct ody_cst_shrd_funnel_devarch_s cn; */
};
typedef union ody_cst_shrd_funnel_devarch ody_cst_shrd_funnel_devarch_t;

#define ODY_CST_SHRD_FUNNEL_DEVARCH ODY_CST_SHRD_FUNNEL_DEVARCH_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVARCH_FUNC(void)
{
	return 0x87a100060fbcll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVARCH ody_cst_shrd_funnel_devarch_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVARCH CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVARCH "CST_SHRD_FUNNEL_DEVARCH"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVARCH 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVARCH -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devid
 *
 * CST Shrd Funnel Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union ody_cst_shrd_funnel_devid {
	uint32_t u;
	struct ody_cst_shrd_funnel_devid_s {
		uint32_t portcount                   : 4;
		uint32_t scheme                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_devid_s cn; */
};
typedef union ody_cst_shrd_funnel_devid ody_cst_shrd_funnel_devid_t;

#define ODY_CST_SHRD_FUNNEL_DEVID ODY_CST_SHRD_FUNNEL_DEVID_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID_FUNC(void)
{
	return 0x87a100060fc8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVID ody_cst_shrd_funnel_devid_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVID CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVID "CST_SHRD_FUNNEL_DEVID"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVID 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVID -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devid1
 *
 * CST Shrd Funnel Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union ody_cst_shrd_funnel_devid1 {
	uint32_t u;
	struct ody_cst_shrd_funnel_devid1_s {
		uint32_t devid1                      : 32;
	} s;
	/* struct ody_cst_shrd_funnel_devid1_s cn; */
};
typedef union ody_cst_shrd_funnel_devid1 ody_cst_shrd_funnel_devid1_t;

#define ODY_CST_SHRD_FUNNEL_DEVID1 ODY_CST_SHRD_FUNNEL_DEVID1_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID1_FUNC(void)
{
	return 0x87a100060fc4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVID1 ody_cst_shrd_funnel_devid1_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVID1 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVID1 "CST_SHRD_FUNNEL_DEVID1"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVID1 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVID1 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devid2
 *
 * CST Shrd Funnel Devid2 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union ody_cst_shrd_funnel_devid2 {
	uint32_t u;
	struct ody_cst_shrd_funnel_devid2_s {
		uint32_t devid2                      : 32;
	} s;
	/* struct ody_cst_shrd_funnel_devid2_s cn; */
};
typedef union ody_cst_shrd_funnel_devid2 ody_cst_shrd_funnel_devid2_t;

#define ODY_CST_SHRD_FUNNEL_DEVID2 ODY_CST_SHRD_FUNNEL_DEVID2_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVID2_FUNC(void)
{
	return 0x87a100060fc0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVID2 ody_cst_shrd_funnel_devid2_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVID2 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVID2 "CST_SHRD_FUNNEL_DEVID2"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVID2 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVID2 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_devtype
 *
 * CST Shrd Funnel Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union ody_cst_shrd_funnel_devtype {
	uint32_t u;
	struct ody_cst_shrd_funnel_devtype_s {
		uint32_t major                       : 4;
		uint32_t sub                         : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_devtype_s cn; */
};
typedef union ody_cst_shrd_funnel_devtype ody_cst_shrd_funnel_devtype_t;

#define ODY_CST_SHRD_FUNNEL_DEVTYPE ODY_CST_SHRD_FUNNEL_DEVTYPE_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_DEVTYPE_FUNC(void)
{
	return 0x87a100060fccll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_DEVTYPE ody_cst_shrd_funnel_devtype_t
#define bustype_ODY_CST_SHRD_FUNNEL_DEVTYPE CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_DEVTYPE "CST_SHRD_FUNNEL_DEVTYPE"
#define busnum_ODY_CST_SHRD_FUNNEL_DEVTYPE 0
#define arguments_ODY_CST_SHRD_FUNNEL_DEVTYPE -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_funnelcontrol
 *
 * CST Shrd Funnel Funnelcontrol Register
 * The Funnel Control register is for enabling each of the trace sources and
 * controlling the hold time for switching between them.
 */
union ody_cst_shrd_funnel_funnelcontrol {
	uint32_t u;
	struct ody_cst_shrd_funnel_funnelcontrol_s {
		uint32_t ens0                        : 1;
		uint32_t ens1                        : 1;
		uint32_t ens2                        : 1;
		uint32_t ens3                        : 1;
		uint32_t ens4                        : 1;
		uint32_t ens5                        : 1;
		uint32_t ens6                        : 1;
		uint32_t ens7                        : 1;
		uint32_t ht                          : 4;
		uint32_t flush_normal                : 1;
		uint32_t sbz_0                       : 19;
	} s;
	/* struct ody_cst_shrd_funnel_funnelcontrol_s cn; */
};
typedef union ody_cst_shrd_funnel_funnelcontrol ody_cst_shrd_funnel_funnelcontrol_t;

#define ODY_CST_SHRD_FUNNEL_FUNNELCONTROL ODY_CST_SHRD_FUNNEL_FUNNELCONTROL_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_FUNNELCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_FUNNELCONTROL_FUNC(void)
{
	return 0x87a100060000ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_FUNNELCONTROL ody_cst_shrd_funnel_funnelcontrol_t
#define bustype_ODY_CST_SHRD_FUNNEL_FUNNELCONTROL CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_FUNNELCONTROL "CST_SHRD_FUNNEL_FUNNELCONTROL"
#define busnum_ODY_CST_SHRD_FUNNEL_FUNNELCONTROL 0
#define arguments_ODY_CST_SHRD_FUNNEL_FUNNELCONTROL -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itatbctr0
 *
 * CST Shrd Funnel Itatbctr0 Register
 * This register allows observability and controllability of the ATBYTES buses, and
 * AFREADY and ATVALID signals into, and out of, the funnel. For slave signals coming
 * into the funnel, the register views the ports that are selected through the funnel
 * control register. Only one port must be selected for integration test.
 */
union ody_cst_shrd_funnel_itatbctr0 {
	uint32_t u;
	struct ody_cst_shrd_funnel_itatbctr0_s {
		uint32_t atvalid                     : 1;
		uint32_t afready                     : 1;
		uint32_t sbz_0                       : 6;
		uint32_t atbytes                     : 2;
		uint32_t sbz_1                       : 22;
	} s;
	/* struct ody_cst_shrd_funnel_itatbctr0_s cn; */
};
typedef union ody_cst_shrd_funnel_itatbctr0 ody_cst_shrd_funnel_itatbctr0_t;

#define ODY_CST_SHRD_FUNNEL_ITATBCTR0 ODY_CST_SHRD_FUNNEL_ITATBCTR0_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR0_FUNC(void)
{
	return 0x87a100060efcll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITATBCTR0 ody_cst_shrd_funnel_itatbctr0_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITATBCTR0 "CST_SHRD_FUNNEL_ITATBCTR0"
#define busnum_ODY_CST_SHRD_FUNNEL_ITATBCTR0 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITATBCTR0 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itatbctr1
 *
 * CST Shrd Funnel Itatbctr1 Register
 * This register allows observability and controllability of the ATID buses into, and
 * out of, the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union ody_cst_shrd_funnel_itatbctr1 {
	uint32_t u;
	struct ody_cst_shrd_funnel_itatbctr1_s {
		uint32_t atid                        : 7;
		uint32_t sbz_0                       : 25;
	} s;
	/* struct ody_cst_shrd_funnel_itatbctr1_s cn; */
};
typedef union ody_cst_shrd_funnel_itatbctr1 ody_cst_shrd_funnel_itatbctr1_t;

#define ODY_CST_SHRD_FUNNEL_ITATBCTR1 ODY_CST_SHRD_FUNNEL_ITATBCTR1_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR1_FUNC(void)
{
	return 0x87a100060ef8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITATBCTR1 ody_cst_shrd_funnel_itatbctr1_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITATBCTR1 "CST_SHRD_FUNNEL_ITATBCTR1"
#define busnum_ODY_CST_SHRD_FUNNEL_ITATBCTR1 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITATBCTR1 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itatbctr2
 *
 * CST Shrd Funnel Itatbctr2 Register
 * This register allows observability and controllability of the afvalid and atready
 * signals into, and out of, the funnel. For slave signals coming into the funnel, the
 * register views the ports that are selected through the funnel control register. Only
 * one port must be selected for integration test.
 */
union ody_cst_shrd_funnel_itatbctr2 {
	uint32_t u;
	struct ody_cst_shrd_funnel_itatbctr2_s {
		uint32_t atready                     : 1;
		uint32_t afvalid                     : 1;
		uint32_t sbz_0                       : 30;
	} s;
	/* struct ody_cst_shrd_funnel_itatbctr2_s cn; */
};
typedef union ody_cst_shrd_funnel_itatbctr2 ody_cst_shrd_funnel_itatbctr2_t;

#define ODY_CST_SHRD_FUNNEL_ITATBCTR2 ODY_CST_SHRD_FUNNEL_ITATBCTR2_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR2_FUNC(void)
{
	return 0x87a100060ef4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITATBCTR2 ody_cst_shrd_funnel_itatbctr2_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITATBCTR2 "CST_SHRD_FUNNEL_ITATBCTR2"
#define busnum_ODY_CST_SHRD_FUNNEL_ITATBCTR2 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITATBCTR2 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itatbctr3
 *
 * CST Shrd Funnel Itatbctr3 Register
 * This register allows observability and controllability of the SYNCREQ signals into,
 * and out of, the funnel. Only one slave interface must be selected for integration
 * test. The syncreq receiver on the master interface has a latching function to
 * capture a pulse arriving on that input. The arrival of a pulse sets the latch so
 * that the value can be read. Reading the register clears the latch. Reading a 1
 * indicates that a syncreq_m pulse arrived since the last read. Reading a 0 indicates
 * that no syncreq_m pulse has arrived. Writing a 1 to the register causes a syncreq_s
 * pulse to be generated to the upstream component.
 */
union ody_cst_shrd_funnel_itatbctr3 {
	uint32_t u;
	struct ody_cst_shrd_funnel_itatbctr3_s {
		uint32_t syncreq                     : 1;
		uint32_t sbz_0                       : 31;
	} s;
	/* struct ody_cst_shrd_funnel_itatbctr3_s cn; */
};
typedef union ody_cst_shrd_funnel_itatbctr3 ody_cst_shrd_funnel_itatbctr3_t;

#define ODY_CST_SHRD_FUNNEL_ITATBCTR3 ODY_CST_SHRD_FUNNEL_ITATBCTR3_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBCTR3_FUNC(void)
{
	return 0x87a100060ef0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITATBCTR3 ody_cst_shrd_funnel_itatbctr3_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITATBCTR3 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITATBCTR3 "CST_SHRD_FUNNEL_ITATBCTR3"
#define busnum_ODY_CST_SHRD_FUNNEL_ITATBCTR3 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITATBCTR3 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itatbdata0
 *
 * CST Shrd Funnel Itatbdata0 Register
 * This register allows observability and controllability of the ATDATA buses into and
 * out of the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union ody_cst_shrd_funnel_itatbdata0 {
	uint32_t u;
	struct ody_cst_shrd_funnel_itatbdata0_s {
		uint32_t atdata0                     : 1;
		uint32_t atdata7                     : 1;
		uint32_t atdata15                    : 1;
		uint32_t atdata23                    : 1;
		uint32_t atdata31                    : 1;
		uint32_t atdata39                    : 1;
		uint32_t atdata47                    : 1;
		uint32_t atdata55                    : 1;
		uint32_t atdata63                    : 1;
		uint32_t atdata71                    : 1;
		uint32_t atdata79                    : 1;
		uint32_t atdata87                    : 1;
		uint32_t atdata95                    : 1;
		uint32_t atdata103                   : 1;
		uint32_t atdata111                   : 1;
		uint32_t atdata119                   : 1;
		uint32_t atdata127                   : 1;
		uint32_t sbz_0                       : 15;
	} s;
	/* struct ody_cst_shrd_funnel_itatbdata0_s cn; */
};
typedef union ody_cst_shrd_funnel_itatbdata0 ody_cst_shrd_funnel_itatbdata0_t;

#define ODY_CST_SHRD_FUNNEL_ITATBDATA0 ODY_CST_SHRD_FUNNEL_ITATBDATA0_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITATBDATA0_FUNC(void)
{
	return 0x87a100060eecll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITATBDATA0 ody_cst_shrd_funnel_itatbdata0_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITATBDATA0 "CST_SHRD_FUNNEL_ITATBDATA0"
#define busnum_ODY_CST_SHRD_FUNNEL_ITATBDATA0 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITATBDATA0 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_itctrl
 *
 * CST Shrd Funnel Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union ody_cst_shrd_funnel_itctrl {
	uint32_t u;
	struct ody_cst_shrd_funnel_itctrl_s {
		uint32_t ime                         : 1;
		uint32_t razwi_0                     : 31;
	} s;
	/* struct ody_cst_shrd_funnel_itctrl_s cn; */
};
typedef union ody_cst_shrd_funnel_itctrl ody_cst_shrd_funnel_itctrl_t;

#define ODY_CST_SHRD_FUNNEL_ITCTRL ODY_CST_SHRD_FUNNEL_ITCTRL_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_ITCTRL_FUNC(void)
{
	return 0x87a100060f00ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_ITCTRL ody_cst_shrd_funnel_itctrl_t
#define bustype_ODY_CST_SHRD_FUNNEL_ITCTRL CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_ITCTRL "CST_SHRD_FUNNEL_ITCTRL"
#define busnum_ODY_CST_SHRD_FUNNEL_ITCTRL 0
#define arguments_ODY_CST_SHRD_FUNNEL_ITCTRL -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr0
 *
 * CST Shrd Funnel Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr0 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr0_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr0 ody_cst_shrd_funnel_pidr0_t;

#define ODY_CST_SHRD_FUNNEL_PIDR0 ODY_CST_SHRD_FUNNEL_PIDR0_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR0_FUNC(void)
{
	return 0x87a100060fe0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR0 ody_cst_shrd_funnel_pidr0_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR0 "CST_SHRD_FUNNEL_PIDR0"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR0 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr1
 *
 * CST Shrd Funnel Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr1 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr1_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr1 ody_cst_shrd_funnel_pidr1_t;

#define ODY_CST_SHRD_FUNNEL_PIDR1 ODY_CST_SHRD_FUNNEL_PIDR1_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR1_FUNC(void)
{
	return 0x87a100060fe4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR1 ody_cst_shrd_funnel_pidr1_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR1 "CST_SHRD_FUNNEL_PIDR1"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR1 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr2
 *
 * CST Shrd Funnel Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr2 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr2_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr2 ody_cst_shrd_funnel_pidr2_t;

#define ODY_CST_SHRD_FUNNEL_PIDR2 ODY_CST_SHRD_FUNNEL_PIDR2_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR2_FUNC(void)
{
	return 0x87a100060fe8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR2 ody_cst_shrd_funnel_pidr2_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR2 "CST_SHRD_FUNNEL_PIDR2"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR2 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr3
 *
 * CST Shrd Funnel Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr3 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr3_s {
		uint32_t cmod                        : 4;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr3_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr3 ody_cst_shrd_funnel_pidr3_t;

#define ODY_CST_SHRD_FUNNEL_PIDR3 ODY_CST_SHRD_FUNNEL_PIDR3_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR3_FUNC(void)
{
	return 0x87a100060fecll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR3 ody_cst_shrd_funnel_pidr3_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR3 "CST_SHRD_FUNNEL_PIDR3"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR3 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr4
 *
 * CST Shrd Funnel Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr4 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr4_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr4 ody_cst_shrd_funnel_pidr4_t;

#define ODY_CST_SHRD_FUNNEL_PIDR4 ODY_CST_SHRD_FUNNEL_PIDR4_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR4_FUNC(void)
{
	return 0x87a100060fd0ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR4 ody_cst_shrd_funnel_pidr4_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR4 "CST_SHRD_FUNNEL_PIDR4"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR4 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr5
 *
 * CST Shrd Funnel Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr5 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr5_s {
		uint32_t pidr5                       : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr5_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr5 ody_cst_shrd_funnel_pidr5_t;

#define ODY_CST_SHRD_FUNNEL_PIDR5 ODY_CST_SHRD_FUNNEL_PIDR5_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR5_FUNC(void)
{
	return 0x87a100060fd4ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR5 ody_cst_shrd_funnel_pidr5_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR5 "CST_SHRD_FUNNEL_PIDR5"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR5 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr6
 *
 * CST Shrd Funnel Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr6 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr6_s {
		uint32_t pidr6                       : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr6_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr6 ody_cst_shrd_funnel_pidr6_t;

#define ODY_CST_SHRD_FUNNEL_PIDR6 ODY_CST_SHRD_FUNNEL_PIDR6_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR6_FUNC(void)
{
	return 0x87a100060fd8ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR6 ody_cst_shrd_funnel_pidr6_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR6 "CST_SHRD_FUNNEL_PIDR6"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR6 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_pidr7
 *
 * CST Shrd Funnel Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union ody_cst_shrd_funnel_pidr7 {
	uint32_t u;
	struct ody_cst_shrd_funnel_pidr7_s {
		uint32_t pidr7                       : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_cst_shrd_funnel_pidr7_s cn; */
};
typedef union ody_cst_shrd_funnel_pidr7 ody_cst_shrd_funnel_pidr7_t;

#define ODY_CST_SHRD_FUNNEL_PIDR7 ODY_CST_SHRD_FUNNEL_PIDR7_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PIDR7_FUNC(void)
{
	return 0x87a100060fdcll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PIDR7 ody_cst_shrd_funnel_pidr7_t
#define bustype_ODY_CST_SHRD_FUNNEL_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PIDR7 "CST_SHRD_FUNNEL_PIDR7"
#define busnum_ODY_CST_SHRD_FUNNEL_PIDR7 0
#define arguments_ODY_CST_SHRD_FUNNEL_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) cst_shrd_funnel_prioritycontrol
 *
 * CST Shrd Funnel Prioritycontrol Register
 * The Priority Control register is for setting the priority of each port of the
 * funnel. It is a requirement of the programming software that the ports are all
 * disabled before the priority control register contents are changed. Changing the
 * port priorities in real time is not supported. If the priority control register is
 * written when one or more of the ports are enabled, then the write is silently
 * rejected and the value in the priority control register remains unchanged. The lower
 * the priority value, the higher is its priority when selecting the next port to be
 * serviced. If two or more ports have the same priority value, then the lowest
 * numbered port is serviced first.
 */
union ody_cst_shrd_funnel_prioritycontrol {
	uint32_t u;
	struct ody_cst_shrd_funnel_prioritycontrol_s {
		uint32_t priport0                    : 3;
		uint32_t priport1                    : 3;
		uint32_t priport2                    : 3;
		uint32_t priport3                    : 3;
		uint32_t priport4                    : 3;
		uint32_t priport5                    : 3;
		uint32_t priport6                    : 3;
		uint32_t priport7                    : 3;
		uint32_t sbz_0                       : 8;
	} s;
	/* struct ody_cst_shrd_funnel_prioritycontrol_s cn; */
};
typedef union ody_cst_shrd_funnel_prioritycontrol ody_cst_shrd_funnel_prioritycontrol_t;

#define ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL_FUNC()
static inline uint64_t ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL_FUNC(void)
{
	return 0x87a100060004ll;
}

#define typedef_ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL ody_cst_shrd_funnel_prioritycontrol_t
#define bustype_ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL CSR_TYPE_NCB32b
#define basename_ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL "CST_SHRD_FUNNEL_PRIORITYCONTROL"
#define busnum_ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL 0
#define arguments_ODY_CST_SHRD_FUNNEL_PRIORITYCONTROL -1, -1, -1, -1

#endif /* __ODY_CSRS_CST_SHRD_FUNNEL_H__ */
