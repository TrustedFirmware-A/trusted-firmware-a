#ifndef __ODY_CSRS_RNM_H__
#define __ODY_CSRS_RNM_H__
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
 * RNM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rnm_bar_e
 *
 * RNM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_RNM_BAR_E_RNM_PF_BAR0 (0x87e00f000000ll)
#define ODY_RNM_BAR_E_RNM_PF_BAR0_SIZE 0x100000ull
#define ODY_RNM_BAR_E_RNM_VF_BAR0 (0x80f000800000ll)
#define ODY_RNM_BAR_E_RNM_VF_BAR0_SIZE 0x100000ull

/**
 * Register (RSL) rnm_active_pc
 *
 * RNM Conditional Clock Counter Register
 */
union ody_rnm_active_pc {
	uint64_t u;
	struct ody_rnm_active_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_rnm_active_pc_s cn; */
};
typedef union ody_rnm_active_pc ody_rnm_active_pc_t;

#define ODY_RNM_ACTIVE_PC ODY_RNM_ACTIVE_PC_FUNC()
static inline uint64_t ODY_RNM_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_ACTIVE_PC_FUNC(void)
{
	return 0x87e00f000010ll;
}

#define typedef_ODY_RNM_ACTIVE_PC ody_rnm_active_pc_t
#define bustype_ODY_RNM_ACTIVE_PC CSR_TYPE_RSL
#define basename_ODY_RNM_ACTIVE_PC "RNM_ACTIVE_PC"
#define device_bar_ODY_RNM_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_ACTIVE_PC 0
#define arguments_ODY_RNM_ACTIVE_PC -1, -1, -1, -1

/**
 * Register (RSL) rnm_ctl_status
 *
 * RNM Control and Status Register
 * This register is the RNM control register.
 * This register is secure only to prevent the nonsecure world from affecting
 * secure-world clients using true random numbers.
 */
union ody_rnm_ctl_status {
	uint64_t u;
	struct ody_rnm_ctl_status_s {
		uint64_t force_clk                   : 1;
		uint64_t ebg_ctl_lock                : 1;
		uint64_t ebg_poll_en                 : 1;
		uint64_t ebg_poll_delay              : 10;
		uint64_t drbg_en                     : 1;
		uint64_t drbg_ent_disable            : 1;
		uint64_t reserved_15_63              : 49;
	} s;
	/* struct ody_rnm_ctl_status_s cn; */
};
typedef union ody_rnm_ctl_status ody_rnm_ctl_status_t;

#define ODY_RNM_CTL_STATUS ODY_RNM_CTL_STATUS_FUNC()
static inline uint64_t ODY_RNM_CTL_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_CTL_STATUS_FUNC(void)
{
	return 0x87e00f000000ll;
}

#define typedef_ODY_RNM_CTL_STATUS ody_rnm_ctl_status_t
#define bustype_ODY_RNM_CTL_STATUS CSR_TYPE_RSL
#define basename_ODY_RNM_CTL_STATUS "RNM_CTL_STATUS"
#define device_bar_ODY_RNM_CTL_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_CTL_STATUS 0
#define arguments_ODY_RNM_CTL_STATUS -1, -1, -1, -1

/**
 * Register (RSL) rnm_drbg_ent_force#
 *
 * RNM DRBG Entropy Force Register
 * Write this register to force the Entropy source of the DRBG to a constant value
 * for debugging purposes.
 *
 * Before writing to this register, RNM_CTL_STATUS[DRBG_ENT_DISABLE] must be zero to turn off the
 * DRBG engine.
 *
 * To use this register in place of the entropy source write 1 to RNM_CTL_STATUS[DRBG_ENT_DISABLE].
 */
union ody_rnm_drbg_ent_forcex {
	uint64_t u;
	struct ody_rnm_drbg_ent_forcex_s {
		uint64_t bits                        : 64;
	} s;
	/* struct ody_rnm_drbg_ent_forcex_s cn; */
};
typedef union ody_rnm_drbg_ent_forcex ody_rnm_drbg_ent_forcex_t;

