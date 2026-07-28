/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Qualcomm Shared Memory (SMEM) - TFA platform integration
 *
 */
#include <errno.h>

#include "smem.h"
#include "smem_plat.h"

/*
 * qti_smem_plat_init() - Platform entry point for SMEM initialization.
 *
 * Return: 0 on success, negative errno on failure.
 */
int qti_smem_plat_init(struct qti_smem_plat_info *plat_info)
{
	int ret;

	if (plat_info == NULL)
		return -EINVAL;

	ret = qti_smem_host_id(QTI_SMEM_PROC_TZ, 0, 0, 0,
			       &plat_info->local_host);

	if (ret != 0)
		return ret;

	plat_info->max_items = 0xFFFF;
	plat_info->smem_size = QTI_SMEM_SIZE;

	return 0;
}
