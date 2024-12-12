#ifndef __ODY_CSRS_FUS_H__
#define __ODY_CSRS_FUS_H__
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
 * FUS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration fus_bar_e
 *
 * Fuse Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_FUS_BAR_E_FUS_PF_BAR0 (0x87e003000000ll)
#define ODY_FUS_BAR_E_FUS_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) fus_bnk_dat#
 *
 * Fuse Bank Store Register
 * The initial state of FUS_BNK_DAT() is as if bank6 were just read,
 * i.e. DAT* = fus[895:768].
 */
union ody_fus_bnk_datx {
	uint64_t u;
	struct ody_fus_bnk_datx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_fus_bnk_datx_s cn; */
};
typedef union ody_fus_bnk_datx ody_fus_bnk_datx_t;

static inline uint64_t ODY_FUS_BNK_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_FUS_BNK_DATX(uint64_t a)
{
	if (a <= 1)
		return 0x87e003001520ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("FUS_BNK_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_FUS_BNK_DATX(a) ody_fus_bnk_datx_t
#define bustype_ODY_FUS_BNK_DATX(a) CSR_TYPE_RSL
#define basename_ODY_FUS_BNK_DATX(a) "FUS_BNK_DATX"
#define device_bar_ODY_FUS_BNK_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_FUS_BNK_DATX(a) (a)
#define arguments_ODY_FUS_BNK_DATX(a) (a), -1, -1, -1

/**
 * Register (RSL) fus_cache#
 *
 * Fuse Cache Register
 * This register returns the cached state of every fuse, organized into 64-fuse
 * chunks. Each bit corresponds to a fuse enumerated by FUSE_NUM_E.
 */
union ody_fus_cachex {
	uint64_t u;
	struct ody_fus_cachex_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_fus_cachex_s cn; */
};
typedef union ody_fus_cachex ody_fus_cachex_t;

static inline uint64_t ODY_FUS_CACHEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_FUS_CACHEX(uint64_t a)
{
	if (a <= 63)
		return 0x87e003001000ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("FUS_CACHEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_FUS_CACHEX(a) ody_fus_cachex_t
#define bustype_ODY_FUS_CACHEX(a) CSR_TYPE_RSL
#define basename_ODY_FUS_CACHEX(a) "FUS_CACHEX"
#define device_bar_ODY_FUS_CACHEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_FUS_CACHEX(a) (a)
#define arguments_ODY_FUS_CACHEX(a) (a), -1, -1, -1

/**
 * Register (RSL) fus_const
 *
 * Fuse Constants Register
 */
union ody_fus_const {
	uint64_t u;
	struct ody_fus_const_s {
		uint64_t fuse_banks                  : 8;
		uint64_t repair_banks                : 8;
		uint64_t extra_banks                 : 8;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_fus_const_s cn; */
};
typedef union ody_fus_const ody_fus_const_t;

#define ODY_FUS_CONST ODY_FUS_CONST_FUNC()
static inline uint64_t ODY_FUS_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_FUS_CONST_FUNC(void)
{
	return 0x87e003001578ll;
}

#define typedef_ODY_FUS_CONST ody_fus_const_t
#define bustype_ODY_FUS_CONST CSR_TYPE_RSL
#define basename_ODY_FUS_CONST "FUS_CONST"
#define device_bar_ODY_FUS_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_FUS_CONST 0
#define arguments_ODY_FUS_CONST -1, -1, -1, -1

/**
 * Register (RSL) fus_rcmd
 *
 * Fuse Read Command Register
 * Read Fuse Banks.
 */
union ody_fus_rcmd {
	uint64_t u;
	struct ody_fus_rcmd_s {
		uint64_t reserved_0_3                : 4;
		uint64_t addr                        : 7;
		uint64_t reserved_11                 : 1;
		uint64_t pend                        : 1;
		uint64_t reserved_13                 : 1;
		uint64_t voltage                     : 1;
		uint64_t efuse                       : 1;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_fus_rcmd_s cn; */
};
typedef union ody_fus_rcmd ody_fus_rcmd_t;

#define ODY_FUS_RCMD ODY_FUS_RCMD_FUNC()
static inline uint64_t ODY_FUS_RCMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_FUS_RCMD_FUNC(void)
{
	return 0x87e003001500ll;
}

#define typedef_ODY_FUS_RCMD ody_fus_rcmd_t
#define bustype_ODY_FUS_RCMD CSR_TYPE_RSL
#define basename_ODY_FUS_RCMD "FUS_RCMD"
#define device_bar_ODY_FUS_RCMD 0x0 /* PF_BAR0 */
#define busnum_ODY_FUS_RCMD 0
#define arguments_ODY_FUS_RCMD -1, -1, -1, -1

/**
 * Register (RSL) fus_read_times
 *
 * Fuse Read Times Register
 * The reset values correspond to accesses of internal fuses with PLL reference clock
 * up to 115 MHz.  If any of the formulas below result in a value less than 0x0, the
 * corresponding timing parameter should be set to zero.
 *
 * Prior to issuing a read operation to the fuse banks (via FUS_RCMD),
 * this register should be written with the timing parameters that will be read.
 * This register should not be written while FUS_RCMD[PEND] = 1.
 */
union ody_fus_read_times {
	uint64_t u;
	struct ody_fus_read_times_s {
		uint64_t setup                       : 4;
		uint64_t asu                         : 4;
		uint64_t rdstb_wh                    : 4;
		uint64_t wrstb_wh                    : 12;
		uint64_t ahd                         : 4;
		uint64_t done                        : 4;
		uint64_t margin                      : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_fus_read_times_s cn; */
};
typedef union ody_fus_read_times ody_fus_read_times_t;

#define ODY_FUS_READ_TIMES ODY_FUS_READ_TIMES_FUNC()
static inline uint64_t ODY_FUS_READ_TIMES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_FUS_READ_TIMES_FUNC(void)
{
	return 0x87e003001570ll;
}

#define typedef_ODY_FUS_READ_TIMES ody_fus_read_times_t
#define bustype_ODY_FUS_READ_TIMES CSR_TYPE_RSL
#define basename_ODY_FUS_READ_TIMES "FUS_READ_TIMES"
#define device_bar_ODY_FUS_READ_TIMES 0x0 /* PF_BAR0 */
#define busnum_ODY_FUS_READ_TIMES 0
#define arguments_ODY_FUS_READ_TIMES -1, -1, -1, -1

#endif /* __ODY_CSRS_FUS_H__ */
