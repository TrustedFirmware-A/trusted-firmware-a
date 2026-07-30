/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Public interface for the QTI TF-A clock driver: clock-group bring-up and
 * teardown for the boot flow.
 */

#ifndef QTI_CLOCK_H
#define QTI_CLOCK_H

/* Logical groups of related clocks. */
enum clock_group_type {
	CLOCK_GROUP_INIT,
	CLOCK_GROUP_QDSS,

	CLOCK_GROUP_TOTAL
};

/*
 * Bring up the clocks BL31 needs while initialising, run fn (may be NULL)
 * with them held, then release the ones only needed during init. On return
 * the init-only clocks are off again.
 */
#ifdef QTI_CLOCK_ENABLED
void qti_clock_init(void (*fn)(void));
#else
static inline void qti_clock_init(void (*fn)(void))
{
	if (fn != NULL) {
		fn();
	}
}
#endif

#endif /* QTI_CLOCK_H */
