/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Internal driver context and helpers for the QTI clock driver.
 */

#ifndef QTI_CLOCK_DRIVER_H
#define QTI_CLOCK_DRIVER_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/clock/clock.h>
#include <drivers/qti/clock/clock_cfg.h>
#include <drivers/qti/clock/clock_descriptors.h>

/* Main clock driver context. */
struct clock_drv_ctxt {
	struct clock_config	*cfg;
	bool			initialized;
};

/* Image init hooks, implemented by the chipset back-end. */
int clock_init_image(struct clock_drv_ctxt *drv_ctxt);
int clock_post_init_image(struct clock_drv_ctxt *drv_ctxt);

/* Enable/disable all clocks in a group, plus any required power domains. */
int clock_group_enable(enum clock_group_type group);
int clock_group_disable(enum clock_group_type group);

/* Enable a clock source (and its parents). */
int clock_source_enable(struct clock_source *source);

/* Register accessors operating on the clock_descriptors.h descriptors. */

void clock_hal_set_clock(struct clock_desc *clock, bool enable);
int clock_hal_wait_for_clock_on(const struct clock_desc *clock);

void clock_hal_enable_source(const struct clock_source_desc *source);
int clock_hal_wait_for_source_on(const struct clock_source_desc *source);

void clock_hal_enable_power_domain(struct clock_power_domain_desc *power_domain);
void clock_hal_disable_power_domain(struct clock_power_domain_desc *power_domain);
int clock_hal_wait_for_power_domain_on(const struct clock_power_domain_desc *power_domain);
int clock_hal_wait_for_power_domain_off(const struct clock_power_domain_desc *power_domain);

#endif /* QTI_CLOCK_DRIVER_H */
