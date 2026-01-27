#ifndef __ODY_CSRS_RST_H__
#define __ODY_CSRS_RST_H__
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
 * RST.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rst_bar_e
 *
 * RST Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_RST_BAR_E_RST_PF_BAR0 (0x87e006000000ll)
#define ODY_RST_BAR_E_RST_PF_BAR0_SIZE 0x10000ull
#define ODY_RST_BAR_E_RST_PF_BAR2 (0x87e00a000000ll)
#define ODY_RST_BAR_E_RST_PF_BAR2_SIZE 0x10000ull
#define ODY_RST_BAR_E_RST_PF_BAR4 (0x87e006f00000ll)
#define ODY_RST_BAR_E_RST_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration rst_boot_method_e
 *
 * RST Primary Boot-strap Method Enumeration
 * Enumerates the primary (first choice) and secondary (second choice) boot
 * device. Primary boot method is selected with the straps
 * GPIO_STRAP_PIN_E::BOOT_METHOD2..0, and secondary is selected with the straps
 * GPIO_STRAP_PIN_E::BOOT_METHOD5..3.
 *
 * To disable the secondary method, use ::REMOTE.
 */
#define ODY_RST_BOOT_METHOD_E_I3C3 (0)
#define ODY_RST_BOOT_METHOD_E_I3C4 (1)
#define ODY_RST_BOOT_METHOD_E_REMOTE (7)
#define ODY_RST_BOOT_METHOD_E_SPI0_CS0 (2)
#define ODY_RST_BOOT_METHOD_E_SPI0_CS1 (3)
#define ODY_RST_BOOT_METHOD_E_SPI1_CS0 (4)
#define ODY_RST_BOOT_METHOD_E_SPI1_CS1 (5)
#define ODY_RST_BOOT_METHOD_E_UART (6)

/**
 * Enumeration rst_dev_e
 *
 * Programmable Reset Device Enumeration
 * Enumerates devices that have programmable reset domains, and index {a} of RST_DEV_MAP().
 */
#define ODY_RST_DEV_E_AVS (1)
#define ODY_RST_DEV_E_EMMC (0x19)
#define ODY_RST_DEV_E_I3CX(a) (0x10 + (a))
#define ODY_RST_DEV_E_MPIX(a) (2 + (a))
#define ODY_RST_DEV_E_RFIFX(a) (0x28 + (a))
#define ODY_RST_DEV_E_ROC_OCLA (0x18)
#define ODY_RST_DEV_E_SGPIO (0x17)
#define ODY_RST_DEV_E_SMI (0x16)
#define ODY_RST_DEV_E_TWSX(a) (4 + (a))
#define ODY_RST_DEV_E_UAAX(a) (0x1a + (a))

/**
 * Enumeration rst_domain_e
 *
 * RST Domain Enumeration
 * This enumerates the values of RST_DEV_MAP()[DMN].
 */
#define ODY_RST_DOMAIN_E_BPHY (5)
#define ODY_RST_DOMAIN_E_CHIP (0)
#define ODY_RST_DOMAIN_E_COLD (6)
#define ODY_RST_DOMAIN_E_CORE (1)
#define ODY_RST_DOMAIN_E_MCP (2)
#define ODY_RST_DOMAIN_E_OFF (7)
#define ODY_RST_DOMAIN_E_SCP (3)
#define ODY_RST_DOMAIN_E_XCP2 (4)

/**
 * Enumeration rst_int_vec_e
 *
 * RST MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_RST_INT_VEC_E_INTS (0)

/**
 * Enumeration rst_pll_e
 *
 * RST PLL Enumeration
 * Enumerates the values of RST_PLL() and RST_MAN_PLL().
 */
#define ODY_RST_PLL_E_BCLK (0xc)
#define ODY_RST_PLL_E_BCNCLK (0xd)
#define ODY_RST_PLL_E_CPTCLK (5)
#define ODY_RST_PLL_E_DFICLK (4)
#define ODY_RST_PLL_E_DSPCLK (0xe)
#define ODY_RST_PLL_E_IOCLK (3)
#define ODY_RST_PLL_E_JESDCLK (0xf)
#define ODY_RST_PLL_E_MESHCLK (1)
#define ODY_RST_PLL_E_NCLK (0xb)
#define ODY_RST_PLL_E_NETCLK (2)
#define ODY_RST_PLL_E_PCIE0CLK (6)
#define ODY_RST_PLL_E_PCIE1CLK (7)
#define ODY_RST_PLL_E_PCIE2CLK (8)
#define ODY_RST_PLL_E_PCIE3CLK (9)
#define ODY_RST_PLL_E_SCLK (0)

/**
 * Enumeration rst_pll_sel_e
 *
 * RST PLL Selection Enumeration
 * Enumerates the values of RST_PLL()[NEXT_PLL_SEL] and RST_PLL()[CUR_PLL_SEL].
 */
#define ODY_RST_PLL_SEL_E_ARO (6)
#define ODY_RST_PLL_SEL_E_BYPASS (2)
#define ODY_RST_PLL_SEL_E_OFF (3)
#define ODY_RST_PLL_SEL_E_PLL0 (4)
#define ODY_RST_PLL_SEL_E_PLL1 (5)
#define ODY_RST_PLL_SEL_E_REFCLK (1)
#define ODY_RST_PLL_SEL_E_RSVD (7)
#define ODY_RST_PLL_SEL_E_RUNT (0)

/**
 * Enumeration rst_pllro_cfg_status_mux_e
 *
 * RST PLLRO Status Mux Selection Enumeration
 * This enumerates the values of RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX].
 * All other bits are assumed to be 0.
 */
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_EROSEL_RESULT (0)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_ARO_CLK_CNT (4)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_DELTA (5)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_REF_CLK_CNT (1)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_VDROOP (6)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_VDROOP_SUM (7)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_PROFILE_VDROOP_TOTAL_CNT (2)
#define ODY_RST_PLLRO_CFG_STATUS_MUX_E_RST_ROU_ROS_TRGT (3)

/**
 * Enumeration rst_source_e
 *
 * RST Cause Enumeration
 * Enumerates the reset sources for both reset domain mapping and cause of last reset,
 * corresponding to the bit numbers of RST_LBOOT.
 */
#define ODY_RST_SOURCE_E_BPHY_RESET_PIN (0x30)
#define ODY_RST_SOURCE_E_BPHY_SOFT (0x33)
#define ODY_RST_SOURCE_E_CHIPKILL (4)
#define ODY_RST_SOURCE_E_CHIP_RESET_PIN (2)
#define ODY_RST_SOURCE_E_CHIP_SOFT (3)
#define ODY_RST_SOURCE_E_COLD_SOFT (1)
#define ODY_RST_SOURCE_E_CORE_RESET_PIN (0xb)
#define ODY_RST_SOURCE_E_CORE_SOFT (0xc)
#define ODY_RST_SOURCE_E_CORE_WDOG (0xd)
#define ODY_RST_SOURCE_E_DCOK_PIN (0)
#define ODY_RST_SOURCE_E_MCP_RESET_PIN (8)
#define ODY_RST_SOURCE_E_MCP_SOFT (9)
#define ODY_RST_SOURCE_E_MCP_SYSREQ (0x35)
#define ODY_RST_SOURCE_E_MCP_WDOG (0xa)
#define ODY_RST_SOURCE_E_PEM_CHIPX(a) (0x11 + 2 * (a))
#define ODY_RST_SOURCE_E_PEM_COREX(a) (0x10 + 2 * (a))
#define ODY_RST_SOURCE_E_RSVD_32 (0x32)
#define ODY_RST_SOURCE_E_RSVD_E (0xe)
#define ODY_RST_SOURCE_E_RSVD_F (0xf)
#define ODY_RST_SOURCE_E_SCP_RESET_PIN (5)
#define ODY_RST_SOURCE_E_SCP_SOFT (6)
#define ODY_RST_SOURCE_E_SCP_SYSREQ (0x36)
#define ODY_RST_SOURCE_E_SCP_WDOG (7)
#define ODY_RST_SOURCE_E_XCP2_SOFT (0x31)
#define ODY_RST_SOURCE_E_XCP2_SYSREQ (0x37)
#define ODY_RST_SOURCE_E_XCP2_WDOG (0x34)

