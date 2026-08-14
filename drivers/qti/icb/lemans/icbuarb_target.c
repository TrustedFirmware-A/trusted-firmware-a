/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Lemans (QCS9075) ICB micro-arbiter target back-end.
 *
 * Provides icbuarb_target_init() as required by the common ICB
 * micro-arbiter driver (icbuarb.c).
 */

#include "icbuarbi.h"

bool icbuarb_target_init(struct icb_info *icb_info_ptr)
{
	(void)icb_info_ptr;
	return true;
}
