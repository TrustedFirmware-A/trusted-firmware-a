/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SEC_CORE_H
#define SEC_CORE_H

#include <stdint.h>

void qti_sec_core_init(void);
void qti_sec_core_remap(uintptr_t entrypoint);

#endif /* SEC_CORE_H */
