/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* include */
#include <common/debug.h>
#include <drivers/delay_timer.h>
#include <drivers/renesas/rza/cpg/cpg.h>
#include <drivers/renesas/rza/ddr/ddr_internal.h>

#define CEIL(a, div)		(((a) + ((div) - 1)) / (div))
#define MAX_BYTE_LANES		2U
#define MAX_BEST_VREF_SAVED	30U
#define VREF_SETP		1U

/* prototypes */
void ddr_setup(void);
static void disable_phy_clk(void);
static void program_mc1(uint8_t *lp_auto_entry_en);
static void program_phy1(uint32_t sl_lanes, uint32_t byte_lanes);
static void exec_trainingWRLVL(uint32_t sl_lanes);
static void exec_trainingVREF(uint32_t sl_lanes, uint32_t byte_lanes);
static void setup_vref_training_registers(uint8_t vref_value, uint8_t cs,
					  uint8_t turn_on_off_vref_training);
static void write_mr(uint8_t cs, uint8_t mrw_sel, uint16_t mrw_data);
static void exec_trainingBITLVL(uint32_t sl_lanes);
static void opt_delay(uint32_t sl_lanes, uint32_t byte_lanes);
static void exec_trainingSL(uint32_t sl_lanes);
static void program_phy2(void);
static void program_mc2(void);

/* main */
void ddr_setup(void)
{
	uint32_t sl_lanes, byte_lanes;
	uint8_t runBITLVL, runSL, runVREF;
	uint8_t lp_auto_entry_en = 0;
	uint32_t tmp;
	int i;

	NOTICE("Setup DDR (Rev. %s)\n", ddr_an_version);
	/* Step2 - Step11 */
	cpg_active_ddr(disable_phy_clk);

	/* Step12 */
	program_mc1(&lp_auto_entry_en);

	/* Step13 */
	tmp = read_mc_reg(DDRMC_R019);
	sl_lanes = ((tmp & 0x1) == 0) ? 3 : 1;
	byte_lanes = ((tmp & 0x1) == 0) ? 2 : 1;
	tmp = read_mc_reg(DDRMC_R039);
	runBITLVL = (tmp >> 20) & 0x1;
	runSL = (tmp >> 21) & 0x1;
	runVREF = (tmp >> 25) & 0x1;

	/* Step14 */
	program_phy1(sl_lanes, byte_lanes);

	/* Step15 */
	while ((read_phy_reg(DDRPHY_R42) & 0x00000003) != sl_lanes)
		;

	/* Step16 */
	ddr_ctrl_reten_en_n(false);
	rmw_mc_reg(DDRMC_R007, 0xFFFFFEFF, 0x00000000);
	rmw_mc_reg(DDRMC_R001, 0xFEFFFFFF, 0x01000000);
	rmw_mc_reg(DDRMC_R000, 0xFFFFFFFE, 0x00000001);
	while ((read_mc_reg(DDRMC_R021) & 0x02000000) != 0x02000000)
		;
	rmw_phy_reg(DDRPHY_R74, 0xFFF7FFFF, 0x00080000);
	rmw_mc_reg(DDRMC_R029, 0xFF0000FF, 64 << 8);
	rmw_mc_reg(DDRMC_R027, 0xE00000FF, 111 << 8);
	rmw_mc_reg(DDRMC_R020, 0xFFFFFEFF, 0x00000100);
	udelay(1);
	rmw_phy_reg(DDRPHY_R74, 0xFFF7FFFF, 0x00000000);

	/* Step17 */
	cpg_reset_ddr_mc();
	ddr_ctrl_reten_en_n(true);

	/* Step18-19 */
	program_mc1(&lp_auto_entry_en);

	/* Step20 */
	for (i = 0; i < ARRAY_SIZE(swizzle_mc_tbl); i++) {
		write_mc_reg(swizzle_mc_tbl[i][0], swizzle_mc_tbl[i][1]);
	}
	for (i = 0; i < ARRAY_SIZE(swizzle_phy_tbl); i++) {
		write_phy_reg(swizzle_phy_tbl[i][0], swizzle_phy_tbl[i][1]);
	}

	/* Step21 */
	rmw_mc_reg(DDRMC_R000, 0xFFFFFFFE, 0x00000001);

	/* Step22 */
	while ((read_mc_reg(DDRMC_R021) & 0x02000000) != 0x02000000)
		;

	/* Step23 */
	rmw_mc_reg(DDRMC_R023, 0xFDFFFFFF, 0x02000000);

	/* Step24 */
	exec_trainingWRLVL(sl_lanes);

	/* Step25 */
	if (runVREF == 1)
		exec_trainingVREF(sl_lanes, byte_lanes);

	/* Step26 */
	if (runBITLVL == 1)
		exec_trainingBITLVL(sl_lanes);

	/* Step27 */
	opt_delay(sl_lanes, byte_lanes);

	/* Step28 */
	if (runSL == 1)
		exec_trainingSL(sl_lanes);

	/* Step29 */
	program_phy2();

	/* Step30 */
	program_mc2();

	/* Step31 is skipped because ECC is unused. */

	/* Step32 */
	rmw_mc_reg(DDRMC_R006, 0xFFFFFFF0, lp_auto_entry_en & 0xF);
}

