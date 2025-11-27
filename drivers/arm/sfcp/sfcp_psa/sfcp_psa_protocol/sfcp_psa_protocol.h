/*
 * Copyright (c) 2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __SFCP_PSA_PROTOCOL_H__
#define __SFCP_PSA_PROTOCOL_H__

#include <cdefs.h>

#include "psa/client.h"

#ifdef SFCP_PROTOCOL_EMBED_ENABLED
#include "sfcp_psa_protocol_embed.h"
#endif /* SFCP_PROTOCOL_EMBED_ENABLED */

#ifdef SFCP_PROTOCOL_POINTER_ACCESS_ENABLED
#include "sfcp_psa_protocol_pointer_access.h"
#endif /* RSE_MHU_PROTOCOL_V0_ENABLED */

#ifdef __cplusplus
extern "C" {
#endif

enum sfcp_protocol_version_t {
#ifdef SFCP_PROTOCOL_EMBED_ENABLED
	SFCP_PROTOCOL_EMBED = 0,
#endif /* SFCP_PROTOCOL_EMBED_ENABLED */
#ifdef SFCP_PROTOCOL_POINTER_ACCESS_ENABLED
	SFCP_PROTOCOL_POINTER_ACCESS = 1,
#endif /* SFCP_PROTOCOL_POINTER_ACCESS_ENABLED */
};

struct __packed serialized_sfcp_header_t {
	uint8_t protocol_ver;
	/* Pad out to 4 bytes to ensure alignment */
	uint8_t __reserved[3];
};

/* MHU message passed from NSPE to SPE to deliver a PSA client call */
struct __packed serialized_psa_msg_t {
	struct serialized_sfcp_header_t header;
	union __packed {
#ifdef SFCP_PROTOCOL_EMBED_ENABLED
		struct sfcp_embed_msg_t embed;
#endif /* SFCP_PROTOCOL_EMBED_ENABLED */
#ifdef SFCP_PROTOCOL_POINTER_ACCESS_ENABLED
		struct sfcp_pointer_access_msg_t pointer_access;
#endif /* SFCP_PROTOCOL_POINTER_ACCESS_ENABLED */
	} msg;
};

/* MHU reply message to hold the PSA client call return result from SPE */
struct __packed serialized_psa_reply_t {
	struct serialized_sfcp_header_t header;
	union __packed {
#ifdef SFCP_PROTOCOL_EMBED_ENABLED
		struct sfcp_embed_reply_t embed;
#endif /* SFCP_PROTOCOL_EMBED_ENABLED */
#ifdef SFCP_PROTOCOL_POINTER_ACCESS_ENABLED
		struct sfcp_pointer_access_reply_t pointer_access;
#endif /* SFCP_PROTOCOL_POINTER_ACCESS_ENABLED */
	} reply;
};

struct client_request_t;

/**
 * \brief Serialize a PSA client call into a protocol message.
 *
 * \param[in]  handle           Target PSA partition handle.
 * \param[in]  type             PSA signal type.
 * \param[in]  in_vec           List of input vectors to copy into the message.
 * \param[in]  in_len           Number of valid entries in \p in_vec.
 * \param[in]  out_vec          List of output vectors describing expected replies.
 * \param[in]  out_len          Number of valid entries in \p out_vec.
 * \param[out] msg              Buffer to populate with the serialized message.
 * \param[out] msg_len          Final serialized message size on success.
 *
 * \retval PSA_SUCCESS         Operation succeeded.
 * \retval Other return code    Operation failed with an error code.
 */
psa_status_t
sfcp_protocol_serialize_msg(psa_handle_t handle, int16_t type,
			    const psa_invec *in_vec, uint8_t in_len,
			    const psa_outvec *out_vec, uint8_t out_len,
			    struct serialized_psa_msg_t *msg, size_t *msg_len);

/**
 * \brief Deserialize a protocol reply into PSA client outputs.
 *
 * \param[out] out_vec          Array of output buffers to populate.
 * \param[in]  out_len          Number of valid entries in \p out_vec.
 * \param[out] return_val       PSA status returned by the service.
 * \param[in]  reply            Serialized reply received from the peer.
 * \param[in]  reply_size       Size, in bytes, of \p reply.
 *
 * \retval PSA_SUCCESS          Operation succeeded..
 * \retval Other return code    Operation failed with an error code.
 */
psa_status_t sfcp_protocol_deserialize_reply(
	psa_outvec *out_vec, uint8_t out_len, psa_status_t *return_val,
	const struct serialized_psa_reply_t *reply, size_t reply_size);

#ifdef __cplusplus
}
#endif

#endif /* __SFCP_PSA_PROTOCOL_H__ */
