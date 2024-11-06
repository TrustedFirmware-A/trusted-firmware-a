/*
 * Copyright (c) 2025, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <stdarg.h>
#include <stdint.h>

#include "./include/rpi3_measured_boot.h"

#include <drivers/auth/crypto_mod.h>
#include <drivers/measured_boot/event_log/event_log.h>
#include <drivers/measured_boot/metadata.h>
#include <plat/common/common_def.h>
#include <plat/common/platform.h>
#include <platform_def.h>
#include <tools_share/tbbr_oid.h>

/* RPI3 table with platform specific image IDs, names and PCRs */
const event_log_metadata_t rpi3_event_log_metadata[] = {
	{ BL31_IMAGE_ID, MBOOT_BL31_IMAGE_STRING, PCR_0 },
	{ BL33_IMAGE_ID, MBOOT_BL33_IMAGE_STRING, PCR_0 },
	{ NT_FW_CONFIG_ID, MBOOT_NT_FW_CONFIG_STRING, PCR_0 },

	{ EVLOG_INVALID_ID, NULL, (unsigned int)(-1) }	/* Terminator */
};

static uint8_t *event_log_start;
static size_t event_log_size;

void bl2_plat_mboot_init(void)
{
	uint8_t *bl2_event_log_start;
	uint8_t *bl2_event_log_finish;

	rpi3_mboot_fetch_eventlog_info(&event_log_start, &event_log_size);
	bl2_event_log_start = event_log_start + event_log_size;
	bl2_event_log_finish = event_log_start + PLAT_ARM_EVENT_LOG_MAX_SIZE;
	event_log_init(bl2_event_log_start, bl2_event_log_finish);
}

void bl2_plat_mboot_finish(void)
{
	/* Event Log filled size */
	size_t event_log_cur_size;

	event_log_cur_size = event_log_get_cur_size((uint8_t *)event_log_start);

	/* Dump Event Log for user view */
	dump_event_log((uint8_t *)event_log_start, event_log_cur_size);
}

int plat_mboot_measure_image(unsigned int image_id, image_info_t *image_data)
{
	int rc = 0;

	unsigned char hash_data[CRYPTO_MD_MAX_SIZE];
	const event_log_metadata_t *metadata_ptr = rpi3_event_log_metadata;

	/* Measure the payload with algorithm selected by EventLog driver */
	rc = event_log_measure(image_data->image_base, image_data->image_size, hash_data);
	if (rc != 0) {
		return rc;
	}

	while ((metadata_ptr->id != EVLOG_INVALID_ID) &&
		(metadata_ptr->id != image_id)) {
		metadata_ptr++;
	}
	assert(metadata_ptr->id != EVLOG_INVALID_ID);

	event_log_record(hash_data, EV_POST_CODE, metadata_ptr);

	return rc;
}
