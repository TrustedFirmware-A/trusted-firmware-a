/*
 * Copyright 2020-2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <errno.h>

#include <assert.h>
#include <common/debug.h>
#include <ddr_utils.h>
#include <mmio_poll.h>

static uint32_t get_mail(uint32_t *mail);
static uint32_t ack_mail(void);
static uint8_t get_max_cdd(const uint32_t cdd_addr[], size_t size);
static uint16_t get_max_delay(const uint32_t delay_addr[], size_t size);
static uint8_t get_avg_vref(const uint32_t vref_addr[], size_t size);
static bool is_lpddr4(void);

static struct space_timing_params tr_res = {
		.cdd = {.rr = 0, .rw = 0, .wr = 0, .ww = 0},
		.vref_ca = 0,
		.vref_dq = 0,
		.tphy_wrdata_delay = 0
};

/* Modify bitfield value with delta, given bitfield position and mask */
bool update_bf(uint32_t *v, uint8_t pos, uint32_t mask, int32_t delta)
{
	uint32_t bf_val;
	int64_t new_val;

	bf_val = (*v >> pos) & mask;
	new_val = (int64_t)bf_val + delta;

    /* Check if new value is within valid range [0, mask] */
	if ((new_val < 0) || (new_val > (int64_t)mask)) {
		return false;
	}

	*v = (*v & ~(mask << pos)) | ((uint32_t)new_val << pos);
	return true;
}

/* Sets default AXI parity. */
uint32_t set_axi_parity(void)
{
	uint32_t swstat_reg, timeout = DEFAULT_TIMEOUT_US;
	int err;

	/* Enable Parity For All AXI Interfaces */
	mmio_setbits_32(DDR_SS_REG, DDR_SS_AXI_PARITY_ENABLE_MASK);

	/* Set AXI_PARITY_TYPE to 0x1ff;   0-even, 1-odd */
	mmio_setbits_32(DDR_SS_REG, DDR_SS_AXI_PARITY_TYPE_MASK);

	/* For LPDDR4 Set DFI1_ENABLED to 0x1 */
	if (is_lpddr4()) {
		mmio_setbits_32(DDR_SS_REG, DDR_SS_DFI_1_ENABLED);
	}

	/* Enable HIF, CAM Queueing */
	mmio_write_32(DDRC_BASE + OFFSET_DDRC_DBG1, DBG1_DISABLE_DE_QUEUEING);

	/* Disable auto-refresh: RFSHCTL3.dis_auto_refresh = 1 */
	mmio_setbits_32(DDRC_BASE + OFFSET_DDRC_RFSHCTL3, RFSHCTL3_DISABLE_AUTO_REFRESH);

	/* Disable power down: PWRCTL.powerdown_en = 0 */
	mmio_clrbits_32(DDRC_BASE + OFFSET_DDRC_PWRCTL, PWRCTL_POWER_DOWN_ENABLE_MASK);

	/* Disable self-refresh: PWRCTL.selfref_en = 0 */
	mmio_clrbits_32(DDRC_BASE + OFFSET_DDRC_PWRCTL, PWRCTL_SELF_REFRESH_ENABLE_MASK);

	/*
	 * Disable assertion of dfi_dram_clk_disable:
	 * PWRTL.en_dfi_dram_clk_disable = 0
	 */
	mmio_clrbits_32(DDRC_BASE + OFFSET_DDRC_PWRCTL, PWRCTL_EN_DFI_DRAM_CLOCK_DIS_MASK);

	/* Enable Quasi-Dynamic Programming */
	mmio_write_32(DDRC_BASE + OFFSET_DDRC_SWCTL, SWCTL_SWDONE_ENABLE);

	/* Confirm Register Programming Done Ack is Cleared */
	err = mmio_read_32_poll_timeout(DDRC_BASE + OFFSET_DDRC_SWSTAT, swstat_reg,
					(swstat_reg & SWSTAT_SWDONE_ACK_MASK) != SWSTAT_SW_DONE,
					timeout);
	if (err != 0) {
		ERROR("Failed to clear register programming done ACK\n");
		return TIMEOUT_ERR;
	}

	/* DFI_INIT_COMPLETE_EN set to 0 */
	mmio_clrbits_32(DDRC_BASE + OFFSET_DDRC_DFIMISC, DFIMISC_DFI_INIT_COMPLETE_EN_MASK);

	/* Set SWCTL.sw_done to 1 */
	mmio_write_32(DDRC_BASE + OFFSET_DDRC_SWCTL, SWCTL_SWDONE_DONE);

	err = mmio_read_32_poll_timeout(DDRC_BASE + OFFSET_DDRC_SWSTAT, swstat_reg,
					(swstat_reg & SWSTAT_SWDONE_ACK_MASK) != SWSTAT_SW_NOT_DONE,
					timeout);
	if (err != 0) {
		ERROR("Failed to confirm DDRC SWSTAT switch done ACK\n");
		return TIMEOUT_ERR;
	}

	return NO_ERR;
}

