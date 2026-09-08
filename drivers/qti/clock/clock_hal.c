/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Low-level clock register accessors for the QTI clock driver.
 */

#include <errno.h>
#include <stdbool.h>
#include <stdint.h>

#include <drivers/delay_timer.h>
#include <drivers/qti/clock/clock_descriptors.h>
#include <drivers/qti/clock/clock_driver.h>
#include <lib/mmio.h>

#define CLOCK_HAL_DELAY_US		1U
#define CLOCK_HAL_PLL_LOCK_TIMEOUT_US	500U
#define CLOCK_HAL_GDSC_TIMEOUT_US	500U
#define CLOCK_HAL_BRANCH_TIMEOUT_US	100U

void clock_hal_set_clock(struct clock_desc *clock, bool enable)
{
	uintptr_t addr;
	uint32_t val, mask;

	if (clock->vote_reg.addr != 0U) {
		addr = clock->vote_reg.addr;
		mask = clock->vote_reg.mask;
	} else {
		addr = clock->cbcr_addr;
		mask = HAL_CLK_BRANCH_CTRL_REG_CLK_ENABLE_FMSK;
	}

	if (enable) {
		if (addr != 0U) {
			val = mmio_read_32(addr);
			clock->tfa_enabled = ((val & mask) == 0U);
			mmio_write_32(addr, val | mask);
		}
	} else {
		if (addr != 0U) {
			mmio_write_32(addr, mmio_read_32(addr) & ~mask);
		}
		clock->tfa_enabled = false;
	}
}

void clock_hal_enable_source(const struct clock_source_desc *source)
{
	/* Only votable PLLs are supported. */
	if (source->vote_reg.addr == 0U) {
		return;
	}

	mmio_setbits_32(source->vote_reg.addr, source->vote_reg.mask);
}

int clock_hal_wait_for_source_on(const struct clock_source_desc *source)
{
	uint32_t retry = CLOCK_HAL_PLL_LOCK_TIMEOUT_US;
	uintptr_t addr = source->mode_addr;

	if (addr == 0U) {
		return 0;
	}

	while (((mmio_read_32(addr) & HAL_CLK_PLL_MODE_PLL_LOCK_DET_BMSK) == 0U) &&
	       (--retry > 0U)) {
		udelay(CLOCK_HAL_DELAY_US);
	}

	if (retry == 0U) {
		return -ETIMEDOUT;
	}

	return 0;
}

static int clock_hal_is_clock_on(const struct clock_desc *clock)
{
	if (clock->cbcr_addr == 0U) {
		return 0;
	}

	if ((mmio_read_32(clock->cbcr_addr) &
	     HAL_CLK_BRANCH_CTRL_REG_CLK_OFF_FMSK) != 0U) {
		return -EAGAIN;
	}

	return 0;
}

int clock_hal_wait_for_clock_on(const struct clock_desc *clock)
{
	uint32_t retry = CLOCK_HAL_BRANCH_TIMEOUT_US;

	if (clock->cbcr_addr == 0U) {
		return -EINVAL;
	}

	/* Skip polling when HW_CTL is set: the clock enables on traffic/usage. */
	if ((mmio_read_32(clock->cbcr_addr) &
	     HAL_CLK_BRANCH_CTRL_REG_CLK_HW_CTL_FMSK) != 0U) {
		return 0;
	}

	while ((clock_hal_is_clock_on(clock) != 0) && (--retry > 0U)) {
		udelay(CLOCK_HAL_DELAY_US);
	}

	if (retry == 0U) {
		return -ETIMEDOUT;
	}

	return 0;
}

void clock_hal_enable_power_domain(struct clock_power_domain_desc *power_domain)
{
	uintptr_t addr;
	uint32_t val, mask;

	if (power_domain->vote_reg.addr != 0U) {
		/* Vote-based (GDS_HW) enable — set the vote bit. */
		addr = power_domain->vote_reg.addr;
		mask = power_domain->vote_reg.mask;
		power_domain->tfa_enabled =
			((mmio_read_32(addr) & mask) == 0U);
		mmio_setbits_32(addr, mask);
	} else {
		addr = power_domain->gdscr_addr;
		mask = HAL_CLK_GDSCR_SW_COLLAPSE_FMSK;
		if (addr != 0U) {
			val = mmio_read_32(addr);
			power_domain->tfa_enabled = ((val & mask) != 0U);
			mmio_write_32(addr, val & ~mask);
		}
	}
}

void clock_hal_disable_power_domain(struct clock_power_domain_desc *power_domain)
{
	if (power_domain->vote_reg.addr != 0U) {
		/* Vote-based (GDS_HW) disable — clear the vote bit. */
		mmio_clrbits_32(power_domain->vote_reg.addr,
				power_domain->vote_reg.mask);
	} else if (power_domain->gdscr_addr != 0U) {
		mmio_setbits_32(power_domain->gdscr_addr,
				HAL_CLK_GDSCR_SW_COLLAPSE_FMSK);
	}

	power_domain->tfa_enabled = false;
}

static int clock_hal_is_power_domain_on(const struct clock_power_domain_desc *power_domain)
{
	if (power_domain->vote_reg.addr != 0U) {
		/* Vote-based (GDS_HW): on if our vote bit is set, no status to poll. */
		return ((mmio_read_32(power_domain->vote_reg.addr) &
			 power_domain->vote_reg.mask) != 0U) ? 0 : -EAGAIN;
	}

	if (power_domain->gdscr_addr == 0U) {
		return -EAGAIN;
	}

	/* Non-votable GDSCR: poll GDSC_POWER_UP_COMPLETE in CFG_GDSCR. */
	return ((mmio_read_32(power_domain->gdscr_addr +
			       HAL_CLK_CFG_GDSCR_OFFSET) &
		 HAL_CLK_CFG_GDSCR_POWER_UP_COMPLETE_FMSK) != 0U) ? 0 : -EAGAIN;
}

int clock_hal_wait_for_power_domain_on(const struct clock_power_domain_desc *power_domain)
{
	uint32_t retry = CLOCK_HAL_GDSC_TIMEOUT_US;

	/* Status is unreliable until ~8 XO cycles after power-on. */
	udelay(CLOCK_HAL_DELAY_US);

	while ((clock_hal_is_power_domain_on(power_domain) != 0) &&
	       (--retry > 0U)) {
		udelay(CLOCK_HAL_DELAY_US);
	}

	if (retry == 0U) {
		return -ETIMEDOUT;
	}

	return 0;
}

int clock_hal_wait_for_power_domain_off(const struct clock_power_domain_desc *power_domain)
{
	uint32_t retry = CLOCK_HAL_GDSC_TIMEOUT_US;

	/*
	 * Vote-based (GDS_HW) domains can be voted by other masters: our vote
	 * is already cleared, and there is no status bit that reflects the
	 * combined vote, so there is nothing to poll.
	 */
	if (power_domain->vote_reg.addr != 0U) {
		return 0;
	}

	if (power_domain->gdscr_addr == 0U) {
		return -EINVAL;
	}

	udelay(CLOCK_HAL_DELAY_US);

	while (((mmio_read_32(power_domain->gdscr_addr +
				HAL_CLK_CFG_GDSCR_OFFSET) &
		 HAL_CLK_CFG_GDSCR_POWER_DOWN_COMPLETE_FMSK) == 0U) &&
	       (--retry > 0U)) {
		udelay(CLOCK_HAL_DELAY_US);
	}

	if (retry == 0U) {
		return -ETIMEDOUT;
	}

	return 0;
}
