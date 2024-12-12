#ifndef __ODY_CSRS_SAM_H__
#define __ODY_CSRS_SAM_H__
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
 * SAM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sam_bar_e
 *
 * SAM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_SAM_BAR_E_SAM_PF_BAR0 (0x87e059000000ll)
#define ODY_SAM_BAR_E_SAM_PF_BAR0_SIZE 0x10000ull

/**
 * Enumeration sam_dmc_size_e
 *
 * SAM DMC Size Enumeration
 * Size of each memory channel
 */
#define ODY_SAM_DMC_SIZE_E_S_12GB (2)
#define ODY_SAM_DMC_SIZE_E_S_192GB (6)
#define ODY_SAM_DMC_SIZE_E_S_24GB (3)
#define ODY_SAM_DMC_SIZE_E_S_384GB (7)
#define ODY_SAM_DMC_SIZE_E_S_48GB (4)
#define ODY_SAM_DMC_SIZE_E_S_6GB (1)
#define ODY_SAM_DMC_SIZE_E_S_96GB (5)
#define ODY_SAM_DMC_SIZE_E_S_PWR2 (0)

/**
 * Enumeration sam_dmc_stripe_e
 *
 * SAM DMC Stripe Enumeration
 * Number of aligned consecutive bytes to keep within a memory channel
 */
#define ODY_SAM_DMC_STRIPE_E_RSVD (3)
#define ODY_SAM_DMC_STRIPE_E_S_128B (1)
#define ODY_SAM_DMC_STRIPE_E_S_256B (2)
#define ODY_SAM_DMC_STRIPE_E_S_64B (0)

/**
 * Register (RSL) sam_asc_region#_attr
 *
 * SAM Address Space Control Region Attributes Registers
 */
union ody_sam_asc_regionx_attr {
	uint64_t u;
	struct ody_sam_asc_regionx_attr_s {
		uint64_t reserved_0_19               : 20;
		uint64_t ns_en                       : 1;
		uint64_t s_en                        : 1;
		uint64_t reserved_22_63              : 42;
	} s;
	/* struct ody_sam_asc_regionx_attr_s cn; */
};
typedef union ody_sam_asc_regionx_attr ody_sam_asc_regionx_attr_t;