/**
 * Enumeration rst_test_pll_rsvd4_e
 *
 * RST TEST_PLL[TEST_RSVD]=4 Enumeration
 * This enumerates the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
#define ODY_RST_TEST_PLL_RSVD4_E_PLL0_VOLTAGE0 (0)
#define ODY_RST_TEST_PLL_RSVD4_E_PLL0_VOLTAGE1 (1)
#define ODY_RST_TEST_PLL_RSVD4_E_PLL0_VOLTAGE2 (2)
#define ODY_RST_TEST_PLL_RSVD4_E_PLL1_VOLTAGE0 (4)
#define ODY_RST_TEST_PLL_RSVD4_E_PLL1_VOLTAGE1 (5)
#define ODY_RST_TEST_PLL_RSVD4_E_PLL1_VOLTAGE2 (6)
#define ODY_RST_TEST_PLL_RSVD4_E_TEST_ID0 (7)
#define ODY_RST_TEST_PLL_RSVD4_E_TEST_ID1 (8)
#define ODY_RST_TEST_PLL_RSVD4_E_TEST_ID2 (9)
#define ODY_RST_TEST_PLL_RSVD4_E_TEST_ID3 (0xa)
#define ODY_RST_TEST_PLL_RSVD4_E_TEST_ID4 (0xb)

/**
 * Structure rst_boot_stat_s
 *
 * BOOT_STATUS field Structure
 * The ROM boot code stores this data in the RST_BOOT_STATUS register, once per each boot attempt.
 * Bits 31:0 For Primary partition.
 * Bits 63:32 For Secondary partition.
 */
union ody_rst_boot_stat_s {
	uint64_t u;
	struct ody_rst_boot_stat_s_s {
		uint64_t p_local_error_code          : 16;
		uint64_t p_error_module              : 8;
		uint64_t reserved_24_27              : 4;
		uint64_t p_boot_method               : 3;
		uint64_t p_image_partition           : 1;
		uint64_t s_local_error_code          : 16;
		uint64_t s_error_module              : 8;
		uint64_t reserved_56_59              : 4;
		uint64_t s_boot_method               : 3;
		uint64_t s_image_partition           : 1;
	} s;
	/* struct ody_rst_boot_stat_s_s cn; */
};

/**
 * Structure rst_erosel_result_s
 *
 * RST EROSEL STATUS Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 0.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 0.
 * All other bits are assumed to be 0.
 */
union ody_rst_erosel_result_s {
	uint32_t u;
	struct ody_rst_erosel_result_s_s {
		uint32_t reserved_0_9                : 10;
		uint32_t dd_cell_vdroop              : 1;
		uint32_t calib_lock_status           : 1;
		uint32_t ros_calib_min_status        : 1;
		uint32_t rou_calib_min_status        : 1;
		uint32_t reserved_14_19              : 6;
		uint32_t dd_calib_error_code         : 2;
		uint32_t dd_calib_error              : 1;
		uint32_t dd_calib_done               : 1;
		uint32_t dd_calib_ecnt_erosel_result : 8;
	} s;
	/* struct ody_rst_erosel_result_s_s cn; */
};

/**
 * Structure rst_profile_aro_clk_cnt_s
 *
 * RST PLLRO Profile ARO Clock Count Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 4.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 4.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_aro_clk_cnt_s {
	uint32_t u;
	struct ody_rst_profile_aro_clk_cnt_s_s {
		uint32_t profile_aro_clk_cnt         : 31;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_aro_clk_cnt_s_s cn; */
};

/**
 * Structure rst_profile_delta_s
 *
 * RST PLLRO Profile Delta Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 5.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 5.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_delta_s {
	uint32_t u;
	struct ody_rst_profile_delta_s_s {
		uint32_t profile_max_pos_cpu_cnt_delta : 14;
		uint32_t profile_max_neg_cpu_cnt_delta : 14;
		uint32_t reserved_28_30              : 3;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_delta_s_s cn; */
};

/**
 * Structure rst_profile_ref_clk_cnt_s
 *
 * RST PLLRO Profile Refclk Count Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 1.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 1.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_ref_clk_cnt_s {
	uint32_t u;
	struct ody_rst_profile_ref_clk_cnt_s_s {
		uint32_t profile_ref_clk_cnt         : 31;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_ref_clk_cnt_s_s cn; */
};

/**
 * Structure rst_profile_vdroop_s
 *
 * RST PLLRO Profile Vdroop Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 6.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 6.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_vdroop_s {
	uint32_t u;
	struct ody_rst_profile_vdroop_s_s {
		uint32_t profile_vdroop_max_duration : 21;
		uint32_t profile_vdroop_edge_cnt     : 10;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_vdroop_s_s cn; */
};

/**
 * Structure rst_profile_vdroop_sum_s
 *
 * RST PLLRO Profile ARO Clock Count Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 7.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 7.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_vdroop_sum_s {
	uint32_t u;
	struct ody_rst_profile_vdroop_sum_s_s {
		uint32_t profile_vdroop_sum_duration : 31;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_vdroop_sum_s_s cn; */
};

/**
 * Structure rst_profile_vdroop_total_cnt_s
 *
 * RST PLLRO Profile Refclk Count Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 2.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 2.
 * All other bits are assumed to be 0.
 */
union ody_rst_profile_vdroop_total_cnt_s {
	uint32_t u;
	struct ody_rst_profile_vdroop_total_cnt_s_s {
		uint32_t profile_vdroop_total_cnt    : 31;
		uint32_t v                           : 1;
	} s;
	/* struct ody_rst_profile_vdroop_total_cnt_s_s cn; */
};

/**
 * Structure rst_rou_ros_trgt_s
 *
 * RST PLLRO ROU and ROS Target Structure
 * This structure describes the fields used in MRC_ARO_STATUS when a previous write to
 * RST_TEST_PLL\<RST_PLL_E::MESHCLK\>[RSVD] = 5 with RST_TEST_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 3.
 * This structure describes the fields used in APA_ARO_STATUSn when a previous write to
 * APA\<n\>_TEST_PLL[RSVD] = 5 with RST_TEST_PLL_RSVD5_S[PLLRO_CFG_STATUS_MUX] = 3.
 * All other bits are assumed to be 0.
 */
union ody_rst_rou_ros_trgt_s {
	uint32_t u;
	struct ody_rst_rou_ros_trgt_s_s {
		uint32_t ros_trgt_p1                 : 8;
		uint32_t ros_trgt_p2                 : 8;
		uint32_t rou_trgt_p1                 : 8;
		uint32_t rou_trgt_p2                 : 8;
	} s;
	/* struct ody_rst_rou_ros_trgt_s_s cn; */
};

/**
 * Structure rst_test_pll_rsvd4_s
 *
 * RST TEST_PLL[TEST_RSVD]=4 Structure
 * This structure specifies the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
union ody_rst_test_pll_rsvd4_s {
	uint32_t u;
	struct ody_rst_test_pll_rsvd4_s_s {
		uint32_t pll0_voltage                : 3;
		uint32_t pll1_voltage                : 4;
		uint32_t test_id                     : 5;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_rst_test_pll_rsvd4_s_s cn; */
};

