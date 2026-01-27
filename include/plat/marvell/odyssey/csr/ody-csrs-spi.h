#ifndef __ODY_CSRS_SPI_H__
#define __ODY_CSRS_SPI_H__
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
 * SPI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration spi_bar_e
 *
 * SPI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_SPI_BAR_E_SPIX_PF_BAR0(a) (0x804000000000ll + 0x1000000000ll * (a))
#define ODY_SPI_BAR_E_SPIX_PF_BAR0_SIZE 0x40000000ull
#define ODY_SPI_BAR_E_SPIX_PF_BAR4(a) (0x804100000000ll + 0x1000000000ll * (a))
#define ODY_SPI_BAR_E_SPIX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration spi_int_vec_e
 *
 * SPI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_SPI_INT_VEC_E_SPI_INTR (0)

/**
 * Register (NCB) spi#_clk_ctrl
 *
 * SPI Clock Control Register
 */
union ody_spix_clk_ctrl {
	uint64_t u;
	struct ody_spix_clk_ctrl_s {
		uint64_t spi_clk_en                  : 1;
		uint64_t spi_io_clk_div              : 4;
		uint64_t spi_sclk_force              : 1;
		uint64_t spi_imsc_shadow             : 1;
		uint64_t xspi_supports_xfer          : 1;
		uint64_t reserved_8_63               : 56;
	} s;
	/* struct ody_spix_clk_ctrl_s cn; */
};
typedef union ody_spix_clk_ctrl ody_spix_clk_ctrl_t;

static inline uint64_t ODY_SPIX_CLK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CLK_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000004020ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CLK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CLK_CTRL(a) ody_spix_clk_ctrl_t
#define bustype_ODY_SPIX_CLK_CTRL(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_CLK_CTRL(a) "SPIX_CLK_CTRL"
#define device_bar_ODY_SPIX_CLK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CLK_CTRL(a) (a)
#define arguments_ODY_SPIX_CLK_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_cfg
 *
 * SPI Cmn Seq Regs Direct Access Cfg Register
 * to hold configuration required only by DIRECT work mode.
 */
union ody_spix_cmn_seq_regs_direct_access_cfg {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_direct_access_cfg_s {
		uint32_t dac_bank_num                : 3;
		uint32_t reserved_3_7                : 5;
		uint32_t mode_bit_xip_en             : 1;
		uint32_t mode_bit_xip_dis            : 1;
		uint32_t reserved_10_11              : 2;
		uint32_t rmp_addr_en                 : 1;
		uint32_t reserved_13_15              : 3;
		uint32_t dac_addr_mask               : 13;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_spix_cmn_seq_regs_direct_access_cfg_s cn; */
};
typedef union ody_spix_cmn_seq_regs_direct_access_cfg ody_spix_cmn_seq_regs_direct_access_cfg_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(uint64_t a)
{
	if (a <= 1)
		return 0x804000000398ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) ody_spix_cmn_seq_regs_direct_access_cfg_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_rmp
 *
 * SPI Cmn Seq Regs Direct Access Rmp Register
 * This register allows to the user to define the address offset for DIRECT work mode
 * for lower part of
 * input address on slave data interface.
 */
union ody_spix_cmn_seq_regs_direct_access_rmp {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_direct_access_rmp_s {
		uint32_t rmp_addr_val                : 32;
	} s;
	/* struct ody_spix_cmn_seq_regs_direct_access_rmp_s cn; */
};
typedef union ody_spix_cmn_seq_regs_direct_access_rmp ody_spix_cmn_seq_regs_direct_access_rmp_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(uint64_t a)
{
	if (a <= 1)
		return 0x80400000039cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) ody_spix_cmn_seq_regs_direct_access_rmp_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_direct_access_rmp_1
 *
 * SPI Cmn Seq Regs Direct Access Rmp 1 Register
 * This register allows to the user to define the address offset for DIRECT work mode
 * for upper part of
 * input address on Slave Data Interface.
 */
union ody_spix_cmn_seq_regs_direct_access_rmp_1 {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_direct_access_rmp_1_s {
		uint32_t rmp_addr_val_1              : 32;
	} s;
	/* struct ody_spix_cmn_seq_regs_direct_access_rmp_1_s cn; */
};
typedef union ody_spix_cmn_seq_regs_direct_access_rmp_1 ody_spix_cmn_seq_regs_direct_access_rmp_1_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(uint64_t a)
{
	if (a <= 1)
		return 0x8040000003a0ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) ody_spix_cmn_seq_regs_direct_access_rmp_1_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) "SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_DIRECT_ACCESS_RMP_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_global_seq_cfg
 *
 * SPI Cmn Seq Regs Global Seq Cfg Register
 * to configure common values for sequences in CDMA, PIO and DIRECT work mode.
 */
union ody_spix_cmn_seq_regs_global_seq_cfg {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_global_seq_cfg_s {
		uint32_t seq_page_size_rd            : 4;
		uint32_t seq_page_size_pgm           : 4;
		uint32_t seq_crc_en                  : 1;
		uint32_t seq_crc_variant             : 1;
		uint32_t seq_crc_oe                  : 1;
		uint32_t reserved_11                 : 1;
		uint32_t seq_crc_chunk_size          : 3;
		uint32_t reserved_15                 : 1;
		uint32_t seq_crc_ual_chunk_en        : 1;
		uint32_t seq_crc_ual_chunk_chk       : 1;
		uint32_t seq_tcms_en                 : 1;
		uint32_t reserved_19                 : 1;
		uint32_t seq_data_swap               : 1;
		uint32_t seq_data_per_addr           : 1;
		uint32_t reserved_22                 : 1;
		uint32_t seq_type                    : 2;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_spix_cmn_seq_regs_global_seq_cfg_s cn; */
};
typedef union ody_spix_cmn_seq_regs_global_seq_cfg ody_spix_cmn_seq_regs_global_seq_cfg_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(uint64_t a)
{
	if (a <= 1)
		return 0x804000000390ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) ody_spix_cmn_seq_regs_global_seq_cfg_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) "SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_global_seq_cfg_1
 *
 * SPI Cmn Seq Regs Global Seq Cfg 1 Register
 * to configure common values for sequences in CDMA, PIO and DIRECT work mode.
 */
union ody_spix_cmn_seq_regs_global_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_global_seq_cfg_1_s {
		uint32_t seq_page_size_ext           : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t seq_page_ca_size            : 1;
		uint32_t reserved_17_23              : 7;
		uint32_t seq_page_per_block          : 3;
		uint32_t reserved_27                 : 1;
		uint32_t seq_plane_cnt               : 2;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_spix_cmn_seq_regs_global_seq_cfg_1_s cn; */
};
typedef union ody_spix_cmn_seq_regs_global_seq_cfg_1 ody_spix_cmn_seq_regs_global_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000394ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) ody_spix_cmn_seq_regs_global_seq_cfg_1_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) "SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_GLOBAL_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_cmn_seq_regs_xip_mode_cfg
 *
 * SPI Cmn Seq Regs XIP Mode Cfg Register
 * designated to configure controller in XIP work mode in CDMA, PIO and DIRECT work mode.
 */
