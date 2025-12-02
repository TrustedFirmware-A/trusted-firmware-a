/*
 * Copyright (c) 2023-2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include <stdio.h>

#include <drivers/arm/sfcp.h>
#include <plat/common/platform.h>
#include "rse_platform_api.h"

#include <platform_def.h>

int nv_counter_test(void)
{
	enum sfcp_error_t sfcp_err;
	psa_status_t status;
	uint32_t old_val;
	uint32_t new_val;
	uint32_t id;

	sfcp_err = sfcp_init();
	if (sfcp_err != SFCP_ERROR_SUCCESS) {
		printf("Failed to initialize RSE communication channel - sfcp_error = %d\n",
		       sfcp_err);
		return -1;
	}

	for (id = 0; id < 3; id++) {
		status = rse_platform_nv_counter_read(id, sizeof(old_val), (uint8_t *)&old_val);
		if (status != PSA_SUCCESS) {
			printf("Failed during first id=(%d) rse_platform_nv_counter_read - psa_status = %d\n",
				       id, status);
			return -1;
		}

		status = rse_platform_nv_counter_increment(id);
		if (status != PSA_SUCCESS) {
			printf("Failed during id=(%d) rse_platform_nv_counter_increment - psa_status = %d\n",
					id, status);
			return -1;
		}

		status = rse_platform_nv_counter_read(id, sizeof(new_val), (uint8_t *)&new_val);
		if (status != PSA_SUCCESS) {
			printf("Failed during second id=(%d) rse_platform_nv_counter_read - psa_status = %d\n",
					id, status);
			return -1;
		}

		if (old_val + 1 != new_val) {
			printf("Failed nv_counter_test: old_val (%d) + 1 != new_val (%d)\n",
					old_val, new_val);
			return -1;
		}
	}
	printf("Passed nv_counter_test\n");

	return 0;
}