static void disable_phy_clk(void)
{
	/* Initialization Step9 */
	write_phy_reg(DDRPHY_R77, 0x00000200);
	write_phy_reg(DDRPHY_R78, 0x00010001);
}

static void program_mc1(uint8_t *lp_auto_entry_en)
{
	int i;

	/* Step1 */
	for (i = 0; i < ARRAY_SIZE(mc_init_tbl); i++) {
		if (mc_init_tbl[i][0] == DDRMC_R006) {
			*lp_auto_entry_en = mc_init_tbl[i][1] & 0xF;
			write_mc_reg(DDRMC_R006,
				     mc_init_tbl[i][1] & 0xFFFFFFF0);
		} else {
			write_mc_reg(mc_init_tbl[i][0], mc_init_tbl[i][1]);
		}
	}

	/* Step2 */
	rmw_mc_reg(DDRMC_R025, 0xFCFFFFFF, mc_odt_pins_tbl[0] << 24);
	rmw_mc_reg(DDRMC_R026, 0xFFFFFCFF, mc_odt_pins_tbl[1] << 8);
	rmw_mc_reg(DDRMC_R025, 0xFFFCFFFF, mc_odt_pins_tbl[2] << 16);
	rmw_mc_reg(DDRMC_R026, 0xFFFFFFFC, mc_odt_pins_tbl[3] << 0);

	/* Step3 */
	rmw_mc_reg(DDRMC_R009, ~(mc_mr1_tbl[0]), mc_mr1_tbl[1]);
	rmw_mc_reg(DDRMC_R011, ~(mc_mr1_tbl[0]), mc_mr1_tbl[1]);

	/* Step4 */
	rmw_mc_reg(DDRMC_R010, ~(mc_mr2_tbl[0]), mc_mr2_tbl[1]);
	rmw_mc_reg(DDRMC_R012, ~(mc_mr2_tbl[0]), mc_mr2_tbl[1]);

	/* Step5 */
	rmw_mc_reg(DDRMC_R015, ~(mc_mr5_tbl[0]), mc_mr5_tbl[1]);
	rmw_mc_reg(DDRMC_R016, ~(mc_mr5_tbl[0]), mc_mr5_tbl[1]);

	/* Step6 */
	rmw_mc_reg(DDRMC_R017, ~(mc_mr6_tbl[0]), mc_mr6_tbl[1]);
	rmw_mc_reg(DDRMC_R018, ~(mc_mr6_tbl[0]), mc_mr6_tbl[1]);

	/* Step7 */
	for (i = 0; i < ARRAY_SIZE(mc_phy_settings_tbl); i++) {
		write_mc_reg(mc_phy_settings_tbl[i][0],
			     mc_phy_settings_tbl[i][1]);
	}

	/* Step8 is skipped because ECC is unused. */
}

