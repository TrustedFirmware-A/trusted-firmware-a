#ifndef __ODY_CSRS_MRML_H__
#define __ODY_CSRS_MRML_H__
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
 * MRML.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mrml_bar_e
 *
 * MRML Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_MRML_BAR_E_MRML_PF_BAR0 (0x87e0fc000000ll)
#define ODY_MRML_BAR_E_MRML_PF_BAR0_SIZE 0x40000ull
#define ODY_MRML_BAR_E_MRML_PF_BAR4 (0x87e0fcf00000ll)
#define ODY_MRML_BAR_E_MRML_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration mrml_int_vec_e
 *
 * MRML MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_MRML_INT_VEC_E_INTS (0)

/**
 * Register (RSL) mrml_active_pc
 *
 * MRML Conditional Clock Counter Register
 * This register counts conditional clocks for power management.
 * This register is reset on chip reset.
 */
union ody_mrml_active_pc {
	uint64_t u;
	struct ody_mrml_active_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_mrml_active_pc_s cn; */
};
typedef union ody_mrml_active_pc ody_mrml_active_pc_t;

#define ODY_MRML_ACTIVE_PC ODY_MRML_ACTIVE_PC_FUNC()
static inline uint64_t ODY_MRML_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_ACTIVE_PC_FUNC(void)
{
	return 0x87e0fc000010ll;
}

#define typedef_ODY_MRML_ACTIVE_PC ody_mrml_active_pc_t
#define bustype_ODY_MRML_ACTIVE_PC CSR_TYPE_RSL
#define basename_ODY_MRML_ACTIVE_PC "MRML_ACTIVE_PC"
#define device_bar_ODY_MRML_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_ACTIVE_PC 0
#define arguments_ODY_MRML_ACTIVE_PC -1, -1, -1, -1

/**
 * Register (RSL) mrml_cmd_to
 *
 * MRML Command Timeout Register
 */
union ody_mrml_cmd_to {
	uint64_t u;
	struct ody_mrml_cmd_to_s {
		uint64_t tovalue                     : 32;
		uint64_t reserved_32_62              : 31;
		uint64_t ack_dis                     : 1;
	} s;
	/* struct ody_mrml_cmd_to_s cn; */
};
typedef union ody_mrml_cmd_to ody_mrml_cmd_to_t;

#define ODY_MRML_CMD_TO ODY_MRML_CMD_TO_FUNC()
static inline uint64_t ODY_MRML_CMD_TO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_CMD_TO_FUNC(void)
{
	return 0x87e0fc000008ll;
}

#define typedef_ODY_MRML_CMD_TO ody_mrml_cmd_to_t
#define bustype_ODY_MRML_CMD_TO CSR_TYPE_RSL
#define basename_ODY_MRML_CMD_TO "MRML_CMD_TO"
#define device_bar_ODY_MRML_CMD_TO 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_CMD_TO 0
#define arguments_ODY_MRML_CMD_TO -1, -1, -1, -1

/**
 * Register (RSL) mrml_config
 *
 * MRML Configuration Register
 */
union ody_mrml_config {
	uint64_t u;
	struct ody_mrml_config_s {
		uint64_t force_clk_en                : 1;
		uint64_t force_gibm_clk              : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_mrml_config_s cn; */
};
typedef union ody_mrml_config ody_mrml_config_t;

#define ODY_MRML_CONFIG ODY_MRML_CONFIG_FUNC()
static inline uint64_t ODY_MRML_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_CONFIG_FUNC(void)
{
	return 0x87e0fc002000ll;
}

#define typedef_ODY_MRML_CONFIG ody_mrml_config_t
#define bustype_ODY_MRML_CONFIG CSR_TYPE_RSL
#define basename_ODY_MRML_CONFIG "MRML_CONFIG"
#define device_bar_ODY_MRML_CONFIG 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_CONFIG 0
#define arguments_ODY_MRML_CONFIG -1, -1, -1, -1

/**
 * Register (RSL) mrml_int_ena_w1c
 *
 * MRML Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_mrml_int_ena_w1c {
	uint64_t u;
	struct ody_mrml_int_ena_w1c_s {
		uint64_t ocx_toe                     : 1;
		uint64_t local_toe                   : 1;
		uint64_t gibm                        : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_mrml_int_ena_w1c_s cn; */
};
typedef union ody_mrml_int_ena_w1c ody_mrml_int_ena_w1c_t;