static inline uint64_t ODY_RNM_DRBG_ENT_FORCEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_DRBG_ENT_FORCEX(uint64_t a)
{
	if (a <= 3)
		return 0x87e00f000300ll + 8ll * ((a) & 0x3);
	__ody_csr_fatal("RNM_DRBG_ENT_FORCEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RNM_DRBG_ENT_FORCEX(a) ody_rnm_drbg_ent_forcex_t
#define bustype_ODY_RNM_DRBG_ENT_FORCEX(a) CSR_TYPE_RSL
#define basename_ODY_RNM_DRBG_ENT_FORCEX(a) "RNM_DRBG_ENT_FORCEX"
#define device_bar_ODY_RNM_DRBG_ENT_FORCEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_DRBG_ENT_FORCEX(a) (a)
#define arguments_ODY_RNM_DRBG_ENT_FORCEX(a) (a), -1, -1, -1

/**
 * Register (NCB) rnm_drbg_rndr
 *
 * RNM DRBG Random Value Register
 */
union ody_rnm_drbg_rndr {
	uint64_t u;
	struct ody_rnm_drbg_rndr_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_drbg_rndr_s cn; */
};
typedef union ody_rnm_drbg_rndr ody_rnm_drbg_rndr_t;

#define ODY_RNM_DRBG_RNDR ODY_RNM_DRBG_RNDR_FUNC()
static inline uint64_t ODY_RNM_DRBG_RNDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_DRBG_RNDR_FUNC(void)
{
	return 0x80f000800020ll;
}

#define typedef_ODY_RNM_DRBG_RNDR ody_rnm_drbg_rndr_t
#define bustype_ODY_RNM_DRBG_RNDR CSR_TYPE_NCB
#define basename_ODY_RNM_DRBG_RNDR "RNM_DRBG_RNDR"
#define device_bar_ODY_RNM_DRBG_RNDR 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_DRBG_RNDR 0
#define arguments_ODY_RNM_DRBG_RNDR -1, -1, -1, -1

/**
 * Register (NCB) rnm_drbg_rndr_result
 *
 * RNM DRBG Random Result Register
 */
union ody_rnm_drbg_rndr_result {
	uint64_t u;
	struct ody_rnm_drbg_rndr_result_s {
		uint64_t res                         : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rnm_drbg_rndr_result_s cn; */
};
typedef union ody_rnm_drbg_rndr_result ody_rnm_drbg_rndr_result_t;

#define ODY_RNM_DRBG_RNDR_RESULT ODY_RNM_DRBG_RNDR_RESULT_FUNC()
static inline uint64_t ODY_RNM_DRBG_RNDR_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_DRBG_RNDR_RESULT_FUNC(void)
{
	return 0x80f000800028ll;
}

#define typedef_ODY_RNM_DRBG_RNDR_RESULT ody_rnm_drbg_rndr_result_t
#define bustype_ODY_RNM_DRBG_RNDR_RESULT CSR_TYPE_NCB
#define basename_ODY_RNM_DRBG_RNDR_RESULT "RNM_DRBG_RNDR_RESULT"
#define device_bar_ODY_RNM_DRBG_RNDR_RESULT 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_DRBG_RNDR_RESULT 0
#define arguments_ODY_RNM_DRBG_RNDR_RESULT -1, -1, -1, -1

/**
 * Register (NCB) rnm_drbg_rndrrs
 *
 * RNM DRBG Reseeded Random Register
 */
union ody_rnm_drbg_rndrrs {
	uint64_t u;
	struct ody_rnm_drbg_rndrrs_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_drbg_rndrrs_s cn; */
};
typedef union ody_rnm_drbg_rndrrs ody_rnm_drbg_rndrrs_t;

#define ODY_RNM_DRBG_RNDRRS ODY_RNM_DRBG_RNDRRS_FUNC()
static inline uint64_t ODY_RNM_DRBG_RNDRRS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_DRBG_RNDRRS_FUNC(void)
{
	return 0x80f000800030ll;
}

#define typedef_ODY_RNM_DRBG_RNDRRS ody_rnm_drbg_rndrrs_t
#define bustype_ODY_RNM_DRBG_RNDRRS CSR_TYPE_NCB
#define basename_ODY_RNM_DRBG_RNDRRS "RNM_DRBG_RNDRRS"
#define device_bar_ODY_RNM_DRBG_RNDRRS 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_DRBG_RNDRRS 0
#define arguments_ODY_RNM_DRBG_RNDRRS -1, -1, -1, -1

/**
 * Register (NCB) rnm_drbg_rndrrs_result
 *
 * RNM DRBG Reseeded Random Result Register
 */
union ody_rnm_drbg_rndrrs_result {
	uint64_t u;
	struct ody_rnm_drbg_rndrrs_result_s {
		uint64_t res                         : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rnm_drbg_rndrrs_result_s cn; */
};
typedef union ody_rnm_drbg_rndrrs_result ody_rnm_drbg_rndrrs_result_t;

#define ODY_RNM_DRBG_RNDRRS_RESULT ODY_RNM_DRBG_RNDRRS_RESULT_FUNC()
static inline uint64_t ODY_RNM_DRBG_RNDRRS_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_DRBG_RNDRRS_RESULT_FUNC(void)
{
	return 0x80f000800038ll;
}

#define typedef_ODY_RNM_DRBG_RNDRRS_RESULT ody_rnm_drbg_rndrrs_result_t
#define bustype_ODY_RNM_DRBG_RNDRRS_RESULT CSR_TYPE_NCB
#define basename_ODY_RNM_DRBG_RNDRRS_RESULT "RNM_DRBG_RNDRRS_RESULT"
#define device_bar_ODY_RNM_DRBG_RNDRRS_RESULT 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_DRBG_RNDRRS_RESULT 0
#define arguments_ODY_RNM_DRBG_RNDRRS_RESULT -1, -1, -1, -1

/**
 * Register (RSL) rnm_ebg_ctl
 *
 * RNM EBG Control Register
 * This register is used to control the EBG (Entropy Bit Generator), which
 * serves as the true random entropy source for RNM.
 */
union ody_rnm_ebg_ctl {
	uint64_t u;
	struct ody_rnm_ebg_ctl_s {
		uint64_t reserved_0_4                : 5;
		uint64_t rng_pu_bias2                : 1;
		uint64_t pp_ena                      : 1;
		uint64_t rng_slow_osc_ena            : 1;
		uint64_t rng_fast_osc_ena            : 1;
		uint64_t rng_pu_bias                 : 1;
		uint64_t rng_rstn                    : 1;
		uint64_t rng_clk_sel                 : 1;
		uint64_t entropy_req                 : 1;
		uint64_t entropy_sel                 : 2;
		uint64_t reserved_15                 : 1;
		uint64_t rng_slow_div_val            : 8;
		uint64_t ds_ratio                    : 8;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_rnm_ebg_ctl_s cn; */
};
typedef union ody_rnm_ebg_ctl ody_rnm_ebg_ctl_t;

#define ODY_RNM_EBG_CTL ODY_RNM_EBG_CTL_FUNC()
static inline uint64_t ODY_RNM_EBG_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_EBG_CTL_FUNC(void)
{
	return 0x87e00f000040ll;
}

#define typedef_ODY_RNM_EBG_CTL ody_rnm_ebg_ctl_t
#define bustype_ODY_RNM_EBG_CTL CSR_TYPE_RSL
#define basename_ODY_RNM_EBG_CTL "RNM_EBG_CTL"
#define device_bar_ODY_RNM_EBG_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_EBG_CTL 0
#define arguments_ODY_RNM_EBG_CTL -1, -1, -1, -1

/**
 * Register (RSL) rnm_ebg_ent
 *
 * RNM EBG Entropy Value Register
 * This register is used to read true random data from the EBG
 * (entropy bit generator), which serves as the true random entropy source for RNM.
 */
union ody_rnm_ebg_ent {
	uint64_t u;
	struct ody_rnm_ebg_ent_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_ebg_ent_s cn; */
};
typedef union ody_rnm_ebg_ent ody_rnm_ebg_ent_t;

#define ODY_RNM_EBG_ENT ODY_RNM_EBG_ENT_FUNC()
static inline uint64_t ODY_RNM_EBG_ENT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_EBG_ENT_FUNC(void)
{
	return 0x87e00f000048ll;
}

#define typedef_ODY_RNM_EBG_ENT ody_rnm_ebg_ent_t
#define bustype_ODY_RNM_EBG_ENT CSR_TYPE_RSL
#define basename_ODY_RNM_EBG_ENT "RNM_EBG_ENT"
#define device_bar_ODY_RNM_EBG_ENT 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_EBG_ENT 0
#define arguments_ODY_RNM_EBG_ENT -1, -1, -1, -1

/**
 * Register (RSL) rnm_entropy_rate
 *
 * RNM Entropy Consumption Rate Limit Register
 * Number of microseconds to wait between DRBG Reseeds.
 */
union ody_rnm_entropy_rate {
	uint64_t u;
	struct ody_rnm_entropy_rate_s {
		uint64_t rndrrs_time                 : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_rnm_entropy_rate_s cn; */
};
typedef union ody_rnm_entropy_rate ody_rnm_entropy_rate_t;

#define ODY_RNM_ENTROPY_RATE ODY_RNM_ENTROPY_RATE_FUNC()
static inline uint64_t ODY_RNM_ENTROPY_RATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_ENTROPY_RATE_FUNC(void)
{
	return 0x87e00f000f10ll;
}

#define typedef_ODY_RNM_ENTROPY_RATE ody_rnm_entropy_rate_t
#define bustype_ODY_RNM_ENTROPY_RATE CSR_TYPE_RSL
#define basename_ODY_RNM_ENTROPY_RATE "RNM_ENTROPY_RATE"
#define device_bar_ODY_RNM_ENTROPY_RATE 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_ENTROPY_RATE 0
#define arguments_ODY_RNM_ENTROPY_RATE -1, -1, -1, -1

/**
 * Register (RSL) rnm_entropy_status
 *
 * RNM Entropy Pool Status Register
 * Status of the RNM Entropy Memory.
 */
union ody_rnm_entropy_status {
	uint64_t u;
	struct ody_rnm_entropy_status_s {
		uint64_t normal_cnt                  : 7;
		uint64_t normal_max                  : 7;
		uint64_t no_zero_cnt                 : 7;
		uint64_t no_zero_max                 : 7;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_rnm_entropy_status_s cn; */
};
typedef union ody_rnm_entropy_status ody_rnm_entropy_status_t;

#define ODY_RNM_ENTROPY_STATUS ODY_RNM_ENTROPY_STATUS_FUNC()
static inline uint64_t ODY_RNM_ENTROPY_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_ENTROPY_STATUS_FUNC(void)
{
	return 0x87e00f000008ll;
}

#define typedef_ODY_RNM_ENTROPY_STATUS ody_rnm_entropy_status_t
#define bustype_ODY_RNM_ENTROPY_STATUS CSR_TYPE_RSL
#define basename_ODY_RNM_ENTROPY_STATUS "RNM_ENTROPY_STATUS"
#define device_bar_ODY_RNM_ENTROPY_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_ENTROPY_STATUS 0
#define arguments_ODY_RNM_ENTROPY_STATUS -1, -1, -1, -1

/**
 * Register (RSL) rnm_pf_drbg_reseed_ctr
 *
 * RNM DRBG Reseed Counter Register
 * Number of DRBG engine requests serviced since the last reseed.
 * Read RNM_PF_DRBG_RESEED_INTERVAL for the number of requests before a reseed occurs.
 * When RNM_PF_DRBG_RESEED_CTR reaches RNM_PF_DRBG_RESEED_INTERVAL the engines will reseed
 * themselves.
 */
union ody_rnm_pf_drbg_reseed_ctr {
	uint64_t u;
	struct ody_rnm_pf_drbg_reseed_ctr_s {
		uint64_t ctr                         : 48;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_rnm_pf_drbg_reseed_ctr_s cn; */
};
typedef union ody_rnm_pf_drbg_reseed_ctr ody_rnm_pf_drbg_reseed_ctr_t;

#define ODY_RNM_PF_DRBG_RESEED_CTR ODY_RNM_PF_DRBG_RESEED_CTR_FUNC()
static inline uint64_t ODY_RNM_PF_DRBG_RESEED_CTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_DRBG_RESEED_CTR_FUNC(void)
{
	return 0x87e00f000f08ll;
}

#define typedef_ODY_RNM_PF_DRBG_RESEED_CTR ody_rnm_pf_drbg_reseed_ctr_t
#define bustype_ODY_RNM_PF_DRBG_RESEED_CTR CSR_TYPE_RSL
#define basename_ODY_RNM_PF_DRBG_RESEED_CTR "RNM_PF_DRBG_RESEED_CTR"
#define device_bar_ODY_RNM_PF_DRBG_RESEED_CTR 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_DRBG_RESEED_CTR 0
#define arguments_ODY_RNM_PF_DRBG_RESEED_CTR -1, -1, -1, -1

/**
 * Register (RSL) rnm_pf_drbg_reseed_interval
 *
 * RNM DRBG Reseed Interval Register
 * Number of DRBG requests to service before the DRBG engines reseed themselves.
 * Read RNM_PF_DRBG_RESEED_CTR for the number of requests since the last reseed.
 * When RNM_PF_DRBG_RESEED_CTR reaches RNM_PF_DRBG_RESEED_INTERVAL the engines will
 * reseed themselves.
 */
union ody_rnm_pf_drbg_reseed_interval {
	uint64_t u;
	struct ody_rnm_pf_drbg_reseed_interval_s {
		uint64_t seedlife                    : 48;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_rnm_pf_drbg_reseed_interval_s cn; */
};
typedef union ody_rnm_pf_drbg_reseed_interval ody_rnm_pf_drbg_reseed_interval_t;

#define ODY_RNM_PF_DRBG_RESEED_INTERVAL ODY_RNM_PF_DRBG_RESEED_INTERVAL_FUNC()
static inline uint64_t ODY_RNM_PF_DRBG_RESEED_INTERVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_DRBG_RESEED_INTERVAL_FUNC(void)
{
	return 0x87e00f000f00ll;
}

#define typedef_ODY_RNM_PF_DRBG_RESEED_INTERVAL ody_rnm_pf_drbg_reseed_interval_t
#define bustype_ODY_RNM_PF_DRBG_RESEED_INTERVAL CSR_TYPE_RSL
#define basename_ODY_RNM_PF_DRBG_RESEED_INTERVAL "RNM_PF_DRBG_RESEED_INTERVAL"
#define device_bar_ODY_RNM_PF_DRBG_RESEED_INTERVAL 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_DRBG_RESEED_INTERVAL 0
#define arguments_ODY_RNM_PF_DRBG_RESEED_INTERVAL -1, -1, -1, -1

/**
 * Register (RSL) rnm_pf_ebg_health
 *
 * RNM EBG Health Configuration and Status Register
 * This register is used to configure and check the status of the EBG (Entropy Bit
 * Generator) Health tests.
 */
union ody_rnm_pf_ebg_health {
	uint64_t u;
	struct ody_rnm_pf_ebg_health_s {
		uint64_t c_adp                       : 11;
		uint64_t c_rep                       : 9;
		uint64_t ct_err                      : 1;
		uint64_t st_err                      : 1;
		uint64_t st_done                     : 1;
		uint64_t err_adp                     : 1;
		uint64_t err_rep                     : 1;
		uint64_t reserved_25_63              : 39;
	} s;
	/* struct ody_rnm_pf_ebg_health_s cn; */
};
typedef union ody_rnm_pf_ebg_health ody_rnm_pf_ebg_health_t;

#define ODY_RNM_PF_EBG_HEALTH ODY_RNM_PF_EBG_HEALTH_FUNC()
static inline uint64_t ODY_RNM_PF_EBG_HEALTH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_EBG_HEALTH_FUNC(void)
{
	return 0x87e00f000050ll;
}

#define typedef_ODY_RNM_PF_EBG_HEALTH ody_rnm_pf_ebg_health_t
#define bustype_ODY_RNM_PF_EBG_HEALTH CSR_TYPE_RSL
#define basename_ODY_RNM_PF_EBG_HEALTH "RNM_PF_EBG_HEALTH"
#define device_bar_ODY_RNM_PF_EBG_HEALTH 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_EBG_HEALTH 0
#define arguments_ODY_RNM_PF_EBG_HEALTH -1, -1, -1, -1

/**
 * Register (RSL) rnm_pf_trng
 *
 * RNM True Random Number Register
 */
union ody_rnm_pf_trng {
	uint64_t u;
	struct ody_rnm_pf_trng_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_pf_trng_s cn; */
};
typedef union ody_rnm_pf_trng ody_rnm_pf_trng_t;

#define ODY_RNM_PF_TRNG ODY_RNM_PF_TRNG_FUNC()
static inline uint64_t ODY_RNM_PF_TRNG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_TRNG_FUNC(void)
{
	return 0x87e00f000400ll;
}

#define typedef_ODY_RNM_PF_TRNG ody_rnm_pf_trng_t
#define bustype_ODY_RNM_PF_TRNG CSR_TYPE_RSL
#define basename_ODY_RNM_PF_TRNG "RNM_PF_TRNG"
#define device_bar_ODY_RNM_PF_TRNG 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_TRNG 0
#define arguments_ODY_RNM_PF_TRNG -1, -1, -1, -1

/**
 * Register (RSL) rnm_pf_trng_dat#
 *
 * RNM True Random Number Register
 */
union ody_rnm_pf_trng_datx {
	uint64_t u;
	struct ody_rnm_pf_trng_datx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_pf_trng_datx_s cn; */
};
typedef union ody_rnm_pf_trng_datx ody_rnm_pf_trng_datx_t;

static inline uint64_t ODY_RNM_PF_TRNG_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_TRNG_DATX(uint64_t a)
{
	if (a <= 127)
		return 0x87e00f001000ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("RNM_PF_TRNG_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RNM_PF_TRNG_DATX(a) ody_rnm_pf_trng_datx_t
#define bustype_ODY_RNM_PF_TRNG_DATX(a) CSR_TYPE_RSL
#define basename_ODY_RNM_PF_TRNG_DATX(a) "RNM_PF_TRNG_DATX"
#define device_bar_ODY_RNM_PF_TRNG_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_TRNG_DATX(a) (a)
#define arguments_ODY_RNM_PF_TRNG_DATX(a) (a), -1, -1, -1

/**
 * Register (RSL) rnm_pf_trng_res#
 *
 * RNM Random Result Register
 */
union ody_rnm_pf_trng_resx {
	uint64_t u;
	struct ody_rnm_pf_trng_resx_s {
		uint64_t res                         : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rnm_pf_trng_resx_s cn; */
};
typedef union ody_rnm_pf_trng_resx ody_rnm_pf_trng_resx_t;

static inline uint64_t ODY_RNM_PF_TRNG_RESX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_TRNG_RESX(uint64_t a)
{
	if (a <= 127)
		return 0x87e00f001008ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("RNM_PF_TRNG_RESX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RNM_PF_TRNG_RESX(a) ody_rnm_pf_trng_resx_t
#define bustype_ODY_RNM_PF_TRNG_RESX(a) CSR_TYPE_RSL
#define basename_ODY_RNM_PF_TRNG_RESX(a) "RNM_PF_TRNG_RESX"
#define device_bar_ODY_RNM_PF_TRNG_RESX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_TRNG_RESX(a) (a)
#define arguments_ODY_RNM_PF_TRNG_RESX(a) (a), -1, -1, -1

/**
 * Register (RSL) rnm_pf_trng_result
 *
 * RNM Random Result Register
 */
union ody_rnm_pf_trng_result {
	uint64_t u;
	struct ody_rnm_pf_trng_result_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_rnm_pf_trng_result_s cn; */
};
typedef union ody_rnm_pf_trng_result ody_rnm_pf_trng_result_t;

#define ODY_RNM_PF_TRNG_RESULT ODY_RNM_PF_TRNG_RESULT_FUNC()
static inline uint64_t ODY_RNM_PF_TRNG_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_PF_TRNG_RESULT_FUNC(void)
{
	return 0x87e00f000408ll;
}

#define typedef_ODY_RNM_PF_TRNG_RESULT ody_rnm_pf_trng_result_t
#define bustype_ODY_RNM_PF_TRNG_RESULT CSR_TYPE_RSL
#define basename_ODY_RNM_PF_TRNG_RESULT "RNM_PF_TRNG_RESULT"
#define device_bar_ODY_RNM_PF_TRNG_RESULT 0x0 /* PF_BAR0 */
#define busnum_ODY_RNM_PF_TRNG_RESULT 0
#define arguments_ODY_RNM_PF_TRNG_RESULT -1, -1, -1, -1

/**
 * Register (NCB) rnm_trng
 *
 * RNM True Random Number Register
 */
union ody_rnm_trng {
	uint64_t u;
	struct ody_rnm_trng_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_trng_s cn; */
};
typedef union ody_rnm_trng ody_rnm_trng_t;

#define ODY_RNM_TRNG ODY_RNM_TRNG_FUNC()
static inline uint64_t ODY_RNM_TRNG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_TRNG_FUNC(void)
{
	return 0x80f000800010ll;
}

#define typedef_ODY_RNM_TRNG ody_rnm_trng_t
#define bustype_ODY_RNM_TRNG CSR_TYPE_NCB
#define basename_ODY_RNM_TRNG "RNM_TRNG"
#define device_bar_ODY_RNM_TRNG 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_TRNG 0
#define arguments_ODY_RNM_TRNG -1, -1, -1, -1

/**
 * Register (NCB) rnm_trng_result
 *
 * RNM Random Result Register
 */
union ody_rnm_trng_result {
	uint64_t u;
	struct ody_rnm_trng_result_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_rnm_trng_result_s cn; */
};
typedef union ody_rnm_trng_result ody_rnm_trng_result_t;

#define ODY_RNM_TRNG_RESULT ODY_RNM_TRNG_RESULT_FUNC()
static inline uint64_t ODY_RNM_TRNG_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_TRNG_RESULT_FUNC(void)
{
	return 0x80f000800018ll;
}

#define typedef_ODY_RNM_TRNG_RESULT ody_rnm_trng_result_t
#define bustype_ODY_RNM_TRNG_RESULT CSR_TYPE_NCB
#define basename_ODY_RNM_TRNG_RESULT "RNM_TRNG_RESULT"
#define device_bar_ODY_RNM_TRNG_RESULT 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_TRNG_RESULT 0
#define arguments_ODY_RNM_TRNG_RESULT -1, -1, -1, -1

/**
 * Register (NCB) rnm_vf_drbg_reseed_ctr
 *
 * RNM DRBG Reseed Counter Register
 * Number of DRBG engine requests serviced since the last reseed.
 * Read RNM_VF_DRBG_RESEED_INTERVAL for the number of requests before a reseed occurs.
 * When RNM_VF_DRBG_RESEED_CTR reaches RNM_VF_DRBG_RESEED_INTERVAL the engines will reseed
 * themselves.
 */
union ody_rnm_vf_drbg_reseed_ctr {
	uint64_t u;
	struct ody_rnm_vf_drbg_reseed_ctr_s {
		uint64_t ctr                         : 48;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_rnm_vf_drbg_reseed_ctr_s cn; */
};
typedef union ody_rnm_vf_drbg_reseed_ctr ody_rnm_vf_drbg_reseed_ctr_t;

#define ODY_RNM_VF_DRBG_RESEED_CTR ODY_RNM_VF_DRBG_RESEED_CTR_FUNC()
static inline uint64_t ODY_RNM_VF_DRBG_RESEED_CTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_VF_DRBG_RESEED_CTR_FUNC(void)
{
	return 0x80f000800058ll;
}

#define typedef_ODY_RNM_VF_DRBG_RESEED_CTR ody_rnm_vf_drbg_reseed_ctr_t
#define bustype_ODY_RNM_VF_DRBG_RESEED_CTR CSR_TYPE_NCB
#define basename_ODY_RNM_VF_DRBG_RESEED_CTR "RNM_VF_DRBG_RESEED_CTR"
#define device_bar_ODY_RNM_VF_DRBG_RESEED_CTR 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_VF_DRBG_RESEED_CTR 0
#define arguments_ODY_RNM_VF_DRBG_RESEED_CTR -1, -1, -1, -1

/**
 * Register (NCB) rnm_vf_drbg_reseed_interval
 *
 * RNM DRBG Reseed Interval Register
 * Number of DRBG requests to service before the DRBG engines reseed themselves.
 * Read RNM_VF_DRBG_RESEED_CTR for the number of requests since the last reseed.
 * When RNM_VF_DRBG_RESEED_CTR reaches RNM_VF_DRBG_RESEED_INTERVAL the engines will
 * reseed themselves.
 */
union ody_rnm_vf_drbg_reseed_interval {
	uint64_t u;
	struct ody_rnm_vf_drbg_reseed_interval_s {
		uint64_t seedlife                    : 48;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_rnm_vf_drbg_reseed_interval_s cn; */
};
typedef union ody_rnm_vf_drbg_reseed_interval ody_rnm_vf_drbg_reseed_interval_t;

#define ODY_RNM_VF_DRBG_RESEED_INTERVAL ODY_RNM_VF_DRBG_RESEED_INTERVAL_FUNC()
static inline uint64_t ODY_RNM_VF_DRBG_RESEED_INTERVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_VF_DRBG_RESEED_INTERVAL_FUNC(void)
{
	return 0x80f000800050ll;
}

#define typedef_ODY_RNM_VF_DRBG_RESEED_INTERVAL ody_rnm_vf_drbg_reseed_interval_t
#define bustype_ODY_RNM_VF_DRBG_RESEED_INTERVAL CSR_TYPE_NCB
#define basename_ODY_RNM_VF_DRBG_RESEED_INTERVAL "RNM_VF_DRBG_RESEED_INTERVAL"
#define device_bar_ODY_RNM_VF_DRBG_RESEED_INTERVAL 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_VF_DRBG_RESEED_INTERVAL 0
#define arguments_ODY_RNM_VF_DRBG_RESEED_INTERVAL -1, -1, -1, -1

/**
 * Register (NCB) rnm_vf_ebg_health
 *
 * RNM EBG Health Configuration and Status Register
 * This register is used to configure and check the status of the EBG (Entropy Bit
 * Generator) Health tests.
 */
union ody_rnm_vf_ebg_health {
	uint64_t u;
	struct ody_rnm_vf_ebg_health_s {
		uint64_t reserved_0_19               : 20;
		uint64_t ct_err                      : 1;
		uint64_t st_err                      : 1;
		uint64_t st_done                     : 1;
		uint64_t err_adp                     : 1;
		uint64_t err_rep                     : 1;
		uint64_t reserved_25_63              : 39;
	} s;
	/* struct ody_rnm_vf_ebg_health_s cn; */
};
typedef union ody_rnm_vf_ebg_health ody_rnm_vf_ebg_health_t;

#define ODY_RNM_VF_EBG_HEALTH ODY_RNM_VF_EBG_HEALTH_FUNC()
static inline uint64_t ODY_RNM_VF_EBG_HEALTH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_VF_EBG_HEALTH_FUNC(void)
{
	return 0x80f000800048ll;
}

#define typedef_ODY_RNM_VF_EBG_HEALTH ody_rnm_vf_ebg_health_t
#define bustype_ODY_RNM_VF_EBG_HEALTH CSR_TYPE_NCB
#define basename_ODY_RNM_VF_EBG_HEALTH "RNM_VF_EBG_HEALTH"
#define device_bar_ODY_RNM_VF_EBG_HEALTH 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_VF_EBG_HEALTH 0
#define arguments_ODY_RNM_VF_EBG_HEALTH -1, -1, -1, -1

/**
 * Register (NCB) rnm_vf_trng_dat#
 *
 * RNM True Random Number Register
 */
union ody_rnm_vf_trng_datx {
	uint64_t u;
	struct ody_rnm_vf_trng_datx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_rnm_vf_trng_datx_s cn; */
};
typedef union ody_rnm_vf_trng_datx ody_rnm_vf_trng_datx_t;

static inline uint64_t ODY_RNM_VF_TRNG_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_VF_TRNG_DATX(uint64_t a)
{
	if (a <= 127)
		return 0x80f000800800ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("RNM_VF_TRNG_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RNM_VF_TRNG_DATX(a) ody_rnm_vf_trng_datx_t
#define bustype_ODY_RNM_VF_TRNG_DATX(a) CSR_TYPE_NCB
#define basename_ODY_RNM_VF_TRNG_DATX(a) "RNM_VF_TRNG_DATX"
#define device_bar_ODY_RNM_VF_TRNG_DATX(a) 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_VF_TRNG_DATX(a) (a)
#define arguments_ODY_RNM_VF_TRNG_DATX(a) (a), -1, -1, -1

/**
 * Register (NCB) rnm_vf_trng_res#
 *
 * RNM Random Result Register
 */
union ody_rnm_vf_trng_resx {
	uint64_t u;
	struct ody_rnm_vf_trng_resx_s {
		uint64_t res                         : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rnm_vf_trng_resx_s cn; */
};
typedef union ody_rnm_vf_trng_resx ody_rnm_vf_trng_resx_t;

static inline uint64_t ODY_RNM_VF_TRNG_RESX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RNM_VF_TRNG_RESX(uint64_t a)
{
	if (a <= 127)
		return 0x80f000800808ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("RNM_VF_TRNG_RESX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RNM_VF_TRNG_RESX(a) ody_rnm_vf_trng_resx_t
#define bustype_ODY_RNM_VF_TRNG_RESX(a) CSR_TYPE_NCB
#define basename_ODY_RNM_VF_TRNG_RESX(a) "RNM_VF_TRNG_RESX"
#define device_bar_ODY_RNM_VF_TRNG_RESX(a) 0x0 /* VF_BAR0 */
#define busnum_ODY_RNM_VF_TRNG_RESX(a) (a)
#define arguments_ODY_RNM_VF_TRNG_RESX(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_RNM_H__ */
