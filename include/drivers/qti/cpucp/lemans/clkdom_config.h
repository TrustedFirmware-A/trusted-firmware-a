/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_CPUCP_LEMANS_CLKDOM_CONFIG_H
#define QTI_CPUCP_LEMANS_CLKDOM_CONFIG_H

/*
 * Clock domains for lemans (qcs9075). The APSS is organised as two Gold DSU
 * clusters, each with its own L3 and CPU (Gold) clock domain.
 */
enum clock_domain_id {
	CD_CL0_L3,
	CD_CL0_GOLD,
	CD_CL1_L3,
	CD_CL1_GOLD,
	CD_MAX
};

#endif /* QTI_CPUCP_LEMANS_CLKDOM_CONFIG_H */
