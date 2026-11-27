/*
 * Copyright (c) 2026 Free Mobile - Vincent Jardin
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Mock of include/drivers/nxp/dcfg/dcfg.h: the CSF header parser only
 * asks the DCFG driver whether secure boot is enabled and in which mode.
 */

#ifndef DCFG_H
#define DCFG_H

#include <stdbool.h>
#include <stdint.h>

bool check_boot_mode_secure(uint32_t *mode);

#endif /* DCFG_H */