/**
 * Structure rst_test_pll_rsvd5_s
 *
 * RST TEST_PLL[TEST_RSVD]=5 Structure
 * This structure specifies the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
union ody_rst_test_pll_rsvd5_s {
	uint32_t u;
	struct ody_rst_test_pll_rsvd5_s_s {
		uint32_t pllro_cfg_usr_rst           : 1;
		uint32_t pllro_cfg_div_en            : 1;
		uint32_t pllro_cfg_clkout_en         : 1;
		uint32_t pllro_cfg_usr_sel_ro_trgt   : 1;
		uint32_t pllro_cfg_usr_cntrs_init_ld : 1;
		uint32_t pllro_cfg_calib_mode        : 1;
		uint32_t pllro_cfg_ref_cnt_frq_grd   : 2;
		uint32_t pllro_cfg_locktime_opt_dis  : 1;
		uint32_t pllro_cfg_select_u          : 1;
		uint32_t pllro_cfg_select_s          : 1;
		uint32_t pllro_cfg_usr_update_ro_trgt : 1;
		uint32_t pllro_cfg_ref_cnt_fctr      : 4;
		uint32_t aro_mux_disable             : 1;
		uint32_t pllro_cfg_status_mux        : 3;
		uint32_t droop_divider               : 2;
		uint32_t droop_recovery              : 6;
		uint32_t pll0_uses_droop             : 1;
		uint32_t pll1_uses_droop             : 1;
		uint32_t droop_test                  : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_rst_test_pll_rsvd5_s_s cn; */
};

/**
 * Structure rst_test_pll_rsvd6_s
 *
 * RST TEST_PLL[TEST_RSVD]=6 Structure
 * This structure defines the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
union ody_rst_test_pll_rsvd6_s {
	uint32_t u;
	struct ody_rst_test_pll_rsvd6_s_s {
		uint32_t pllro_cfg_safe_ro_trgt      : 8;
		uint32_t pllro_cfg_rou_trgt_min_val  : 8;
		uint32_t pllro_cfg_ros_trgt_min_val  : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_rst_test_pll_rsvd6_s_s cn; */
};

/**
 * Structure rst_test_pll_rsvd7_droop_s
 *
 * RST TEST_PLL[TEST_RSVD]=7 Droop Detector Structure
 * This structure defines the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
union ody_rst_test_pll_rsvd7_droop_s {
	uint32_t u;
	struct ody_rst_test_pll_rsvd7_droop_s_s {
		uint32_t erosel                      : 4;
		uint32_t ecnt                        : 4;
		uint32_t srosel                      : 4;
		uint32_t scnt                        : 2;
		uint32_t dd_cell_enable              : 1;
		uint32_t dd_calb_go                  : 1;
		uint32_t aro_slowdown                : 4;
		uint32_t dd_recovery_delay           : 4;
		uint32_t frequency_governer_disable  : 1;
		uint32_t dd_ctrl_enable              : 1;
		uint32_t profile_enable              : 1;
		uint32_t aro_target_find_go          : 1;
		uint32_t profile_window_size         : 2;
		uint32_t profile_win_start           : 1;
		uint32_t profile_one_shot            : 1;
	} s;
	/* struct ody_rst_test_pll_rsvd7_droop_s_s cn; */
};

/**
 * Structure rst_test_pll_rsvd7_s
 *
 * RST TEST_PLL[TEST_RSVD]=7 Structure
 * This enumerates the values of RST_TEST_PLL()[STOP_CNT\<\>] bits.
 * All other bits are assumed to be 0.
 */
union ody_rst_test_pll_rsvd7_s {
	uint32_t u;
	struct ody_rst_test_pll_rsvd7_s_s {
		uint32_t pllro_cfg_usr_rou_trgt_p2   : 8;
		uint32_t pllro_cfg_usr_rou_trgt_p1   : 8;
		uint32_t pllro_cfg_usr_ros_trgt_p2   : 8;
		uint32_t pllro_cfg_usr_ros_trgt_p1   : 8;
	} s;
	/* struct ody_rst_test_pll_rsvd7_s_s cn; */
};

/**
 * Register (RSL) rst_ap_available#
 *
 * RST Physical Core Availability Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_ap_availablex {
	uint64_t u;
	struct ody_rst_ap_availablex_s {
		uint64_t present                     : 64;
	} s;
	/* struct ody_rst_ap_availablex_s cn; */
};
typedef union ody_rst_ap_availablex ody_rst_ap_availablex_t;

static inline uint64_t ODY_RST_AP_AVAILABLEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_AP_AVAILABLEX(uint64_t a)
{
	if (a <= 3)
		return 0x87e006001730ll + 8ll * ((a) & 0x3);
	__ody_csr_fatal("RST_AP_AVAILABLEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_AP_AVAILABLEX(a) ody_rst_ap_availablex_t
#define bustype_ODY_RST_AP_AVAILABLEX(a) CSR_TYPE_RSL
#define basename_ODY_RST_AP_AVAILABLEX(a) "RST_AP_AVAILABLEX"
#define device_bar_ODY_RST_AP_AVAILABLEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_AP_AVAILABLEX(a) (a)
#define arguments_ODY_RST_AP_AVAILABLEX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_bist_active
 *
 * RST BIST Active Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_bist_active {
	uint64_t u;
	struct ody_rst_bist_active_s {
		uint64_t chip                        : 1;
		uint64_t core                        : 1;
		uint64_t mcp                         : 1;
		uint64_t scp                         : 1;
		uint64_t bphy                        : 1;
		uint64_t xcp2                        : 1;
		uint64_t csr                         : 1;
		uint64_t reserved_7_63               : 57;
	} s;
	/* struct ody_rst_bist_active_s cn; */
};
typedef union ody_rst_bist_active ody_rst_bist_active_t;

#define ODY_RST_BIST_ACTIVE ODY_RST_BIST_ACTIVE_FUNC()
static inline uint64_t ODY_RST_BIST_ACTIVE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_BIST_ACTIVE_FUNC(void)
{
	return 0x87e006001890ll;
}

#define typedef_ODY_RST_BIST_ACTIVE ody_rst_bist_active_t
#define bustype_ODY_RST_BIST_ACTIVE CSR_TYPE_RSL
#define basename_ODY_RST_BIST_ACTIVE "RST_BIST_ACTIVE"
#define device_bar_ODY_RST_BIST_ACTIVE 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_BIST_ACTIVE 0
#define arguments_ODY_RST_BIST_ACTIVE -1, -1, -1, -1

/**
 * Register (RSL) rst_boot
 *
 * RST Boot Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_boot {
	uint64_t u;
	struct ody_rst_boot_s {
		uint64_t rboot_pin                   : 1;
		uint64_t rboot_scp                   : 1;
		uint64_t rboot_mcp                   : 1;
		uint64_t rboot_xcp2                  : 1;
		uint64_t reserved_4_62               : 59;
		uint64_t chipkill                    : 1;
	} s;
	/* struct ody_rst_boot_s cn; */
};
typedef union ody_rst_boot ody_rst_boot_t;

#define ODY_RST_BOOT ODY_RST_BOOT_FUNC()
static inline uint64_t ODY_RST_BOOT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_BOOT_FUNC(void)
{
	return 0x87e006001600ll;
}

#define typedef_ODY_RST_BOOT ody_rst_boot_t
#define bustype_ODY_RST_BOOT CSR_TYPE_RSL
#define basename_ODY_RST_BOOT "RST_BOOT"
#define device_bar_ODY_RST_BOOT 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_BOOT 0
#define arguments_ODY_RST_BOOT -1, -1, -1, -1

/**
 * Register (RSL) rst_boot_status
 *
 * RST Boot Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_boot_status {
	uint64_t u;
	struct ody_rst_boot_status_s {
		uint64_t stat0                       : 16;
		uint64_t stat1                       : 16;
		uint64_t stat2                       : 16;
		uint64_t stat3                       : 16;
	} s;
	/* struct ody_rst_boot_status_s cn; */
};
typedef union ody_rst_boot_status ody_rst_boot_status_t;

