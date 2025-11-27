/*
 * Copyright (c) 2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __SFCP_PSA_PROTOCOL_EMBED_H__
#define __SFCP_PSA_PROTOCOL_EMBED_H__

#include <cdefs.h>

#include "psa/client.h"

#include <platform_def.h>

#ifdef __cplusplus
extern "C" {
#endif

struct __packed sfcp_embed_msg_t {
	psa_handle_t handle;
	uint32_t ctrl_param; /* type, in_len, out_len */
	uint16_t io_size[PSA_MAX_IOVEC];
	uint8_t payload[PLAT_RSE_COMMS_PAYLOAD_MAX_SIZE];
};

struct __packed sfcp_embed_reply_t {
	int32_t return_val;
	uint16_t out_size[PSA_MAX_IOVEC];
	uint8_t payload[PLAT_RSE_COMMS_PAYLOAD_MAX_SIZE];
};

struct client_request_t;

psa_status_t sfcp_protocol_embed_serialize_msg(
	psa_handle_t handle, int16_t type, const psa_invec *in_vec,
	uint8_t in_len, const psa_outvec *out_vec, uint8_t out_len,
	struct sfcp_embed_msg_t *msg, size_t *msg_len);

psa_status_t sfcp_protocol_embed_deserialize_reply(
	psa_outvec *out_vec, uint8_t out_len, psa_status_t *return_val,
	const struct sfcp_embed_reply_t *reply, size_t reply_size);

#ifdef __cplusplus
}
#endif

#endif /* __SFCP_PSA_PROTOCOL_EMBED_H__ */
