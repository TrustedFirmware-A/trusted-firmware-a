/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * TF-A clock driver: clock-group bring-up/teardown and source enables.
 */

#include <errno.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <common/debug.h>
#include <drivers/qti/clock/clock.h>
#include <drivers/qti/clock/clock_cfg.h>
#include <drivers/qti/clock/clock_driver.h>
#include <drivers/qti/clock/clock_rail.h>

/*
 * Configuration data, provided by the chipset back-end.
 */
extern struct clock_config clock_cfg;

static struct clock_drv_ctxt clock_drv_ctxt = {
	.cfg = &clock_cfg,
};

int clock_source_enable(struct clock_source *source)
{
	int ret;

	if (source == NULL) {
		return -EINVAL;
	}

	if (source->source != NULL) {
		ret = clock_source_enable(source->source);
		if (ret != 0) {
			return ret;
		}
	}

	/* Only votable PLLs are driven here; no source declares an RPM resource. */
	if (source->ref_count == 0U) {
		clock_hal_enable_source(&source->hw_source);
		if (clock_hal_wait_for_source_on(&source->hw_source) != 0) {
			return -ETIMEDOUT;
		}
	}
	source->ref_count++;

	return 0;
}

static int clock_group_enable_internal(struct clock_group *group)
{
	struct clock_desc *clock;
	struct clock_power_domain_desc *pd;
	bool timeout = false;

	rail_vote_apply(group);

	if (group->access_clks != NULL) {
		group->access_clk_count = 0U;
		for (clock = group->access_clks; clock->cbcr_addr != 0U;
		     clock++) {
			group->access_clk_count++;

			if (chipinfo_is_part_disabled(clock->part,
						   clock->part_idx)) {
				continue;
			}

			/*
			 * Skip the accessor if TF-A already enabled it, so a retry
			 * after a failed group enable does not lose ownership.
			 */
			if (!clock->tfa_enabled) {
				clock_hal_set_clock(clock, true);
			}
			if (clock_hal_wait_for_clock_on(clock) != 0) {
				return -ETIMEDOUT;
			}
		}
	}

	if (group->pwr_domains != NULL) {
		group->pwr_domain_count = 0U;
		for (pd = group->pwr_domains;
		     (pd->gdscr_addr != 0U) || (pd->vote_reg.addr != 0U);
		     pd++) {
			group->pwr_domain_count++;

			if (chipinfo_is_part_disabled(pd->part, pd->part_idx)) {
				continue;
			}

			if (!pd->tfa_enabled) {
				clock_hal_enable_power_domain(pd);
			}

			/*
			 * Poll immediately: some chipsets have sibling GDSCs
			 * (e.g. GPU) that must see this one fully up before
			 * their own enable is issued.
			 */
			if (clock_hal_wait_for_power_domain_on(pd) != 0) {
				return -ETIMEDOUT;
			}
		}
	}

	group->clk_count = 0U;
	for (clock = group->clks; clock->cbcr_addr != 0U; clock++) {
		group->clk_count++;

		if (chipinfo_is_part_disabled(clock->part, clock->part_idx)) {
			continue;
		}

		if (!clock->tfa_enabled) {
			clock_hal_set_clock(clock, true);
		}
	}
	for (clock = group->clks; clock->cbcr_addr != 0U; clock++) {
		if (chipinfo_is_part_disabled(clock->part, clock->part_idx)) {
			continue;
		}

		timeout |= (clock_hal_wait_for_clock_on(clock) != 0);
	}

	if (timeout) {
		return -ETIMEDOUT;
	}

	return 0;
}

static void clock_group_disable_internal(struct clock_group *group)
{
	struct clock_desc *clock;
	struct clock_power_domain_desc *pd;
	uint32_t i;

	for (i = group->clk_count; i > 0U; i--) {
		clock = &group->clks[i - 1U];
		/* Disable the resource only if TF-A enabled it. */
		if (clock->tfa_enabled) {
			clock_hal_set_clock(clock, false);
		}
	}

	if (group->pwr_domains != NULL) {
		for (i = group->pwr_domain_count; i > 0U; i--) {
			pd = &group->pwr_domains[i - 1U];
			if (pd->tfa_enabled) {
				clock_hal_disable_power_domain(pd);
				/*
				 * Confirm the GDSC is off before the rail
				 * vote backing it is cleared below.
				 */
				clock_hal_wait_for_power_domain_off(pd);
			}
		}
	}

	if (group->access_clks != NULL) {
		for (i = group->access_clk_count; i > 0U; i--) {
			clock = &group->access_clks[i - 1U];
			if (clock->tfa_enabled) {
				clock_hal_set_clock(clock, false);
			}
		}
	}

	rail_vote_clear(group);
}

static bool clock_init(void)
{
	int ret;

	if (clock_drv_ctxt.initialized) {
		return true;
	}

	rail_vote_init();

	ret = clock_init_image(&clock_drv_ctxt);
	if (ret != 0) {
		ERROR("Clock: init failed (%d)\n", ret);
		return false;
	}

	clock_drv_ctxt.initialized = true;
	return true;
}

static void clock_init_done(void)
{
	int ret;

	if (!clock_drv_ctxt.initialized) {
		return;
	}

	ret = clock_post_init_image(&clock_drv_ctxt);
	if (ret != 0) {
		ERROR("Clock: init done failed (%d)\n", ret);
	}

	/* Release the driver-lifetime cx/mx rail holds taken at init. */
	rail_vote_deinit();
}

void qti_clock_init(void (*fn)(void))
{
	if (!clock_init()) {
		panic();
	}

	if (fn != NULL) {
		fn();
	}

	clock_init_done();
}

int clock_group_enable(enum clock_group_type group_type)
{
	struct clock_group *group;
	int ret;

	if ((group_type >= CLOCK_GROUP_TOTAL) ||
	    (clock_drv_ctxt.cfg->clock_groups == NULL)) {
		return -EINVAL;
	}

	group = &clock_drv_ctxt.cfg->clock_groups[group_type];
	if (group->clks == NULL) {
		return -ENODEV;
	}

	if (group->ref_count++ == 0U) {
		ret = clock_group_enable_internal(group);
		if (ret != 0) {
			/* Roll back the vote so a retry re-runs bring-up. */
			group->ref_count--;
			return ret;
		}
	}

	return 0;
}

int clock_group_disable(enum clock_group_type group_type)
{
	struct clock_group *group;

	if ((group_type >= CLOCK_GROUP_TOTAL) ||
	    (clock_drv_ctxt.cfg->clock_groups == NULL)) {
		return -EINVAL;
	}

	group = &clock_drv_ctxt.cfg->clock_groups[group_type];
	if (group->clks == NULL) {
		return -ENODEV;
	}

	if ((group->ref_count > 0U) && (group->ref_count-- == 1U)) {
		clock_group_disable_internal(group);
	}

	return 0;
}
