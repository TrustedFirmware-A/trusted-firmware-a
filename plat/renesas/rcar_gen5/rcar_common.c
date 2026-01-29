/*
 * Copyright (c) 2025-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <drivers/renesas/rcar/console/console.h>
#include "scif.h"

#include "rcar_private.h"

/* RAS functions common to AArch64 ARM platforms */
void plat_ea_handler(unsigned int ea_reason, uint64_t syndrome, void *cookie,
		     void *handle, uint64_t flags)
{
}

void rcar_console_boot_init(void)
{
	console_renesas_register(0, 0, 0, CONSOLE_FLAG_BOOT);
}

void rcar_console_runtime_init(void)
{
	console_renesas_register(1, 0, 0,
				 CONSOLE_FLAG_BOOT | CONSOLE_FLAG_RUNTIME |
				 CONSOLE_FLAG_CRASH);
}