/* Wait until firmware finishes execution and return training result */
uint32_t wait_firmware_execution(void)
{
	uint32_t timeout_us = DEFAULT_TIMEOUT_US, ret = NO_ERR, mail = 0;
	uint64_t timeout = timeout_init_us(timeout_us);
	bool loop_continue = true;
	bool timeout_expired;

	do {
		ret = get_mail(&mail);
		if (ret != NO_ERR) {
			loop_continue = false;
		} else if (mail == TRAINING_FAILED_MSG) {
			/* Training stage failed */
			ret = TRAINING_FAILED;
			loop_continue = false;
		} else if (mail == TRAINING_OK_MSG) {
			loop_continue = false;
		} else {
			/* Continue waiting for training result */
		}
		timeout_expired = timeout_elapsed(timeout);
		if (timeout_expired) {
			ret = TRAINING_FAILED;
			loop_continue = false;
		}
		/* Continue loop if no exit condition met and timeout not elapsed */
	} while (loop_continue);

	return ret;
}

/* Acknowledge received message */
static uint32_t ack_mail(void)
{
	uint32_t timeout = DEFAULT_TIMEOUT_US;
	uint32_t uct_reg;
	int err;

	/* ACK message */
	mmio_write_32(DDR_PHYA_DCTWRITEPROT, APBONLY_DCTWRITEPROT_ACK_EN);

	err = mmio_read_32_poll_timeout(DDR_PHYA_APBONLY_UCTSHADOWREGS, uct_reg,
					(uct_reg & UCT_WRITE_PROT_SHADOW_MASK) !=
					UCT_WRITE_PROT_SHADOW_ACK,
					timeout);
	if (err != 0) {
		ERROR("DDR PHY did not acknowledge write protection\n");
		return TIMEOUT_ERR;
	}

	mmio_write_32(DDR_PHYA_DCTWRITEPROT, APBONLY_DCTWRITEPROT_ACK_DIS);

	return NO_ERR;
}

/* Read available message from DDR PHY microcontroller */
static uint32_t get_mail(uint32_t *mail)
{
	uint32_t uct_reg, timeout = DEFAULT_TIMEOUT_US;
	int err;

	err = mmio_read_32_poll_timeout(DDR_PHYA_APBONLY_UCTSHADOWREGS, uct_reg,
					(uct_reg & UCT_WRITE_PROT_SHADOW_MASK) ==
					UCT_WRITE_PROT_SHADOW_ACK,
					timeout);
	if (err != 0) {
		ERROR("DDR PHY did not acknowledge UCT write protection\n");
		return TIMEOUT_ERR;
	}

	*mail = mmio_read_32(DDR_PHYA_APBONLY_UCTWRITEONLYSHADOW);
	/* ACK */
	return ack_mail();
}

