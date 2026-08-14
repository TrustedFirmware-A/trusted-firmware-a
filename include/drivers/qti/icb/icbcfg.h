/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Public API for the QTI ICB configuration driver.
 */

#ifndef QTI_ICBCFG_H
#define QTI_ICBCFG_H

/* Apply one-time ICB register configuration (before remap). */
#ifdef QTI_ICB_ENABLED
void qti_icbcfg_init(void);
#else
static inline void qti_icbcfg_init(void) {}
#endif

/* Apply post-remap ICB register configuration. */
#ifdef QTI_ICB_ENABLED
void qti_icbcfg_post_init(void);
#else
static inline void qti_icbcfg_post_init(void) {}
#endif

#endif /* QTI_ICBCFG_H */
