#ifndef __ODY_CSRS_MDC_H__
#define __ODY_CSRS_MDC_H__
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
 * MDC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mdc_bar_e
 *
 * MDC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_MDC_BAR_E_MDC_PF_BAR0 (0x87e010000000ll)
#define ODY_MDC_BAR_E_MDC_PF_BAR0_SIZE 0x100000ull
#define ODY_MDC_BAR_E_MDC_PF_BAR2 (0x87e008000000ll)
#define ODY_MDC_BAR_E_MDC_PF_BAR2_SIZE 0x1000000ull
#define ODY_MDC_BAR_E_MDC_PF_BAR4 (0x87e010100000ll)
#define ODY_MDC_BAR_E_MDC_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration mdc_int_vec_e
 *
 * MDC Interrupt Source Enumeration
 * Enumerates the different MDC-generated interrupts.
 */
#define ODY_MDC_INT_VEC_E_MDC_ECC_ERR (0)

/**
 * Enumeration mdc_ras_uet_e
 *
 * MDC RAS Uncorrected Error Type Enumeration
 * Enumerates the uncorrected error types in MDC_RAS_ROM(). See also RAS_UET_E of which
 * this enumeration is a superset.
 */
#define ODY_MDC_RAS_UET_E_NOUC (4)
#define ODY_MDC_RAS_UET_E_UC (0)
#define ODY_MDC_RAS_UET_E_UEO (2)
#define ODY_MDC_RAS_UET_E_UER (3)
#define ODY_MDC_RAS_UET_E_UEU (1)

/**
 * Structure mdc_ras_entry_s
 *
 * MDN RAS Entry Structure
 * This structure describes the leaf node data returned from MDC_RAS_ROM().
 */
union ody_mdc_ras_entry_s {
	uint64_t u;
	struct ody_mdc_ras_entry_s_s {
		uint64_t reserved_0_17               : 18;
		uint64_t ras_poison                  : 2;
		uint64_t ras_transient               : 1;
		uint64_t ras_uet                     : 3;
		uint64_t ras_serr                    : 8;
		uint64_t ras_id                      : 32;
	} s;
	/* struct ody_mdc_ras_entry_s_s cn; */
};

/**
 * Register (RSL) mdc_active_pc
 *
 * MDC Active Cycles Register
 */
union ody_mdc_active_pc {
	uint64_t u;
	struct ody_mdc_active_pc_s {
		uint64_t act_cyc                     : 64;
	} s;
	/* struct ody_mdc_active_pc_s cn; */
};
typedef union ody_mdc_active_pc ody_mdc_active_pc_t;

#define ODY_MDC_ACTIVE_PC ODY_MDC_ACTIVE_PC_FUNC()
static inline uint64_t ODY_MDC_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_ACTIVE_PC_FUNC(void)
{
	return 0x87e0100000e8ll;
}

#define typedef_ODY_MDC_ACTIVE_PC ody_mdc_active_pc_t
#define bustype_ODY_MDC_ACTIVE_PC CSR_TYPE_RSL
#define basename_ODY_MDC_ACTIVE_PC "MDC_ACTIVE_PC"
#define device_bar_ODY_MDC_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_ACTIVE_PC 0
#define arguments_ODY_MDC_ACTIVE_PC -1, -1, -1, -1

/**
 * Register (RSL) mdc_bist_config
 *
 * MDC Configuration Register
 */
union ody_mdc_bist_config {
	uint64_t u;
	struct ody_mdc_bist_config_s {
		uint64_t stagger_period              : 16;
		uint64_t stagger_disable             : 1;
		uint64_t bisr_soft_disable_xor       : 1;
		uint64_t mdn_start_ratio             : 4;
		uint64_t mdh_start_ratio             : 3;
		uint64_t mdc_broadcast               : 1;
		uint64_t clock_gating_enable         : 1;
		uint64_t reserved_27_63              : 37;
	} s;
	/* struct ody_mdc_bist_config_s cn; */
};
typedef union ody_mdc_bist_config ody_mdc_bist_config_t;