union ody_spix_cmn_seq_regs_xip_mode_cfg {
	uint32_t u;
	struct ody_spix_cmn_seq_regs_xip_mode_cfg_s {
		uint32_t xip_en                      : 8;
		uint32_t xip_en_mb_val               : 8;
		uint32_t xip_dis_mb_val              : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_cmn_seq_regs_xip_mode_cfg_s cn; */
};
typedef union ody_spix_cmn_seq_regs_xip_mode_cfg ody_spix_cmn_seq_regs_xip_mode_cfg_t;

static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(uint64_t a)
{
	if (a <= 1)
		return 0x804000000388ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CMN_SEQ_REGS_XIP_MODE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) ody_spix_cmn_seq_regs_xip_mode_cfg_t
#define bustype_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) "SPIX_CMN_SEQ_REGS_XIP_MODE_CFG"
#define device_bar_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) (a)
#define arguments_ODY_SPIX_CMN_SEQ_REGS_XIP_MODE_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_const
 *
 * SPI Constants Register
 */
union ody_spix_const {
	uint64_t u;
	struct ody_spix_const_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_spix_const_s cn; */
};
typedef union ody_spix_const ody_spix_const_t;

static inline uint64_t ODY_SPIX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CONST(uint64_t a)
{
	if (a <= 1)
		return 0x804000001058ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CONST(a) ody_spix_const_t
#define bustype_ODY_SPIX_CONST(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_CONST(a) "SPIX_CONST"
#define device_bar_ODY_SPIX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CONST(a) (a)
#define arguments_ODY_SPIX_CONST(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_ctrl_config
 *
 * SPI Control Cfg Common Control Config Register
 * Device control register.
 */
union ody_spix_ctrl_cfg_common_ctrl_config {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_ctrl_config_s {
		uint32_t reserved_0_2                : 3;
		uint32_t cont_on_err                 : 1;
		uint32_t reserved_4                  : 1;
		uint32_t work_mode                   : 2;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_spix_ctrl_cfg_common_ctrl_config_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_ctrl_config ody_spix_ctrl_cfg_common_ctrl_config_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(uint64_t a)
{
	if (a <= 1)
		return 0x804000000230ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_CTRL_CONFIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) ody_spix_ctrl_cfg_common_ctrl_config_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) "SPIX_CTRL_CFG_COMMON_CTRL_CONFIG"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_CTRL_CONFIG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_discovery_control
 *
 * SPI Control Cfg Common Discovery Control Register
 * Device discovery control register.
 */
union ody_spix_ctrl_cfg_common_discovery_control {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_discovery_control_s {
		uint32_t discovery_req               : 1;
		uint32_t discovery_req_type          : 1;
		uint32_t discovery_comp              : 1;
		uint32_t discovery_fail              : 2;
		uint32_t discovery_inhibit           : 1;
		uint32_t discovery_extop_val         : 1;
		uint32_t discovery_extop_en          : 1;
		uint32_t discovery_cmd_type          : 2;
		uint32_t discovery_dummy_cnt         : 1;
		uint32_t discovery_abnum             : 1;
		uint32_t discovery_num_lines         : 4;
		uint32_t discovery_bank              : 3;
		uint32_t reserved_19_31              : 13;
	} s;
	/* struct ody_spix_ctrl_cfg_common_discovery_control_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_discovery_control ody_spix_ctrl_cfg_common_discovery_control_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(uint64_t a)
{
	if (a <= 1)
		return 0x804000000260ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) ody_spix_ctrl_cfg_common_discovery_control_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) "SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_DISCOVERY_CONTROL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_dma_settings
 *
 * SPI Control Cfg Common DMA Settings Register
 * DMA settings register. It is common register for both master and slave interface.
 */
union ody_spix_ctrl_cfg_common_dma_settings {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_dma_settings_s {
		uint32_t burst_sel                   : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t ote                         : 1;
		uint32_t sdma_err_rsp                : 1;
		uint32_t word_size                   : 2;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_spix_ctrl_cfg_common_dma_settings_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_dma_settings ody_spix_ctrl_cfg_common_dma_settings_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(uint64_t a)
{
	if (a <= 1)
		return 0x80400000023cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_DMA_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) ody_spix_ctrl_cfg_common_dma_settings_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) "SPIX_CTRL_CFG_COMMON_DMA_SETTINGS"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_DMA_SETTINGS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_long_polling
 *
 * SPI Control Cfg Common Long Polling Register
 * Wait count value for long polling.
 */
union ody_spix_ctrl_cfg_common_long_polling {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_long_polling_s {
		uint32_t long_polling                : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_ctrl_cfg_common_long_polling_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_long_polling ody_spix_ctrl_cfg_common_long_polling_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(uint64_t a)
{
	if (a <= 1)
		return 0x804000000208ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_LONG_POLLING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) ody_spix_ctrl_cfg_common_long_polling_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) "SPIX_CTRL_CFG_COMMON_LONG_POLLING"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_LONG_POLLING(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_addr0
 *
 * SPI Control Cfg Common SDMA Addr0 Register
 * This register stores the buffer address in the host memory that will be used as a
 * sink/source for the
 * SDMA transfer. The SDMA address is based on the Memory Pointer field that was
 * programed by the host as
 * part of the CDMA/PIO command. A single CDMA/PIO command can trigger multiple transfers on the slave
 * interface, so the SDMA address value will be automatically incremented and updated before each SDMA
 * transfer.
 */
union ody_spix_ctrl_cfg_common_sdma_addr0 {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_sdma_addr0_s {
		uint32_t sdma_addr_l                 : 32;
	} s;
	/* struct ody_spix_ctrl_cfg_common_sdma_addr0_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_sdma_addr0 ody_spix_ctrl_cfg_common_sdma_addr0_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(uint64_t a)
{
	if (a <= 1)
		return 0x80400000024cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_ADDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) ody_spix_ctrl_cfg_common_sdma_addr0_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) "SPIX_CTRL_CFG_COMMON_SDMA_ADDR0"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_addr1
 *
 * SPI Control Cfg Common SDMA Addr1 Register
 * This register stores the buffer address in the host memory that will be used as a
 * sink/source for the
 * SDMA transfer. The SDMA address is based on the Memory Pointer field that was
 * programed by the host as
 * part of the CDMA/PIO command. A single CDMA/PIO command can trigger multiple transfers on the slave
 * interface, so the SDMA address value will be automatically incremented and updated before each SDMA
 * transfer.
 */
union ody_spix_ctrl_cfg_common_sdma_addr1 {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_sdma_addr1_s {
		uint32_t sdma_addr_h                 : 32;
	} s;
	/* struct ody_spix_ctrl_cfg_common_sdma_addr1_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_sdma_addr1 ody_spix_ctrl_cfg_common_sdma_addr1_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000250ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_ADDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) ody_spix_ctrl_cfg_common_sdma_addr1_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) "SPIX_CTRL_CFG_COMMON_SDMA_ADDR1"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_SDMA_ADDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_size
 *
 * SPI Control Cfg Common SDMA Size Register
 * Transferred data block size for the slave DMA module.
 */
union ody_spix_ctrl_cfg_common_sdma_size {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_sdma_size_s {
		uint32_t sdma_size                   : 32;
	} s;
	/* struct ody_spix_ctrl_cfg_common_sdma_size_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_sdma_size ody_spix_ctrl_cfg_common_sdma_size_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(uint64_t a)
{
	if (a <= 1)
		return 0x804000000240ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) ody_spix_ctrl_cfg_common_sdma_size_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) "SPIX_CTRL_CFG_COMMON_SDMA_SIZE"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_SDMA_SIZE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_sdma_trd_info
 *
 * SPI Control Cfg Common SDMA Thread Info Register
 * Information for current slave DMA transaction related with execution thread.
 */
union ody_spix_ctrl_cfg_common_sdma_trd_info {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_sdma_trd_info_s {
		uint32_t sdma_trd                    : 3;
		uint32_t reserved_3_7                : 5;
		uint32_t sdma_dir                    : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_spix_ctrl_cfg_common_sdma_trd_info_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_sdma_trd_info ody_spix_ctrl_cfg_common_sdma_trd_info_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(uint64_t a)
{
	if (a <= 1)
		return 0x804000000244ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) ody_spix_ctrl_cfg_common_sdma_trd_info_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) "SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_SDMA_TRD_INFO(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cfg_common_short_polling
 *
 * SPI Control Cfg Common Short Polling Register
 * Status monitor cycle count value.
 */
union ody_spix_ctrl_cfg_common_short_polling {
	uint32_t u;
	struct ody_spix_ctrl_cfg_common_short_polling_s {
		uint32_t short_polling               : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_ctrl_cfg_common_short_polling_s cn; */
};
typedef union ody_spix_ctrl_cfg_common_short_polling ody_spix_ctrl_cfg_common_short_polling_t;

static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(uint64_t a)
{
	if (a <= 1)
		return 0x80400000020cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CFG_COMMON_SHORT_POLLING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) ody_spix_ctrl_cfg_common_short_polling_t
#define bustype_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) "SPIX_CTRL_CFG_COMMON_SHORT_POLLING"
#define device_bar_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) (a)
#define arguments_ODY_SPIX_CTRL_CFG_COMMON_SHORT_POLLING(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_boot_status
 *
 * SPI Control Command Stat Boot Status Register
 * This register provides status of the latest boot operation.
 */
union ody_spix_ctrl_cmd_stat_boot_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_boot_status_s {
		uint32_t boot_dqs_err                : 1;
		uint32_t boot_crc_err                : 1;
		uint32_t boot_bus_err                : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_boot_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_boot_status ody_spix_ctrl_cmd_stat_boot_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000158ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_BOOT_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) ody_spix_ctrl_cmd_stat_boot_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) "SPIX_CTRL_CMD_STAT_BOOT_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_BOOT_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg0
 *
 * SPI Control Command Stat Command Register 0
 * Command register 0. Writing data to this register will initiate a new transaction of the xSPI Flash
 * Controller in CDMA/PIO and STIG work mode. Fields encoding of those registers
 * depends on selected work
 * mode.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg0 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg0_s {
		uint32_t cmd0                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg0_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg0 ody_spix_ctrl_cmd_stat_cmd_reg0_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) ody_spix_ctrl_cmd_stat_cmd_reg0_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) "SPIX_CTRL_CMD_STAT_CMD_REG0"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg1
 *
 * SPI Control Command Stat Command Register 1
 * Command register 1.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg1 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg1_s {
		uint32_t cmd1                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg1_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg1 ody_spix_ctrl_cmd_stat_cmd_reg1_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000004ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) ody_spix_ctrl_cmd_stat_cmd_reg1_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) "SPIX_CTRL_CMD_STAT_CMD_REG1"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg2
 *
 * SPI Control Command Stat Command Register 2
 * Command register 2.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg2 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg2_s {
		uint32_t cmd2                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg2_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg2 ody_spix_ctrl_cmd_stat_cmd_reg2_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(uint64_t a)
{
	if (a <= 1)
		return 0x804000000008ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) ody_spix_ctrl_cmd_stat_cmd_reg2_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) "SPIX_CTRL_CMD_STAT_CMD_REG2"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg3
 *
 * SPI Control Command Stat Command Register 3
 * Command register 3.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg3 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg3_s {
		uint32_t cmd3                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg3_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg3 ody_spix_ctrl_cmd_stat_cmd_reg3_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(uint64_t a)
{
	if (a <= 1)
		return 0x80400000000cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) ody_spix_ctrl_cmd_stat_cmd_reg3_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) "SPIX_CTRL_CMD_STAT_CMD_REG3"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg4
 *
 * SPI Control Command Stat Command Register 4
 * Command register 4.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg4 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg4_s {
		uint32_t cmd4                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg4_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg4 ody_spix_ctrl_cmd_stat_cmd_reg4_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(uint64_t a)
{
	if (a <= 1)
		return 0x804000000010ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) ody_spix_ctrl_cmd_stat_cmd_reg4_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) "SPIX_CTRL_CMD_STAT_CMD_REG4"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_reg5
 *
 * SPI Control Command Stat Command Register 5
 * Command register 5.
 */
union ody_spix_ctrl_cmd_stat_cmd_reg5 {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_reg5_s {
		uint32_t cmd5                        : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_reg5_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_reg5 ody_spix_ctrl_cmd_stat_cmd_reg5_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(uint64_t a)
{
	if (a <= 1)
		return 0x804000000014ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_REG5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) ody_spix_ctrl_cmd_stat_cmd_reg5_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) "SPIX_CTRL_CMD_STAT_CMD_REG5"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_REG5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_status
 *
 * SPI Control Command Stat Command Status Register
 * Command status register for selected thread in ACMD work mode and for STIG work mode
 * when xSPI flash
 * transaction is completed.
 */
union ody_spix_ctrl_cmd_stat_cmd_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_status_s {
		uint32_t cmd_status                  : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_status ody_spix_ctrl_cmd_stat_cmd_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000044ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) ody_spix_ctrl_cmd_stat_cmd_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) "SPIX_CTRL_CMD_STAT_CMD_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_cmd_status_ptr
 *
 * SPI Control Command Stat Command Status Ptr Register
 * Pointer register to select which thread status will be selected for ACMD work mode
 * (not applicable for
 * STIG and DIRECT work modes).
 */
union ody_spix_ctrl_cmd_stat_cmd_status_ptr {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_cmd_status_ptr_s {
		uint32_t thrd_status_sel             : 3;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_cmd_status_ptr_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_cmd_status_ptr ody_spix_ctrl_cmd_stat_cmd_status_ptr_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(uint64_t a)
{
	if (a <= 1)
		return 0x804000000040ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) ody_spix_ctrl_cmd_stat_cmd_status_ptr_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) "SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CMD_STATUS_PTR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_ctrl_status
 *
 * SPI Control Command Stat Control Status Register
 * Controller internal state.
 */
union ody_spix_ctrl_cmd_stat_ctrl_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_ctrl_status_s {
		uint32_t sdma_busy                   : 1;
		uint32_t mdma_busy                   : 1;
		uint32_t acmd_eng_busy               : 1;
		uint32_t gcmd_eng_busy               : 1;
		uint32_t gcmd_eng_mc_busy            : 1;
		uint32_t reserved_5                  : 1;
		uint32_t discovery_busy              : 1;
		uint32_t ctrl_busy                   : 1;
		uint32_t init_fail                   : 2;
		uint32_t reserved_10_15              : 6;
		uint32_t init_comp                   : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_ctrl_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_ctrl_status ody_spix_ctrl_cmd_stat_ctrl_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000100ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_CTRL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) ody_spix_ctrl_cmd_stat_ctrl_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) "SPIX_CTRL_CMD_STAT_CTRL_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_CTRL_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_dma_target_error_h
 *
 * SPI Control Command Stat DMA Target Error H Register
 * Master data interface error address [63:32]. This register store address of request on the system
 * master data interface that caused setting [CDMA_TERR] or [DDMA_TERR] in
 * SPI()_CTRL_CMD_STAT_INTR_STATUS.
 * Address can be overwritten if error response is detected for the following command sequences.
 */
union ody_spix_ctrl_cmd_stat_dma_target_error_h {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_dma_target_error_h_s {
		uint32_t target_err_h                : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_dma_target_error_h_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_dma_target_error_h ody_spix_ctrl_cmd_stat_dma_target_error_h_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(uint64_t a)
{
	if (a <= 1)
		return 0x804000000154ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) ody_spix_ctrl_cmd_stat_dma_target_error_h_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) "SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_H(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_dma_target_error_l
 *
 * SPI Control Command Stat DMA Target Error L Register
 * Master data interface error address [31:0]. This register store address of request on the system
 * master data interface that caused setting [CDMA_TERR] or [DDMA_TERR] in
 * SPI()_CTRL_CMD_STAT_INTR_STATUS.
 * Address can be overwritten if an error response is detected for the following command sequences.
 */
union ody_spix_ctrl_cmd_stat_dma_target_error_l {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_dma_target_error_l_s {
		uint32_t target_err_l                : 32;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_dma_target_error_l_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_dma_target_error_l ody_spix_ctrl_cmd_stat_dma_target_error_l_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(uint64_t a)
{
	if (a <= 1)
		return 0x804000000150ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) ody_spix_ctrl_cmd_stat_dma_target_error_l_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) "SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_DMA_TARGET_ERROR_L(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_intr_enable
 *
 * SPI Control Command Stat Interrupt Enable Register
 * Interrupt enable register. If selected bit of this register is set, rising edge of
 * the corresponding
 * bit in SPI(()_CTRL_CMD_STAT_INTR_STATUS will generate setting of external interrupt line.
 */
union ody_spix_ctrl_cmd_stat_intr_enable {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_intr_enable_s {
		uint32_t reserved_0_11               : 12;
		uint32_t gp_open_drain_0_en          : 1;
		uint32_t gp_open_drain_1_en          : 1;
		uint32_t gp_open_drain_2_en          : 1;
		uint32_t gp_open_drain_3_en          : 1;
		uint32_t ctrl_idle_en                : 1;
		uint32_t cdma_terr_en                : 1;
		uint32_t ddma_terr_en                : 1;
		uint32_t reserved_19                 : 1;
		uint32_t cmd_ignored_en              : 1;
		uint32_t sdma_trigg_en               : 1;
		uint32_t sdma_err_en                 : 1;
		uint32_t stig_done_en                : 1;
		uint32_t dir_crc_err_en              : 1;
		uint32_t dir_dqs_err_en              : 1;
		uint32_t dir_cmd_err_en              : 1;
		uint32_t dir_ecc_corr_err_en         : 1;
		uint32_t dir_dev_err_en              : 1;
		uint32_t reserved_29_30              : 2;
		uint32_t intr_en                     : 1;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_intr_enable_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_intr_enable ody_spix_ctrl_cmd_stat_intr_enable_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(uint64_t a)
{
	if (a <= 1)
		return 0x804000000114ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_INTR_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) ody_spix_ctrl_cmd_stat_intr_enable_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) "SPIX_CTRL_CMD_STAT_INTR_ENABLE"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_INTR_ENABLE(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_intr_status
 *
 * SPI Control Command Stat Interrupt Status Register
 * Controller status register.
 */
union ody_spix_ctrl_cmd_stat_intr_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_intr_status_s {
		uint32_t reserved_0_11               : 12;
		uint32_t gp_open_drain_0             : 1;
		uint32_t gp_open_drain_1             : 1;
		uint32_t gp_open_drain_2             : 1;
		uint32_t gp_open_drain_3             : 1;
		uint32_t ctrl_idle                   : 1;
		uint32_t cdma_terr                   : 1;
		uint32_t ddma_terr                   : 1;
		uint32_t reserved_19                 : 1;
		uint32_t cmd_ignored                 : 1;
		uint32_t sdma_trigg                  : 1;
		uint32_t sdma_err                    : 1;
		uint32_t stig_done                   : 1;
		uint32_t dir_crc_err                 : 1;
		uint32_t dir_dqs_err                 : 1;
		uint32_t dir_cmd_err                 : 1;
		uint32_t dir_ecc_corr_err            : 1;
		uint32_t dir_dev_err                 : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_intr_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_intr_status ody_spix_ctrl_cmd_stat_intr_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000110ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) ody_spix_ctrl_cmd_stat_intr_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_INTR_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_INTR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_comp_intr_status
 *
 * SPI Control Command Stat Thread Comp Interrupt Status Register
 * Each bit of this field correspond to the auto command engine thread. Each bit
 * informs about descriptor
 * status for selected thread. It is set only when INT bit of the descriptor is set.
 */
union ody_spix_ctrl_cmd_stat_trd_comp_intr_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_trd_comp_intr_status_s {
		uint32_t trd0_comp                   : 1;
		uint32_t trd1_comp                   : 1;
		uint32_t trd2_comp                   : 1;
		uint32_t trd3_comp                   : 1;
		uint32_t trd4_comp                   : 1;
		uint32_t trd5_comp                   : 1;
		uint32_t trd6_comp                   : 1;
		uint32_t trd7_comp                   : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_trd_comp_intr_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_trd_comp_intr_status ody_spix_ctrl_cmd_stat_trd_comp_intr_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000120ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) ody_spix_ctrl_cmd_stat_trd_comp_intr_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_TRD_COMP_INTR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_error_intr_en
 *
 * SPI Control Command Stat Thread Error Interrupt En Register
 * Interrupt enable register. If the selected bit of this register is set, the rising edge of
 * corresponding bit
 * in SPI()_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS will cause setting of the external interrupt line.
 */
union ody_spix_ctrl_cmd_stat_trd_error_intr_en {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_trd_error_intr_en_s {
		uint32_t trd_error_intr_en           : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_trd_error_intr_en_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_trd_error_intr_en ody_spix_ctrl_cmd_stat_trd_error_intr_en_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(uint64_t a)
{
	if (a <= 1)
		return 0x804000000134ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) ody_spix_ctrl_cmd_stat_trd_error_intr_en_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) "SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_EN(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_error_intr_status
 *
 * SPI Control Command Stat Thread Error Interrupt Status Register
 * Thread error indicates that the auto command engine thread detected an error condition. To get more
 * information on the error, software must read the status field of the descriptor or
 * appropriate status
 * register depending on the current work mode.
 */
union ody_spix_ctrl_cmd_stat_trd_error_intr_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_trd_error_intr_status_s {
		uint32_t trd0_error_stat             : 1;
		uint32_t trd1_error_stat             : 1;
		uint32_t trd2_error_stat             : 1;
		uint32_t trd3_error_stat             : 1;
		uint32_t trd4_error_stat             : 1;
		uint32_t trd5_error_stat             : 1;
		uint32_t trd6_error_stat             : 1;
		uint32_t trd7_error_stat             : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_trd_error_intr_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_trd_error_intr_status ody_spix_ctrl_cmd_stat_trd_error_intr_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000130ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) ody_spix_ctrl_cmd_stat_trd_error_intr_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_TRD_ERROR_INTR_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_cmd_stat_trd_status
 *
 * SPI Control Command Stat Thread Status Register
 * Auto command engine threads state.
 */
union ody_spix_ctrl_cmd_stat_trd_status {
	uint32_t u;
	struct ody_spix_ctrl_cmd_stat_trd_status_s {
		uint32_t trd_busy                    : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_spix_ctrl_cmd_stat_trd_status_s cn; */
};
typedef union ody_spix_ctrl_cmd_stat_trd_status ody_spix_ctrl_cmd_stat_trd_status_t;

static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(uint64_t a)
{
	if (a <= 1)
		return 0x804000000104ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CMD_STAT_TRD_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) ody_spix_ctrl_cmd_stat_trd_status_t
#define bustype_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) "SPIX_CTRL_CMD_STAT_TRD_STATUS"
#define device_bar_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) (a)
#define arguments_ODY_SPIX_CTRL_CMD_STAT_TRD_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_consts_ctrl_features_reg
 *
 * SPI Control Consts Control Features Register
 * Shows available hardware features of the controller.
 */
union ody_spix_ctrl_consts_ctrl_features_reg {
	uint32_t u;
	struct ody_spix_ctrl_consts_ctrl_features_reg_s {
		uint32_t n_threads                   : 4;
		uint32_t reserved_4_11               : 8;
		uint32_t asf_available               : 1;
		uint32_t reserved_13_15              : 3;
		uint32_t boot_available              : 1;
		uint32_t reserved_17                 : 1;
		uint32_t dma_intf                    : 2;
		uint32_t dma_addr_width              : 1;
		uint32_t dma_data_width              : 1;
		uint32_t sfr_intf                    : 2;
		uint32_t n_banks                     : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_spix_ctrl_consts_ctrl_features_reg_s cn; */
};
typedef union ody_spix_ctrl_consts_ctrl_features_reg ody_spix_ctrl_consts_ctrl_features_reg_t;

static inline uint64_t ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(uint64_t a)
{
	if (a <= 1)
		return 0x804000000f04ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CONSTS_CTRL_FEATURES_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) ody_spix_ctrl_consts_ctrl_features_reg_t
#define bustype_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) "SPIX_CTRL_CONSTS_CTRL_FEATURES_REG"
#define device_bar_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) (a)
#define arguments_ODY_SPIX_CTRL_CONSTS_CTRL_FEATURES_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_ctrl_consts_spi_ctrl_version
 *
 * SPI Control Consts xSPI Control Version Register
 * contains release identification number.
 */
union ody_spix_ctrl_consts_spi_ctrl_version {
	uint32_t u;
	struct ody_spix_ctrl_consts_spi_ctrl_version_s {
		uint32_t spi_ctrl_rev                : 8;
		uint32_t spi_ctrl_fix                : 8;
		uint32_t spi_ctrl_magic_number       : 16;
	} s;
	/* struct ody_spix_ctrl_consts_spi_ctrl_version_s cn; */
};
typedef union ody_spix_ctrl_consts_spi_ctrl_version ody_spix_ctrl_consts_spi_ctrl_version_t;

static inline uint64_t ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(uint64_t a)
{
	if (a <= 1)
		return 0x804000000f00ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_CTRL_CONSTS_SPI_CTRL_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) ody_spix_ctrl_consts_spi_ctrl_version_t
#define bustype_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) "SPIX_CTRL_CONSTS_SPI_CTRL_VERSION"
#define device_bar_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) (a)
#define arguments_ODY_SPIX_CTRL_CONSTS_SPI_CTRL_VERSION(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_0
 *
 * SPI Dev Seq Regs Ers Seq Cfg 0 Register
 * to configure ERASE_SECTOR sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union ody_spix_dev_seq_regs_ers_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_ers_seq_cfg_0_s {
		uint32_t erss_seq_p1_cmd_val         : 8;
		uint32_t erss_seq_p1_cmd_ios         : 2;
		uint32_t reserved_10                 : 1;
		uint32_t erss_seq_p1_cmd_edge        : 1;
		uint32_t erss_seq_p1_addr_cnt        : 3;
		uint32_t erss_seq_p1_cmd_ext_en      : 1;
		uint32_t erss_seq_p1_cmd_ext_val     : 8;
		uint32_t erss_seq_p1_addr_ios        : 2;
		uint32_t reserved_26_27              : 2;
		uint32_t erss_seq_p1_addr_edge       : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_spix_dev_seq_regs_ers_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_ers_seq_cfg_0 ody_spix_dev_seq_regs_ers_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000410ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) ody_spix_dev_seq_regs_ers_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_1
 *
 * SPI Dev Seq Regs Ers Seq Cfg 1 Register
 * to configure ERASE_SECTOR sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union ody_spix_dev_seq_regs_ers_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_ers_seq_cfg_1_s {
		uint32_t erss_seq_p1_sect_size       : 5;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_spix_dev_seq_regs_ers_seq_cfg_1_s cn; */
};
typedef union ody_spix_dev_seq_regs_ers_seq_cfg_1 ody_spix_dev_seq_regs_ers_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000414ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) ody_spix_dev_seq_regs_ers_seq_cfg_1_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_ers_seq_cfg_2
 *
 * SPI Dev Seq Regs Ers Seq Cfg 2 Register
 * to configure ERASE_ALL sequence for PROFILE 1 in ACMD work mode.
 */
union ody_spix_dev_seq_regs_ers_seq_cfg_2 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_ers_seq_cfg_2_s {
		uint32_t ersa_seq_p1_cmd_val         : 8;
		uint32_t ersa_seq_p1_cmd_ios         : 2;
		uint32_t reserved_10                 : 1;
		uint32_t ersa_seq_p1_cmd_edge        : 1;
		uint32_t reserved_12_14              : 3;
		uint32_t ersa_seq_p1_cmd_ext_en      : 1;
		uint32_t ersa_seq_p1_cmd_ext_val     : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_dev_seq_regs_ers_seq_cfg_2_s cn; */
};
typedef union ody_spix_dev_seq_regs_ers_seq_cfg_2 ody_spix_dev_seq_regs_ers_seq_cfg_2_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(uint64_t a)
{
	if (a <= 1)
		return 0x804000000418ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) ody_spix_dev_seq_regs_ers_seq_cfg_2_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_ERS_SEQ_CFG_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_0
 *
 * SPI Dev Seq Regs Prog Seq Cfg 0 Register
 * to configure PROGRAM sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_prog_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_prog_seq_cfg_0_s {
		uint32_t prog_seq_p1_cmd_val         : 8;
		uint32_t prog_seq_p1_cmd_ios         : 2;
		uint32_t reserved_10                 : 1;
		uint32_t prog_seq_p1_cmd_edge        : 1;
		uint32_t prog_seq_p1_addr_cnt        : 3;
		uint32_t reserved_15                 : 1;
		uint32_t prog_seq_p1_addr_ios        : 2;
		uint32_t reserved_18                 : 1;
		uint32_t prog_seq_p1_addr_edge       : 1;
		uint32_t prog_seq_p1_data_ios        : 2;
		uint32_t reserved_22                 : 1;
		uint32_t prog_seq_p1_data_edge       : 1;
		uint32_t prog_seq_p1_dummy_cnt       : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_spix_dev_seq_regs_prog_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_prog_seq_cfg_0 ody_spix_dev_seq_regs_prog_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000420ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) ody_spix_dev_seq_regs_prog_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_1
 *
 * SPI Dev Seq Regs Prog Seq Cfg 1 Register
 * to configure PROGRAM sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_prog_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_prog_seq_cfg_1_s {
		uint32_t prog_seq_p1_cmd_ext_en      : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t prog_seq_p1_cmd_ext_val     : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_dev_seq_regs_prog_seq_cfg_1_s cn; */
};
typedef union ody_spix_dev_seq_regs_prog_seq_cfg_1 ody_spix_dev_seq_regs_prog_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000424ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) ody_spix_dev_seq_regs_prog_seq_cfg_1_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_prog_seq_cfg_2
 *
 * SPI Dev Seq Regs Prog Seq Cfg 2 Register
 * to configure PROGRAM sequence for PROFILE 2 in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_prog_seq_cfg_2 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_prog_seq_cfg_2_s {
		uint32_t prog_seq_p2_target          : 1;
		uint32_t prog_seq_p2_burst_type      : 1;
		uint32_t prog_seq_p2_mask_cmd_mod    : 1;
		uint32_t reserved_3_7                : 5;
		uint32_t prog_seq_p2_latency_cnt     : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_spix_dev_seq_regs_prog_seq_cfg_2_s cn; */
};
typedef union ody_spix_dev_seq_regs_prog_seq_cfg_2 ody_spix_dev_seq_regs_prog_seq_cfg_2_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(uint64_t a)
{
	if (a <= 1)
		return 0x804000000428ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) ody_spix_dev_seq_regs_prog_seq_cfg_2_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_PROG_SEQ_CFG_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_0
 *
 * SPI Dev Seq Regs Read Seq Cfg 0 Register
 * to configure READ sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_read_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_read_seq_cfg_0_s {
		uint32_t read_seq_p1_cmd_val         : 8;
		uint32_t read_seq_p1_cmd_ios         : 2;
		uint32_t reserved_10                 : 1;
		uint32_t read_seq_p1_cmd_edge        : 1;
		uint32_t read_seq_p1_addr_cnt        : 3;
		uint32_t reserved_15                 : 1;
		uint32_t read_seq_p1_addr_ios        : 2;
		uint32_t reserved_18                 : 1;
		uint32_t read_seq_p1_addr_edge       : 1;
		uint32_t read_seq_p1_data_ios        : 2;
		uint32_t reserved_22                 : 1;
		uint32_t read_seq_p1_data_edge       : 1;
		uint32_t read_seq_p1_dummy_cnt       : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_spix_dev_seq_regs_read_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_read_seq_cfg_0 ody_spix_dev_seq_regs_read_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000430ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) ody_spix_dev_seq_regs_read_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_1
 *
 * SPI Dev Seq Regs Read Seq Cfg 1 Register
 * to configure READ sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_read_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_read_seq_cfg_1_s {
		uint32_t read_seq_p1_cmd_ext_en      : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t read_seq_p1_cache_random_read_en : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t read_seq_p1_cmd_ext_val     : 8;
		uint32_t reserved_16_23              : 8;
		uint32_t read_seq_p1_mb_dummy_cnt    : 6;
		uint32_t reserved_30                 : 1;
		uint32_t read_seq_p1_mb_en           : 1;
	} s;
	/* struct ody_spix_dev_seq_regs_read_seq_cfg_1_s cn; */
};
typedef union ody_spix_dev_seq_regs_read_seq_cfg_1 ody_spix_dev_seq_regs_read_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000434ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) ody_spix_dev_seq_regs_read_seq_cfg_1_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_read_seq_cfg_2
 *
 * SPI Dev Seq Regs Read Seq Cfg 2 Register
 * to configure READ sequence for PROFILE 2 in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_read_seq_cfg_2 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_read_seq_cfg_2_s {
		uint32_t read_seq_p2_target          : 1;
		uint32_t read_seq_p2_burst_type      : 1;
		uint32_t read_seq_p2_mask_cmd_mod    : 1;
		uint32_t read_seq_p2_hf_bound_en     : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t read_seq_p2_latency_cnt     : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_spix_dev_seq_regs_read_seq_cfg_2_s cn; */
};
typedef union ody_spix_dev_seq_regs_read_seq_cfg_2 ody_spix_dev_seq_regs_read_seq_cfg_2_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(uint64_t a)
{
	if (a <= 1)
		return 0x804000000438ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) ody_spix_dev_seq_regs_read_seq_cfg_2_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_READ_SEQ_CFG_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_rst_seq_cfg_0
 *
 * SPI Dev Seq Regs Rst Seq Cfg 0 Register
 * to configure RESET sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union ody_spix_dev_seq_regs_rst_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_rst_seq_cfg_0_s {
		uint32_t rst_seq_p1_cmd0_val         : 8;
		uint32_t rst_seq_p1_cmd1_val         : 8;
		uint32_t rst_seq_p1_cmd0_en          : 1;
		uint32_t reserved_17                 : 1;
		uint32_t rst_seq_p1_data_ios         : 2;
		uint32_t reserved_20                 : 1;
		uint32_t rst_seq_p1_data_edge        : 1;
		uint32_t rst_seq_p1_data_en          : 1;
		uint32_t reserved_23                 : 1;
		uint32_t rst_seq_p1_cmd_ios          : 2;
		uint32_t reserved_26_27              : 2;
		uint32_t rst_seq_p1_cmd_edge         : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_spix_dev_seq_regs_rst_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_rst_seq_cfg_0 ody_spix_dev_seq_regs_rst_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000400ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) ody_spix_dev_seq_regs_rst_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_rst_seq_cfg_1
 *
 * SPI Dev Seq Regs Rst Seq Cfg 1 Register
 * to configure RESET sequence for PROFILE 1 and SPI NAND in ACMD work mode.
 */
union ody_spix_dev_seq_regs_rst_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_rst_seq_cfg_1_s {
		uint32_t rst_seq_p1_cmd0_ext_en      : 1;
		uint32_t rst_seq_p1_cmd1_ext_en      : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t rst_seq_p1_cmd0_ext_val     : 8;
		uint32_t rst_seq_p1_cmd1_ext_val     : 8;
		uint32_t rst_seq_p1_data_val         : 8;
	} s;
	/* struct ody_spix_dev_seq_regs_rst_seq_cfg_1_s cn; */
};
typedef union ody_spix_dev_seq_regs_rst_seq_cfg_1 ody_spix_dev_seq_regs_rst_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000404ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) ody_spix_dev_seq_regs_rst_seq_cfg_1_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_RST_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_0
 *
 * SPI Dev Seq Regs Stat Seq Cfg 0 Register
 * to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_0_s {
		uint32_t stat_seq_p1_cmd_ios         : 2;
		uint32_t reserved_2_3                : 2;
		uint32_t stat_seq_p1_cmd_edge        : 1;
		uint32_t stat_seq_p1_cmd_ext_en      : 1;
		uint32_t reserved_6_7                : 2;
		uint32_t stat_seq_p1_addr_cnt        : 2;
		uint32_t stat_seq_p1_addr_ios        : 2;
		uint32_t stat_seq_p1_addr_edge       : 1;
		uint32_t reserved_13_19              : 7;
		uint32_t stat_seq_p1_data_ios        : 2;
		uint32_t stat_seq_p1_data_edge       : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_0 ody_spix_dev_seq_regs_stat_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000450ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) ody_spix_dev_seq_regs_stat_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_1
 *
 * SPI Dev Seq Regs Stat Seq Cfg 1 Register
 * to configure status checking sequence for PROFILE 1 and SPI NAND ACMD and
 * DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_1 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_1_s {
		uint32_t stat_seq_p1_dev_rdy_dummy_cnt : 6;
		uint32_t stat_seq_p1_dev_rdy_addr_en : 1;
		uint32_t reserved_7_15               : 9;
		uint32_t stat_seq_p1_prog_fail_dummy_cnt : 6;
		uint32_t stat_seq_p1_prog_fail_addr_en : 1;
		uint32_t reserved_23                 : 1;
		uint32_t stat_seq_p1_ers_fail_dummy_cnt : 6;
		uint32_t stat_seq_p1_ers_fail_addr_en : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_1_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_1 ody_spix_dev_seq_regs_stat_seq_cfg_1_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000000454ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) ody_spix_dev_seq_regs_stat_seq_cfg_1_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_10
 *
 * SPI Dev Seq Regs Stat Seq Cfg 10 Register
 * to configure status checking sequence for SPI NAND devices in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_10 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_10_s {
		uint32_t stat_seq_ecc_fail_mask      : 8;
		uint32_t stat_seq_ecc_fail_val       : 8;
		uint32_t stat_seq_ecc_corr_val       : 8;
		uint32_t stat_seq_crdy_idx           : 3;
		uint32_t stat_seq_crdy_val           : 1;
		uint32_t reserved_28_30              : 3;
		uint32_t stat_seq_ecc_fail_en        : 1;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_10_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_10 ody_spix_dev_seq_regs_stat_seq_cfg_10_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(uint64_t a)
{
	if (a <= 1)
		return 0x804000000478ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) ody_spix_dev_seq_regs_stat_seq_cfg_10_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_10(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_2
 *
 * SPI Dev Seq Regs Stat Seq Cfg 2 Register
 * to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_2 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_2_s {
		uint32_t stat_seq_p1_dev_rdy_cmd_val : 8;
		uint32_t stat_seq_p1_ers_fail_cmd_val : 8;
		uint32_t reserved_16_23              : 8;
		uint32_t stat_seq_p1_prog_fail_cmd_val : 8;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_2_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_2 ody_spix_dev_seq_regs_stat_seq_cfg_2_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(uint64_t a)
{
	if (a <= 1)
		return 0x804000000458ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) ody_spix_dev_seq_regs_stat_seq_cfg_2_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_3
 *
 * SPI Dev Seq Regs Stat Seq Cfg 3 Register
 * to configure status checking sequence for PROFILE 1 and SPI NAND in ACMD and DIRECT work
 * modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_3 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_3_s {
		uint32_t stat_seq_p1_dev_rdy_cmd_ext_val : 8;
		uint32_t stat_seq_p1_ers_fail_cmd_ext_val : 8;
		uint32_t reserved_16_23              : 8;
		uint32_t stat_seq_p1_prog_fail_cmd_ext_val : 8;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_3_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_3 ody_spix_dev_seq_regs_stat_seq_cfg_3_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(uint64_t a)
{
	if (a <= 1)
		return 0x80400000045cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) ody_spix_dev_seq_regs_stat_seq_cfg_3_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_4
 *
 * SPI Dev Seq Regs Stat Seq Cfg 4 Register
 * to configure status checking sequence for PROFILE 2 - HF in ACMD and DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_4 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_4_s {
		uint32_t reserved_0_1                : 2;
		uint32_t stat_seq_p2_mask_cmd_mod    : 1;
		uint32_t reserved_3_7                : 5;
		uint32_t stat_seq_p2_latency_cnt     : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_4_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_4 ody_spix_dev_seq_regs_stat_seq_cfg_4_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(uint64_t a)
{
	if (a <= 1)
		return 0x804000000460ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) ody_spix_dev_seq_regs_stat_seq_cfg_4_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_5
 *
 * SPI Dev Seq Regs Stat Seq Cfg 5 Register
 * to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD and
 * DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_5 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_5_s {
		uint32_t stat_seq_dev_rdy_idx        : 4;
		uint32_t stat_seq_dev_rdy_val        : 1;
		uint32_t stat_seq_dev_rdy_size       : 1;
		uint32_t stat_seq_dev_rdy_en         : 1;
		uint32_t reserved_7                  : 1;
		uint32_t stat_seq_ers_fail_idx       : 4;
		uint32_t stat_seq_ers_fail_val       : 1;
		uint32_t stat_seq_ers_fail_size      : 1;
		uint32_t stat_seq_ers_fail_en        : 1;
		uint32_t reserved_15_23              : 9;
		uint32_t stat_seq_prog_fail_idx      : 4;
		uint32_t stat_seq_prog_fail_val      : 1;
		uint32_t stat_seq_prog_fail_size     : 1;
		uint32_t stat_seq_prog_fail_en       : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_5_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_5 ody_spix_dev_seq_regs_stat_seq_cfg_5_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(uint64_t a)
{
	if (a <= 1)
		return 0x804000000464ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) ody_spix_dev_seq_regs_stat_seq_cfg_5_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_7
 *
 * SPI Dev Seq Regs Stat Seq Cfg 7 Register
 * to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD and
 * DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_7 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_7_s {
		uint32_t stat_seq_dev_rdy_addr       : 32;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_7_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_7 ody_spix_dev_seq_regs_stat_seq_cfg_7_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(uint64_t a)
{
	if (a <= 1)
		return 0x80400000046cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) ody_spix_dev_seq_regs_stat_seq_cfg_7_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_7(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_8
 *
 * SPI Dev Seq Regs Stat Seq Cfg 8 Register
 * to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * -HF in ACMD and
 * DIRECT work modes.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_8 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_8_s {
		uint32_t stat_seq_prog_fail_addr     : 32;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_8_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_8 ody_spix_dev_seq_regs_stat_seq_cfg_8_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(uint64_t a)
{
	if (a <= 1)
		return 0x804000000470ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) ody_spix_dev_seq_regs_stat_seq_cfg_8_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_8(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_stat_seq_cfg_9
 *
 * SPI Dev Seq Regs Stat Seq Cfg 9 Register
 * to configure status checking sequence for PROFILE 1, SPI NAND and PROFILE 2
 * - HF in ACMD work
 * mode.
 */
union ody_spix_dev_seq_regs_stat_seq_cfg_9 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_stat_seq_cfg_9_s {
		uint32_t stat_seq_ers_fail_addr      : 32;
	} s;
	/* struct ody_spix_dev_seq_regs_stat_seq_cfg_9_s cn; */
};
typedef union ody_spix_dev_seq_regs_stat_seq_cfg_9 ody_spix_dev_seq_regs_stat_seq_cfg_9_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(uint64_t a)
{
	if (a <= 1)
		return 0x804000000474ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) ody_spix_dev_seq_regs_stat_seq_cfg_9_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) "SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_STAT_SEQ_CFG_9(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_dev_seq_regs_we_seq_cfg_0
 *
 * SPI Dev Seq Regs We Seq Cfg 0 Register
 * to configure Write Enable Latch (WEL) sequence for PROFILE 1 and SPI NAND
 * in ACMD and DIRECT
 * work modes.
 */
union ody_spix_dev_seq_regs_we_seq_cfg_0 {
	uint32_t u;
	struct ody_spix_dev_seq_regs_we_seq_cfg_0_s {
		uint32_t we_seq_p1_cmd_val           : 8;
		uint32_t we_seq_p1_cmd_ios           : 2;
		uint32_t reserved_10                 : 1;
		uint32_t we_seq_p1_cmd_edge          : 1;
		uint32_t reserved_12_14              : 3;
		uint32_t we_seq_p1_cmd_ext_en        : 1;
		uint32_t we_seq_p1_cmd_ext_val       : 8;
		uint32_t we_seq_p1_en                : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_spix_dev_seq_regs_we_seq_cfg_0_s cn; */
};
typedef union ody_spix_dev_seq_regs_we_seq_cfg_0 ody_spix_dev_seq_regs_we_seq_cfg_0_t;

static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000000440ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) ody_spix_dev_seq_regs_we_seq_cfg_0_t
#define bustype_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) "SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0"
#define device_bar_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) (a)
#define arguments_ODY_SPIX_DEV_SEQ_REGS_WE_SEQ_CFG_0(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_direct_access#
 *
 * SPI Flash Direct map Registers
 * This register is for memory mapping the external Flash Device to access it in direct mode.
 * A read transaction to this register would initiate a SPI Read transfer.
 */
union ody_spix_direct_accessx {
	uint64_t u;
	struct ody_spix_direct_accessx_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_spix_direct_accessx_s cn; */
};
typedef union ody_spix_direct_accessx ody_spix_direct_accessx_t;

static inline uint64_t ODY_SPIX_DIRECT_ACCESSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_DIRECT_ACCESSX(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b <= 65535))
		return 0x804010000000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xffff);
	__ody_csr_fatal("SPIX_DIRECT_ACCESSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_DIRECT_ACCESSX(a, b) ody_spix_direct_accessx_t
#define bustype_ODY_SPIX_DIRECT_ACCESSX(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_DIRECT_ACCESSX(a, b) "SPIX_DIRECT_ACCESSX"
#define device_bar_ODY_SPIX_DIRECT_ACCESSX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_DIRECT_ACCESSX(a, b) (a)
#define arguments_ODY_SPIX_DIRECT_ACCESSX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) spi#_msix_pba#
 *
 * SPI MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the SPI_INT_VEC_E enumeration.
 */
union ody_spix_msix_pbax {
	uint64_t u;
	struct ody_spix_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_spix_msix_pbax_s cn; */
};
typedef union ody_spix_msix_pbax ody_spix_msix_pbax_t;

static inline uint64_t ODY_SPIX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b == 0))
		return 0x8041000f0000ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_MSIX_PBAX(a, b) ody_spix_msix_pbax_t
#define bustype_ODY_SPIX_MSIX_PBAX(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_MSIX_PBAX(a, b) "SPIX_MSIX_PBAX"
#define device_bar_ODY_SPIX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_SPIX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_SPIX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) spi#_msix_vec#_addr
 *
 * SPI MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the SPI_INT_VEC_E enumeration.
 */
union ody_spix_msix_vecx_addr {
	uint64_t u;
	struct ody_spix_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_spix_msix_vecx_addr_s cn; */
};
typedef union ody_spix_msix_vecx_addr ody_spix_msix_vecx_addr_t;

static inline uint64_t ODY_SPIX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b == 0))
		return 0x804100000000ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_MSIX_VECX_ADDR(a, b) ody_spix_msix_vecx_addr_t
#define bustype_ODY_SPIX_MSIX_VECX_ADDR(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_MSIX_VECX_ADDR(a, b) "SPIX_MSIX_VECX_ADDR"
#define device_bar_ODY_SPIX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_SPIX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_SPIX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (NCB) spi#_msix_vec#_ctl
 *
 * SPI MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the SPI_INT_VEC_E enumeration.
 */
union ody_spix_msix_vecx_ctl {
	uint64_t u;
	struct ody_spix_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_spix_msix_vecx_ctl_s cn; */
};
typedef union ody_spix_msix_vecx_ctl ody_spix_msix_vecx_ctl_t;

static inline uint64_t ODY_SPIX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b == 0))
		return 0x804100000008ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_MSIX_VECX_CTL(a, b) ody_spix_msix_vecx_ctl_t
#define bustype_ODY_SPIX_MSIX_VECX_CTL(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_MSIX_VECX_CTL(a, b) "SPIX_MSIX_VECX_CTL"
#define device_bar_ODY_SPIX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_SPIX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_SPIX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_ctrl
 *
 * SPI PHY Ctb Rfile PHY Control Register
 * This register handles the global control settings for the PHY.
 */
union ody_spix_phy_ctb_rfile_phy_ctrl {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_ctrl_s {
		uint32_t ctrl_clkperiod_delay        : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t phony_dqs_timing            : 6;
		uint32_t reserved_10_13              : 4;
		uint32_t sdr_dqs_value               : 1;
		uint32_t reserved_15_19              : 5;
		uint32_t low_freq_sel                : 1;
		uint32_t pu_pd_polarity              : 1;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_ctrl_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_ctrl ody_spix_phy_ctb_rfile_phy_ctrl_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000002080ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) ody_spix_phy_ctb_rfile_phy_ctrl_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) "SPIX_PHY_CTB_RFILE_PHY_CTRL"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_ctrl_0
 *
 * SPI PHY Ctb Rfile PHY Gpio Control 0 Register
 * This register is a general purpose register. The [31:0]vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for
 * connected I/O pads.
 */
union ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0 {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0_s {
		uint32_t phy_gpio_ctrl_0_value       : 32;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0 ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) ody_spix_phy_ctb_rfile_phy_gpio_ctrl_0_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_ctrl_1
 *
 * SPI PHY Ctb Rfile PHY Gpio Control 1 Register
 * This register is a general purpose register. The [31:0] vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for the
 * connected I/O pads.
 */
union ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1 {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1_s {
		uint32_t phy_gpio_ctrl_1_value       : 32;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1 ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a)
{
	if (a <= 1)
		return 0x80400000208cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) ody_spix_phy_ctb_rfile_phy_gpio_ctrl_1_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_status_0
 *
 * SPI PHY Ctb Rfile PHY Gpio Status 0 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
 * register. User may choose to use this as a status register.
 */
union ody_spix_phy_ctb_rfile_phy_gpio_status_0 {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_gpio_status_0_s {
		uint32_t phy_gpio_status_0_value     : 32;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_gpio_status_0_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_gpio_status_0 ody_spix_phy_ctb_rfile_phy_gpio_status_0_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000002090ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) ody_spix_phy_ctb_rfile_phy_gpio_status_0_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_gpio_status_1
 *
 * SPI PHY Ctb Rfile PHY Gpio Status 1 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY IOs to this
 * register. User may choose to use this as a status register.
 */
union ody_spix_phy_ctb_rfile_phy_gpio_status_1 {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_gpio_status_1_s {
		uint32_t phy_gpio_status_1_value     : 32;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_gpio_status_1_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_gpio_status_1 ody_spix_phy_ctb_rfile_phy_gpio_status_1_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000002094ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) ody_spix_phy_ctb_rfile_phy_gpio_status_1_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) "SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_ctb_rfile_phy_tsel
 *
 * SPI PHY Ctb Rfile PHY Tsel Register
 * This register handles the global control settings for the termination selects for reads.
 * For SD and XSPI controllers this should be disabled.
 */
union ody_spix_phy_ctb_rfile_phy_tsel {
	uint32_t u;
	struct ody_spix_phy_ctb_rfile_phy_tsel_s {
		uint32_t reserved_0_7                : 8;
		uint32_t tsel_rd_value_dqs           : 4;
		uint32_t tsel_off_value_dqs          : 4;
		uint32_t tsel_rd_value_data          : 4;
		uint32_t tsel_off_value_data         : 4;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_phy_ctb_rfile_phy_tsel_s cn; */
};
typedef union ody_spix_phy_ctb_rfile_phy_tsel ody_spix_phy_ctb_rfile_phy_tsel_t;

static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a)
{
	if (a <= 1)
		return 0x804000002084ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_CTB_RFILE_PHY_TSEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) ody_spix_phy_ctb_rfile_phy_tsel_t
#define bustype_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) "SPIX_PHY_CTB_RFILE_PHY_TSEL"
#define device_bar_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) (a)
#define arguments_ODY_SPIX_PHY_CTB_RFILE_PHY_TSEL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_master_ctrl
 *
 * SPI PHY Dataslice Rfile PHY DLL Master Control Register
 * This register holds the control for the master DLL logic.
 */
union ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl_s {
		uint32_t param_dll_start_point       : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t param_dll_lock_num          : 3;
		uint32_t reserved_19                 : 1;
		uint32_t param_phase_detect_sel      : 3;
		uint32_t param_dll_bypass_mode       : 1;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x80400000200cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) ody_spix_phy_dataslice_rfile_phy_dll_master_ctrl_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_0
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_s {
		uint32_t dll_lock                    : 1;
		uint32_t dll_locked_mode             : 2;
		uint32_t dll_unlock_cnt              : 5;
		uint32_t dll_lock_value              : 8;
		uint32_t lock_dec_dbg                : 8;
		uint32_t lock_inc_dbg                : 8;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0 ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a)
{
	if (a <= 1)
		return 0x80400000201cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_0_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_1
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 1 Register
 * This register holds the following observable points in the PHY.
 */
union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_s {
		uint32_t decoder_out_rd              : 8;
		uint32_t decoder_out_rd_cmd          : 8;
		uint32_t decoder_out_wr              : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1 ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000002020ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_1_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_obs_reg_2
 *
 * SPI PHY Dataslice Rfile PHY DLL Obs Reg 2 Register
 * This register holds the following observable points in the PHY.
 */
union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_s {
		uint32_t decoder_out_wrdqs           : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2 ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a)
{
	if (a <= 1)
		return 0x804000002024ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) ody_spix_phy_dataslice_rfile_phy_dll_obs_reg_2_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dll_slave_ctrl
 *
 * SPI PHY Dataslice Rfile PHY DLL Slave Control Register
 * This register holds the control for the slave DLL logic.
 */
union ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_s {
		uint32_t read_dqs_delay              : 8;
		uint32_t clk_wr_delay                : 8;
		uint32_t clk_wrdqs_delay             : 8;
		uint32_t read_dqs_cmd_delay          : 8;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000002010ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) ody_spix_phy_dataslice_rfile_phy_dll_slave_ctrl_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dq_timing
 *
 * SPI PHY Dataslice Rfile PHY Dq Timing Register
 * This register controls the DQ related timing.
 */
union ody_spix_phy_dataslice_rfile_phy_dq_timing {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dq_timing_s {
		uint32_t data_select_oe_end          : 3;
		uint32_t reserved_3                  : 1;
		uint32_t data_select_oe_start        : 3;
		uint32_t reserved_7                  : 1;
		uint32_t data_select_tsel_end        : 4;
		uint32_t data_select_tsel_start      : 4;
		uint32_t data_clkperiod_delay        : 8;
		uint32_t io_mask_start               : 3;
		uint32_t io_mask_end                 : 3;
		uint32_t reserved_30                 : 1;
		uint32_t io_mask_always_on           : 1;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dq_timing_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dq_timing ody_spix_phy_dataslice_rfile_phy_dq_timing_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a)
{
	if (a <= 1)
		return 0x804000002000ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) ody_spix_phy_dataslice_rfile_phy_dq_timing_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_dqs_timing
 *
 * SPI PHY Dataslice Rfile PHY DQS Timing Register
 * This register controls the DQS related timing.
 */
union ody_spix_phy_dataslice_rfile_phy_dqs_timing {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_dqs_timing_s {
		uint32_t dqs_select_oe_end           : 4;
		uint32_t dqs_select_oe_start         : 4;
		uint32_t dqs_select_tsel_end         : 4;
		uint32_t dqs_select_tsel_start       : 4;
		uint32_t phony_dqs_sel               : 1;
		uint32_t reserved_17_18              : 2;
		uint32_t use_phony_dqs_cmd           : 1;
		uint32_t use_phony_dqs               : 1;
		uint32_t use_lpbk_dqs                : 1;
		uint32_t use_ext_lpbk_dqs            : 1;
		uint32_t dqs_clkperiod_delay         : 1;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_dqs_timing_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_dqs_timing ody_spix_phy_dataslice_rfile_phy_dqs_timing_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a)
{
	if (a <= 1)
		return 0x804000002004ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) ody_spix_phy_dataslice_rfile_phy_dqs_timing_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_features
 *
 * SPI PHY Dataslice Rfile PHY Features Register
 * This register shows available hardware features.
 */
union ody_spix_phy_dataslice_rfile_phy_features {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_features_s {
		uint32_t onfi_40                     : 1;
		uint32_t onfi_41                     : 1;
		uint32_t sdr_16bit                   : 1;
		uint32_t spi                         : 1;
		uint32_t sd_emmc                     : 1;
		uint32_t bank_num                    : 2;
		uint32_t dll_tap_num                 : 1;
		uint32_t aging                       : 1;
		uint32_t dfi_clock_ratio             : 1;
		uint32_t per_bit_deskew              : 1;
		uint32_t reg_intf                    : 1;
		uint32_t ext_lpbk_dqs                : 1;
		uint32_t jtag_sup                    : 1;
		uint32_t pll_sup                     : 1;
		uint32_t asf_sup                     : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_features_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_features ody_spix_phy_dataslice_rfile_phy_features_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a)
{
	if (a <= 1)
		return 0x804000002074ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) ody_spix_phy_dataslice_rfile_phy_features_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) "SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_gate_lpbk_ctrl
 *
 * SPI PHY Dataslice Rfile PHY Gate Lpbk Control Register
 * This register controls the gate and loopback control related timing.
 */
union ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s {
		uint32_t gate_cfg                    : 4;
		uint32_t gate_cfg_close              : 2;
		uint32_t gate_cfg_always_on          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t lpbk_en                     : 1;
		uint32_t lpbk_internal               : 1;
		uint32_t loopback_control            : 2;
		uint32_t lpbk_fail_muxsel            : 1;
		uint32_t lpbk_err_check_timing       : 3;
		uint32_t rd_del_sel_empty            : 1;
		uint32_t reserved_17                 : 1;
		uint32_t underrun_suppress           : 1;
		uint32_t rd_del_sel                  : 6;
		uint32_t param_phase_detect_sel_oe   : 3;
		uint32_t sw_half_cycle_shift         : 1;
		uint32_t en_sw_half_cycle            : 1;
		uint32_t sw_dqs_phase_bypass         : 1;
		uint32_t sync_method                 : 1;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000002008ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) ody_spix_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) "SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_ie_timing
 *
 * SPI PHY Dataslice Rfile PHY Ie Timing Register
 * This register controls the DQS related timing.
 */
union ody_spix_phy_dataslice_rfile_phy_ie_timing {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_ie_timing_s {
		uint32_t rddata_en_ie_dly            : 4;
		uint32_t dqs_ie_stop                 : 3;
		uint32_t reserved_7                  : 1;
		uint32_t dqs_ie_start                : 3;
		uint32_t reserved_11                 : 1;
		uint32_t dq_ie_stop                  : 3;
		uint32_t reserved_15                 : 1;
		uint32_t dq_ie_start                 : 3;
		uint32_t reserved_19                 : 1;
		uint32_t ie_always_on                : 1;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_ie_timing_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_ie_timing ody_spix_phy_dataslice_rfile_phy_ie_timing_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a)
{
	if (a <= 1)
		return 0x804000002014ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) ody_spix_phy_dataslice_rfile_phy_ie_timing_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) "SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_obs_reg_0
 *
 * SPI PHY Dataslice Rfile PHY Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union ody_spix_phy_dataslice_rfile_phy_obs_reg_0 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_obs_reg_0_s {
		uint32_t lpbk_status                 : 2;
		uint32_t reserved_2_7                : 6;
		uint32_t lpbk_dq_data                : 16;
		uint32_t dqs_underrun                : 1;
		uint32_t dqs_overflow                : 1;
		uint32_t dqs_cmd_underrun            : 1;
		uint32_t dqs_cmd_overflow            : 1;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_obs_reg_0_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_obs_reg_0 ody_spix_phy_dataslice_rfile_phy_obs_reg_0_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000002018ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) ody_spix_phy_dataslice_rfile_phy_obs_reg_0_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_rd_deskew
 *
 * SPI PHY Dataslice Rfile PHY Rd Deskew Register
 * This register holds the values of delay of each DQ bit on the read path.
 */
union ody_spix_phy_dataslice_rfile_phy_rd_deskew {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_rd_deskew_s {
		uint32_t rd_dq0_deskew_delay         : 4;
		uint32_t rd_dq1_deskew_delay         : 4;
		uint32_t rd_dq2_deskew_delay         : 4;
		uint32_t rd_dq3_deskew_delay         : 4;
		uint32_t rd_dq4_deskew_delay         : 4;
		uint32_t rd_dq5_deskew_delay         : 4;
		uint32_t rd_dq6_deskew_delay         : 4;
		uint32_t rd_dq7_deskew_delay         : 4;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_rd_deskew_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_rd_deskew ody_spix_phy_dataslice_rfile_phy_rd_deskew_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a)
{
	if (a <= 1)
		return 0x80400000203cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) ody_spix_phy_dataslice_rfile_phy_rd_deskew_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) "SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_static_togg
 *
 * SPI PHY Dataslice Rfile PHY Static Togg Register
 * This register controls the static aging feature of the PHY.
 */
union ody_spix_phy_dataslice_rfile_phy_static_togg {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_static_togg_s {
		uint32_t static_tog_clk_div          : 16;
		uint32_t static_togg_global_enable   : 1;
		uint32_t reserved_17_19              : 3;
		uint32_t static_togg_enable          : 4;
		uint32_t read_dqs_togg_enable        : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_static_togg_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_static_togg ody_spix_phy_dataslice_rfile_phy_static_togg_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a)
{
	if (a <= 1)
		return 0x804000002028ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) ody_spix_phy_dataslice_rfile_phy_static_togg_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) "SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_version
 *
 * SPI PHY Dataslice Rfile PHY Version Register
 * This register contains release identification number.
 */
union ody_spix_phy_dataslice_rfile_phy_version {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_version_s {
		uint32_t phy_rev                     : 8;
		uint32_t phy_fix                     : 8;
		uint32_t combo_phy_magic_number      : 16;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_version_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_version ody_spix_phy_dataslice_rfile_phy_version_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a)
{
	if (a <= 1)
		return 0x804000002070ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) ody_spix_phy_dataslice_rfile_phy_version_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) "SPIX_PHY_DATASLICE_RFILE_PHY_VERSION"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Register
 * This register holds the values of delay of each DQ bit on the write path.
 */
union ody_spix_phy_dataslice_rfile_phy_wr_deskew {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_s {
		uint32_t wr_dq0_deskew_delay         : 4;
		uint32_t wr_dq1_deskew_delay         : 4;
		uint32_t wr_dq2_deskew_delay         : 4;
		uint32_t wr_dq3_deskew_delay         : 4;
		uint32_t wr_dq4_deskew_delay         : 4;
		uint32_t wr_dq5_deskew_delay         : 4;
		uint32_t wr_dq6_deskew_delay         : 4;
		uint32_t wr_dq7_deskew_delay         : 4;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_wr_deskew ody_spix_phy_dataslice_rfile_phy_wr_deskew_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a)
{
	if (a <= 1)
		return 0x80400000202cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) ody_spix_phy_dataslice_rfile_phy_wr_deskew_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Pd Control 0 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s {
		uint32_t dq0_phase_detect_sel        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dq0_sw_half_cycle_shift     : 1;
		uint32_t dq0_en_sw_half_cycle        : 1;
		uint32_t dq0_sw_dq_phase_bypass      : 1;
		uint32_t reserved_7                  : 1;
		uint32_t dq1_phase_detect_sel        : 3;
		uint32_t reserved_11                 : 1;
		uint32_t dq1_sw_half_cycle_shift     : 1;
		uint32_t dq1_en_sw_half_cycle        : 1;
		uint32_t dq1_sw_dq_phase_bypass      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t dq2_phase_detect_sel        : 3;
		uint32_t reserved_19                 : 1;
		uint32_t dq2_sw_half_cycle_shift     : 1;
		uint32_t dq2_en_sw_half_cycle        : 1;
		uint32_t dq2_sw_dq_phase_bypass      : 1;
		uint32_t reserved_23                 : 1;
		uint32_t dq3_phase_detect_sel        : 3;
		uint32_t reserved_27                 : 1;
		uint32_t dq3_sw_half_cycle_shift     : 1;
		uint32_t dq3_en_sw_half_cycle        : 1;
		uint32_t dq3_sw_dq_phase_bypass      : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0 ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a)
{
	if (a <= 1)
		return 0x804000002034ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1
 *
 * SPI PHY Dataslice Rfile PHY Wr Deskew Pd Control 1 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1 {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s {
		uint32_t dq4_phase_detect_sel        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t dq4_sw_half_cycle_shift     : 1;
		uint32_t dq4_en_sw_half_cycle        : 1;
		uint32_t dq4_sw_dq_phase_bypass      : 1;
		uint32_t reserved_7                  : 1;
		uint32_t dq5_phase_detect_sel        : 3;
		uint32_t reserved_11                 : 1;
		uint32_t dq5_sw_half_cycle_shift     : 1;
		uint32_t dq5_en_sw_half_cycle        : 1;
		uint32_t dq5_sw_dq_phase_bypass      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t dq6_phase_detect_sel        : 3;
		uint32_t reserved_19                 : 1;
		uint32_t dq6_sw_half_cycle_shift     : 1;
		uint32_t dq6_en_sw_half_cycle        : 1;
		uint32_t dq6_sw_dq_phase_bypass      : 1;
		uint32_t reserved_23                 : 1;
		uint32_t dq7_phase_detect_sel        : 3;
		uint32_t reserved_27                 : 1;
		uint32_t dq7_sw_half_cycle_shift     : 1;
		uint32_t dq7_en_sw_half_cycle        : 1;
		uint32_t dq7_sw_dq_phase_bypass      : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1 ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a)
{
	if (a <= 1)
		return 0x804000002038ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) ody_spix_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_phy_dataslice_rfile_phy_wr_rd_deskew_cmd
 *
 * SPI PHY Dataslice Rfile PHY Wr Rd Deskew Command Register
 * This register holds the values of delay of CMD bit on the write and read path as
 * well as the values of
 * phase detect block for CMD bit on the write path.
 */
union ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd {
	uint32_t u;
	struct ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s {
		uint32_t wr_cmd_deskew_delay         : 4;
		uint32_t reserved_4_7                : 4;
		uint32_t cmd_phase_detect_sel        : 3;
		uint32_t reserved_11                 : 1;
		uint32_t cmd_sw_half_cycle_shift     : 1;
		uint32_t cmd_en_sw_half_cycle        : 1;
		uint32_t cmd_sw_dq_phase_bypass      : 1;
		uint32_t reserved_15                 : 1;
		uint32_t cmd_clkperiod_delay         : 1;
		uint32_t reserved_17_23              : 7;
		uint32_t rd_cmd_deskew_delay         : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s cn; */
};
typedef union ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t;

static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a)
{
	if (a <= 1)
		return 0x804000002030ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) ody_spix_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t
#define bustype_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) "SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD"
#define device_bar_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a)
#define arguments_ODY_SPIX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_clock_mode_settings
 *
 * SPI Rf Minictrl Regs Clock Mode Settings Register
 * SPI clock mode.
 */
union ody_spix_rf_minictrl_regs_clock_mode_settings {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_clock_mode_settings_s {
		uint32_t spi_clock_mode              : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_spix_rf_minictrl_regs_clock_mode_settings_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_clock_mode_settings ody_spix_rf_minictrl_regs_clock_mode_settings_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(uint64_t a)
{
	if (a <= 1)
		return 0x804000001008ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) ody_spix_rf_minictrl_regs_clock_mode_settings_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_CLOCK_MODE_SETTINGS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dev_active_max_reg
 *
 * SPI Rf Minictrl Regs Dev Active Max Register
 * "This register is used to introduce maximum number of xspi_clk cycles through which
 * CS# will be kept
 * active (low) on memory interface."
 */
union ody_spix_rf_minictrl_regs_dev_active_max_reg {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_dev_active_max_reg_s {
		uint32_t dev_active_max              : 32;
	} s;
	/* struct ody_spix_rf_minictrl_regs_dev_active_max_reg_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_dev_active_max_reg ody_spix_rf_minictrl_regs_dev_active_max_reg_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(uint64_t a)
{
	if (a <= 1)
		return 0x804000001018ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) ody_spix_rf_minictrl_regs_dev_active_max_reg_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) "SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_DEV_ACTIVE_MAX_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dev_delay_reg
 *
 * SPI Rf Minictrl Regs Dev Delay Register
 * This register is used to introduce relative device selection delays with respect to generated xSPI
 * Flash Interface.
 */
union ody_spix_rf_minictrl_regs_dev_delay_reg {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_dev_delay_reg_s {
		uint32_t cssot_delay                 : 8;
		uint32_t cseot_delay                 : 8;
		uint32_t reserved_16_23              : 8;
		uint32_t csda_min_delay              : 8;
	} s;
	/* struct ody_spix_rf_minictrl_regs_dev_delay_reg_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_dev_delay_reg ody_spix_rf_minictrl_regs_dev_delay_reg_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(uint64_t a)
{
	if (a <= 1)
		return 0x804000001010ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) ody_spix_rf_minictrl_regs_dev_delay_reg_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) "SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_DEV_DELAY_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dll_phy_ctrl
 *
 * SPI Rf Minictrl Regs DLL PHY Control Register
 * Configuration of the resynchronization of slave DLL of PHY. When the PHY is used
 * with the xSPI
 * controller, this register is automatically updated by the device discovery module during
 * initialization.
 */
union ody_spix_rf_minictrl_regs_dll_phy_ctrl {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_dll_phy_ctrl_s {
		uint32_t resync_idle_cnt             : 8;
		uint32_t resync_high_wait_cnt        : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t extended_rd_mode            : 1;
		uint32_t extended_wr_mode            : 1;
		uint32_t reserved_18_19              : 2;
		uint32_t dqs_last_data_drop_en       : 1;
		uint32_t sdr_edge_active             : 1;
		uint32_t reserved_22_23              : 2;
		uint32_t dll_rst_n                   : 1;
		uint32_t dfi_ctrlupd_req             : 1;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_spix_rf_minictrl_regs_dll_phy_ctrl_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_dll_phy_ctrl ody_spix_rf_minictrl_regs_dll_phy_ctrl_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000001034ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) ody_spix_rf_minictrl_regs_dll_phy_ctrl_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) "SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_dll_phy_update_cnt
 *
 * SPI Rf Minictrl Regs DLL PHY Update Cnt Register
 * Configuration of the resynchronization of slave DLL of PHY.
 */
union ody_spix_rf_minictrl_regs_dll_phy_update_cnt {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_dll_phy_update_cnt_s {
		uint32_t resync_cnt                  : 32;
	} s;
	/* struct ody_spix_rf_minictrl_regs_dll_phy_update_cnt_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_dll_phy_update_cnt ody_spix_rf_minictrl_regs_dll_phy_update_cnt_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(uint64_t a)
{
	if (a <= 1)
		return 0x804000001030ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) ody_spix_rf_minictrl_regs_dll_phy_update_cnt_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) "SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_DLL_PHY_UPDATE_CNT(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_hf_offset_reg
 *
 * SPI Rf Minictrl Regs Hf Offset Register
 * This register is used to decode Legacy Hyper Flash and xSPI Profile 2.0 address into
 * interface address
 * taking into account "reserved" area in command format.
 */
union ody_spix_rf_minictrl_regs_hf_offset_reg {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_hf_offset_reg_s {
		uint32_t hf_offset_index             : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t hf_offset_size              : 6;
		uint32_t reserved_14_31              : 18;
	} s;
	/* struct ody_spix_rf_minictrl_regs_hf_offset_reg_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_hf_offset_reg ody_spix_rf_minictrl_regs_hf_offset_reg_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(uint64_t a)
{
	if (a <= 1)
		return 0x804000001020ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) ody_spix_rf_minictrl_regs_hf_offset_reg_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) "SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_HF_OFFSET_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_jedec_rst_timing_reg
 *
 * SPI Rf Minictrl Regs Jedec Rst Timing Register
 * This register is used to introduce relative device selection delays applicable for JEDEC reset
 * instruction.
 */
union ody_spix_rf_minictrl_regs_jedec_rst_timing_reg {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_jedec_rst_timing_reg_s {
		uint32_t tcsh_delay                  : 8;
		uint32_t tcsl_delay                  : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_rf_minictrl_regs_jedec_rst_timing_reg_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_jedec_rst_timing_reg ody_spix_rf_minictrl_regs_jedec_rst_timing_reg_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(uint64_t a)
{
	if (a <= 1)
		return 0x80400000100cll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) ody_spix_rf_minictrl_regs_jedec_rst_timing_reg_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) "SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_JEDEC_RST_TIMING_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_reset_pin_settings
 *
 * SPI Rf Minictrl Regs Reset Pin Settings Register
 * Software-controlled hardware RESET.
 */
union ody_spix_rf_minictrl_regs_reset_pin_settings {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_reset_pin_settings_s {
		uint32_t sw_ctrled_hw_rst            : 1;
		uint32_t rst_dq3_enable              : 1;
		uint32_t reserved_2_3                : 2;
		uint32_t sw_ctrled_hw_rst_option     : 1;
		uint32_t reserved_5_7                : 3;
		uint32_t sw_ctrled_hw_rst_bank0      : 1;
		uint32_t sw_ctrled_hw_rst_bank1      : 1;
		uint32_t sw_ctrled_hw_rst_bank2      : 1;
		uint32_t sw_ctrled_hw_rst_bank3      : 1;
		uint32_t sw_ctrled_hw_rst_bank4      : 1;
		uint32_t sw_ctrled_hw_rst_bank5      : 1;
		uint32_t sw_ctrled_hw_rst_bank6      : 1;
		uint32_t sw_ctrled_hw_rst_bank7      : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_spix_rf_minictrl_regs_reset_pin_settings_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_reset_pin_settings ody_spix_rf_minictrl_regs_reset_pin_settings_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(uint64_t a)
{
	if (a <= 1)
		return 0x804000001004ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) ody_spix_rf_minictrl_regs_reset_pin_settings_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_RESET_PIN_SETTINGS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_rst_recovery_reg
 *
 * SPI Rf Minictrl Regs Rst Recovery Register
 * This register is used to introduce relative reset recovery delay with respect to
 * generated xSPI Flash
 * Interface.
 */
union ody_spix_rf_minictrl_regs_rst_recovery_reg {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_rst_recovery_reg_s {
		uint32_t rst_recovery                : 32;
	} s;
	/* struct ody_spix_rf_minictrl_regs_rst_recovery_reg_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_rst_recovery_reg ody_spix_rf_minictrl_regs_rst_recovery_reg_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(uint64_t a)
{
	if (a <= 1)
		return 0x804000001014ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) ody_spix_rf_minictrl_regs_rst_recovery_reg_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) "SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_RST_RECOVERY_REG(a) (a), -1, -1, -1

/**
 * Register (NCB32b) spi#_rf_minictrl_regs_wp_settings
 *
 * SPI Rf Minictrl Regs Wp Settings Register
 * Write Protect.
 */
union ody_spix_rf_minictrl_regs_wp_settings {
	uint32_t u;
	struct ody_spix_rf_minictrl_regs_wp_settings_s {
		uint32_t wp                          : 1;
		uint32_t wp_enable                   : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_spix_rf_minictrl_regs_wp_settings_s cn; */
};
typedef union ody_spix_rf_minictrl_regs_wp_settings ody_spix_rf_minictrl_regs_wp_settings_t;

static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(uint64_t a)
{
	if (a <= 1)
		return 0x804000001000ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_RF_MINICTRL_REGS_WP_SETTINGS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) ody_spix_rf_minictrl_regs_wp_settings_t
#define bustype_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) CSR_TYPE_NCB32b
#define basename_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) "SPIX_RF_MINICTRL_REGS_WP_SETTINGS"
#define device_bar_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) (a)
#define arguments_ODY_SPIX_RF_MINICTRL_REGS_WP_SETTINGS(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_shim_cfg
 *
 * SPI Shim Configuration Register
 * This register allows configuration of various shim (xSPI) features. The fields XS_NCB_OOB_*
 * are captured when there are no outstanding OOB errors indicated in INTSTAT and a new OOB error
 * arrives. The fields XS_BAD_DMA_* are captured when there are no outstanding DMA errors
 * indicated in INTSTAT and a new DMA error arrives.
 */
union ody_spix_shim_cfg {
	uint64_t u;
	struct ody_spix_shim_cfg_s {
		uint64_t reserved_0_9                : 10;
		uint64_t dma_write_cmd               : 1;
		uint64_t reserved_11                 : 1;
		uint64_t dma_read_cmd                : 2;
		uint64_t reserved_14_39              : 26;
		uint64_t xm_bad_dma_type             : 4;
		uint64_t reserved_44_46              : 3;
		uint64_t xm_bad_dma_wrn              : 1;
		uint64_t xs_ncb_oob_osrc             : 12;
		uint64_t reserved_60_62              : 3;
		uint64_t xs_ncb_oob_wrn              : 1;
	} s;
	/* struct ody_spix_shim_cfg_s cn; */
};
typedef union ody_spix_shim_cfg ody_spix_shim_cfg_t;

static inline uint64_t ODY_SPIX_SHIM_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_SHIM_CFG(uint64_t a)
{
	if (a <= 1)
		return 0x804000001050ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_SHIM_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_SHIM_CFG(a) ody_spix_shim_cfg_t
#define bustype_ODY_SPIX_SHIM_CFG(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_SHIM_CFG(a) "SPIX_SHIM_CFG"
#define device_bar_ODY_SPIX_SHIM_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_SHIM_CFG(a) (a)
#define arguments_ODY_SPIX_SHIM_CFG(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_spare_reg#
 *
 * SPI Transfer Function Read Data Register
 * This register has the read data from SPI device
 */
union ody_spix_spare_regx {
	uint64_t u;
	struct ody_spix_spare_regx_s {
		uint64_t spare                       : 64;
	} s;
	/* struct ody_spix_spare_regx_s cn; */
};
typedef union ody_spix_spare_regx ody_spix_spare_regx_t;

static inline uint64_t ODY_SPIX_SPARE_REGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_SPARE_REGX(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b <= 1))
		return 0x804000008220ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
	__ody_csr_fatal("SPIX_SPARE_REGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_SPARE_REGX(a, b) ody_spix_spare_regx_t
#define bustype_ODY_SPIX_SPARE_REGX(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_SPARE_REGX(a, b) "SPIX_SPARE_REGX"
#define device_bar_ODY_SPIX_SPARE_REGX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_SPARE_REGX(a, b) (a)
#define arguments_ODY_SPIX_SPARE_REGX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) spi#_xfer_const
 *
 * SPI Constants Register
 */
union ody_spix_xfer_const {
	uint64_t u;
	struct ody_spix_xfer_const_s {
		uint64_t has_xfer_support            : 1;
		uint64_t read_buf_depth              : 5;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_spix_xfer_const_s cn; */
};
typedef union ody_spix_xfer_const ody_spix_xfer_const_t;

static inline uint64_t ODY_SPIX_XFER_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_CONST(uint64_t a)
{
	if (a <= 1)
		return 0x804000008230ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_XFER_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_CONST(a) ody_spix_xfer_const_t
#define bustype_ODY_SPIX_XFER_CONST(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_CONST(a) "SPIX_XFER_CONST"
#define device_bar_ODY_SPIX_XFER_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_CONST(a) (a)
#define arguments_ODY_SPIX_XFER_CONST(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_xfer_func_cmd
 *
 * SPI XFER Function Command Register
 * This register is used to issue the command for TX_RX_MODE, where the Xfer State Machine
 * is used to drive MOSI.
 */
union ody_spix_xfer_func_cmd {
	uint64_t u;
	struct ody_spix_xfer_func_cmd_s {
		uint64_t dir                         : 1;
		uint64_t reserved_1                  : 1;
		uint64_t size                        : 6;
		uint64_t addr                        : 24;
		uint64_t wdata                       : 32;
	} s;
	/* struct ody_spix_xfer_func_cmd_s cn; */
};
typedef union ody_spix_xfer_func_cmd ody_spix_xfer_func_cmd_t;

static inline uint64_t ODY_SPIX_XFER_FUNC_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_FUNC_CMD(uint64_t a)
{
	if (a <= 1)
		return 0x804000008200ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_XFER_FUNC_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_FUNC_CMD(a) ody_spix_xfer_func_cmd_t
#define bustype_ODY_SPIX_XFER_FUNC_CMD(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_FUNC_CMD(a) "SPIX_XFER_FUNC_CMD"
#define device_bar_ODY_SPIX_XFER_FUNC_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_FUNC_CMD(a) (a)
#define arguments_ODY_SPIX_XFER_FUNC_CMD(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_xfer_func_ctrl
 *
 * SPI XFER Function Control Register
 * This register is used to control the Xfer State Machine for both the modes.
 */
union ody_spix_xfer_func_ctrl {
	uint64_t u;
	struct ody_spix_xfer_func_ctrl_s {
		uint64_t xfer_func_start             : 1;
		uint64_t clk_drive_pol               : 1;
		uint64_t clk_capture_pol             : 1;
		uint64_t xfer_func_enable            : 1;
		uint64_t receive_enable              : 1;
		uint64_t tpm_device                  : 1;
		uint64_t cs_n_hold                   : 4;
		uint64_t flush_read_buf              : 1;
		uint64_t soft_reset                  : 1;
		uint64_t read_buf_watermark          : 6;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_spix_xfer_func_ctrl_s cn; */
};
typedef union ody_spix_xfer_func_ctrl ody_spix_xfer_func_ctrl_t;

static inline uint64_t ODY_SPIX_XFER_FUNC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_FUNC_CTRL(uint64_t a)
{
	if (a <= 1)
		return 0x804000008210ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_XFER_FUNC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_FUNC_CTRL(a) ody_spix_xfer_func_ctrl_t
#define bustype_ODY_SPIX_XFER_FUNC_CTRL(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_FUNC_CTRL(a) "SPIX_XFER_FUNC_CTRL"
#define device_bar_ODY_SPIX_XFER_FUNC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_FUNC_CTRL(a) (a)
#define arguments_ODY_SPIX_XFER_FUNC_CTRL(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_xfer_func_ctrl_read_data#
 *
 * SPI Transfer Function Read Data Register
 * This register has the read data from SPI device
 */
union ody_spix_xfer_func_ctrl_read_datax {
	uint64_t u;
	struct ody_spix_xfer_func_ctrl_read_datax_s {
		uint64_t rdata                       : 64;
	} s;
	/* struct ody_spix_xfer_func_ctrl_read_datax_s cn; */
};
typedef union ody_spix_xfer_func_ctrl_read_datax ody_spix_xfer_func_ctrl_read_datax_t;

static inline uint64_t ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(uint64_t a, uint64_t b)
{
	if ((a <= 1) && (b <= 31))
		return 0x804000008000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1f);
	__ody_csr_fatal("SPIX_XFER_FUNC_CTRL_READ_DATAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) ody_spix_xfer_func_ctrl_read_datax_t
#define bustype_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) "SPIX_XFER_FUNC_CTRL_READ_DATAX"
#define device_bar_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) (a)
#define arguments_ODY_SPIX_XFER_FUNC_CTRL_READ_DATAX(a, b) (a), (b), -1, -1

/**
 * Register (NCB) spi#_xfer_func_sts
 *
 * SPI XFER Function Control Read and write status Register
 * This register holds the status of the Xfer State Machine. This register should be
 * polled by software
 * to know read write operation is complete etc.
 */
union ody_spix_xfer_func_sts {
	uint64_t u;
	struct ody_spix_xfer_func_sts_s {
		uint64_t read_done                   : 1;
		uint64_t write_done                  : 1;
		uint64_t receive_buf_full            : 1;
		uint64_t receive_buf_empty           : 1;
		uint64_t xfer_ctrl_busy              : 1;
		uint64_t xfer_cur_state              : 3;
		uint64_t ready_received              : 1;
		uint64_t water_mark_reached          : 1;
		uint64_t write_buf_full              : 1;
		uint64_t write_buf_empty             : 1;
		uint64_t num_entries_write_buf       : 5;
		uint64_t num_entries_read_buf        : 6;
		uint64_t reserved_23_63              : 41;
	} s;
	/* struct ody_spix_xfer_func_sts_s cn; */
};
typedef union ody_spix_xfer_func_sts ody_spix_xfer_func_sts_t;

static inline uint64_t ODY_SPIX_XFER_FUNC_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_FUNC_STS(uint64_t a)
{
	if (a <= 1)
		return 0x804000008218ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_XFER_FUNC_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_FUNC_STS(a) ody_spix_xfer_func_sts_t
#define bustype_ODY_SPIX_XFER_FUNC_STS(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_FUNC_STS(a) "SPIX_XFER_FUNC_STS"
#define device_bar_ODY_SPIX_XFER_FUNC_STS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_FUNC_STS(a) (a)
#define arguments_ODY_SPIX_XFER_FUNC_STS(a) (a), -1, -1, -1

/**
 * Register (NCB) spi#_xfer_func_wdata
 *
 * SPI XFER Function Write Data Register
 * This register is used in TX_RX_MODE of Xfer State Machine when the SIZE is more than
 * 4 bytes and upto 64 bytes.
 */
union ody_spix_xfer_func_wdata {
	uint64_t u;
	struct ody_spix_xfer_func_wdata_s {
		uint64_t wdata                       : 64;
	} s;
	/* struct ody_spix_xfer_func_wdata_s cn; */
};
typedef union ody_spix_xfer_func_wdata ody_spix_xfer_func_wdata_t;

static inline uint64_t ODY_SPIX_XFER_FUNC_WDATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_SPIX_XFER_FUNC_WDATA(uint64_t a)
{
	if (a <= 1)
		return 0x804000008208ll + 0x1000000000ll * ((a) & 0x1);
	__ody_csr_fatal("SPIX_XFER_FUNC_WDATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_SPIX_XFER_FUNC_WDATA(a) ody_spix_xfer_func_wdata_t
#define bustype_ODY_SPIX_XFER_FUNC_WDATA(a) CSR_TYPE_NCB
#define basename_ODY_SPIX_XFER_FUNC_WDATA(a) "SPIX_XFER_FUNC_WDATA"
#define device_bar_ODY_SPIX_XFER_FUNC_WDATA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_SPIX_XFER_FUNC_WDATA(a) (a)
#define arguments_ODY_SPIX_XFER_FUNC_WDATA(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_SPI_H__ */