/* Read Critical Delay Differences from message block and store max values */
void read_cdds(void)
{
	const uint32_t rank0_rw_addr[] = {CDD_CHA_RW_0_0, CDD_CHB_RW_0_0};
	const uint32_t rank0_wr_addr[] = {CDD_CHA_WR_0_0, CDD_CHB_WR_0_0};
	uint8_t cdd_rr = 0, cdd_ww = 0, cdd_wr = 0, cdd_rw = 0;
	uint32_t mstr;

	/* Max CDD values for single-rank */
	tr_res.cdd.rr = cdd_rr;
	tr_res.cdd.ww = cdd_ww;
	tr_res.cdd.rw = is_lpddr4() ?
			get_max_cdd(rank0_rw_addr, ARRAY_SIZE(rank0_rw_addr)) :
			mmio_read_8(CDD_CHA_RW_0_0_DDR3);
	tr_res.cdd.wr = is_lpddr4() ?
			get_max_cdd(rank0_wr_addr, ARRAY_SIZE(rank0_wr_addr)) :
			mmio_read_8(CDD_CHA_WR_0_0_DDR3);

	/* Check MSTR.active_ranks to identify multi-rank configurations */
	mstr = mmio_read_32(DDRC_BASE);
	if ((mstr & MSTR_ACT_RANKS_MASK) == MSTR_DUAL_RANK_VAL) {
		/* Compute max CDDs for both ranks depending on memory type */
		if (is_lpddr4()) {
			const uint32_t rr_addr[] = {
				CDD_CHA_RR_1_0, CDD_CHA_RR_0_1,
				CDD_CHB_RR_1_0, CDD_CHB_RR_0_1
				};
			const uint32_t ww_addr[] = {
				CDD_CHA_WW_1_0, CDD_CHA_WW_0_1,
				CDD_CHB_WW_1_0, CDD_CHB_WW_0_1
				};
			const uint32_t rw_addr[] = {
				CDD_CHA_RW_1_1, CDD_CHA_RW_1_0,
				CDD_CHA_RW_0_1, CDD_CHB_RW_1_1,
				CDD_CHB_RW_1_0, CDD_CHB_RW_0_1
				};
			const uint32_t wr_addr[] = {
				CDD_CHA_WR_1_1, CDD_CHA_WR_1_0,
				CDD_CHA_WR_0_1, CDD_CHB_WR_1_1,
				CDD_CHB_WR_1_0, CDD_CHB_WR_0_1
				};

			cdd_rr = get_max_cdd(rr_addr, ARRAY_SIZE(rr_addr));
			cdd_rw = get_max_cdd(rw_addr, ARRAY_SIZE(rw_addr));
			cdd_wr = get_max_cdd(wr_addr, ARRAY_SIZE(wr_addr));
			cdd_ww = get_max_cdd(ww_addr, ARRAY_SIZE(ww_addr));
		} else {
			const uint32_t rr_addr[] = {CDD_CHA_RR_1_0_DDR3,
						    CDD_CHA_RR_0_1_DDR3};
			const uint32_t ww_addr[] = {CDD_CHA_WW_1_0_DDR3,
						    CDD_CHA_WW_0_1_DDR3};
			const uint32_t rw_addr[] = {CDD_CHA_RW_1_1_DDR3,
						    CDD_CHA_RW_1_0_DDR3,
						    CDD_CHA_RW_0_1_DDR3};
			const uint32_t wr_addr[] = {CDD_CHA_WR_1_1_DDR3,
						    CDD_CHA_WR_1_0_DDR3,
						    CDD_CHA_WR_0_1_DDR3};

			cdd_rr = get_max_cdd(rr_addr, ARRAY_SIZE(rr_addr));
			cdd_rw = get_max_cdd(rw_addr, ARRAY_SIZE(rw_addr));
			cdd_wr = get_max_cdd(wr_addr, ARRAY_SIZE(wr_addr));
			cdd_ww = get_max_cdd(ww_addr, ARRAY_SIZE(ww_addr));
		}

		/* Update max CDD values if needed */
		if (cdd_rr > tr_res.cdd.rr) {
			tr_res.cdd.rr = cdd_rr;
		}
		if (cdd_rw > tr_res.cdd.rw) {
			tr_res.cdd.rw = cdd_rw;
		}
		if (cdd_wr > tr_res.cdd.wr) {
			tr_res.cdd.wr = cdd_wr;
		}
		if (cdd_ww > tr_res.cdd.ww) {
			tr_res.cdd.ww = cdd_ww;
		}
	}
}