static void program_phy1(uint32_t sl_lanes, uint32_t byte_lanes)
{
	uint16_t dram_clk_period;
	uint8_t dram;
	uint8_t odt_wr_map_cs0, odt_rd_map_cs0;
	uint8_t CL, CWL, AL, PL, RL, WL;
	uint32_t mr1, mr1_wl, mr1_wl_mask;
	uint32_t mr2, mr2_wl, mr2_wl_mask;
	uint8_t clk_drive, dq_dqs_drive, dq_dqs_term, vref_value, vref_ca_value;
#if RZA3M
	uint8_t adrctrl_drive;
#endif
	uint8_t read_lat, trim_lat;
	uint32_t tmp;
	int i;

	/* Step1 */
	tmp = read_mc_reg(DDRMC_R039);
	dram_clk_period = tmp & 0xFFFF;
	dram = (tmp >> 16) & 0xF;

	tmp = read_mc_reg(DDRMC_R025);
	odt_wr_map_cs0 = (tmp >> 24) & 0x3;
	odt_rd_map_cs0 = (tmp >> 16) & 0x3;

	/* Step2 */
	tmp = read_mc_reg(DDRMC_R002);
	CL = (tmp >> 17) & 0x1F;
	CWL = (tmp >> 24) & 0x1F;

	tmp = read_mc_reg(DDRMC_R003);
	AL = tmp & 0x1F;
	PL = (tmp >> 8) & 0xF;

	RL = CL + AL + PL;
	WL = CWL + AL + PL;

	/* Step3 */
	mr1 = read_mc_reg(DDRMC_R009) & 0xFFFF;
	mr2 = read_mc_reg(DDRMC_R010) & 0xFFFF;
	if (dram == 2) {
		/* DDR4 */
		mr1_wl_mask = (0x7 << 8) | (0x1 << 7); /* 0x78 */
		mr2_wl_mask = 0x7 << 9; /* 0xe0 */
		switch ((mr2 & mr2_wl_mask) >> 9) {
		case 0:
			mr1_wl = 0x0;
			mr1_wl_mask = 0x0000;
			break;
		case 1:
			mr1_wl = 0x2 << 8;
			break;
		case 2:
			mr1_wl = 0x4 << 8;
			break;
		case 4:
			mr1_wl = 0x6 << 8;
			break;
		default:
			panic();
		}
	} else {
		/* DDR3L, DDR3 */
		mr1_wl_mask = (0x1 << 9) | (0x1 << 7) | (0x1 << 6) | (0x1 << 2);
		mr2_wl_mask = 0x3 << 9;
		switch ((mr2 & mr2_wl_mask) >> 9) {
		case 0:
			mr1_wl = 0x0;
			mr1_wl_mask = 0x0000;
			break;
		case 1:
			mr1_wl = (0x0 << 9) | (0x0 << 6) | (0x1 << 2);
			break;
		case 2:
			mr1_wl = (0x0 << 9) | (0x1 << 6) | (0x0 << 2);
			break;
		default:
			panic();
		}
	}
	mr1_wl |= (mr1 & (0xFFFF ^ mr1_wl_mask)) | (0x1 << 7);
	mr2_wl = (mr2 & (0xFFFF ^ mr2_wl_mask)) | (0x0 << 9);

	/* Step4 */
	tmp = read_mc_reg(DDRMC_R040);
	clk_drive = tmp & 0xF;
	dq_dqs_drive = (tmp >> 4) & 0xF;
	dq_dqs_term = (tmp >> 8) & 0xF;
#if RZA3M
	adrctrl_drive = (tmp >> 12) & 0xF;
#endif
	vref_value = (tmp >> 16) & 0xFF;
	vref_ca_value = (tmp >> 24) & 0xFF;
	read_lat = (dram == 2 ? 12 : 10) + (CEIL(RL, 2) * 2) - CEIL(WL, 2) + 28;
	trim_lat = (dram == 2 ? 11 : 9) + CEIL(RL, 2) - CEIL(WL, 2) + 29;

	/* Step5 */
	tmp = ((WL == 5 ? 0x1 : 0x0) << 16) | 0x00100000;
	write_phy_reg(DDRPHY_R77, tmp);

	/* Step6 */
	write_phy_reg(DDRPHY_R05, 0x00000006);

	/* Step7 */
	if (dram == 2) {
		/* DDR4 */
		write_phy_reg(DDRPHY_R65, 0x00000009);
	}

	/* Step8 */
	write_phy_reg(DDRPHY_R67, (dram == 2 ? 1 : 0) << 27);
	write_phy_reg(DDRPHY_R47, (dram == 2 ? 1 : 0) << 24);

	/* Step9 */
	tmp = ((dram == 0 ? 0 : 1) << 15) |
	      ((dram_clk_period < 1000 ? 1 : 0) << 8) | 0x10004000;
	write_phy_reg(DDRPHY_R26, tmp);

	/* Step10 */
#if RZA3M
	write_phy_reg(DDRPHY_R13,
		      clk_drive | (clk_drive << 4) | (adrctrl_drive << 8) |
			      (adrctrl_drive << 12) | (dq_dqs_drive << 16) |
			      (dq_dqs_drive << 20));
#else
	write_phy_reg(DDRPHY_R13, clk_drive | (clk_drive << 4) |
					  (clk_drive << 8) | (clk_drive << 12) |
					  (dq_dqs_drive << 16) |
					  (dq_dqs_drive << 20));
#endif

	/* Step11 */
	tmp = dq_dqs_term | ((dram == 2) ? 0 : (dq_dqs_term << 4));
	write_phy_reg(DDRPHY_R14, tmp);

	/* Step12 */
	write_phy_reg(DDRPHY_R10, 0x00000000);

	/* Step13 */
	for (i = 0; i < byte_lanes; i++) {
		write_phy_reg(DDRPHY_R29, 7 * i);
		write_phy_reg(DDRPHY_R66, (vref_value << 4) | 0x00000004);
	}

	/* Step14 */
	write_phy_reg(DDRPHY_R12, vref_ca_value);

	/* Step15 */
	write_phy_reg(DDRPHY_R61, 0x1A09002D);

	/* Step16 */
	write_phy_reg(DDRPHY_R41, 0x00000000);

	/* Step17 */
	write_phy_reg(DDRPHY_R74, 0x0000001A);

	/* Step18 */
	tmp = ((dram == 2 ? 0 : 1) << 2) | (CEIL(CL, 2) << 4) |
	      (CEIL(AL, 2) << 8) | (odt_rd_map_cs0 << 16) |
	      (odt_wr_map_cs0 << 24) | 0x00000001;
	write_phy_reg(DDRPHY_R24, tmp);

	/* Step19 */
	tmp = (CEIL(CWL, 2) << 8) | ((((WL % 2) == 0) ? 0 : 1) << 24) |
	      0x80000001;
	write_phy_reg(DDRPHY_R25, tmp);

	/* Step20 */
	write_phy_reg(DDRPHY_R45, sl_lanes ^ 0x3);

	/* Step21 */
	write_phy_reg(DDRPHY_R64, (trim_lat << 4) | (read_lat << 12));

	/* Step22 */
	tmp = ((WL % 2) == 0) & 0x1;
	write_phy_reg(DDRPHY_R63, tmp);

	/* Step23 */
	write_phy_reg(DDRPHY_R72, 0x00000170);

	/* Step24 */
	write_phy_reg(DDRPHY_R38, mr2_wl | (mr2 << 16));

	/* Step25 */
	write_phy_reg(DDRPHY_R39, mr1 | (mr1_wl << 16));

	/* Step26 */
	write_phy_reg(DDRPHY_R27, 0xAC001000);

	/* Step27 */
	udelay(10);

	/* Step28 is skipped because dll_mas_dly is unused. */

	/* Step29 */
	write_phy_reg(DDRPHY_R44, 0x00000000);

	/* Step30 */
	write_phy_reg(DDRPHY_R43, 0x00000000);

	/* Step31 */
	for (i = 0; i < byte_lanes; i++) {
		write_phy_reg(DDRPHY_R29, 6 * i);
		write_phy_reg(DDRPHY_R30, 9);
#if RZA3M
		/* Changed from 10 to 14 according to APP_005 */
		write_phy_reg(DDRPHY_R32, 14);
#else
		write_phy_reg(DDRPHY_R32, 10);
#endif
	}

	/* Step32 */
	write_phy_reg(DDRPHY_R28, 26 | 0x00000200);

	/* Step33 */
	write_phy_reg(DDRPHY_R29, 0);
#if RZA3M
	write_phy_reg(DDRPHY_R57, 29 | 0x00000080);
#else
	write_phy_reg(DDRPHY_R57, 26 | 0x00000080);
#endif

	/* Step34 */
	write_phy_reg(DDRPHY_R27, 26 | (0x10 << 8) | 0xAC000000);

	/* Step35 */
	write_phy_reg(DDRPHY_R21, 0x00035076);

	/* Step36 */
	write_phy_reg(DDRPHY_R07, 0x00000032);

	/* lpddr4_combo_io_cal
	 * Step37-2 */
	rmw_phy_reg(DDRPHY_R47, 0xFF800000, 0x00000000);

	/* Step37-3 */
	switch (dram) {
	case 0:
		tmp = 0x00003200;
		break;
	case 1:
		tmp = 0x00005200;
		break;
	case 2:
		tmp = 0x08009200;
		break;
	default:
		tmp = 0x00000000;
		break;
	}
	write_phy_reg(DDRPHY_R67, tmp);
	write_phy_reg(DDRPHY_R46, 0x00000002);
	while ((read_phy_reg(DDRPHY_R46) & 0x00000008) != 0x00000008)
		;

	write_phy_reg(DDRPHY_R46, 0x00000000);
	udelay(100);

	/* Step37-4 */
	switch (dram) {
	case 0:
	case 1:
		tmp = 0x00041200;
		break;
	case 2:
		tmp = 0x08101300;
		break;
	default:
		tmp = 0x00000000;
		break;
	}
	write_phy_reg(DDRPHY_R67, tmp);
	write_phy_reg(DDRPHY_R46, 0x00000001);
	while ((read_phy_reg(DDRPHY_R46) & 0x00000004) != 0x00000004)
		;

	rmw_phy_reg(DDRPHY_R46, 0xFFFFFFEF, 0x00000010);
	rmw_phy_reg(DDRPHY_R46, 0xFFFFFFEF, 0x00000000);
	udelay(1);

	/* Step38 */
	rmw_phy_reg(DDRPHY_R27, 0xFBFFFFFF, 0x00000000);

	/* Step39 */
	rmw_phy_reg(DDRPHY_R78, 0xFFFFF0FE, (sl_lanes << 8));
}

