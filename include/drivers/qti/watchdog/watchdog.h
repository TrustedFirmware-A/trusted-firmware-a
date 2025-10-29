/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef WATCHDOG_H
#define WATCHDOG_H

#include <stdint.h>

typedef enum {
	QTI_WATCHDOG_CPU_HOTPLUG = 0U,
	QTI_WATCHDOG_CPU_SUSPEND = 1U,
	QTI_WATCHDOG_CPU_WAKEUP = 2U,
} qti_watchdog_cpu_state_t;

/* Provide watchdog support to the PSCI framework */
void qti_watchdog_set_target(qti_watchdog_cpu_state_t state);

void qti_watchdog_start(uint32_t bark, uint32_t bite);
void qti_watchdog_stop(void);
void qti_watchdog_pet(void);
int qti_watchdog_init(void);

#endif /* WATCHDOG_H */
