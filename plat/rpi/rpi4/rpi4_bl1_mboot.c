/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <stdint.h>

#include <event_measure.h>
#include <event_print.h>
#include <tpm_event_log.h>
#include <transfer_list.h>

#include <common/bl_common.h>
#include <common/debug.h>
#include <drivers/auth/crypto_mod.h>
#include <drivers/measured_boot/metadata.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

static uint8_t *event_log;

const event_log_metadata_t rpi3_event_log_metadata[] = {
	{ FW_CONFIG_ID, MBOOT_FW_CONFIG_STRING, PCR_0 },
	{ TB_FW_CONFIG_ID, MBOOT_TB_FW_CONFIG_STRING, PCR_0 },
	{ BL2_IMAGE_ID, MBOOT_BL2_IMAGE_STRING, PCR_0 },
	{ EVLOG_INVALID_ID, NULL, (unsigned int)(-1) }
};

void bl1_plat_mboot_init(void)
{
	struct transfer_list_header *tl = rpi_bl1_get_transfer_list();
	int rc;
	tpm_alg_id algorithms[] = {
#ifdef TPM_ALG_ID
		TPM_ALG_ID
#else
		EVLOG_TPM_ALG_SHA256,
		EVLOG_TPM_ALG_SHA384,
		EVLOG_TPM_ALG_SHA512,
#endif
	};

#if DISCRETE_TPM
	rpi_bl1_tpm_setup();
	rpi_bl1_tpm_validate(U(1) << PCR_0);
#endif

	assert(tl != NULL);

	event_log = transfer_list_event_log_extend(tl,
						   PLAT_ARM_EVENT_LOG_MAX_SIZE);
	assert(event_log != NULL);

	rc = event_log_init_and_reg(event_log,
				    event_log + PLAT_ARM_EVENT_LOG_MAX_SIZE,
				    0U, crypto_mod_tcg_hash);
	if (rc < 0) {
		ERROR("Failed to initialize event log (%d).\n", rc);
		panic();
	}

	rc = event_log_write_header(algorithms, ARRAY_SIZE(algorithms), 0,
				    NULL, 0);
	if (rc < 0) {
		ERROR("Failed to write event log header (%d).\n", rc);
		panic();
	}
}

void bl1_plat_mboot_finish(void)
{
	struct transfer_list_header *tl = rpi_bl1_get_transfer_list();
	size_t event_log_cur_size;
	uint8_t *base;

	assert(tl != NULL);

	event_log_cur_size = event_log_get_cur_size(event_log);
	base = transfer_list_event_log_finish(
		tl, (uintptr_t)event_log + event_log_cur_size);
	if (base == NULL) {
		ERROR("BL1: Failed to finalize Event Log TL entry\n");
		panic();
	}

	flush_dcache_range((uintptr_t)tl, tl->size);

	event_log_dump(base, event_log_get_cur_size(base));

#if DISCRETE_TPM
	rpi_tpm_close();
#endif
}