static void exec_trainingWRLVL(uint32_t sl_lanes)
{
	uint32_t tmp;

	/* Step2 */
	tmp = read_phy_reg(DDRPHY_R24);
	write_phy_reg(DDRPHY_R24, tmp | 0x01000000);

	/* Step3 */
	write_phy_reg(DDRPHY_R37, sl_lanes);

	/* Step4 */
	write_phy_reg(DDRPHY_R31, 0x00010000);

	/* Step5 */
	write_phy_reg(DDRPHY_R18, 0x50200000);

	/* Step6 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step7 - Step8 */
	if (((read_phy_reg(DDRPHY_R36) & sl_lanes) != sl_lanes) ||
	    ((read_phy_reg(DDRPHY_R37) & sl_lanes) != 0)) {
		panic();
	}

	/* Step9 */
	write_phy_reg(DDRPHY_R24, tmp);
}

static void exec_trainingVREF(uint32_t sl_lanes, uint32_t byte_lanes)
{
	uint32_t vref_mid_level_code;
	uint32_t vref_training_value;
	uint32_t sweep_range;
	uint16_t current_vref = 0;
	uint32_t best_window_diff_so_far[MAX_BYTE_LANES];
	uint32_t num_best_vref_matches[MAX_BYTE_LANES];
	uint32_t all_best_vref_matches[MAX_BYTE_LANES][MAX_BEST_VREF_SAVED];
	uint8_t window_0, window_1, window_diff;
	uint32_t highest_best_vref_val, lowest_best_vref_val;
	uint8_t orig_cs_config;
	uint32_t tmp;
	int i, j;

	/* Step2 */
	for (i = 0; i < byte_lanes; i++) {
		write_phy_reg(DDRPHY_R29, i);
		rmw_phy_reg(DDRPHY_R07, 0xFFFFFFCF, 0x00000010);
	}
	/* Step3 */
	vref_mid_level_code = (read_mc_reg(DDRMC_R040) >> 16) & 0xFF;
	sweep_range = read_mc_reg(DDRMC_R043) & 0xFF;

	/* Step4 */
	for (i = 0; i < byte_lanes; i++) {
		best_window_diff_so_far[i] = 255;
		num_best_vref_matches[i] = 0;
	}

	/* Step5 */
	for (vref_training_value = 0;
	     vref_training_value < (sweep_range * 2) + 1;
	     vref_training_value += VREF_SETP) {
		/* Step5.1 */
		if (vref_training_value < sweep_range + 1) {
			if (vref_mid_level_code < vref_training_value + 2) {
				vref_training_value = sweep_range;
				continue;
			} else {
				current_vref = vref_mid_level_code - vref_training_value;
			}
		} else {
			if ((vref_mid_level_code + vref_training_value - sweep_range) > 126) {
				break;
			}

			current_vref = vref_mid_level_code + vref_training_value - sweep_range;
		}
		for (i = 0; i < byte_lanes; i++) {
			write_phy_reg(DDRPHY_R29, 7 * i);
			write_phy_reg(DDRPHY_R66, (current_vref << 4) | 0x00000001);
		}

		/* Step5.2 */
		write_phy_reg(DDRPHY_R18, 0x30800000);
		while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
			;

		/* Step5.3 */
		for (i = 0; i < byte_lanes; i++) {
			if (((read_phy_reg(DDRPHY_R59) >> (14 + i)) & 0x1) == 0x0) {
				INFO("PHY side VREF training passed on lane %0d, vref = %0d\n",
				     i, current_vref);
				write_phy_reg(DDRPHY_R29, i * 6);
				window_0 = read_phy_reg(DDRPHY_R69) & 0x3F;
				window_1 = (read_phy_reg(DDRPHY_R69) >> 8) & 0x3F;
				window_diff = (window_0 > window_1) ?
						      window_0 - window_1 :
						      window_1 - window_0;
				INFO("window_0 = %0d, window_1 = %0d, window_diff = %0d\n",
				     window_0, window_1, window_diff);
				if (window_diff < best_window_diff_so_far[i]) {
					best_window_diff_so_far[i] = window_diff;
					all_best_vref_matches[i][0] = current_vref;
					num_best_vref_matches[i] = 1;
					INFO("CURRENT BEST VREF PHY side :%d\n",
					     current_vref);
				} else if ((window_diff == best_window_diff_so_far[i]) &&
					   (num_best_vref_matches[i] < MAX_BEST_VREF_SAVED)) {
					all_best_vref_matches[i][num_best_vref_matches[i]] =
							current_vref;
					num_best_vref_matches[i] += 1;
				}
			} else {
				INFO("PHY side VREF training failed lane %d, current_vref = %d\n",
				     i, current_vref);
			}
		}
		/* Step5.4 */
	}

	/* Step6 */
	for (i = 0; i < byte_lanes; i++) {
		highest_best_vref_val = 0x0;
		lowest_best_vref_val = 0x7F;
		for (j = 0; j < num_best_vref_matches[i]; j++) {
			highest_best_vref_val = MAX(all_best_vref_matches[i][j],
				     highest_best_vref_val);
			lowest_best_vref_val = MIN(all_best_vref_matches[i][j],
						    lowest_best_vref_val);
		}
		current_vref = (highest_best_vref_val + lowest_best_vref_val) >> 1;
		write_phy_reg(DDRPHY_R29, 7 * i);
		write_phy_reg(DDRPHY_R66, current_vref << 4);
	}

	/* Step7 */
	write_phy_reg(DDRPHY_R19, 0xFF00FF00);
	write_phy_reg(DDRPHY_R20, 0xFF00FF00);

	/* Step8 */
	write_phy_reg(DDRPHY_R18, 0x30800000);
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step9 */
	tmp = (read_phy_reg(DDRPHY_R59) >> 14) & sl_lanes;
	if ((tmp ^ sl_lanes) != sl_lanes) {
		panic();
	}

	/* Step10 */
	rmw_phy_reg(DDRPHY_R54, 0xFFFFFF7F, 0x00000080);

	/* Step11 */
	vref_mid_level_code = (read_mc_reg(DDRMC_R043) >> 8) & 0xFF;
	sweep_range = (read_mc_reg(DDRMC_R043) >> 16) & 0xFF;

	/* Step12 */
	orig_cs_config = read_phy_reg(DDRPHY_R25) & 0x3;

	/* Step13 */
	setup_vref_training_registers(vref_mid_level_code, sl_lanes, 1);

	/* Step14 */
	rmw_phy_reg(DDRPHY_R66, 0xFFFFFFFE, 0x00000001);

	/* Step15 */
	for (i = 0; i < byte_lanes; i++) {
		best_window_diff_so_far[i] = 255;
		num_best_vref_matches[i] = 0;
	}

	/* Step16 */
	for (vref_training_value = 0;
	     vref_training_value < (sweep_range * 2) + 1;
	     vref_training_value += VREF_SETP) {
		/* Step16.1 */
		if (vref_training_value < (sweep_range + 1)) {
			if (vref_training_value > vref_mid_level_code) {
				vref_training_value = sweep_range;
				continue;
			} else {
				current_vref = vref_mid_level_code - vref_training_value;
			}
		} else {
			if ((vref_mid_level_code + vref_training_value - sweep_range) <= 73) {
				current_vref = vref_mid_level_code + vref_training_value -
					       sweep_range;
			} else {
				break;
			}
		}
		setup_vref_training_registers(current_vref, orig_cs_config, 0);

		/* Step16.2 */
		write_phy_reg(DDRPHY_R18, 0x30500000);
		while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
			;

		/* Step16.3 */
		tmp = (read_phy_reg(DDRPHY_R64) >> 20) & sl_lanes;
		for (i = 0; i < byte_lanes; i++) {
			if ((tmp ^ sl_lanes) == sl_lanes) {
				INFO("VREF training passed, vref = %d\n", current_vref);
				write_phy_reg(DDRPHY_R29, i * 6);
				window_0 = read_phy_reg(DDRPHY_R69) & 0x3F;
				window_1 = (read_phy_reg(DDRPHY_R69) >> 8) & 0x3F;
				window_diff = (window_0 > window_1) ?
						      window_0 - window_1 :
						      window_1 - window_0;
				INFO("window_0 = %0d, window_1 = %0d, window_diff = %0d\n",
				     window_0, window_1, window_diff);
				if (window_diff < best_window_diff_so_far[i]) {
					best_window_diff_so_far[i] = window_diff;
					all_best_vref_matches[i][0] = current_vref;
					num_best_vref_matches[i] = 1;
					INFO("CURRENT BEST VREF DRAM side :%d\n",
					     current_vref);
				} else if ((window_diff == best_window_diff_so_far[i]) &&
					   (num_best_vref_matches[i] < MAX_BEST_VREF_SAVED)) {
					all_best_vref_matches[i][num_best_vref_matches[i]] =
							current_vref;
					num_best_vref_matches[i] += 1;
				}
			} else {
				INFO("VREF training failed, vref = %d\n", current_vref);
			}
		}
		/* Step16.4 */
	}

	/* Step17 */
	highest_best_vref_val = 0x0;
	lowest_best_vref_val = 0x7F;
	for (i = 0; i < byte_lanes; i++) {
		for (j = 0; j < num_best_vref_matches[i]; j++) {
			highest_best_vref_val = MAX(all_best_vref_matches[i][j],
				     highest_best_vref_val);
			lowest_best_vref_val = MIN(all_best_vref_matches[i][j],
						    lowest_best_vref_val);
		}
	}
	current_vref = (highest_best_vref_val + lowest_best_vref_val) >> 1;

	/* Step18 */
	setup_vref_training_registers(current_vref, sl_lanes, 0);

	/* Step19 */
	rmw_mc_reg(DDRMC_R044, 0xFFFFFF00, current_vref);

	/* Step20 */
	rmw_phy_reg(DDRPHY_R66, 0xFFFFFFFE, 0x00000000);

	/* Step21 */
	setup_vref_training_registers(current_vref, sl_lanes, 2);

	/* Step22 */
	rmw_phy_reg(DDRPHY_R54, 0xFFFFFF7F, 0x00000000);

	/* Step23 */
	for (i = 0; i < byte_lanes; i++) {
		write_phy_reg(DDRPHY_R29, i);
		rmw_phy_reg(DDRPHY_R07, 0xFFFFFFCF, 0x00000030);
	}
}

