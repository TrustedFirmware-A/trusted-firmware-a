/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Rail voltage voting for the QTI clock driver.
 *
 * Boot-time votes that keep the rails feeding the blocks TF-A programs during
 * init (e.g. CX/MX and MMCX/GFX at NOM for xPU/secure static configuration) up
 * while that programming runs, released at init-done. This is not ongoing
 * voltage scaling (e.g. QUP), which is handled by OP-TEE. RPM-based targets
 * place no such votes here and build the no-op stubs below
 * (QTI_CLOCK_RAIL_VOTE unset).
 */

#ifndef QTI_CLOCK_RAIL_H
#define QTI_CLOCK_RAIL_H

#include <drivers/qti/clock/clock_cfg.h>

#ifdef QTI_CLOCK_RAIL_VOTE
void rail_vote_init(void);
void rail_vote_deinit(void);
void rail_vote_apply(struct clock_group *group);
void rail_vote_clear(struct clock_group *group);
#else
static inline void rail_vote_init(void) { }
static inline void rail_vote_deinit(void) { }
static inline void rail_vote_apply(struct clock_group *group) { (void)group; }
static inline void rail_vote_clear(struct clock_group *group) { (void)group; }
#endif

#endif /* QTI_CLOCK_RAIL_H */
