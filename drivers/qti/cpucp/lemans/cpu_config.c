/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#include <cpu_config.h>

/*
 * Clock-domain to CPU-mask mapping for lemans (qcs9075).
 *
 * The qcs9075 APSS exposes eight CPUs split across two Gold DSU clusters:
 * CPU0-CPU3 belong to cluster 0 (CL0) and CPU4-CPU7 belong to cluster 1 (CL1),
 * matching the PSCI node topology. Each cluster has its own L3 and Gold (CPU)
 * clock domain; the L3 domains carry no CPU mask of their own.
 */
#define LEMANS_CL0_GOLD_CORES_CPUMASK	0x0fU
#define LEMANS_CL1_GOLD_CORES_CPUMASK	0xf0U

struct clkdom_cpumask clkdom_cpumasks[CD_MAX] = {
	{ CD_CL0_L3,   0x00U                          },
	{ CD_CL0_GOLD, LEMANS_CL0_GOLD_CORES_CPUMASK  },
	{ CD_CL1_L3,   0x00U                          },
	{ CD_CL1_GOLD, LEMANS_CL1_GOLD_CORES_CPUMASK  },
};

/*
 * On lemans the CPU cluster clock domains (OSM) are managed outside EL3: the
 * boot firmware brings up the boot cluster and the kernel EPSS/OSM driver
 * drives every cluster's frequency at runtime. Issuing the CPUCP clock domain
 * enable SCMI from EL3 is therefore unnecessary, and when CPUCP does not
 * service it each core of the domain stalls on the SCMI timeout before coming
 * online. Flag every domain as already initialised so secondary bringup never
 * blocks on that SCMI.
 */
unsigned int clkdom_init_status[CD_MAX] = {
	1U, 1U, 1U, 1U
};
