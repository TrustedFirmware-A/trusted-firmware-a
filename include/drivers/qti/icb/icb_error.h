/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_ICB_ERROR_H
#define QTI_ICB_ERROR_H

/* Initialise the QTI NoC error handler. Call once from BL31 platform setup. */
#ifdef QTI_ICB_ENABLED
void qti_icb_error_init(void);
#else
static inline void qti_icb_error_init(void) {}
#endif

#endif /* QTI_ICB_ERROR_H */
