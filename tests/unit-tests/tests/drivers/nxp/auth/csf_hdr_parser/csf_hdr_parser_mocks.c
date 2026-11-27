/*
 * Copyright (c) 2026 Free Mobile - Vincent Jardin
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Mocked environment of drivers/nxp/auth/csf_hdr_parser/csf_hdr_parser.c:
 *
 *  - the SFP driver (get_sfp_addr, get_key_revoc) backed by a fake CCSR
 *    block so the parser reads the SRKH fuse words through mmio_read_32(),
 *  - the DCFG driver (check_boot_mode_secure),
 *  - the CAAM hash driver (hash_init/update/final) backed by a host SHA-256
 *    so that the digests the parser computes can be compared with the
 *    values the NXP Code Signing Tool produced and signed.
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "csf_hdr_parser_mocks.h"

#include <dcfg.h>
#include <hash.h>
#include <sfp.h>

struct csf_parser_mock csf_mock;

/*
 * Minimal SHA-256 (FIPS 180-4) for the host side of the tests.
 * Do not use any library to be standalone.
 */

struct sha256_ctx {
	uint32_t h[8];
	uint64_t len;
	uint8_t buf[64];
	size_t buf_len;
};

static const uint32_t sha256_k[64] = {
	0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
	0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
	0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
	0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
	0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
	0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
	0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
	0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
	0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
	0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
	0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
	0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
	0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
	0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
	0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
	0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
};

#define ROTR32(x, n)	(((x) >> (n)) | ((x) << (32 - (n))))

static void sha256_init(struct sha256_ctx *ctx)
{
	static const uint32_t iv[8] = {
		0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
		0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19,
	};

	memcpy(ctx->h, iv, sizeof(iv));
	ctx->len = 0;
	ctx->buf_len = 0;
}

static void sha256_block(struct sha256_ctx *ctx, const uint8_t *p)
{
	uint32_t w[64];
	uint32_t a, b, c, d, e, f, g, h;
	int i;

	for (i = 0; i < 16; i++) {
		w[i] = ((uint32_t)p[4 * i] << 24) |
		       ((uint32_t)p[4 * i + 1] << 16) |
		       ((uint32_t)p[4 * i + 2] << 8) |
		       (uint32_t)p[4 * i + 3];
	}
	for (; i < 64; i++) {
		uint32_t s0 = ROTR32(w[i - 15], 7) ^ ROTR32(w[i - 15], 18) ^
			      (w[i - 15] >> 3);
		uint32_t s1 = ROTR32(w[i - 2], 17) ^ ROTR32(w[i - 2], 19) ^
			      (w[i - 2] >> 10);

		w[i] = w[i - 16] + s0 + w[i - 7] + s1;
	}

	a = ctx->h[0];
	b = ctx->h[1];
	c = ctx->h[2];
	d = ctx->h[3];
	e = ctx->h[4];
	f = ctx->h[5];
	g = ctx->h[6];
	h = ctx->h[7];

	for (i = 0; i < 64; i++) {
		uint32_t s1 = ROTR32(e, 6) ^ ROTR32(e, 11) ^ ROTR32(e, 25);
		uint32_t ch = (e & f) ^ (~e & g);
		uint32_t t1 = h + s1 + ch + sha256_k[i] + w[i];
		uint32_t s0 = ROTR32(a, 2) ^ ROTR32(a, 13) ^ ROTR32(a, 22);
		uint32_t maj = (a & b) ^ (a & c) ^ (b & c);
		uint32_t t2 = s0 + maj;

		h = g;
		g = f;
		f = e;
		e = d + t1;
		d = c;
		c = b;
		b = a;
		a = t1 + t2;
	}

	ctx->h[0] += a;
	ctx->h[1] += b;
	ctx->h[2] += c;
	ctx->h[3] += d;
	ctx->h[4] += e;
	ctx->h[5] += f;
	ctx->h[6] += g;
	ctx->h[7] += h;
}

