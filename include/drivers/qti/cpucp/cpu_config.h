/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_CPUCP_CPU_CONFIG_H
#define QTI_CPUCP_CPU_CONFIG_H

#include <clkdom_config.h>

struct clkdom_cpumask {
	unsigned int clkdom;
	unsigned int cpumask;
};

extern struct clkdom_cpumask clkdom_cpumasks[CD_MAX];
extern unsigned int clkdom_init_status[CD_MAX];

#endif /* QTI_CPUCP_CPU_CONFIG_H */