#define ODY_MRML_INT_ENA_W1C ODY_MRML_INT_ENA_W1C_FUNC()
static inline uint64_t ODY_MRML_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_INT_ENA_W1C_FUNC(void)
{
	return 0x87e0fc000880ll;
}

#define typedef_ODY_MRML_INT_ENA_W1C ody_mrml_int_ena_w1c_t
#define bustype_ODY_MRML_INT_ENA_W1C CSR_TYPE_RSL
#define basename_ODY_MRML_INT_ENA_W1C "MRML_INT_ENA_W1C"
#define device_bar_ODY_MRML_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_INT_ENA_W1C 0
#define arguments_ODY_MRML_INT_ENA_W1C -1, -1, -1, -1

/**
 * Register (RSL) mrml_int_ena_w1s
 *
 * MRML Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_mrml_int_ena_w1s {
	uint64_t u;
	struct ody_mrml_int_ena_w1s_s {
		uint64_t ocx_toe                     : 1;
		uint64_t local_toe                   : 1;
		uint64_t gibm                        : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_mrml_int_ena_w1s_s cn; */
};
typedef union ody_mrml_int_ena_w1s ody_mrml_int_ena_w1s_t;

#define ODY_MRML_INT_ENA_W1S ODY_MRML_INT_ENA_W1S_FUNC()
static inline uint64_t ODY_MRML_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_INT_ENA_W1S_FUNC(void)
{
	return 0x87e0fc001000ll;
}

#define typedef_ODY_MRML_INT_ENA_W1S ody_mrml_int_ena_w1s_t
#define bustype_ODY_MRML_INT_ENA_W1S CSR_TYPE_RSL
#define basename_ODY_MRML_INT_ENA_W1S "MRML_INT_ENA_W1S"
#define device_bar_ODY_MRML_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_INT_ENA_W1S 0
#define arguments_ODY_MRML_INT_ENA_W1S -1, -1, -1, -1

/**
 * Register (RSL) mrml_int_local_to
 *
 * MRML Local Node Timeout Register
 * Configures local node timeouts.
 */