static inline uint64_t ODY_SAM_ASC_REGIONX_ATTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_ASC_REGIONX_ATTR(uint64_t a)
{
	if (a <= 3)
		return 0x87e059000018ll + 0x20ll * ((a) & 0x3);
	__ody_csr_fatal("SAM_ASC_REGIONX_ATTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_ASC_REGIONX_ATTR(a) ody_sam_asc_regionx_attr_t
#define bustype_ODY_SAM_ASC_REGIONX_ATTR(a) CSR_TYPE_RSL
#define basename_ODY_SAM_ASC_REGIONX_ATTR(a) "SAM_ASC_REGIONX_ATTR"
#define device_bar_ODY_SAM_ASC_REGIONX_ATTR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_ASC_REGIONX_ATTR(a) (a)
#define arguments_ODY_SAM_ASC_REGIONX_ATTR(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_asc_region#_end
 *
 * SAM Address Space Control Region End Address Registers
 */
union ody_sam_asc_regionx_end {
	uint64_t u;
	struct ody_sam_asc_regionx_end_s {
		uint64_t reserved_0_20               : 21;
		uint64_t addr                        : 23;
		uint64_t reserved_44_63              : 20;
	} s;
	/* struct ody_sam_asc_regionx_end_s cn; */
};
typedef union ody_sam_asc_regionx_end ody_sam_asc_regionx_end_t;

static inline uint64_t ODY_SAM_ASC_REGIONX_END(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_ASC_REGIONX_END(uint64_t a)
{
	if (a <= 3)
		return 0x87e059000008ll + 0x20ll * ((a) & 0x3);
	__ody_csr_fatal("SAM_ASC_REGIONX_END", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_ASC_REGIONX_END(a) ody_sam_asc_regionx_end_t
#define bustype_ODY_SAM_ASC_REGIONX_END(a) CSR_TYPE_RSL
#define basename_ODY_SAM_ASC_REGIONX_END(a) "SAM_ASC_REGIONX_END"
#define device_bar_ODY_SAM_ASC_REGIONX_END(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_ASC_REGIONX_END(a) (a)
#define arguments_ODY_SAM_ASC_REGIONX_END(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_asc_region#_start
 *
 * SAM Address Space Control Region Start Address Registers
 */
union ody_sam_asc_regionx_start {
	uint64_t u;
	struct ody_sam_asc_regionx_start_s {
		uint64_t reserved_0_20               : 21;
		uint64_t addr                        : 23;
		uint64_t reserved_44_63              : 20;
	} s;
	/* struct ody_sam_asc_regionx_start_s cn; */
};
typedef union ody_sam_asc_regionx_start ody_sam_asc_regionx_start_t;

static inline uint64_t ODY_SAM_ASC_REGIONX_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_ASC_REGIONX_START(uint64_t a)
{
	if (a <= 3)
		return 0x87e059000000ll + 0x20ll * ((a) & 0x3);
	__ody_csr_fatal("SAM_ASC_REGIONX_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_ASC_REGIONX_START(a) ody_sam_asc_regionx_start_t
#define bustype_ODY_SAM_ASC_REGIONX_START(a) CSR_TYPE_RSL
#define basename_ODY_SAM_ASC_REGIONX_START(a) "SAM_ASC_REGIONX_START"
#define device_bar_ODY_SAM_ASC_REGIONX_START(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_ASC_REGIONX_START(a) (a)
#define arguments_ODY_SAM_ASC_REGIONX_START(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_cfg
 *
 * SAM Configuration Register
 * This register holds configuration information.
 */
union ody_sam_cfg {
	uint64_t u;
	struct ody_sam_cfg_s {
		uint64_t dss_ch                      : 4;
		uint64_t dmc_2ch                     : 1;
		uint64_t dmc_size                    : 3;
		uint64_t dmc_stripe                  : 2;
		uint64_t dss_columns_dis             : 5;
		uint64_t reserved_15_63              : 49;
	} s;
	/* struct ody_sam_cfg_s cn; */
};
typedef union ody_sam_cfg ody_sam_cfg_t;

#define ODY_SAM_CFG ODY_SAM_CFG_FUNC()
static inline uint64_t ODY_SAM_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_CFG_FUNC(void)
{
	return 0x87e059000400ll;
}

#define typedef_ODY_SAM_CFG ody_sam_cfg_t
#define bustype_ODY_SAM_CFG CSR_TYPE_RSL
#define basename_ODY_SAM_CFG "SAM_CFG"
#define device_bar_ODY_SAM_CFG 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_CFG 0
#define arguments_ODY_SAM_CFG -1, -1, -1, -1

/**
 * Register (RSL) sam_hash#
 *
 * SAM hash matrix coefficients Registers
 * This hash matrix is used to spread addresses among tiles/sets. Each register
 * represents an output bit. Each coefficient bit represents inputs that are XOR'd to
 * create the output bit. bit. HASH(16..0)[CO]\<22:6\> must form an invertible
 * matrix. Input bit 6 must only affect output bit 6. Input bit 7 must only affect
 * output bits 6 and 7. It is recommended that every 17x17 submatrix is invertible for
 * best stride resistance. If scratch mode is used in a 10 DSS system, SAM_HASH(16..15)
 * must come from the identity matrix. If scratch mode is used is a 4 DSS system,
 * SAM_HASH(16) must come from the identity matrix. The reset value is compatible with
 * a 10 DSS system.
 */
union ody_sam_hashx {
	uint64_t u;
	struct ody_sam_hashx_s {
		uint64_t reserved_0_5                : 6;
		uint64_t co                          : 38;
		uint64_t reserved_44_63              : 20;
	} s;
	/* struct ody_sam_hashx_s cn; */
};
typedef union ody_sam_hashx ody_sam_hashx_t;

static inline uint64_t ODY_SAM_HASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_HASHX(uint64_t a)
{
	if (a <= 16)
		return 0x87e059004000ll + 8ll * ((a) & 0x1f);
	__ody_csr_fatal("SAM_HASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_HASHX(a) ody_sam_hashx_t
#define bustype_ODY_SAM_HASHX(a) CSR_TYPE_RSL
#define basename_ODY_SAM_HASHX(a) "SAM_HASHX"
#define device_bar_ODY_SAM_HASHX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_HASHX(a) (a)
#define arguments_ODY_SAM_HASHX(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_ihash#
 *
 * SAM inverse hash matrix coefficients Registers
 * This matrix must be the inverse of SAM_HASH
 */
union ody_sam_ihashx {
	uint64_t u;
	struct ody_sam_ihashx_s {
		uint64_t reserved_0_5                : 6;
		uint64_t co                          : 38;
		uint64_t reserved_44_63              : 20;
	} s;
	/* struct ody_sam_ihashx_s cn; */
};
typedef union ody_sam_ihashx ody_sam_ihashx_t;

static inline uint64_t ODY_SAM_IHASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_IHASHX(uint64_t a)
{
	if (a <= 16)
		return 0x87e059004100ll + 8ll * ((a) & 0x1f);
	__ody_csr_fatal("SAM_IHASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_IHASHX(a) ody_sam_ihashx_t
#define bustype_ODY_SAM_IHASHX(a) CSR_TYPE_RSL
#define basename_ODY_SAM_IHASHX(a) "SAM_IHASHX"
#define device_bar_ODY_SAM_IHASHX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_IHASHX(a) (a)
#define arguments_ODY_SAM_IHASHX(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_mn_map#
 *
 * SAM MN Map Registers
 * These registers specify the location of MN.  Note that it is illegal to provision an
 * MN on a tile with a TAD that is disabled for any reason.
 */
union ody_sam_mn_mapx {
	uint64_t u;
	struct ody_sam_mn_mapx_s {
		uint64_t y                           : 4;
		uint64_t x                           : 4;
		uint64_t val                         : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_sam_mn_mapx_s cn; */
};
typedef union ody_sam_mn_mapx ody_sam_mn_mapx_t;

static inline uint64_t ODY_SAM_MN_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_MN_MAPX(uint64_t a)
{
	if (a <= 7)
		return 0x87e059004200ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("SAM_MN_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_MN_MAPX(a) ody_sam_mn_mapx_t
#define bustype_ODY_SAM_MN_MAPX(a) CSR_TYPE_RSL
#define basename_ODY_SAM_MN_MAPX(a) "SAM_MN_MAPX"
#define device_bar_ODY_SAM_MN_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_MN_MAPX(a) (a)
#define arguments_ODY_SAM_MN_MAPX(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_ncb#_const
 *
 * SAM Processor Number Routing Map Registers
 * A table of IOB routing destinations.
 *
 * \<pre\>
 *  Index a  bus  Bus index
 *  -------  ---  ---------
 *  00-3F    NCB  DID 00-3F
 *  40-5F    NCB  DID 60-7F
 *  60-7F    NCB  DID E0-FF
 *  80-BF    ECAM DOM 00-3F
 *  C0-CF    PEM  DID 00-0F
 *  D0-FF    Reserved
 * \</pre\>
 */
union ody_sam_ncbx_const {
	uint64_t u;
	struct ody_sam_ncbx_const_s {
		uint64_t valid                       : 1;
		uint64_t iob                         : 3;
		uint64_t ncb                         : 2;
		uint64_t reserved_6_7                : 2;
		uint64_t arbid                       : 4;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_sam_ncbx_const_s cn; */
};
typedef union ody_sam_ncbx_const ody_sam_ncbx_const_t;

static inline uint64_t ODY_SAM_NCBX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_NCBX_CONST(uint64_t a)
{
	if (a <= 255)
		return 0x87e059008800ll + 8ll * ((a) & 0xff);
	__ody_csr_fatal("SAM_NCBX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_NCBX_CONST(a) ody_sam_ncbx_const_t
#define bustype_ODY_SAM_NCBX_CONST(a) CSR_TYPE_RSL
#define basename_ODY_SAM_NCBX_CONST(a) "SAM_NCBX_CONST"
#define device_bar_ODY_SAM_NCBX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_NCBX_CONST(a) (a)
#define arguments_ODY_SAM_NCBX_CONST(a) (a), -1, -1, -1

/**
 * Register (RSL) sam_pn_map#
 *
 * SAM Processor Number Routing Map Registers
 * A table of routing destinations indexed by logical processor number.  The default
 * numbering is row-major.
 */
union ody_sam_pn_mapx {
	uint64_t u;
	struct ody_sam_pn_mapx_s {
		uint64_t y                           : 4;
		uint64_t x                           : 4;
		uint64_t val                         : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_sam_pn_mapx_s cn; */
};
typedef union ody_sam_pn_mapx ody_sam_pn_mapx_t;

static inline uint64_t ODY_SAM_PN_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SAM_PN_MAPX(uint64_t a)
{
	if (a <= 81)
		return 0x87e059000800ll + 8ll * ((a) & 0x7f);
	__ody_csr_fatal("SAM_PN_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SAM_PN_MAPX(a) ody_sam_pn_mapx_t
#define bustype_ODY_SAM_PN_MAPX(a) CSR_TYPE_RSL
#define basename_ODY_SAM_PN_MAPX(a) "SAM_PN_MAPX"
#define device_bar_ODY_SAM_PN_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SAM_PN_MAPX(a) (a)
#define arguments_ODY_SAM_PN_MAPX(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_SAM_H__ */