/* Read trained VrefCA from message block and store average value */
void read_vref_ca(void)
{
	const uint32_t rank0_vref_addr[] = {VREF_CA_A0, VREF_CA_B0};
	const uint32_t rank01_vref_addr[] = {VREF_CA_A0, VREF_CA_A1,
					     VREF_CA_B0, VREF_CA_B1};
	uint32_t mstr;

	/* Check MSTR.active_ranks to identify multi-rank configurations */
	mstr = mmio_read_32(DDRC_BASE);
	if ((mstr & MSTR_ACT_RANKS_MASK) == MSTR_DUAL_RANK_VAL) {
		tr_res.vref_ca = get_avg_vref(rank01_vref_addr,
					      ARRAY_SIZE(rank01_vref_addr));
	} else {
		tr_res.vref_ca = get_avg_vref(rank0_vref_addr,
					      ARRAY_SIZE(rank0_vref_addr));
	}
}

/* Read trained VrefDQ from message block and store average value*/
void read_vref_dq(void)
{
	const uint32_t rank0_vref_addr[] = {VREF_DQ_A0, VREF_DQ_B0};
	const uint32_t rank01_vref_addr[] = {VREF_DQ_A0, VREF_DQ_A1,
					     VREF_DQ_B0, VREF_DQ_B1};
	uint32_t mstr;

	/* Check MSTR.active_ranks to identify multi-rank configurations */
	mstr = mmio_read_32(DDRC_BASE);
	if ((mstr & MSTR_ACT_RANKS_MASK) == MSTR_DUAL_RANK_VAL) {
		tr_res.vref_dq = get_avg_vref(rank01_vref_addr,
					      ARRAY_SIZE(rank01_vref_addr));
	} else {
		tr_res.vref_dq = get_avg_vref(rank0_vref_addr,
					      ARRAY_SIZE(rank0_vref_addr));
	}
}

