/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_ICBUARB_H
#define QTI_ICBUARB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <drivers/qti/icb/icbid.h>

struct icb_bw_req {
	uint64_t	ab;
	uint64_t	ib;
};

/* Opaque per-client handle; NULL on failure. */
typedef struct icb_client *icb_client_handle;

#ifdef QTI_ICB_ENABLED
bool qti_icbuarb_init(void);
icb_client_handle icbuarb_create_client(enum icbid_master master,
					 enum icbid_slave slave);
bool icbuarb_issue_request(icb_client_handle handle, struct icb_bw_req *req);
bool icbuarb_destroy_client(icb_client_handle handle);
#else
static inline bool qti_icbuarb_init(void)
{
	return true;
}

static inline icb_client_handle icbuarb_create_client(enum icbid_master master,
						       enum icbid_slave slave)
{
	return NULL;
}

static inline bool icbuarb_issue_request(icb_client_handle handle,
					  struct icb_bw_req *req)
{
	return false;
}

static inline bool icbuarb_destroy_client(icb_client_handle handle)
{
	return false;
}
#endif

#endif /* QTI_ICBUARB_H */