static void sha256_update(struct sha256_ctx *ctx, const uint8_t *data,
			  size_t len)
{
	ctx->len += len;

	while (len > 0) {
		size_t n = 64 - ctx->buf_len;

		if (n > len) {
			n = len;
		}
		memcpy(ctx->buf + ctx->buf_len, data, n);
		ctx->buf_len += n;
		data += n;
		len -= n;

		if (ctx->buf_len == 64) {
			sha256_block(ctx, ctx->buf);
			ctx->buf_len = 0;
		}
	}
}

static void sha256_final(struct sha256_ctx *ctx, uint8_t *out)
{
	uint64_t bits = ctx->len * 8;
	uint8_t pad = 0x80;
	uint8_t zero = 0;
	uint8_t len_be[8];
	int i;

	sha256_update(ctx, &pad, 1);
	while (ctx->buf_len != 56) {
		sha256_update(ctx, &zero, 1);
	}
	for (i = 0; i < 8; i++) {
		len_be[i] = (uint8_t)(bits >> (56 - 8 * i));
	}
	sha256_update(ctx, len_be, 8);

	for (i = 0; i < 8; i++) {
		out[4 * i] = (uint8_t)(ctx->h[i] >> 24);
		out[4 * i + 1] = (uint8_t)(ctx->h[i] >> 16);
		out[4 * i + 2] = (uint8_t)(ctx->h[i] >> 8);
		out[4 * i + 3] = (uint8_t)ctx->h[i];
	}
}

void csf_mock_sha256(const uint8_t *data, size_t len, uint8_t *out)
{
	struct sha256_ctx ctx;

	sha256_init(&ctx);
	sha256_update(&ctx, data, len);
	sha256_final(&ctx, out);
}

/*
 * Mock control
 */

void csf_mock_reset(void)
{
	memset(&csf_mock, 0, sizeof(csf_mock));
}

void csf_mock_set_srkh(const uint8_t *hash)
{
	struct sfp_ccsr_regs_t *regs = (struct sfp_ccsr_regs_t *)
		((uint8_t *)csf_mock.sfp + SFP_FUSE_REGS_OFFSET);

	/*
	 * The parser reads the fuse words with mmio_read_32() and compares
	 * them byte-wise with the computed digest, so the digest is stored in
	 * memory order.
	 */
	memcpy(regs->srk_hash, hash, SRK_HASH_SIZE);
}

/*
 * Mocked TF-A driver entry points
 */

uintptr_t get_sfp_addr(void)
{
	return (uintptr_t)csf_mock.sfp;
}

uint32_t get_key_revoc(void)
{
	return csf_mock.key_revoc;
}

bool check_boot_mode_secure(uint32_t *mode)
{
	*mode = csf_mock.boot_mode;
	return csf_mock.secure_boot;
}

static struct sha256_ctx hash_mock_ctx;

static int hash_mock_fail(void)
{
	csf_mock.hash_calls++;
	return (csf_mock.hash_fail_call != 0U) &&
	       (csf_mock.hash_calls == csf_mock.hash_fail_call);
}

int hash_init(enum hash_algo algo, void **ctx)
{
	if (hash_mock_fail() || (algo != SHA256)) {
		return -1;
	}

	sha256_init(&hash_mock_ctx);
	*ctx = &hash_mock_ctx;

	return 0;
}

int hash_update(enum hash_algo algo, void *context, void *data_ptr,
		unsigned int data_len)
{
	if (hash_mock_fail() || (algo != SHA256) ||
	    (context != &hash_mock_ctx)) {
		return -1;
	}

	sha256_update(&hash_mock_ctx, data_ptr, data_len);

	return 0;
}

int hash_final(enum hash_algo algo, void *context, void *hash_ptr,
	       unsigned int hash_len)
{
	if (hash_mock_fail() || (algo != SHA256) ||
	    (context != &hash_mock_ctx) || (hash_len < SHA256_DIGEST_SIZE)) {
		return -1;
	}

	sha256_final(&hash_mock_ctx, hash_ptr);

	return 0;
}
