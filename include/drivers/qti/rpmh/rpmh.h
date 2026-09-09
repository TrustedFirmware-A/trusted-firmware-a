/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_RPMH_H
#define QTI_RPMH_H

#ifdef QTI_RPMH_ENABLED
void qti_rpmh_init(void);
void qti_rpmh_deinit(void);
#else
static inline void qti_rpmh_init(void) {}
static inline void qti_rpmh_deinit(void) {}
#endif

#endif /* QTI_RPMH_H */
