/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <cpu_config.h>

#define MONACO_CL0_GOLD_CORES_CPUMASK		0x03U
#define MONACO_CL1_SILVER_CORES_CPUMASK		0xf0U
#define MONACO_CL0_GOLDPLUS_CORES_CPUMASK	0x0cU

struct clkdom_cpumask clkdom_cpumasks[CD_MAX] = {
	{ CD_CL0_L3,       0x00U                             },
	{ CD_CL0_GOLD,     MONACO_CL0_GOLD_CORES_CPUMASK     },
	{ CD_CL1_L3,       0x00U                             },
	{ CD_CL1_SILVER,   MONACO_CL1_SILVER_CORES_CPUMASK   },
	{ CD_CL0_GOLDPLUS, MONACO_CL0_GOLDPLUS_CORES_CPUMASK },
};

/*
 * The boot firmware brings up the boot core's domain and both L3 domains. The
 * Cortex-A55 and gold+ domains are enabled through CPUCP when their first core
 * powers on.
 */
unsigned int clkdom_init_status[CD_MAX] = {
	1U, 1U, 1U, 0U, 0U
};