#define ODY_RST_BOOT_STATUS ODY_RST_BOOT_STATUS_FUNC()
static inline uint64_t ODY_RST_BOOT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_BOOT_STATUS_FUNC(void)
{
	return 0x87e006001800ll;
}

#define typedef_ODY_RST_BOOT_STATUS ody_rst_boot_status_t
#define bustype_ODY_RST_BOOT_STATUS CSR_TYPE_RSL
#define basename_ODY_RST_BOOT_STATUS "RST_BOOT_STATUS"
#define device_bar_ODY_RST_BOOT_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_BOOT_STATUS 0
#define arguments_ODY_RST_BOOT_STATUS -1, -1, -1, -1

/**
 * Register (RSL) rst_bphy_domain_w1c
 *
 * RST BPHY Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_bphy_domain_w1c {
	uint64_t u;
	struct ody_rst_bphy_domain_w1c_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_bphy_domain_w1c_s cn; */
};
typedef union ody_rst_bphy_domain_w1c ody_rst_bphy_domain_w1c_t;

#define ODY_RST_BPHY_DOMAIN_W1C ODY_RST_BPHY_DOMAIN_W1C_FUNC()
static inline uint64_t ODY_RST_BPHY_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_BPHY_DOMAIN_W1C_FUNC(void)
{
	return 0x87e006001858ll;
}

#define typedef_ODY_RST_BPHY_DOMAIN_W1C ody_rst_bphy_domain_w1c_t
#define bustype_ODY_RST_BPHY_DOMAIN_W1C CSR_TYPE_RSL
#define basename_ODY_RST_BPHY_DOMAIN_W1C "RST_BPHY_DOMAIN_W1C"
#define device_bar_ODY_RST_BPHY_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_BPHY_DOMAIN_W1C 0
#define arguments_ODY_RST_BPHY_DOMAIN_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_bphy_domain_w1s
 *
 * RST BPHY Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_bphy_domain_w1s {
	uint64_t u;
	struct ody_rst_bphy_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_bphy_domain_w1s_s cn; */
};
typedef union ody_rst_bphy_domain_w1s ody_rst_bphy_domain_w1s_t;

#define ODY_RST_BPHY_DOMAIN_W1S ODY_RST_BPHY_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_BPHY_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_BPHY_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001850ll;
}

#define typedef_ODY_RST_BPHY_DOMAIN_W1S ody_rst_bphy_domain_w1s_t
#define bustype_ODY_RST_BPHY_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_BPHY_DOMAIN_W1S "RST_BPHY_DOMAIN_W1S"
#define device_bar_ODY_RST_BPHY_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_BPHY_DOMAIN_W1S 0
#define arguments_ODY_RST_BPHY_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_cfg
 *
 * RST Configuration Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_cfg {
	uint64_t u;
	struct ody_rst_cfg_s {
		uint64_t clr_bist                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_cfg_s cn; */
};
typedef union ody_rst_cfg ody_rst_cfg_t;

#define ODY_RST_CFG ODY_RST_CFG_FUNC()
static inline uint64_t ODY_RST_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CFG_FUNC(void)
{
	return 0x87e006001610ll;
}

#define typedef_ODY_RST_CFG ody_rst_cfg_t
#define bustype_ODY_RST_CFG CSR_TYPE_RSL
#define basename_ODY_RST_CFG "RST_CFG"
#define device_bar_ODY_RST_CFG 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CFG 0
#define arguments_ODY_RST_CFG -1, -1, -1, -1

/**
 * Register (RSL) rst_chip_domain_w1s
 *
 * RST Chip Domain Soft Pulse Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_chip_domain_w1s {
	uint64_t u;
	struct ody_rst_chip_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_chip_domain_w1s_s cn; */
};
typedef union ody_rst_chip_domain_w1s ody_rst_chip_domain_w1s_t;

#define ODY_RST_CHIP_DOMAIN_W1S ODY_RST_CHIP_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_CHIP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CHIP_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001810ll;
}

#define typedef_ODY_RST_CHIP_DOMAIN_W1S ody_rst_chip_domain_w1s_t
#define bustype_ODY_RST_CHIP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_CHIP_DOMAIN_W1S "RST_CHIP_DOMAIN_W1S"
#define device_bar_ODY_RST_CHIP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CHIP_DOMAIN_W1S 0
#define arguments_ODY_RST_CHIP_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_ckill
 *
 * RST Chipkill Timer Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_ckill {
	uint64_t u;
	struct ody_rst_ckill_s {
		uint64_t timer                       : 47;
		uint64_t reserved_47_63              : 17;
	} s;
	/* struct ody_rst_ckill_s cn; */
};
typedef union ody_rst_ckill ody_rst_ckill_t;

#define ODY_RST_CKILL ODY_RST_CKILL_FUNC()
static inline uint64_t ODY_RST_CKILL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CKILL_FUNC(void)
{
	return 0x87e006001638ll;
}

#define typedef_ODY_RST_CKILL ody_rst_ckill_t
#define bustype_ODY_RST_CKILL CSR_TYPE_RSL
#define basename_ODY_RST_CKILL "RST_CKILL"
#define device_bar_ODY_RST_CKILL 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CKILL 0
#define arguments_ODY_RST_CKILL -1, -1, -1, -1

/**
 * Register (RSL) rst_clk_ctl
 *
 * RST Clock Control Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_clk_ctl {
	uint64_t u;
	struct ody_rst_clk_ctl_s {
		uint64_t refclk_src                  : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_clk_ctl_s cn; */
};
typedef union ody_rst_clk_ctl ody_rst_clk_ctl_t;

#define ODY_RST_CLK_CTL ODY_RST_CLK_CTL_FUNC()
static inline uint64_t ODY_RST_CLK_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CLK_CTL_FUNC(void)
{
	return 0x87e0060018a0ll;
}

#define typedef_ODY_RST_CLK_CTL ody_rst_clk_ctl_t
#define bustype_ODY_RST_CLK_CTL CSR_TYPE_RSL
#define basename_ODY_RST_CLK_CTL "RST_CLK_CTL"
#define device_bar_ODY_RST_CLK_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CLK_CTL 0
#define arguments_ODY_RST_CLK_CTL -1, -1, -1, -1

/**
 * Register (RSL) rst_clk_freq
 *
 * RST PLL Clock Frequency Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_clk_freq {
	uint64_t u;
	struct ody_rst_clk_freq_s {
		uint64_t cnt                         : 37;
		uint64_t reserved_37_63              : 27;
	} s;
	/* struct ody_rst_clk_freq_s cn; */
};
typedef union ody_rst_clk_freq ody_rst_clk_freq_t;

#define ODY_RST_CLK_FREQ ODY_RST_CLK_FREQ_FUNC()
static inline uint64_t ODY_RST_CLK_FREQ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CLK_FREQ_FUNC(void)
{
	return 0x87e0060016b8ll;
}

#define typedef_ODY_RST_CLK_FREQ ody_rst_clk_freq_t
#define bustype_ODY_RST_CLK_FREQ CSR_TYPE_RSL
#define basename_ODY_RST_CLK_FREQ "RST_CLK_FREQ"
#define device_bar_ODY_RST_CLK_FREQ 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CLK_FREQ 0
#define arguments_ODY_RST_CLK_FREQ -1, -1, -1, -1

/**
 * Register (RSL) rst_clk_sample
 *
 * RST PLL Clock Sample Period Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_clk_sample {
	uint64_t u;
	struct ody_rst_clk_sample_s {
		uint64_t window                      : 32;
		uint64_t reserved_32_62              : 31;
		uint64_t not_done                    : 1;
	} s;
	/* struct ody_rst_clk_sample_s cn; */
};
typedef union ody_rst_clk_sample ody_rst_clk_sample_t;

#define ODY_RST_CLK_SAMPLE ODY_RST_CLK_SAMPLE_FUNC()
static inline uint64_t ODY_RST_CLK_SAMPLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CLK_SAMPLE_FUNC(void)
{
	return 0x87e0060016b0ll;
}

