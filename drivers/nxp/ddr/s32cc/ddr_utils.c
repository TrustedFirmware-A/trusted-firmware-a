/*
 * Copyright 2020-2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <errno.h>

#include <common/debug.h>
#include <ddr_utils.h>
#include <mmio_poll.h>

static uint32_t get_mail(uint32_t *mail);
static uint32_t ack_mail(void);

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