static void setup_vref_training_registers(uint8_t vref_value, uint8_t cs,
					  uint8_t turn_on_off_vref_training)
{
	uint8_t vref_op_code;
	uint16_t mr;

	/* Step1 */
	if (vref_value > 50) {
		vref_op_code = vref_value - 23;
	} else {
		vref_op_code = vref_value | (1 << 6);
	}

	/* Step2 */
	mr = read_mc_reg(DDRMC_R017) & 0xFF00;
	write_mr(cs, 6,
		 mr | (((turn_on_off_vref_training == 2) ? 0 : 1) << 7) |
			 vref_op_code);

	/* Step3 */
	udelay(1);
}

static void write_mr(uint8_t cs, uint8_t mrw_sel, uint16_t mrw_data)
{
	uint8_t mrw_cs;
	uint8_t mrw_allcs;

	/* Step1 */
	mrw_cs = 0;
	if (cs & 0x1) {
		rmw_mc_reg(DDRMC_R013, 0xFFFF0000, mrw_data);
		mrw_cs = 0;
	}
	if (cs & 0x2) {
		rmw_mc_reg(DDRMC_R014, 0xFFFF0000, mrw_data);
		mrw_cs = 1;
	}
	mrw_allcs = ((cs & 0x3) == 0x3) ? 1 : 0;

	/* Step2 */
	rmw_mc_reg(DDRMC_R008, 0xFC000000,
		   0x02800000 | (mrw_allcs << 24) | (mrw_cs << 8) | mrw_sel);

	/* Step3 */
	while ((read_mc_reg(DDRMC_R022) & (1 << 3)) != (1 << 3))
		;

	/* Step4 */
	rmw_mc_reg(DDRMC_R024, 0xFFFFFFF7, 0x00000008);
}

