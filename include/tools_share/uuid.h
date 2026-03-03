/*-
 * Copyright (c) 2002 Marcel Moolenaar
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 */

/*
 * Portions copyright (c) 2014-2026, Arm Limited and Contributors.
 * All rights reserved.
 */

#ifndef UUID_H
#define UUID_H

#include <stdint.h>

/* Length of a node address (an IEEE 802 address). */
#define	_UUID_NODE_LEN		6

/* Length of UUID string including dashes. */
#define _UUID_STR_LEN		36

/*
 * See also:
 *      http://www.opengroup.org/dce/info/draft-leach-uuids-guids-01.txt
 *      http://www.opengroup.org/onlinepubs/009629399/apdxa.htm
 *
 * A DCE 1.1 compatible source representation of UUIDs.
 */
struct uuid {
	uint8_t		time_low[4];
	uint8_t		time_mid[2];
	uint8_t		time_hi_and_version[2];
	uint8_t		clock_seq_hi_and_reserved;
	uint8_t		clock_seq_low;
	uint8_t		node[_UUID_NODE_LEN];
};

struct efi_guid {
	uint32_t time_low;
	uint16_t time_mid;
	uint16_t time_hi_and_version;
	uint8_t clock_seq_and_node[8];
};

union uuid_helper_t {
	struct uuid uuid_struct;
	struct efi_guid efi_guid;
};

/* XXX namespace pollution? */
typedef struct uuid uuid_t;

static inline void convert_uuid_to_u32_array(const uuid_t uuid, uint32_t out[4])
{
	out[0] = ((uint32_t)uuid.time_low[0]) |
		((uint32_t)uuid.time_low[1] << 8) |
		((uint32_t)uuid.time_low[2] << 16) |
		((uint32_t)uuid.time_low[3] << 24);

	out[1] = ((uint32_t)uuid.time_mid[0]) |
		((uint32_t)uuid.time_mid[1] << 8) |
		((uint32_t)uuid.time_hi_and_version[0] << 16) |
		((uint32_t)uuid.time_hi_and_version[1] << 24);

	out[2] = ((uint32_t)uuid.clock_seq_hi_and_reserved) |
		((uint32_t)uuid.clock_seq_low << 8) |
		((uint32_t)uuid.node[0] << 16) |
		((uint32_t)uuid.node[1] << 24);

	out[3] = ((uint32_t)uuid.node[2]) |
		((uint32_t)uuid.node[3] << 8) |
		((uint32_t)uuid.node[4] << 16) |
		((uint32_t)uuid.node[5] << 24);
}

#endif /* UUID_H */