#define typedef_ODY_RST_CLK_SAMPLE ody_rst_clk_sample_t
#define bustype_ODY_RST_CLK_SAMPLE CSR_TYPE_RSL
#define basename_ODY_RST_CLK_SAMPLE "RST_CLK_SAMPLE"
#define device_bar_ODY_RST_CLK_SAMPLE 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CLK_SAMPLE 0
#define arguments_ODY_RST_CLK_SAMPLE -1, -1, -1, -1

/**
 * Register (RSL) rst_cold_data#
 *
 * RST Cold Reset Data Registers
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_cold_datax {
	uint64_t u;
	struct ody_rst_cold_datax_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_rst_cold_datax_s cn; */
};
typedef union ody_rst_cold_datax ody_rst_cold_datax_t;

static inline uint64_t ODY_RST_COLD_DATAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_COLD_DATAX(uint64_t a)
{
	if (a <= 5)
		return 0x87e0060017c0ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("RST_COLD_DATAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_COLD_DATAX(a) ody_rst_cold_datax_t
#define bustype_ODY_RST_COLD_DATAX(a) CSR_TYPE_RSL
#define basename_ODY_RST_COLD_DATAX(a) "RST_COLD_DATAX"
#define device_bar_ODY_RST_COLD_DATAX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_COLD_DATAX(a) (a)
#define arguments_ODY_RST_COLD_DATAX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_cold_domain_w1s
 *
 * RST Cold Domain Pulse Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_cold_domain_w1s {
	uint64_t u;
	struct ody_rst_cold_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_cold_domain_w1s_s cn; */
};
typedef union ody_rst_cold_domain_w1s ody_rst_cold_domain_w1s_t;

#define ODY_RST_COLD_DOMAIN_W1S ODY_RST_COLD_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_COLD_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_COLD_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001808ll;
}

#define typedef_ODY_RST_COLD_DOMAIN_W1S ody_rst_cold_domain_w1s_t
#define bustype_ODY_RST_COLD_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_COLD_DOMAIN_W1S "RST_COLD_DOMAIN_W1S"
#define device_bar_ODY_RST_COLD_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_COLD_DOMAIN_W1S 0
#define arguments_ODY_RST_COLD_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_const
 *
 * RST Constant Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_const {
	uint64_t u;
	struct ody_rst_const_s {
		uint64_t pems                        : 8;
		uint64_t rst_devs                    : 8;
		uint64_t plls                        : 16;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_rst_const_s cn; */
};
typedef union ody_rst_const ody_rst_const_t;

#define ODY_RST_CONST ODY_RST_CONST_FUNC()
static inline uint64_t ODY_RST_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CONST_FUNC(void)
{
	return 0x87e0060018f8ll;
}

#define typedef_ODY_RST_CONST ody_rst_const_t
#define bustype_ODY_RST_CONST CSR_TYPE_RSL
#define basename_ODY_RST_CONST "RST_CONST"
#define device_bar_ODY_RST_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CONST 0
#define arguments_ODY_RST_CONST -1, -1, -1, -1

/**
 * Register (RSL) rst_core_domain_w1c
 *
 * RST Core Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_core_domain_w1c {
	uint64_t u;
	struct ody_rst_core_domain_w1c_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_core_domain_w1c_s cn; */
};
typedef union ody_rst_core_domain_w1c ody_rst_core_domain_w1c_t;

#define ODY_RST_CORE_DOMAIN_W1C ODY_RST_CORE_DOMAIN_W1C_FUNC()
static inline uint64_t ODY_RST_CORE_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CORE_DOMAIN_W1C_FUNC(void)
{
	return 0x87e006001828ll;
}

#define typedef_ODY_RST_CORE_DOMAIN_W1C ody_rst_core_domain_w1c_t
#define bustype_ODY_RST_CORE_DOMAIN_W1C CSR_TYPE_RSL
#define basename_ODY_RST_CORE_DOMAIN_W1C "RST_CORE_DOMAIN_W1C"
#define device_bar_ODY_RST_CORE_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CORE_DOMAIN_W1C 0
#define arguments_ODY_RST_CORE_DOMAIN_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_core_domain_w1s
 *
 * RST Core Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_core_domain_w1s {
	uint64_t u;
	struct ody_rst_core_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_core_domain_w1s_s cn; */
};
typedef union ody_rst_core_domain_w1s ody_rst_core_domain_w1s_t;

#define ODY_RST_CORE_DOMAIN_W1S ODY_RST_CORE_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_CORE_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_CORE_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001820ll;
}

#define typedef_ODY_RST_CORE_DOMAIN_W1S ody_rst_core_domain_w1s_t
#define bustype_ODY_RST_CORE_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_CORE_DOMAIN_W1S "RST_CORE_DOMAIN_W1S"
#define device_bar_ODY_RST_CORE_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_CORE_DOMAIN_W1S 0
#define arguments_ODY_RST_CORE_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_debug
 *
 * RST Debug Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_debug {
	uint64_t u;
	struct ody_rst_debug_s {
		uint64_t clk_on                      : 1;
		uint64_t clk_cng                     : 1;
		uint64_t clkena_on                   : 1;
		uint64_t dll_csr_wakeup              : 1;
		uint64_t div_clk_rst                 : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_rst_debug_s cn; */
};
typedef union ody_rst_debug ody_rst_debug_t;

#define ODY_RST_DEBUG ODY_RST_DEBUG_FUNC()
static inline uint64_t ODY_RST_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_DEBUG_FUNC(void)
{
	return 0x87e0060017b0ll;
}

#define typedef_ODY_RST_DEBUG ody_rst_debug_t
#define bustype_ODY_RST_DEBUG CSR_TYPE_RSL
#define basename_ODY_RST_DEBUG "RST_DEBUG"
#define device_bar_ODY_RST_DEBUG 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_DEBUG 0
#define arguments_ODY_RST_DEBUG -1, -1, -1, -1

/**
 * Register (RSL) rst_delay
 *
 * RST Delay Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_delay {
	uint64_t u;
	struct ody_rst_delay_s {
		uint64_t rst_dly                     : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_rst_delay_s cn; */
};
typedef union ody_rst_delay ody_rst_delay_t;

#define ODY_RST_DELAY ODY_RST_DELAY_FUNC()
static inline uint64_t ODY_RST_DELAY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_DELAY_FUNC(void)
{
	return 0x87e006001608ll;
}

#define typedef_ODY_RST_DELAY ody_rst_delay_t
#define bustype_ODY_RST_DELAY CSR_TYPE_RSL
#define basename_ODY_RST_DELAY "RST_DELAY"
#define device_bar_ODY_RST_DELAY 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_DELAY 0
#define arguments_ODY_RST_DELAY -1, -1, -1, -1

/**
 * Register (RSL) rst_dev_map#
 *
 * RST Device Map Register
 * This register configures the reset domain of devices. Index {a} is enumerated by RST_DEV_E.
 * Writes to these registers should only occur when all the bits of RST_BIST_ACTIVE are clear.
 * See RST_BIST_ACTIVE for details.
 * Only one RST_DEV_MAP() should be written at a time.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_dev_mapx {
	uint64_t u;
	struct ody_rst_dev_mapx_s {
		uint64_t dmn                         : 3;
		uint64_t reserved_3_63               : 61;
	} s;
	/* struct ody_rst_dev_mapx_s cn; */
};
typedef union ody_rst_dev_mapx ody_rst_dev_mapx_t;