static void exec_trainingBITLVL(uint32_t sl_lanes)
{
	uint32_t tmp;

	/* Step2 */
	write_phy_reg(DDRPHY_R62, 0x00000000);

	/* Step3 */
	write_phy_reg(DDRPHY_R19, 0xFF00FF00);
	write_phy_reg(DDRPHY_R20, 0xFF00FF00);

	/* Step4 */
	write_phy_reg(DDRPHY_R18, 0x30A00000);

	/* Step5 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step6 */
	tmp = (read_phy_reg(DDRPHY_R59) >> 14) & sl_lanes;
	if ((tmp ^ sl_lanes) != sl_lanes) {
		panic();
	}

	/* Step7 */
	rmw_phy_reg(DDRPHY_R54, 0xFFFFFF7F, 0x00000080);

	/* Step8 */
	write_phy_reg(DDRPHY_R18, 0x30700000);

	/* Step9 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step10 */
	tmp = (read_phy_reg(DDRPHY_R64) >> 20) & sl_lanes;
	if ((tmp ^ sl_lanes) != sl_lanes) {
		panic();
	}

	/* Step11 */
	rmw_phy_reg(DDRPHY_R54, 0xFFFFFF7F, 0x00000000);

	/* Step12 */
	write_phy_reg(DDRPHY_R51, 0x00080000);

	/* Step13 */
	write_phy_reg(DDRPHY_R18, 0x11200000);

	/* Step14 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step15 */
	write_phy_reg(DDRPHY_R51, 0x00000000);

	/* Step16 */
	write_phy_reg(DDRPHY_R18, 0x30A00000);

	/* Step17 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;
}

static void opt_delay(uint32_t sl_lanes, uint32_t byte_lanes)
{
	uint32_t tmp;
	uint16_t dlls_trim_ca;
#if RZA3M
	uint16_t dlls_trim_clk;
#endif
	uint16_t dlls_trim_2[MAX_BYTE_LANES];
	uint16_t op_dqs_trim[MAX_BYTE_LANES];
	uint16_t min_WL;
	uint16_t min_WD = 128;
	int i, j;

	/* Step2 */
	rmw_phy_reg(DDRPHY_R27, 0xFBFFFFFF, 0x04000000);

	/* Step3 */
	rmw_mc_reg(DDRMC_R004, ~(0x7F << LP_CMD_OFFSET),
		   (0x00000011 << LP_CMD_OFFSET));
	while (((read_mc_reg(DDRMC_R005) >> 24) & 0x7F) != 0x48)
		;

	/* Step4 */
	write_phy_reg(DDRPHY_R29, 0);
#if RZA3M
	dlls_trim_clk = read_phy_reg(DDRPHY_R57) & 0x7F;
	dlls_trim_ca = read_phy_reg(DDRPHY_R28) & 0x7F;
	if (dlls_trim_clk <= dlls_trim_ca) {
		panic();
	}
#else
	dlls_trim_ca = read_phy_reg(DDRPHY_R57) & 0x7F;
#endif
	min_WL = dlls_trim_ca;

	for (i = 0; i < byte_lanes; i++) {
		write_phy_reg(DDRPHY_R29, 6 * i);
		dlls_trim_2[i] = read_phy_reg(DDRPHY_R31) & 0x3F;
		min_WL = MIN(min_WL, dlls_trim_2[i]);

		write_phy_reg(DDRPHY_R29, (7 * i) | 0x00000900);
		op_dqs_trim[i] = read_phy_reg(DDRPHY_R56) & 0x3F;
		min_WD = MIN(min_WD, op_dqs_trim[i]);
		for (j = 0; j < 9; j++) {
			write_phy_reg(DDRPHY_R29, (i * 7) | (j << 8));
			tmp = read_phy_reg(DDRPHY_R56) & 0x7F;
			tmp = (tmp & 0x40) ? (op_dqs_trim[i] + (tmp & 0x3F)) :
					     (op_dqs_trim[i] - (tmp & 0x3F));
			min_WD = MIN((uint32_t)min_WD, tmp);
		}
	}

	/* Step5 */
#if RZA3M
	tmp = (dlls_trim_clk - min_WL) & 0x7F;
#else
	tmp = (dlls_trim_ca - min_WL) & 0x7F;
#endif
	write_phy_reg(DDRPHY_R29, 0);
	write_phy_reg(DDRPHY_R57, tmp | 0x00000080);
#if RZA3M
	tmp = (dlls_trim_ca - min_WL) & 0x7F;
#endif
	write_phy_reg(DDRPHY_R28, tmp | 0x00000200);
	rmw_phy_reg(DDRPHY_R27, 0xFFFFFF80, tmp);

	for (i = 0; i < byte_lanes; i++) {
		tmp = (dlls_trim_2[i] - min_WL) & 0x3F;
		write_phy_reg(DDRPHY_R29, 6 * i);
		rmw_phy_reg(DDRPHY_R31, 0xFFFFFFC0, tmp);

		write_phy_reg(DDRPHY_R29, (7 * i) | 0x00000900);
		tmp = (op_dqs_trim[i] - min_WD) & 0x3F;
		rmw_phy_reg(DDRPHY_R56, 0xFFFFFF80, tmp);
	}

	/* Step6 */
	rmw_mc_reg(DDRMC_R004, ~(0x7F << LP_CMD_OFFSET),
		   (0x00000002 << LP_CMD_OFFSET));
	while (((read_mc_reg(DDRMC_R005) >> 24) & 0x7F) != 0x40)
		;

	/* Step6 */
	rmw_phy_reg(DDRPHY_R27, 0xFBFFFFFF, 0x00000000);
	while ((read_phy_reg(DDRPHY_R42) & 0x3) != sl_lanes)
		;
}

