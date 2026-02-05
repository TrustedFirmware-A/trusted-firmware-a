/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <cdefs.h>

#include <drivers/qti/watchdog/watchdog.h>

uint64_t qti_watchdog_pet_ticks __section("tzfw_coherent_mem");

void qti_watchdog_set_route(unsigned int irm, u_register_t target)
{
}

void qti_watchdog_start(uint32_t bark, uint32_t bite)
{
}

void qti_watchdog_stop(void)
{
}

void qti_watchdog_pet(void)
{
}

int qti_watchdog_init(void)
{
	return 0;
}

