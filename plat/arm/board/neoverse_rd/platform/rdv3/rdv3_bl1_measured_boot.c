/*
 * Copyright (c) 2024-2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#include <drivers/arm/sfcp.h>
#include <drivers/measured_boot/rse/rse_measured_boot.h>
#include <lib/psa/measured_boot.h>
#include <plat/arm/common/plat_arm.h>
#include <platform_def.h>

#include <nrd_plat.h>

/*
 * Platform specific table with image IDs and metadata. Intentionally not a
 * const struct, some members might set by bootloaders during trusted boot.
 */
struct rse_mboot_metadata rdv3_rse_mboot_metadata[] = {
	{
		.id = FW_CONFIG_ID,
		.slot = U(8),
		.signer_id_size = SIGNER_ID_MIN_SIZE,
		.sw_type = MBOOT_FW_CONFIG_STRING,
		.lock_measurement = false
	},
	{
		.id = TB_FW_CONFIG_ID,
		.slot = U(9),
		.signer_id_size = SIGNER_ID_MIN_SIZE,
		.sw_type = MBOOT_TB_FW_CONFIG_STRING,
		.lock_measurement = false
	},
	{
		.id = BL2_IMAGE_ID,
		.slot = U(10),
		.signer_id_size = SIGNER_ID_MIN_SIZE,
		.sw_type = MBOOT_BL2_IMAGE_STRING,
		.lock_measurement = false
	},
	{
		.id = RSE_MBOOT_INVALID_ID
	}
};

void bl1_plat_mboot_init(void)
{
	enum sfcp_error_t sfcp_err;

	/* Initialize SFCP for communications between AP and RSE */
	sfcp_err = sfcp_init();
	if (sfcp_err != SFCP_ERROR_SUCCESS) {
		ERROR("Unable to initialize SFCP\n");
		plat_panic_handler();
	}

	rse_measured_boot_init(rdv3_rse_mboot_metadata);
}

void bl1_plat_mboot_finish(void)
{
	/* Nothing to do. */
}