static void exec_trainingSL(uint32_t sl_lanes)
{
	/* Step2 */
	write_phy_reg(DDRPHY_R62, 0x00000001);

	/* Step3 */
	write_phy_reg(DDRPHY_R34, 0x00000010);

	/* Step4 */
	write_phy_reg(DDRPHY_R19, 0x789B3DE0);
	write_phy_reg(DDRPHY_R20, 0xF10E4A56);

	/* Step5 */
	write_phy_reg(DDRPHY_R18, 0x11200000);

	/* Step6 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step7 */
	write_phy_reg(DDRPHY_R18, 0x11200000);

	/* Step8 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step9 */
	write_phy_reg(DDRPHY_R18, 0x34200000);

	/* Step10 */
	while ((read_phy_reg(DDRPHY_R18) & 0x10000000) != 0x00000000)
		;

	/* Step11 */
	if ((read_phy_reg(DDRPHY_R18) & sl_lanes) != sl_lanes) {
		panic();
	}

	/* Step12 */
	write_phy_reg(DDRPHY_R62, 0x00000003);
}

static void program_phy2(void)
{
	uint16_t dram_clk_period;
	uint32_t tmp, b21, b22, b23;

	/* Step1 */
	tmp = read_mc_reg(DDRMC_R039);
	dram_clk_period = tmp & 0xFFFF;
	b21 = (tmp >> 21) & 0x1;
	b22 = (tmp >> 22) & 0x1;
	b23 = (tmp >> 23) & 0x1;

	/* Step2 */
	tmp = 1000000000000UL / (2 * dram_clk_period * 256);
	rmw_phy_reg(DDRPHY_R64, 0xFFFFFFFE, b23);
	rmw_phy_reg(DDRPHY_R59, 0xFFFFFFFE, (b23 == 1 ? 0 : b22));
	write_phy_reg(DDRPHY_R55, (b21 << 24) | MIN(tmp, 0xFFFFFFU));

	/* Step3 */
	tmp = 1000000000000UL / (dram_clk_period * 256);
	rmw_phy_reg(DDRPHY_R27, 0xFBFFFFFF, 0x04000000);
	rmw_phy_reg(DDRPHY_R27, 0xFC0000FF, MIN(tmp, 0x3FFFFU) << 8);
	rmw_phy_reg(DDRPHY_R27, 0xFBFFFFFF, 0x00000000);
}

static void program_mc2(void)
{
	uint8_t main_clk_dly;
	uint8_t tphy_rdlat;
	uint32_t tmp;

	/* Step1 */
	main_clk_dly = (read_phy_reg(DDRPHY_R21) >> 4) & 0xF;
	tmp = (read_mc_reg(DDRMC_R028) >> 24) & 0x7F;
	tphy_rdlat = ((main_clk_dly + 1 + 1) * 2) + 2 + ((tmp == 1) ? 2 : 0);

	/* Step2 */
	rmw_mc_reg(DDRMC_R027, 0xFFFFFF80, tphy_rdlat & 0x7F);
}
