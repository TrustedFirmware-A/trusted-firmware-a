/*
 * Copyright (c) 2021-2024, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef NRD_DMC620_TZC_REGIONS_H
#define NRD_DMC620_TZC_REGIONS_H

#include <drivers/arm/tzc_dmc620.h>

#define NRD_DMC620_TZC_REGIONS_DEF				\
	{							\
		.region_base = ARM_AP_TZC_DRAM1_BASE,		\
		.region_top = ARM_AP_TZC_DRAM1_END,		\
		.sec_attr = TZC_DMC620_REGION_S_RDWR		\
	}

#endif /* NRD_DMC620_TZC_REGIONS_H */