/* Calculate DFITMG1.dfi_t_wrdata_delay */
void compute_tphy_wrdata_delay(void)
{
	uint16_t tx_dqsdly, tx_dqsdly_tg1, tctrl_delay, burst_length,
		 wrdata_use_dfi_phy_clk;

	const uint32_t single_rank_dly_addr[] = {
		DBYTE0_TXDQSDLYTG0_U0, DBYTE0_TXDQSDLYTG0_U1,
		DBYTE1_TXDQSDLYTG0_U0, DBYTE1_TXDQSDLYTG0_U1,
		DBYTE2_TXDQSDLYTG0_U0, DBYTE2_TXDQSDLYTG0_U1,
		DBYTE3_TXDQSDLYTG0_U0, DBYTE3_TXDQSDLYTG0_U1
	};

	const uint32_t dual_rank_dly_addr[] = {
		DBYTE0_TXDQSDLYTG1_U0, DBYTE0_TXDQSDLYTG1_U1,
		DBYTE1_TXDQSDLYTG1_U0, DBYTE1_TXDQSDLYTG1_U1,
		DBYTE2_TXDQSDLYTG1_U0, DBYTE2_TXDQSDLYTG1_U1,
		DBYTE3_TXDQSDLYTG1_U0, DBYTE3_TXDQSDLYTG1_U1
	};

	uint32_t mstr, dfitmg0;

	/* Compute max tx_dqdqsdly for rank 0 */
	tx_dqsdly = get_max_delay(single_rank_dly_addr,
				  ARRAY_SIZE(single_rank_dly_addr));

	/* Check MSTR.active_ranks to identify multi-rank configurations */
	mstr = mmio_read_32(DDRC_BASE);
	if ((mstr & MSTR_ACT_RANKS_MASK) == MSTR_DUAL_RANK_VAL) {
		/* Compute max tx_dqdqsdly for rank 1 */
		tx_dqsdly_tg1 = get_max_delay(dual_rank_dly_addr,
					      ARRAY_SIZE(dual_rank_dly_addr));
		if (tx_dqsdly_tg1 > tx_dqsdly) {
			tx_dqsdly = tx_dqsdly_tg1;
		}
	}

	/* Extract coarse delay value + 1 for fine delay */
	tx_dqsdly = (tx_dqsdly >> TXDQDLY_COARSE) + 1U;

	/* Compute tctrl_delay */
	tctrl_delay = (uint16_t)((mmio_read_16(ARDPTR_INITVAL_ADDR) / 2U) +
				 (DDRPHY_PIPE_DFI_MISC * 2U) + 3U);

	burst_length = (uint16_t)(mstr >> MSTR_BURST_RDWR_POS) &
		       MSTR_BURST_RDWR_MASK;
	dfitmg0 = mmio_read_16(DDRC_BASE + OFFSET_DDRC_DFITMG0);
	wrdata_use_dfi_phy_clk = (uint16_t)(dfitmg0 >> DFITMG0_PHY_CLK_POS) &
				 DFITMG0_PHY_CLK_MASK;

	/* Program */
	tr_res.tphy_wrdata_delay = tctrl_delay + 6U + burst_length +
				   wrdata_use_dfi_phy_clk + tx_dqsdly;
	tr_res.tphy_wrdata_delay = (tr_res.tphy_wrdata_delay / 2U) +
				   (tr_res.tphy_wrdata_delay % 2U);
}

/* Check if memory type is LPDDR4 using MSTR register */
static bool is_lpddr4(void)
{
	uint32_t mstr;

	mstr = mmio_read_32(DDRC_BASE);
	return ((mstr & MSTR_DRAM_MASK) == MSTR_LPDDR4_VAL);
}

/*
 * Get maximum critical delay difference value.
 * @param cdd_addr[] - list of CDD memory addresses
 * @param size - number of CDDs to be read
 * @return max CDD value
 */
static uint8_t get_max_cdd(const uint32_t cdd_addr[], size_t size)
{
	uint8_t cdd, max = 0;
	int8_t signed_cdd;
	size_t i;

	for (i = 0; i < size; i++) {
		/* CDD has type int8_t - read as unsigned and cast to signed */
		signed_cdd = (int8_t)(mmio_read_8(cdd_addr[i]));
		/* We need to use absolute value */
		cdd = (uint8_t)((signed_cdd >= 0) ? signed_cdd : -signed_cdd);
		max = MAX(cdd, max);
	}
	return max;
}

/*
 * Get maximum delay value.
 * @param delay_addr[] - list of CDD memory addresses
 * @param size - number of values to be read
 * @return max delay value
 */
static uint16_t get_max_delay(const uint32_t delay_addr[], size_t size)
{
	uint16_t value, max = 0;
	size_t i;

	for (i = 0; i < size; i++) {
		value = mmio_read_16(delay_addr[i]);
		max = MAX(value, max);
	}
	return max;
}

/*
 * Compute average vref value.
 * @param vref_addr[] - list of vref memory addresses
 * @param size - number of values to be read
 * @return average vref value
 */
static uint8_t get_avg_vref(const uint32_t vref_addr[], size_t size)
{
	uint32_t sum = 0;
	size_t i;

	for (i = 0; i < size; i++) {
		sum += mmio_read_8(vref_addr[i]);
	}

	assert((sum / size) <= UINT8_MAX);

	return (uint8_t)(sum / size);
}
