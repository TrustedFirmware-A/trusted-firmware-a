/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTIMER_H
#define QTIMER_H

#include <stdint.h>

uint64_t qti_qtimer_get_usec(void);
uint64_t qti_qtimer_get_raw(void);
void qti_qtimer_init(void);

#endif /* QTIMER_H */