union ody_mrml_int_local_to {
	uint64_t u;
	struct ody_mrml_int_local_to_s {
		uint64_t tovalue                     : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_mrml_int_local_to_s cn; */
};
typedef union ody_mrml_int_local_to ody_mrml_int_local_to_t;

#define ODY_MRML_INT_LOCAL_TO ODY_MRML_INT_LOCAL_TO_FUNC()
static inline uint64_t ODY_MRML_INT_LOCAL_TO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_INT_LOCAL_TO_FUNC(void)
{
	return 0x87e0fc000800ll;
}

#define typedef_ODY_MRML_INT_LOCAL_TO ody_mrml_int_local_to_t
#define bustype_ODY_MRML_INT_LOCAL_TO CSR_TYPE_RSL
#define basename_ODY_MRML_INT_LOCAL_TO "MRML_INT_LOCAL_TO"
#define device_bar_ODY_MRML_INT_LOCAL_TO 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_INT_LOCAL_TO 0
#define arguments_ODY_MRML_INT_LOCAL_TO -1, -1, -1, -1

/**
 * Register (RSL) mrml_int_sum
 *
 * MRML Interrupt Summary Register
 * This register contains the different interrupt summary bits of the MRML.
 */
union ody_mrml_int_sum {
	uint64_t u;
	struct ody_mrml_int_sum_s {
		uint64_t ocx_toe                     : 1;
		uint64_t local_toe                   : 1;
		uint64_t gibm                        : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_mrml_int_sum_s cn; */
};
typedef union ody_mrml_int_sum ody_mrml_int_sum_t;

#define ODY_MRML_INT_SUM ODY_MRML_INT_SUM_FUNC()
static inline uint64_t ODY_MRML_INT_SUM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_INT_SUM_FUNC(void)
{
	return 0x87e0fc000810ll;
}

#define typedef_ODY_MRML_INT_SUM ody_mrml_int_sum_t
#define bustype_ODY_MRML_INT_SUM CSR_TYPE_RSL
#define basename_ODY_MRML_INT_SUM "MRML_INT_SUM"
#define device_bar_ODY_MRML_INT_SUM 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_INT_SUM 0
#define arguments_ODY_MRML_INT_SUM -1, -1, -1, -1

/**
 * Register (RSL) mrml_int_sum_w1s
 *
 * MRML Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_mrml_int_sum_w1s {
	uint64_t u;
	struct ody_mrml_int_sum_w1s_s {
		uint64_t ocx_toe                     : 1;
		uint64_t local_toe                   : 1;
		uint64_t gibm                        : 1;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_mrml_int_sum_w1s_s cn; */
};
typedef union ody_mrml_int_sum_w1s ody_mrml_int_sum_w1s_t;

#define ODY_MRML_INT_SUM_W1S ODY_MRML_INT_SUM_W1S_FUNC()
static inline uint64_t ODY_MRML_INT_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_INT_SUM_W1S_FUNC(void)
{
	return 0x87e0fc000818ll;
}

#define typedef_ODY_MRML_INT_SUM_W1S ody_mrml_int_sum_w1s_t
#define bustype_ODY_MRML_INT_SUM_W1S CSR_TYPE_RSL
#define basename_ODY_MRML_INT_SUM_W1S "MRML_INT_SUM_W1S"
#define device_bar_ODY_MRML_INT_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_INT_SUM_W1S 0
#define arguments_ODY_MRML_INT_SUM_W1S -1, -1, -1, -1

/**
 * Register (RSL) mrml_msix_pba#
 *
 * MRML MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the MRML_INT_VEC_E enumeration.
 */
union ody_mrml_msix_pbax {
	uint64_t u;
	struct ody_mrml_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_mrml_msix_pbax_s cn; */
};
typedef union ody_mrml_msix_pbax ody_mrml_msix_pbax_t;

static inline uint64_t ODY_MRML_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_MSIX_PBAX(uint64_t a)
{
	if (a == 0)
		return 0x87e0fcff0000ll;
	__ody_csr_fatal("MRML_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MRML_MSIX_PBAX(a) ody_mrml_msix_pbax_t
#define bustype_ODY_MRML_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_ODY_MRML_MSIX_PBAX(a) "MRML_MSIX_PBAX"
#define device_bar_ODY_MRML_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MRML_MSIX_PBAX(a) (a)
#define arguments_ODY_MRML_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (RSL) mrml_msix_vec#_addr
 *
 * MRML MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the MRML_INT_VEC_E enumeration.
 */
union ody_mrml_msix_vecx_addr {
	uint64_t u;
	struct ody_mrml_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_mrml_msix_vecx_addr_s cn; */
};
typedef union ody_mrml_msix_vecx_addr ody_mrml_msix_vecx_addr_t;

static inline uint64_t ODY_MRML_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_MSIX_VECX_ADDR(uint64_t a)
{
	if (a == 0)
		return 0x87e0fcf00000ll;
	__ody_csr_fatal("MRML_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MRML_MSIX_VECX_ADDR(a) ody_mrml_msix_vecx_addr_t
#define bustype_ODY_MRML_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_MRML_MSIX_VECX_ADDR(a) "MRML_MSIX_VECX_ADDR"
#define device_bar_ODY_MRML_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MRML_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_MRML_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) mrml_msix_vec#_ctl
 *
 * MRML MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the MRML_INT_VEC_E enumeration.
 */
union ody_mrml_msix_vecx_ctl {
	uint64_t u;
	struct ody_mrml_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_mrml_msix_vecx_ctl_s cn; */
};
typedef union ody_mrml_msix_vecx_ctl ody_mrml_msix_vecx_ctl_t;

static inline uint64_t ODY_MRML_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_MSIX_VECX_CTL(uint64_t a)
{
	if (a == 0)
		return 0x87e0fcf00008ll;
	__ody_csr_fatal("MRML_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MRML_MSIX_VECX_CTL(a) ody_mrml_msix_vecx_ctl_t
#define bustype_ODY_MRML_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_ODY_MRML_MSIX_VECX_CTL(a) "MRML_MSIX_VECX_CTL"
#define device_bar_ODY_MRML_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_MRML_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_MRML_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) mrml_ncb#_permit
 *
 * MRML NCB Bus Permit Registers
 * This register sets the permissions for access to NCBDIDs address bits \<43:36\>.
 * Also see and program identically IOBN_NCB()_PERMIT.
 */
union ody_mrml_ncbx_permit {
	uint64_t u;
	struct ody_mrml_ncbx_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_6                : 2;
		uint64_t kill                        : 1;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_mrml_ncbx_permit_s cn; */
};
typedef union ody_mrml_ncbx_permit ody_mrml_ncbx_permit_t;

static inline uint64_t ODY_MRML_NCBX_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_NCBX_PERMIT(uint64_t a)
{
	if (a <= 255)
		return 0x87e0fc020000ll + 8ll * ((a) & 0xff);
	__ody_csr_fatal("MRML_NCBX_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MRML_NCBX_PERMIT(a) ody_mrml_ncbx_permit_t
#define bustype_ODY_MRML_NCBX_PERMIT(a) CSR_TYPE_RSL
#define basename_ODY_MRML_NCBX_PERMIT(a) "MRML_NCBX_PERMIT"
#define device_bar_ODY_MRML_NCBX_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_NCBX_PERMIT(a) (a)
#define arguments_ODY_MRML_NCBX_PERMIT(a) (a), -1, -1, -1

/**
 * Register (RSL) mrml_rsl#_permit
 *
 * MRML RSL Bus Permit Registers
 * This register sets the permissions for access to the device's physical address bits \<33:24\>.
 */
union ody_mrml_rslx_permit {
	uint64_t u;
	struct ody_mrml_rslx_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_6                : 2;
		uint64_t kill                        : 1;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_mrml_rslx_permit_s cn; */
};
typedef union ody_mrml_rslx_permit ody_mrml_rslx_permit_t;

static inline uint64_t ODY_MRML_RSLX_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_RSLX_PERMIT(uint64_t a)
{
	if (a <= 1023)
		return 0x87e0fc010000ll + 8ll * ((a) & 0x3ff);
	__ody_csr_fatal("MRML_RSLX_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_MRML_RSLX_PERMIT(a) ody_mrml_rslx_permit_t
#define bustype_ODY_MRML_RSLX_PERMIT(a) CSR_TYPE_RSL
#define basename_ODY_MRML_RSLX_PERMIT(a) "MRML_RSLX_PERMIT"
#define device_bar_ODY_MRML_RSLX_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_RSLX_PERMIT(a) (a)
#define arguments_ODY_MRML_RSLX_PERMIT(a) (a), -1, -1, -1

/**
 * Register (RSL) mrml_scfg
 *
 * MRML RSL Secure Configuration Register
 */
union ody_mrml_scfg {
	uint64_t u;
	struct ody_mrml_scfg_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_mrml_scfg_s cn; */
};
typedef union ody_mrml_scfg ody_mrml_scfg_t;

#define ODY_MRML_SCFG ODY_MRML_SCFG_FUNC()
static inline uint64_t ODY_MRML_SCFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_MRML_SCFG_FUNC(void)
{
	return 0x87e0fc000000ll;
}

#define typedef_ODY_MRML_SCFG ody_mrml_scfg_t
#define bustype_ODY_MRML_SCFG CSR_TYPE_RSL
#define basename_ODY_MRML_SCFG "MRML_SCFG"
#define device_bar_ODY_MRML_SCFG 0x0 /* PF_BAR0 */
#define busnum_ODY_MRML_SCFG 0
#define arguments_ODY_MRML_SCFG -1, -1, -1, -1

#endif /* __ODY_CSRS_MRML_H__ */
