/*
 * Copyright 2024-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include <bl31/interrupt_mgmt.h>
#include <common/debug.h>
#include <plat/common/platform.h>

#include <imx_interrupt_mgmt.h>

static interrupt_type_handler_t type_el3_interrupt_table[MAX_INTR_EL3];

int request_intr_type_el3(uint32_t id, interrupt_type_handler_t handler)
{
	/* Validate 'handler' and 'id' parameters */
	if (!handler || id >= MAX_INTR_EL3) {
		return -EINVAL;
	}

	/* Check if a handler has already been registered */
	if (type_el3_interrupt_table[id] != NULL) {
		return -EALREADY;
	}

	type_el3_interrupt_table[id] = handler;

	return 0;
}

static uint64_t imx_el3_interrupt_handler(uint32_t id, uint32_t flags,
						void *handle, void *cookie)
{
	uint32_t intr_id;
	interrupt_type_handler_t handler;

	intr_id = plat_ic_get_pending_interrupt_id();
	if (intr_id < 0) {
		WARN("No pending interrupt\n");
		return 0U;
	}

	intr_id = plat_ic_acknowledge_interrupt();
	/* Mark this interrupt as complete firstly as CPU Off will not return from handler */
	plat_ic_end_of_interrupt(intr_id);
	isb();

	handler = type_el3_interrupt_table[intr_id];
	if (handler != NULL) {
		handler(intr_id, flags, handle, cookie);
	}

	return 0U;
}

void imx_el3_interrupt_config(void)
{
	uint64_t flags = 0U;
	uint64_t rc;

	set_interrupt_rm_flag(flags, NON_SECURE);
	rc = register_interrupt_type_handler(INTR_TYPE_EL3,
						imx_el3_interrupt_handler, flags);
	if (rc != 0U) {
		panic();
	}
}