static inline uint64_t ODY_RST_DEV_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_DEV_MAPX(uint64_t a)
{
	if (a <= 47)
		return 0x87e00a001a00ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("RST_DEV_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_DEV_MAPX(a) ody_rst_dev_mapx_t
#define bustype_ODY_RST_DEV_MAPX(a) CSR_TYPE_RSL
#define basename_ODY_RST_DEV_MAPX(a) "RST_DEV_MAPX"
#define device_bar_ODY_RST_DEV_MAPX(a) 0x2 /* PF_BAR2 */
#define busnum_ODY_RST_DEV_MAPX(a) (a)
#define arguments_ODY_RST_DEV_MAPX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_int
 *
 * RST Interrupt Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_int {
	uint64_t u;
	struct ody_rst_int_s {
		uint64_t reserved_0_47               : 48;
		uint64_t core_reset                  : 1;
		uint64_t mcp_reset                   : 1;
		uint64_t scp_reset                   : 1;
		uint64_t bphy_reset                  : 1;
		uint64_t xcp2_reset                  : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_rst_int_s cn; */
};
typedef union ody_rst_int ody_rst_int_t;

#define ODY_RST_INT ODY_RST_INT_FUNC()
static inline uint64_t ODY_RST_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_INT_FUNC(void)
{
	return 0x87e006001628ll;
}

#define typedef_ODY_RST_INT ody_rst_int_t
#define bustype_ODY_RST_INT CSR_TYPE_RSL
#define basename_ODY_RST_INT "RST_INT"
#define device_bar_ODY_RST_INT 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_INT 0
#define arguments_ODY_RST_INT -1, -1, -1, -1

/**
 * Register (RSL) rst_int_ena_w1c
 *
 * RST Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_rst_int_ena_w1c {
	uint64_t u;
	struct ody_rst_int_ena_w1c_s {
		uint64_t reserved_0_47               : 48;
		uint64_t core_reset                  : 1;
		uint64_t mcp_reset                   : 1;
		uint64_t scp_reset                   : 1;
		uint64_t bphy_reset                  : 1;
		uint64_t xcp2_reset                  : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_rst_int_ena_w1c_s cn; */
};
typedef union ody_rst_int_ena_w1c ody_rst_int_ena_w1c_t;

#define ODY_RST_INT_ENA_W1C ODY_RST_INT_ENA_W1C_FUNC()
static inline uint64_t ODY_RST_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_INT_ENA_W1C_FUNC(void)
{
	return 0x87e0060016a8ll;
}

#define typedef_ODY_RST_INT_ENA_W1C ody_rst_int_ena_w1c_t
#define bustype_ODY_RST_INT_ENA_W1C CSR_TYPE_RSL
#define basename_ODY_RST_INT_ENA_W1C "RST_INT_ENA_W1C"
#define device_bar_ODY_RST_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_INT_ENA_W1C 0
#define arguments_ODY_RST_INT_ENA_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_int_ena_w1s
 *
 * RST Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_rst_int_ena_w1s {
	uint64_t u;
	struct ody_rst_int_ena_w1s_s {
		uint64_t reserved_0_47               : 48;
		uint64_t core_reset                  : 1;
		uint64_t mcp_reset                   : 1;
		uint64_t scp_reset                   : 1;
		uint64_t bphy_reset                  : 1;
		uint64_t xcp2_reset                  : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_rst_int_ena_w1s_s cn; */
};
typedef union ody_rst_int_ena_w1s ody_rst_int_ena_w1s_t;

#define ODY_RST_INT_ENA_W1S ODY_RST_INT_ENA_W1S_FUNC()
static inline uint64_t ODY_RST_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_INT_ENA_W1S_FUNC(void)
{
	return 0x87e0060016a0ll;
}

#define typedef_ODY_RST_INT_ENA_W1S ody_rst_int_ena_w1s_t
#define bustype_ODY_RST_INT_ENA_W1S CSR_TYPE_RSL
#define basename_ODY_RST_INT_ENA_W1S "RST_INT_ENA_W1S"
#define device_bar_ODY_RST_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_INT_ENA_W1S 0
#define arguments_ODY_RST_INT_ENA_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_int_w1s
 *
 * RST Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_rst_int_w1s {
	uint64_t u;
	struct ody_rst_int_w1s_s {
		uint64_t reserved_0_47               : 48;
		uint64_t core_reset                  : 1;
		uint64_t mcp_reset                   : 1;
		uint64_t scp_reset                   : 1;
		uint64_t bphy_reset                  : 1;
		uint64_t xcp2_reset                  : 1;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_rst_int_w1s_s cn; */
};
typedef union ody_rst_int_w1s ody_rst_int_w1s_t;

#define ODY_RST_INT_W1S ODY_RST_INT_W1S_FUNC()
static inline uint64_t ODY_RST_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_INT_W1S_FUNC(void)
{
	return 0x87e006001630ll;
}

#define typedef_ODY_RST_INT_W1S ody_rst_int_w1s_t
#define bustype_ODY_RST_INT_W1S CSR_TYPE_RSL
#define basename_ODY_RST_INT_W1S "RST_INT_W1S"
#define device_bar_ODY_RST_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_INT_W1S 0
#define arguments_ODY_RST_INT_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_lboot
 *
 * RST Last Boot Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_lboot {
	uint64_t u;
	struct ody_rst_lboot_s {
		uint64_t lboot                       : 56;
		uint64_t reserved_56_63              : 8;
	} s;
	/* struct ody_rst_lboot_s cn; */
};
typedef union ody_rst_lboot ody_rst_lboot_t;

#define ODY_RST_LBOOT ODY_RST_LBOOT_FUNC()
static inline uint64_t ODY_RST_LBOOT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_LBOOT_FUNC(void)
{
	return 0x87e006001620ll;
}

#define typedef_ODY_RST_LBOOT ody_rst_lboot_t
#define bustype_ODY_RST_LBOOT CSR_TYPE_RSL
#define basename_ODY_RST_LBOOT "RST_LBOOT"
#define device_bar_ODY_RST_LBOOT 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_LBOOT 0
#define arguments_ODY_RST_LBOOT -1, -1, -1, -1

/**
 * Register (RSL) rst_man_pll#
 *
 * RST Manual PLL Control Register
 * These registers are used in conjunction with the RST_PLL() registers when
 * the RST_PLL()[NEXT_MAN] field is set.  Indexed by RST_PLL_E.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register should only occur when both the RST_PLL(x)[NEXT_PGM] and
 * RST_PLL(x)[NEXT_SWITCH] fields are zero.
 *
 * This register is always reset on a chip domain reset.
 */
union ody_rst_man_pllx {
	uint64_t u;
	struct ody_rst_man_pllx_s {
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
	/* struct ody_rst_man_pllx_s cn; */
};
typedef union ody_rst_man_pllx ody_rst_man_pllx_t;

static inline uint64_t ODY_RST_MAN_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MAN_PLLX(uint64_t a)
{
	if (a <= 15)
		return 0x87e00a001008ll + 0x10ll * ((a) & 0xf);
	__ody_csr_fatal("RST_MAN_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_MAN_PLLX(a) ody_rst_man_pllx_t
#define bustype_ODY_RST_MAN_PLLX(a) CSR_TYPE_RSL
#define basename_ODY_RST_MAN_PLLX(a) "RST_MAN_PLLX"
#define device_bar_ODY_RST_MAN_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_ODY_RST_MAN_PLLX(a) (a)
#define arguments_ODY_RST_MAN_PLLX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_mcp_domain_w1c
 *
 * RST MCP Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_mcp_domain_w1c {
	uint64_t u;
	struct ody_rst_mcp_domain_w1c_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_mcp_domain_w1c_s cn; */
};
typedef union ody_rst_mcp_domain_w1c ody_rst_mcp_domain_w1c_t;

#define ODY_RST_MCP_DOMAIN_W1C ODY_RST_MCP_DOMAIN_W1C_FUNC()
static inline uint64_t ODY_RST_MCP_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MCP_DOMAIN_W1C_FUNC(void)
{
	return 0x87e006001838ll;
}

#define typedef_ODY_RST_MCP_DOMAIN_W1C ody_rst_mcp_domain_w1c_t
#define bustype_ODY_RST_MCP_DOMAIN_W1C CSR_TYPE_RSL
#define basename_ODY_RST_MCP_DOMAIN_W1C "RST_MCP_DOMAIN_W1C"
#define device_bar_ODY_RST_MCP_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_MCP_DOMAIN_W1C 0
#define arguments_ODY_RST_MCP_DOMAIN_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_mcp_domain_w1s
 *
 * RST MCP Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_mcp_domain_w1s {
	uint64_t u;
	struct ody_rst_mcp_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t force_rst                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_rst_mcp_domain_w1s_s cn; */
};
typedef union ody_rst_mcp_domain_w1s ody_rst_mcp_domain_w1s_t;

#define ODY_RST_MCP_DOMAIN_W1S ODY_RST_MCP_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_MCP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MCP_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001830ll;
}

#define typedef_ODY_RST_MCP_DOMAIN_W1S ody_rst_mcp_domain_w1s_t
#define bustype_ODY_RST_MCP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_MCP_DOMAIN_W1S "RST_MCP_DOMAIN_W1S"
#define device_bar_ODY_RST_MCP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_MCP_DOMAIN_W1S 0
#define arguments_ODY_RST_MCP_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_msix_pba#
 *
 * RST MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the RST_INT_VEC_E
 * enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_msix_pbax {
	uint64_t u;
	struct ody_rst_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_rst_msix_pbax_s cn; */
};
typedef union ody_rst_msix_pbax ody_rst_msix_pbax_t;

static inline uint64_t ODY_RST_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MSIX_PBAX(uint64_t a)
{
	if (a == 0)
		return 0x87e006ff0000ll;
	__ody_csr_fatal("RST_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_MSIX_PBAX(a) ody_rst_msix_pbax_t
#define bustype_ODY_RST_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_ODY_RST_MSIX_PBAX(a) "RST_MSIX_PBAX"
#define device_bar_ODY_RST_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_RST_MSIX_PBAX(a) (a)
#define arguments_ODY_RST_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_msix_vec#_addr
 *
 * RST MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the RST_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_msix_vecx_addr {
	uint64_t u;
	struct ody_rst_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_rst_msix_vecx_addr_s cn; */
};
typedef union ody_rst_msix_vecx_addr ody_rst_msix_vecx_addr_t;

static inline uint64_t ODY_RST_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MSIX_VECX_ADDR(uint64_t a)
{
	if (a == 0)
		return 0x87e006f00000ll;
	__ody_csr_fatal("RST_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_MSIX_VECX_ADDR(a) ody_rst_msix_vecx_addr_t
#define bustype_ODY_RST_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_ODY_RST_MSIX_VECX_ADDR(a) "RST_MSIX_VECX_ADDR"
#define device_bar_ODY_RST_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_RST_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_RST_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_msix_vec#_ctl
 *
 * RST MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the RST_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_msix_vecx_ctl {
	uint64_t u;
	struct ody_rst_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_rst_msix_vecx_ctl_s cn; */
};
typedef union ody_rst_msix_vecx_ctl ody_rst_msix_vecx_ctl_t;

static inline uint64_t ODY_RST_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_MSIX_VECX_CTL(uint64_t a)
{
	if (a == 0)
		return 0x87e006f00008ll;
	__ody_csr_fatal("RST_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_MSIX_VECX_CTL(a) ody_rst_msix_vecx_ctl_t
#define bustype_ODY_RST_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_ODY_RST_MSIX_VECX_CTL(a) "RST_MSIX_VECX_CTL"
#define device_bar_ODY_RST_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_RST_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_RST_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_pll#
 *
 * RST PLL Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * Each index of this register controls a PLL on the chip.  The register is used for
 * typical programming operations and is supplemented with the RST_MAN_PLL()
 * register when selected.  Indexed by RST_PLL_E.
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register and to both RST_MAN_PLL(x) and RST_TEST_PLL(x) of the same
 * index should only occur when both the NEXT_PGM and NEXT_SWITCH fields are zero.
 * It is typically necessary to poll this register to confirm this.
 *
 * The register fields are returned to reset values on a chip domain reset unless
 * specifically noted.
 */
union ody_rst_pllx {
	uint64_t u;
	struct ody_rst_pllx_s {
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
	/* struct ody_rst_pllx_s cn; */
};
typedef union ody_rst_pllx ody_rst_pllx_t;

static inline uint64_t ODY_RST_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_PLLX(uint64_t a)
{
	if (a <= 15)
		return 0x87e00a001000ll + 0x10ll * ((a) & 0xf);
	__ody_csr_fatal("RST_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_PLLX(a) ody_rst_pllx_t
#define bustype_ODY_RST_PLLX(a) CSR_TYPE_RSL
#define basename_ODY_RST_PLLX(a) "RST_PLLX"
#define device_bar_ODY_RST_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_ODY_RST_PLLX(a) (a)
#define arguments_ODY_RST_PLLX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_ref_cntr
 *
 * RST Reference-Counter Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_ref_cntr {
	uint64_t u;
	struct ody_rst_ref_cntr_s {
		uint64_t cnt                         : 64;
	} s;
	/* struct ody_rst_ref_cntr_s cn; */
};
typedef union ody_rst_ref_cntr ody_rst_ref_cntr_t;

#define ODY_RST_REF_CNTR ODY_RST_REF_CNTR_FUNC()
static inline uint64_t ODY_RST_REF_CNTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_REF_CNTR_FUNC(void)
{
	return 0x87e006001758ll;
}

#define typedef_ODY_RST_REF_CNTR ody_rst_ref_cntr_t
#define bustype_ODY_RST_REF_CNTR CSR_TYPE_RSL
#define basename_ODY_RST_REF_CNTR "RST_REF_CNTR"
#define device_bar_ODY_RST_REF_CNTR 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_REF_CNTR 0
#define arguments_ODY_RST_REF_CNTR -1, -1, -1, -1

/**
 * Register (RSL) rst_reset_active
 *
 * RST Domain Reset Active Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_reset_active {
	uint64_t u;
	struct ody_rst_reset_active_s {
		uint64_t chip                        : 1;
		uint64_t core                        : 1;
		uint64_t mcp                         : 1;
		uint64_t scp                         : 1;
		uint64_t bphy                        : 1;
		uint64_t xcp2                        : 1;
		uint64_t reserved_6_63               : 58;
	} s;
	/* struct ody_rst_reset_active_s cn; */
};
typedef union ody_rst_reset_active ody_rst_reset_active_t;

#define ODY_RST_RESET_ACTIVE ODY_RST_RESET_ACTIVE_FUNC()
static inline uint64_t ODY_RST_RESET_ACTIVE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_RESET_ACTIVE_FUNC(void)
{
	return 0x87e006001888ll;
}

#define typedef_ODY_RST_RESET_ACTIVE ody_rst_reset_active_t
#define bustype_ODY_RST_RESET_ACTIVE CSR_TYPE_RSL
#define basename_ODY_RST_RESET_ACTIVE "RST_RESET_ACTIVE"
#define device_bar_ODY_RST_RESET_ACTIVE 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_RESET_ACTIVE 0
#define arguments_ODY_RST_RESET_ACTIVE -1, -1, -1, -1

/**
 * Register (RSL) rst_scp_domain_w1c
 *
 * RST SCP Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_scp_domain_w1c {
	uint64_t u;
	struct ody_rst_scp_domain_w1c_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_scp_domain_w1c_s cn; */
};
typedef union ody_rst_scp_domain_w1c ody_rst_scp_domain_w1c_t;

#define ODY_RST_SCP_DOMAIN_W1C ODY_RST_SCP_DOMAIN_W1C_FUNC()
static inline uint64_t ODY_RST_SCP_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_SCP_DOMAIN_W1C_FUNC(void)
{
	return 0x87e006001848ll;
}

#define typedef_ODY_RST_SCP_DOMAIN_W1C ody_rst_scp_domain_w1c_t
#define bustype_ODY_RST_SCP_DOMAIN_W1C CSR_TYPE_RSL
#define basename_ODY_RST_SCP_DOMAIN_W1C "RST_SCP_DOMAIN_W1C"
#define device_bar_ODY_RST_SCP_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_SCP_DOMAIN_W1C 0
#define arguments_ODY_RST_SCP_DOMAIN_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_scp_domain_w1s
 *
 * RST SCP Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_scp_domain_w1s {
	uint64_t u;
	struct ody_rst_scp_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t force_rst                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_rst_scp_domain_w1s_s cn; */
};
typedef union ody_rst_scp_domain_w1s ody_rst_scp_domain_w1s_t;

#define ODY_RST_SCP_DOMAIN_W1S ODY_RST_SCP_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_SCP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_SCP_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001840ll;
}

#define typedef_ODY_RST_SCP_DOMAIN_W1S ody_rst_scp_domain_w1s_t
#define bustype_ODY_RST_SCP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_SCP_DOMAIN_W1S "RST_SCP_DOMAIN_W1S"
#define device_bar_ODY_RST_SCP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_SCP_DOMAIN_W1S 0
#define arguments_ODY_RST_SCP_DOMAIN_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_sw_w1s
 *
 * RST Software W1S Data Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_sw_w1s {
	uint64_t u;
	struct ody_rst_sw_w1s_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_rst_sw_w1s_s cn; */
};
typedef union ody_rst_sw_w1s ody_rst_sw_w1s_t;

#define ODY_RST_SW_W1S ODY_RST_SW_W1S_FUNC()
static inline uint64_t ODY_RST_SW_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_SW_W1S_FUNC(void)
{
	return 0x87e0060017f0ll;
}

#define typedef_ODY_RST_SW_W1S ody_rst_sw_w1s_t
#define bustype_ODY_RST_SW_W1S CSR_TYPE_RSL
#define basename_ODY_RST_SW_W1S "RST_SW_W1S"
#define device_bar_ODY_RST_SW_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_SW_W1S 0
#define arguments_ODY_RST_SW_W1S -1, -1, -1, -1

/**
 * Register (RSL) rst_test_pll#
 *
 * RST Manual PLL Control Register
 * These registers control manual ARO programming and Test features.
 *
 * The logic associated with the PLL functions can only process one operation at a time.
 * Writes to this register should only occur when both the RST_PLL(x)[NEXT_PGM] and
 * RST_PLL(x)[NEXT_SWITCH] fields are zero.  Additionally a read operation should occur
 * between writes to this register to allow time for the test setting to be transmitted
 * successfully before new setting are applied.
 */
union ody_rst_test_pllx {
	uint64_t u;
	struct ody_rst_test_pllx_s {
		uint64_t stop_cnt                    : 32;
		uint64_t stop_clk                    : 1;
		uint64_t msc_enable                  : 1;
		uint64_t testclk_pll1                : 1;
		uint64_t reserved_35_39              : 5;
		uint64_t test_ana                    : 5;
		uint64_t test_rsvd                   : 3;
		uint64_t reserved_48_63              : 16;
	} s;
	/* struct ody_rst_test_pllx_s cn; */
};
typedef union ody_rst_test_pllx ody_rst_test_pllx_t;

static inline uint64_t ODY_RST_TEST_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_TEST_PLLX(uint64_t a)
{
	if (a <= 15)
		return 0x87e00a001200ll + 8ll * ((a) & 0xf);
	__ody_csr_fatal("RST_TEST_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_RST_TEST_PLLX(a) ody_rst_test_pllx_t
#define bustype_ODY_RST_TEST_PLLX(a) CSR_TYPE_RSL
#define basename_ODY_RST_TEST_PLLX(a) "RST_TEST_PLLX"
#define device_bar_ODY_RST_TEST_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_ODY_RST_TEST_PLLX(a) (a)
#define arguments_ODY_RST_TEST_PLLX(a) (a), -1, -1, -1

/**
 * Register (RSL) rst_thermal_alert
 *
 * RST Thermal Alert Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_thermal_alert {
	uint64_t u;
	struct ody_rst_thermal_alert_s {
		uint64_t alert                       : 1;
		uint64_t reserved_1_7                : 7;
		uint64_t trip                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_rst_thermal_alert_s cn; */
};
typedef union ody_rst_thermal_alert ody_rst_thermal_alert_t;

#define ODY_RST_THERMAL_ALERT ODY_RST_THERMAL_ALERT_FUNC()
static inline uint64_t ODY_RST_THERMAL_ALERT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_THERMAL_ALERT_FUNC(void)
{
	return 0x87e006001690ll;
}

#define typedef_ODY_RST_THERMAL_ALERT ody_rst_thermal_alert_t
#define bustype_ODY_RST_THERMAL_ALERT CSR_TYPE_RSL
#define basename_ODY_RST_THERMAL_ALERT "RST_THERMAL_ALERT"
#define device_bar_ODY_RST_THERMAL_ALERT 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_THERMAL_ALERT 0
#define arguments_ODY_RST_THERMAL_ALERT -1, -1, -1, -1

/**
 * Register (RSL) rst_xcp2_domain_w1c
 *
 * RST CCP/XCP2 Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_xcp2_domain_w1c {
	uint64_t u;
	struct ody_rst_xcp2_domain_w1c_s {
		uint64_t soft_rst                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_rst_xcp2_domain_w1c_s cn; */
};
typedef union ody_rst_xcp2_domain_w1c ody_rst_xcp2_domain_w1c_t;

#define ODY_RST_XCP2_DOMAIN_W1C ODY_RST_XCP2_DOMAIN_W1C_FUNC()
static inline uint64_t ODY_RST_XCP2_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_XCP2_DOMAIN_W1C_FUNC(void)
{
	return 0x87e006001878ll;
}

#define typedef_ODY_RST_XCP2_DOMAIN_W1C ody_rst_xcp2_domain_w1c_t
#define bustype_ODY_RST_XCP2_DOMAIN_W1C CSR_TYPE_RSL
#define basename_ODY_RST_XCP2_DOMAIN_W1C "RST_XCP2_DOMAIN_W1C"
#define device_bar_ODY_RST_XCP2_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_XCP2_DOMAIN_W1C 0
#define arguments_ODY_RST_XCP2_DOMAIN_W1C -1, -1, -1, -1

/**
 * Register (RSL) rst_xcp2_domain_w1s
 *
 * RST CCP/XCP2 Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_rst_xcp2_domain_w1s {
	uint64_t u;
	struct ody_rst_xcp2_domain_w1s_s {
		uint64_t soft_rst                    : 1;
		uint64_t force_rst                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_rst_xcp2_domain_w1s_s cn; */
};
typedef union ody_rst_xcp2_domain_w1s ody_rst_xcp2_domain_w1s_t;

#define ODY_RST_XCP2_DOMAIN_W1S ODY_RST_XCP2_DOMAIN_W1S_FUNC()
static inline uint64_t ODY_RST_XCP2_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_RST_XCP2_DOMAIN_W1S_FUNC(void)
{
	return 0x87e006001870ll;
}

#define typedef_ODY_RST_XCP2_DOMAIN_W1S ody_rst_xcp2_domain_w1s_t
#define bustype_ODY_RST_XCP2_DOMAIN_W1S CSR_TYPE_RSL
#define basename_ODY_RST_XCP2_DOMAIN_W1S "RST_XCP2_DOMAIN_W1S"
#define device_bar_ODY_RST_XCP2_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_RST_XCP2_DOMAIN_W1S 0
#define arguments_ODY_RST_XCP2_DOMAIN_W1S -1, -1, -1, -1

#endif /* __ODY_CSRS_RST_H__ */