#define ODY_MDC_BIST_CONFIG ODY_MDC_BIST_CONFIG_FUNC()
static inline uint64_t ODY_MDC_BIST_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_BIST_CONFIG_FUNC(void)
{
	return 0x87e010000008ll;
}

#define typedef_ODY_MDC_BIST_CONFIG ody_mdc_bist_config_t
#define bustype_ODY_MDC_BIST_CONFIG CSR_TYPE_RSL
#define basename_ODY_MDC_BIST_CONFIG "MDC_BIST_CONFIG"
#define device_bar_ODY_MDC_BIST_CONFIG 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_BIST_CONFIG 0
#define arguments_ODY_MDC_BIST_CONFIG -1, -1, -1, -1

/**
 * Register (RSL) mdc_bist_control
 *
 * MDC Global BIST Control Register
 */
union ody_mdc_bist_control {
	uint64_t u;
	struct ody_mdc_bist_control_s {
		uint64_t start                       : 1;
		uint64_t clear                       : 1;
		uint64_t reset                       : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_mdc_bist_control_s cn; */
};
typedef union ody_mdc_bist_control ody_mdc_bist_control_t;

#define ODY_MDC_BIST_CONTROL ODY_MDC_BIST_CONTROL_FUNC()
static inline uint64_t ODY_MDC_BIST_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_BIST_CONTROL_FUNC(void)
{
	return 0x87e010000028ll;
}

#define typedef_ODY_MDC_BIST_CONTROL ody_mdc_bist_control_t
#define bustype_ODY_MDC_BIST_CONTROL CSR_TYPE_RSL
#define basename_ODY_MDC_BIST_CONTROL "MDC_BIST_CONTROL"
#define device_bar_ODY_MDC_BIST_CONTROL 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_BIST_CONTROL 0
#define arguments_ODY_MDC_BIST_CONTROL -1, -1, -1, -1

/**
 * Register (RSL) mdc_bist_debug_mode
 *
 * MDC Configuration Register
 */
union ody_mdc_bist_debug_mode {
	uint64_t u;
	struct ody_mdc_bist_debug_mode_s {
		uint64_t enable                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_mdc_bist_debug_mode_s cn; */
};
typedef union ody_mdc_bist_debug_mode ody_mdc_bist_debug_mode_t;

#define ODY_MDC_BIST_DEBUG_MODE ODY_MDC_BIST_DEBUG_MODE_FUNC()
static inline uint64_t ODY_MDC_BIST_DEBUG_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_BIST_DEBUG_MODE_FUNC(void)
{
	return 0x87e010000000ll;
}

#define typedef_ODY_MDC_BIST_DEBUG_MODE ody_mdc_bist_debug_mode_t
#define bustype_ODY_MDC_BIST_DEBUG_MODE CSR_TYPE_RSL
#define basename_ODY_MDC_BIST_DEBUG_MODE "MDC_BIST_DEBUG_MODE"
#define device_bar_ODY_MDC_BIST_DEBUG_MODE 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_BIST_DEBUG_MODE 0
#define arguments_ODY_MDC_BIST_DEBUG_MODE -1, -1, -1, -1

/**
 * Register (RSL) mdc_bist_fail#
 *
 * MDC BIST Failures Register
 * This register array holds information about the first 32 BIST failures.
 */
union ody_mdc_bist_failx {
	uint64_t u;
	struct ody_mdc_bist_failx_s {
		uint64_t info                        : 12;
		uint64_t node_id                     : 10;
		uint64_t hub_id                      : 7;
		uint64_t chain_id                    : 3;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_mdc_bist_failx_s cn; */
};
typedef union ody_mdc_bist_failx ody_mdc_bist_failx_t;

static inline uint64_t ODY_MDC_BIST_FAILX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_BIST_FAILX(uint64_t a)
{
	if (a <= 31)
		return 0x87e010000100ll + 8ll * ((a) & 0x1f);
	__ody_csr_fatal("MDC_BIST_FAILX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MDC_BIST_FAILX(a) ody_mdc_bist_failx_t
#define bustype_ODY_MDC_BIST_FAILX(a) CSR_TYPE_RSL
#define basename_ODY_MDC_BIST_FAILX(a) "MDC_BIST_FAILX"
#define device_bar_ODY_MDC_BIST_FAILX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_BIST_FAILX(a) (a)
#define arguments_ODY_MDC_BIST_FAILX(a) (a), -1, -1, -1

/**
 * Register (RSL) mdc_bist_status
 *
 * MDC Global BIST Status Register
 */
union ody_mdc_bist_status {
	uint64_t u;
	struct ody_mdc_bist_status_s {
		uint64_t status                      : 3;
		uint64_t rst_bist_req                : 1;
		uint64_t reserved_4_15               : 12;
		uint64_t fail_count                  : 16;
		uint64_t sm_state                    : 6;
		uint64_t reserved_38_63              : 26;
	} s;
	/* struct ody_mdc_bist_status_s cn; */
};
typedef union ody_mdc_bist_status ody_mdc_bist_status_t;

#define ODY_MDC_BIST_STATUS ODY_MDC_BIST_STATUS_FUNC()
static inline uint64_t ODY_MDC_BIST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_BIST_STATUS_FUNC(void)
{
	return 0x87e010000030ll;
}

#define typedef_ODY_MDC_BIST_STATUS ody_mdc_bist_status_t
#define bustype_ODY_MDC_BIST_STATUS CSR_TYPE_RSL
#define basename_ODY_MDC_BIST_STATUS "MDC_BIST_STATUS"
#define device_bar_ODY_MDC_BIST_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_BIST_STATUS 0
#define arguments_ODY_MDC_BIST_STATUS -1, -1, -1, -1

/**
 * Register (RSL) mdc_const
 *
 * MDC Constants Register
 */
union ody_mdc_const {
	uint64_t u;
	struct ody_mdc_const_s {
		uint64_t reserved_0_15               : 16;
		uint64_t max_node_id                 : 10;
		uint64_t max_hub_id                  : 8;
		uint64_t max_chain_id                : 5;
		uint64_t reserved_39_63              : 25;
	} s;
	/* struct ody_mdc_const_s cn; */
};
typedef union ody_mdc_const ody_mdc_const_t;

#define ODY_MDC_CONST ODY_MDC_CONST_FUNC()
static inline uint64_t ODY_MDC_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_CONST_FUNC(void)
{
	return 0x87e010000068ll;
}

#define typedef_ODY_MDC_CONST ody_mdc_const_t
#define bustype_ODY_MDC_CONST CSR_TYPE_RSL
#define basename_ODY_MDC_CONST "MDC_CONST"
#define device_bar_ODY_MDC_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_CONST 0
#define arguments_ODY_MDC_CONST -1, -1, -1, -1

/**
 * Register (RSL) mdc_ecc_config
 *
 * MDC ECC Configuration Register
 */
union ody_mdc_ecc_config {
	uint64_t u;
	struct ody_mdc_ecc_config_s {
		uint64_t polling_period              : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_mdc_ecc_config_s cn; */
};
typedef union ody_mdc_ecc_config ody_mdc_ecc_config_t;

#define ODY_MDC_ECC_CONFIG ODY_MDC_ECC_CONFIG_FUNC()
static inline uint64_t ODY_MDC_ECC_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_ECC_CONFIG_FUNC(void)
{
	return 0x87e010000038ll;
}

#define typedef_ODY_MDC_ECC_CONFIG ody_mdc_ecc_config_t
#define bustype_ODY_MDC_ECC_CONFIG CSR_TYPE_RSL
#define basename_ODY_MDC_ECC_CONFIG "MDC_ECC_CONFIG"
#define device_bar_ODY_MDC_ECC_CONFIG 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_ECC_CONFIG 0
#define arguments_ODY_MDC_ECC_CONFIG -1, -1, -1, -1

/**
 * Register (RSL) mdc_ecc_status
 *
 * MDC Interrupt Status Register
 */
union ody_mdc_ecc_status {
	uint64_t u;
	struct ody_mdc_ecc_status_s {
		uint64_t sbe                         : 1;
		uint64_t dbe                         : 1;
		uint64_t sbe_plus                    : 1;
		uint64_t dbe_plus                    : 1;
		uint64_t reserved_4_15               : 12;
		uint64_t node_id                     : 10;
		uint64_t hub_id                      : 7;
		uint64_t chain_id                    : 3;
		uint64_t reserved_36_47              : 12;
		uint64_t row                         : 14;
		uint64_t reserved_62_63              : 2;
	} s;
	/* struct ody_mdc_ecc_status_s cn; */
};
typedef union ody_mdc_ecc_status ody_mdc_ecc_status_t;

#define ODY_MDC_ECC_STATUS ODY_MDC_ECC_STATUS_FUNC()
static inline uint64_t ODY_MDC_ECC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_ECC_STATUS_FUNC(void)
{
	return 0x87e010000040ll;
}

#define typedef_ODY_MDC_ECC_STATUS ody_mdc_ecc_status_t
#define bustype_ODY_MDC_ECC_STATUS CSR_TYPE_RSL
#define basename_ODY_MDC_ECC_STATUS "MDC_ECC_STATUS"
#define device_bar_ODY_MDC_ECC_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_ECC_STATUS 0
#define arguments_ODY_MDC_ECC_STATUS -1, -1, -1, -1

/**
 * Register (RSL) mdc_int_ena_w1c
 *
 * MDC Interrupt Enable Write-1-Clear Register
 * This register clears interrupt enable bits.
 */
union ody_mdc_int_ena_w1c {
	uint64_t u;
	struct ody_mdc_int_ena_w1c_s {
		uint64_t ecc_error                   : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_mdc_int_ena_w1c_s cn; */
};
typedef union ody_mdc_int_ena_w1c ody_mdc_int_ena_w1c_t;

#define ODY_MDC_INT_ENA_W1C ODY_MDC_INT_ENA_W1C_FUNC()
static inline uint64_t ODY_MDC_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_INT_ENA_W1C_FUNC(void)
{
	return 0x87e010000058ll;
}

#define typedef_ODY_MDC_INT_ENA_W1C ody_mdc_int_ena_w1c_t
#define bustype_ODY_MDC_INT_ENA_W1C CSR_TYPE_RSL
#define basename_ODY_MDC_INT_ENA_W1C "MDC_INT_ENA_W1C"
#define device_bar_ODY_MDC_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_INT_ENA_W1C 0
#define arguments_ODY_MDC_INT_ENA_W1C -1, -1, -1, -1

/**
 * Register (RSL) mdc_int_ena_w1s
 *
 * MDC Interrupt Enable Write-1-Set Register
 * This register sets interrupt enable bits.
 */
union ody_mdc_int_ena_w1s {
	uint64_t u;
	struct ody_mdc_int_ena_w1s_s {
		uint64_t ecc_error                   : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_mdc_int_ena_w1s_s cn; */
};
typedef union ody_mdc_int_ena_w1s ody_mdc_int_ena_w1s_t;

#define ODY_MDC_INT_ENA_W1S ODY_MDC_INT_ENA_W1S_FUNC()
static inline uint64_t ODY_MDC_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_INT_ENA_W1S_FUNC(void)
{
	return 0x87e010000060ll;
}

#define typedef_ODY_MDC_INT_ENA_W1S ody_mdc_int_ena_w1s_t
#define bustype_ODY_MDC_INT_ENA_W1S CSR_TYPE_RSL
#define basename_ODY_MDC_INT_ENA_W1S "MDC_INT_ENA_W1S"
#define device_bar_ODY_MDC_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_INT_ENA_W1S 0
#define arguments_ODY_MDC_INT_ENA_W1S -1, -1, -1, -1

/**
 * Register (RSL) mdc_int_w1c
 *
 * MDC Interrupt Control Register
 */
union ody_mdc_int_w1c {
	uint64_t u;
	struct ody_mdc_int_w1c_s {
		uint64_t ecc_error                   : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_mdc_int_w1c_s cn; */
};
typedef union ody_mdc_int_w1c ody_mdc_int_w1c_t;

#define ODY_MDC_INT_W1C ODY_MDC_INT_W1C_FUNC()
static inline uint64_t ODY_MDC_INT_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_INT_W1C_FUNC(void)
{
	return 0x87e010000048ll;
}

#define typedef_ODY_MDC_INT_W1C ody_mdc_int_w1c_t
#define bustype_ODY_MDC_INT_W1C CSR_TYPE_RSL
#define basename_ODY_MDC_INT_W1C "MDC_INT_W1C"
#define device_bar_ODY_MDC_INT_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_INT_W1C 0
#define arguments_ODY_MDC_INT_W1C -1, -1, -1, -1

/**
 * Register (RSL) mdc_int_w1s
 *
 * MDC Interrupt Control Register
 * This register sets interrupt bits.
 */
union ody_mdc_int_w1s {
	uint64_t u;
	struct ody_mdc_int_w1s_s {
		uint64_t ecc_error                   : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_mdc_int_w1s_s cn; */
};
typedef union ody_mdc_int_w1s ody_mdc_int_w1s_t;

#define ODY_MDC_INT_W1S ODY_MDC_INT_W1S_FUNC()
static inline uint64_t ODY_MDC_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_INT_W1S_FUNC(void)
{
	return 0x87e010000050ll;
}

#define typedef_ODY_MDC_INT_W1S ody_mdc_int_w1s_t
#define bustype_ODY_MDC_INT_W1S CSR_TYPE_RSL
#define basename_ODY_MDC_INT_W1S "MDC_INT_W1S"
#define device_bar_ODY_MDC_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_INT_W1S 0
#define arguments_ODY_MDC_INT_W1S -1, -1, -1, -1

/**
 * Register (RSL) mdc_pf_msix_pba#
 *
 * MDC MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the MDC_INT_VEC_E
 * enumeration.
 */
union ody_mdc_pf_msix_pbax {
	uint64_t u;
	struct ody_mdc_pf_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_mdc_pf_msix_pbax_s cn; */
};
typedef union ody_mdc_pf_msix_pbax ody_mdc_pf_msix_pbax_t;

static inline uint64_t ODY_MDC_PF_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_PF_MSIX_PBAX(uint64_t a)
{
	if (a == 0)
		return 0x87e0101f0000ll;
	__ody_csr_fatal("MDC_PF_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MDC_PF_MSIX_PBAX(a) ody_mdc_pf_msix_pbax_t
#define bustype_ODY_MDC_PF_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_ODY_MDC_PF_MSIX_PBAX(a) "MDC_PF_MSIX_PBAX"
#define device_bar_ODY_MDC_PF_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MDC_PF_MSIX_PBAX(a) (a)
#define arguments_ODY_MDC_PF_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (RSL) mdc_pf_msix_vec#_addr
 *
 * MDC MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the MDC_INT_VEC_E enumeration.
 */
union ody_mdc_pf_msix_vecx_addr {
	uint64_t u;
	struct ody_mdc_pf_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_mdc_pf_msix_vecx_addr_s cn; */
};
typedef union ody_mdc_pf_msix_vecx_addr ody_mdc_pf_msix_vecx_addr_t;

static inline uint64_t ODY_MDC_PF_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_PF_MSIX_VECX_ADDR(uint64_t a)
{
	if (a == 0)
		return 0x87e010100000ll;
	__ody_csr_fatal("MDC_PF_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MDC_PF_MSIX_VECX_ADDR(a) ody_mdc_pf_msix_vecx_addr_t
#define bustype_ODY_MDC_PF_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_MDC_PF_MSIX_VECX_ADDR(a) "MDC_PF_MSIX_VECX_ADDR"
#define device_bar_ODY_MDC_PF_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MDC_PF_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_MDC_PF_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) mdc_pf_msix_vec#_ctl
 *
 * MDC MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the MDC_INT_VEC_E enumeration.
 */
union ody_mdc_pf_msix_vecx_ctl {
	uint64_t u;
	struct ody_mdc_pf_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_mdc_pf_msix_vecx_ctl_s cn; */
};
typedef union ody_mdc_pf_msix_vecx_ctl ody_mdc_pf_msix_vecx_ctl_t;

static inline uint64_t ODY_MDC_PF_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_PF_MSIX_VECX_CTL(uint64_t a)
{
	if (a == 0)
		return 0x87e010100008ll;
	__ody_csr_fatal("MDC_PF_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MDC_PF_MSIX_VECX_CTL(a) ody_mdc_pf_msix_vecx_ctl_t
#define bustype_ODY_MDC_PF_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_ODY_MDC_PF_MSIX_VECX_CTL(a) "MDC_PF_MSIX_VECX_CTL"
#define device_bar_ODY_MDC_PF_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MDC_PF_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_MDC_PF_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) mdc_ras_rom#
 *
 * MDC RAM ROM Access Register
 */
union ody_mdc_ras_romx {
	uint64_t u;
	struct ody_mdc_ras_romx_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_mdc_ras_romx_s cn; */
};
typedef union ody_mdc_ras_romx ody_mdc_ras_romx_t;

static inline uint64_t ODY_MDC_RAS_ROMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_RAS_ROMX(uint64_t a)
{
	if (a <= 16383)
		return 0x87e010010000ll + 8ll * ((a) & 0x3fff);
	__ody_csr_fatal("MDC_RAS_ROMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MDC_RAS_ROMX(a) ody_mdc_ras_romx_t
#define bustype_ODY_MDC_RAS_ROMX(a) CSR_TYPE_RSL
#define basename_ODY_MDC_RAS_ROMX(a) "MDC_RAS_ROMX"
#define device_bar_ODY_MDC_RAS_ROMX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_RAS_ROMX(a) (a)
#define arguments_ODY_MDC_RAS_ROMX(a) (a), -1, -1, -1

/**
 * Register (RSL) mdc_timeouts
 *
 * MDC Protocol Timeout Register
 */
union ody_mdc_timeouts {
	uint64_t u;
	struct ody_mdc_timeouts_s {
		uint64_t bist_completion             : 28;
		uint64_t reserved_28_31              : 4;
		uint64_t bus_response                : 16;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_mdc_timeouts_s cn; */
};
typedef union ody_mdc_timeouts ody_mdc_timeouts_t;

#define ODY_MDC_TIMEOUTS ODY_MDC_TIMEOUTS_FUNC()
static inline uint64_t ODY_MDC_TIMEOUTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_TIMEOUTS_FUNC(void)
{
	return 0x87e010000070ll;
}

#define typedef_ODY_MDC_TIMEOUTS ody_mdc_timeouts_t
#define bustype_ODY_MDC_TIMEOUTS CSR_TYPE_RSL
#define basename_ODY_MDC_TIMEOUTS "MDC_TIMEOUTS"
#define device_bar_ODY_MDC_TIMEOUTS 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_TIMEOUTS 0
#define arguments_ODY_MDC_TIMEOUTS -1, -1, -1, -1

/**
 * Register (RSL) mdc_win_cmd
 *
 * MDC Windowed Access Command Register
 * Writing to this register initiates a MDC serial bus read or write request
 * according to the [WE] field.  MDC_WIN_DAT handles associated read
 * or write data and it contains a status field MDC_WIN_DAT[PENDING] that
 * indicates whether or not a request is in progress.  Writes
 * to MDC_WIN_CMD are ignored while MDC_WIN_DAT[PENDING] is asserted.
 */
union ody_mdc_win_cmd {
	uint64_t u;
	struct ody_mdc_win_cmd_s {
		uint64_t csr_id                      : 8;
		uint64_t we                          : 1;
		uint64_t bc_nodes                    : 1;
		uint64_t bc_chains                   : 1;
		uint64_t reserved_11_15              : 5;
		uint64_t node_id                     : 10;
		uint64_t hub_id                      : 7;
		uint64_t chain_id                    : 3;
		uint64_t reserved_36_63              : 28;
	} s;
	/* struct ody_mdc_win_cmd_s cn; */
};
typedef union ody_mdc_win_cmd ody_mdc_win_cmd_t;

#define ODY_MDC_WIN_CMD ODY_MDC_WIN_CMD_FUNC()
static inline uint64_t ODY_MDC_WIN_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_WIN_CMD_FUNC(void)
{
	return 0x87e010000010ll;
}

#define typedef_ODY_MDC_WIN_CMD ody_mdc_win_cmd_t
#define bustype_ODY_MDC_WIN_CMD CSR_TYPE_RSL
#define basename_ODY_MDC_WIN_CMD "MDC_WIN_CMD"
#define device_bar_ODY_MDC_WIN_CMD 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_WIN_CMD 0
#define arguments_ODY_MDC_WIN_CMD -1, -1, -1, -1

/**
 * Register (RSL) mdc_win_dat
 *
 * MDC Windowed Access Read Data Register
 */
union ody_mdc_win_dat {
	uint64_t u;
	struct ody_mdc_win_dat_s {
		uint64_t data                        : 32;
		uint64_t read_valid                  : 1;
		uint64_t pending                     : 1;
		uint64_t timeout                     : 1;
		uint64_t reserved_35_63              : 29;
	} s;
	/* struct ody_mdc_win_dat_s cn; */
};
typedef union ody_mdc_win_dat ody_mdc_win_dat_t;

#define ODY_MDC_WIN_DAT ODY_MDC_WIN_DAT_FUNC()
static inline uint64_t ODY_MDC_WIN_DAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_WIN_DAT_FUNC(void)
{
	return 0x87e010000018ll;
}

#define typedef_ODY_MDC_WIN_DAT ody_mdc_win_dat_t
#define bustype_ODY_MDC_WIN_DAT CSR_TYPE_RSL
#define basename_ODY_MDC_WIN_DAT "MDC_WIN_DAT"
#define device_bar_ODY_MDC_WIN_DAT 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_WIN_DAT 0
#define arguments_ODY_MDC_WIN_DAT -1, -1, -1, -1

/**
 * Register (RSL) mdc_win_tdr
 *
 * MDC Windowed Access TDR Register
 * This allows MDN_BIST_CONFIG[BROADCAST_DISABLE] and
 * MDN_BIST_CONFIG[MARCH_BROADCAST_DISABLE] in 32 nodes to be updated using a single
 * write.
 * Writing to this register initiates a MDC serial bus write request to
 * MDN_ACTIVE_NODES of the nodes.
 * Writes to MDC_WIN_CMD are ignored while MDC_WIN_DAT[PENDING] is asserted.
 */
union ody_mdc_win_tdr {
	uint64_t u;
	struct ody_mdc_win_tdr_s {
		uint64_t node_map                    : 32;
		uint64_t node_id_u                   : 5;
		uint64_t hub_id                      : 7;
		uint64_t chain_id                    : 3;
		uint64_t march_broadcast_disable     : 1;
		uint64_t broadcast_disable           : 1;
		uint64_t reserved_49_63              : 15;
	} s;
	/* struct ody_mdc_win_tdr_s cn; */
};
typedef union ody_mdc_win_tdr ody_mdc_win_tdr_t;

#define ODY_MDC_WIN_TDR ODY_MDC_WIN_TDR_FUNC()
static inline uint64_t ODY_MDC_WIN_TDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MDC_WIN_TDR_FUNC(void)
{
	return 0x87e010000020ll;
}

#define typedef_ODY_MDC_WIN_TDR ody_mdc_win_tdr_t
#define bustype_ODY_MDC_WIN_TDR CSR_TYPE_RSL
#define basename_ODY_MDC_WIN_TDR "MDC_WIN_TDR"
#define device_bar_ODY_MDC_WIN_TDR 0x0 /* PF_BAR0 */
#define busnum_ODY_MDC_WIN_TDR 0
#define arguments_ODY_MDC_WIN_TDR -1, -1, -1, -1

#endif /* __ODY_CSRS_MDC_H__ */
