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

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/auth/crypto_mod.h>
#include <drivers/measured_boot/metadata.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

static uint8_t *event_log_base;

const event_log_metadata_t rpi3_event_log_metadata[] = {
	{ BL31_IMAGE_ID, MBOOT_BL31_IMAGE_STRING, PCR_0 },
#ifdef BL32_BASE
	{ BL32_IMAGE_ID, MBOOT_BL32_IMAGE_STRING, PCR_0 },
	{ BL32_EXTRA1_IMAGE_ID, MBOOT_BL32_EXTRA1_IMAGE_STRING, PCR_0 },
	{ BL32_EXTRA2_IMAGE_ID, MBOOT_BL32_EXTRA2_IMAGE_STRING, PCR_0 },
#endif
#ifdef SPD_spmd
	{ TOS_FW_CONFIG_ID, MBOOT_TOS_FW_CONFIG_STRING, PCR_0 },
#endif
	{ EVLOG_INVALID_ID, NULL, (unsigned int)(-1) }
};

void bl2_plat_mboot_init(void)
{
	struct transfer_list_entry *te;
	uint8_t *event_log_start;
	uint8_t *event_log_finish;
	struct transfer_list_header *tl = rpi_bl2_get_transfer_list();
	size_t event_log_size;
	int rc;

#if DISCRETE_TPM
	rpi_bl2_tpm_setup();
#endif

	assert(tl != NULL);

	event_log_start = transfer_list_event_log_extend(
		tl, PLAT_ARM_EVENT_LOG_MAX_SIZE);
	assert(event_log_start != NULL);

	/*
	 * The returned cursor follows the BL1 events. Recover the entry base so
	 * they remain part of the log registered by BL2.
	 */
	te = transfer_list_find(tl, TL_TAG_TPM_EVLOG);
	assert(te != NULL);

	event_log_base = transfer_list_entry_data(te) + EVENT_LOG_RESERVED_BYTES;
	event_log_finish = transfer_list_entry_data(te) + te->data_size;
	event_log_size = event_log_start - event_log_base;

	rc = event_log_init_and_reg(event_log_base, event_log_finish,
				    event_log_size, crypto_mod_tcg_hash);
	if (rc < 0) {
		ERROR("Failed to initialize event log (%d).\n", rc);
		panic();
	}
}

void bl2_plat_mboot_finish(void)
{
	size_t event_log_cur_size = event_log_get_cur_size(event_log_base);
	struct transfer_list_header *tl = rpi_bl2_get_transfer_list();
#ifdef FW_NS_HANDOFF_BASE
	struct transfer_list_header *ns_tl;
#endif

	assert(tl != NULL);

	event_log_base = transfer_list_event_log_finish(
		tl, (uintptr_t)event_log_base + event_log_cur_size);
	if (event_log_base == NULL) {
		ERROR("BL2: Failed to finalize Event Log TL entry\n");
		panic();
	}

	rpi3_bl2_sync_transfer_list();
	flush_dcache_range((uintptr_t)tl, tl->size);

#ifdef FW_NS_HANDOFF_BASE
	ns_tl = rpi_bl2_relocate_transfer_list();
	if (ns_tl == NULL) {
		ERROR("BL2: Failed to update NS transfer list at 0x%lx\n",
		      (unsigned long)FW_NS_HANDOFF_BASE);
		panic();
	}
	flush_dcache_range((uintptr_t)ns_tl, ns_tl->size);
#endif

	event_log_cur_size = event_log_get_cur_size(event_log_base);
	event_log_dump(event_log_base, event_log_cur_size);

#if DISCRETE_TPM
	rpi_tpm_close();
#endif
}
