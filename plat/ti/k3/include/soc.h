/*
 * Copyright (c) 2025-2026, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SOC_H
#define SOC_H

#include <stdint.h>

uint32_t get_soc_part_no(void);
uint32_t get_plat_cluster_start_id(void);

#endif /* SOC_H */
