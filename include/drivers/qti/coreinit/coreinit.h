/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Core initialization driver public API.
 */

#ifndef QTI_COREINIT_H
#define QTI_COREINIT_H

/*
 * Issue the ICB bandwidth votes required during platform core
 * initialization. Call once from BL31 platform setup.
 */
#ifdef QTI_COREINIT_ENABLED
void qti_coreinit_init(void);
void qti_coreinit_deinit(void);
#else
static inline void qti_coreinit_init(void) {}
static inline void qti_coreinit_deinit(void) {}
#endif

#endif /* QTI_COREINIT_H */
