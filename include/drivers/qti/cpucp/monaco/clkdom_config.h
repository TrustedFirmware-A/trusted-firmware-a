/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_CPUCP_MONACO_CLKDOM_CONFIG_H
#define QTI_CPUCP_MONACO_CLKDOM_CONFIG_H

/*
 * In CPUCP SCMI clock ID order. Cluster 0 is the Cortex-A78C cores, with CPU2
 * and CPU3 in the gold+ domain; cluster 1 is the Cortex-A55 cores.
 */
enum clock_domain_id {
	CD_CL0_L3,
	CD_CL0_GOLD,
	CD_CL1_L3,
	CD_CL1_SILVER,
	CD_CL0_GOLDPLUS,
	CD_MAX
};

#endif /* QTI_CPUCP_MONACO_CLKDOM_CONFIG_H */
