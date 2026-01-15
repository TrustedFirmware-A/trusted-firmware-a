/*
 * Copyright (c) 2015-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef RENESAS_CONSOLE_H
#define RENESAS_CONSOLE_H

#ifndef __ASSEMBLER__

#include <stdint.h>

/*
 * Initialize a new renesas console instance and register it with the console
 * framework. The |console| pointer must point to storage that will be valid
 * for the lifetime of the console, such as a global or static local variable.
 * Its contents will be reinitialized from scratch.
 */
int console_renesas_register(uintptr_t baseaddr, uint32_t clock, uint32_t baud,
			     console_t *console);

#endif /*__ASSEMBLER__*/

#endif /* RENESAS_CONSOLE_H */
