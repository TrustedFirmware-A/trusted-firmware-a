/*
 * Copyright (c) 2026 Free Mobile - Vincent Jardin
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Unit tests for csf_hdr_parser.c, the parser BL2 uses to authenticate
 * CSF-signed images on NXP Layerscape platforms (chassis 3 layout, same than
 * LX2160A).
 *
 * The headers under test were produced by the NXP Code Signing Tool, see
 * csf_hdr_vectors.h. Each test starts from a pristine copy of a vector,
 * corrupts one field where relevant, and checks the parser's verdict.
 */

#include <stdint.h>
#include <string.h>

extern "C" {
#include <csf_hdr.h>

#include "csf_hdr_parser_mocks.h"

/*
 * State the parser keeps across images, reset before every test.
 *
 * These are non-static globals of csf_hdr_parser.c, reached directly: the
 * tests are coupled to the driver's current internal linkage on purpose,
 * and break if those symbols are ever made static.
 */
extern bool rotpk_not_dpld;
extern uint8_t rotpk_hash_table[MAX_KEY_ENTRIES][SHA256_BYTES];
extern uint32_t num_rotpk_hash_entries;
}

#include "csf_hdr_vectors.h"

#include "CppUTest/TestHarness.h"

/* Size of a buffer holding a header with a full 8-entry SRK table */
#define BIG_HDR_SIZE		0x2400U
#define BIG_HDR_PSIGN		0x2300U

/* Revocation bit of SRK entry n (1-based), see is_key_revoked() */
#define REVOC_BIT(n)		(1U << (REVOC_KEY_ALIGN - (n)))

TEST_GROUP(csf_hdr_parser) {
	uint8_t isbc[sizeof(csf_isbc_hdr)] __attribute__((aligned(8)));
	uint8_t esbc[sizeof(csf_esbc_hdr)] __attribute__((aligned(8)));
	uint8_t big[BIG_HDR_SIZE] __attribute__((aligned(8)));

	/* Outputs of validate_esbc_header() */
	void *key;
	uint32_t key_len;
	void *sign;
	uint32_t sign_len;
	enum sig_alg alg;

	TEST_SETUP() {
		csf_mock_reset();

		rotpk_not_dpld = true;
		memset(rotpk_hash_table, 0, sizeof(rotpk_hash_table));
		num_rotpk_hash_entries = 0;

		memcpy(isbc, csf_isbc_hdr, sizeof(isbc));
		memcpy(esbc, csf_esbc_hdr, sizeof(esbc));

		key = NULL;
		key_len = 0;
		sign = NULL;
		sign_len = 0;
		alg = ECC;
	}

	TEST_TEARDOWN() {
		rotpk_not_dpld = true;
		num_rotpk_hash_entries = 0;
	}

	int validate(void *hdr) {
		return validate_esbc_header(hdr, &key, &key_len, &sign,
					    &sign_len, &alg);
	}

	static struct csf_hdr *hdr_of(uint8_t *buf) {
		return reinterpret_cast<struct csf_hdr *>(buf);
	}

	static struct srk_table *srk_of(uint8_t *buf) {
		return reinterpret_cast<struct srk_table *>(
			buf + hdr_of(buf)->srk_tbl_off);
	}

	/*
	 * Build a header: SRK table holds MAX_KEY_ENTRIES copies of the
	 * vector's key, with the signature relocated after the table.
	 */
	void make_big_header(uint8_t srk_sel) {
		struct csf_hdr *h;

		memset(big, 0, sizeof(big));
		memcpy(big, csf_isbc_hdr, sizeof(struct csf_hdr));
		h = hdr_of(big);

		for (unsigned int i = 0; i < MAX_KEY_ENTRIES; i++) {
			memcpy(big + h->srk_tbl_off + i * sizeof(struct srk_table),
			       csf_isbc_hdr + CSF_VEC_SRK_TBL_OFF,
			       sizeof(struct srk_table));
		}
		h->len_kr.num_srk = MAX_KEY_ENTRIES;
		h->len_kr.srk_sel = srk_sel;

		memcpy(big + BIG_HDR_PSIGN, csf_isbc_hdr + CSF_ISBC_PSIGN,
		       CSF_VEC_SIGN_LEN);
		h->psign = BIG_HDR_PSIGN;
	}

	void enable_secure_boot(uint32_t mode) {
		csf_mock.secure_boot = true;
		csf_mock.boot_mode = mode;
	}
};

TEST(csf_hdr_parser, vectors_are_consistent)
{
	uint8_t digest[SHA256_BYTES];

	UNSIGNED_LONGS_EQUAL(CSF_VEC_SRK_TBL_OFF, hdr_of(isbc)->srk_tbl_off);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_NUM_SRK, hdr_of(isbc)->len_kr.num_srk);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_KEY_LEN, srk_of(isbc)->key_len);
	UNSIGNED_LONGS_EQUAL(CSF_ISBC_PSIGN, hdr_of(isbc)->psign);
	UNSIGNED_LONGS_EQUAL(CSF_ESBC_PSIGN, hdr_of(esbc)->psign);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_SIGN_LEN, hdr_of(isbc)->sign_len);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_SIGN_LEN, hdr_of(esbc)->sign_len);

	/* Both headers were signed with the same SRK table */
	MEMCMP_EQUAL(srk_of(isbc), srk_of(esbc), sizeof(struct srk_table));

	/* The host SHA-256 agrees with the tool that signed the vectors */
	csf_mock_sha256(isbc + CSF_VEC_SRK_TBL_OFF,
			CSF_VEC_NUM_SRK * sizeof(struct srk_table), digest);
	MEMCMP_EQUAL(csf_vec_srk_tbl_hash, digest, SHA256_BYTES);
}

TEST(csf_hdr_parser, accepts_isbc_header_without_secure_boot)
{
	LONGS_EQUAL(0, validate(isbc));

	POINTERS_EQUAL(srk_of(isbc)->pkey, key);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_KEY_LEN, key_len);
	POINTERS_EQUAL(isbc + CSF_ISBC_PSIGN, sign);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_SIGN_LEN, sign_len);
	LONGS_EQUAL(RSA, alg);

	/* Without secure boot no root of trust is installed */
	CHECK_TRUE(rotpk_not_dpld);
	UNSIGNED_LONGS_EQUAL(0, num_rotpk_hash_entries);
}

TEST(csf_hdr_parser, accepts_esbc_header_without_secure_boot)
{
	LONGS_EQUAL(0, validate(esbc));

	POINTERS_EQUAL(srk_of(esbc)->pkey, key);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_KEY_LEN, key_len);
	POINTERS_EQUAL(esbc + CSF_ESBC_PSIGN, sign);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_SIGN_LEN, sign_len);
	LONGS_EQUAL(RSA, alg);
}

TEST(csf_hdr_parser, selects_requested_srk_entry)
{
	make_big_header(3);

	LONGS_EQUAL(0, validate(big));

	POINTERS_EQUAL(&srk_of(big)[2].pkey, key);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_KEY_LEN, key_len);
	POINTERS_EQUAL(big + BIG_HDR_PSIGN, sign);
}

TEST(csf_hdr_parser, secure_boot_installs_rotpk_table_when_srkh_matches)
{
	enable_secure_boot(1);
	csf_mock_set_srkh(csf_vec_srk_tbl_hash);

	LONGS_EQUAL(0, validate(isbc));

	CHECK_FALSE(rotpk_not_dpld);
	UNSIGNED_LONGS_EQUAL(CSF_VEC_NUM_SRK, num_rotpk_hash_entries);
	MEMCMP_EQUAL(csf_vec_srk_key_hash, rotpk_hash_table[0], SHA256_BYTES);
}

TEST(csf_hdr_parser, secure_boot_installs_rotpk_table_once)
{
	enable_secure_boot(1);
	csf_mock_set_srkh(csf_vec_srk_tbl_hash);

	LONGS_EQUAL(0, validate(isbc));
	CHECK_FALSE(rotpk_not_dpld);

	/* A second image must not rewrite the installed table */
	memset(rotpk_hash_table[0], 0xa5, SHA256_BYTES);
	LONGS_EQUAL(0, validate(esbc));

	for (unsigned int i = 0; i < SHA256_BYTES; i++) {
		BYTES_EQUAL(0xa5, rotpk_hash_table[0][i]);
	}
	UNSIGNED_LONGS_EQUAL(CSF_VEC_NUM_SRK, num_rotpk_hash_entries);
}

TEST(csf_hdr_parser, production_mode_rejects_srkh_mismatch)
{
	uint8_t wrong[SHA256_BYTES];

	memcpy(wrong, csf_vec_srk_tbl_hash, sizeof(wrong));
	wrong[SHA256_BYTES - 1] ^= 0x01;

	enable_secure_boot(1);
	csf_mock_set_srkh(wrong);

	LONGS_EQUAL(-1, validate(isbc));

	CHECK_TRUE(rotpk_not_dpld);
	UNSIGNED_LONGS_EQUAL(0, num_rotpk_hash_entries);
}

TEST(csf_hdr_parser, production_mode_rejects_blank_srkh_fuses)
{
	enable_secure_boot(1);

	LONGS_EQUAL(-1, validate(isbc));
	CHECK_TRUE(rotpk_not_dpld);
}

TEST(csf_hdr_parser, development_mode_continues_on_srkh_mismatch)
{
	enable_secure_boot(0);

	LONGS_EQUAL(0, validate(isbc));

	/* The image is accepted but no root of trust gets installed */
	CHECK_TRUE(rotpk_not_dpld);
	UNSIGNED_LONGS_EQUAL(0, num_rotpk_hash_entries);
	POINTERS_EQUAL(srk_of(isbc)->pkey, key);
}

TEST(csf_hdr_parser, secure_boot_reports_hash_driver_failure)
{
	enable_secure_boot(1);
	csf_mock_set_srkh(csf_vec_srk_tbl_hash);
	csf_mock.hash_fail_call = 1;

	LONGS_EQUAL(-1, validate(isbc));
	CHECK_TRUE(rotpk_not_dpld);
}

TEST(csf_hdr_parser, rejects_wrong_barker_code)
{
	isbc[0] ^= 0xff;

	LONGS_EQUAL(-1, validate(isbc));
	POINTERS_EQUAL(NULL, key);
}

TEST(csf_hdr_parser, rejects_empty_srk_table)
{
	hdr_of(isbc)->len_kr.num_srk = 0;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_oversized_srk_table)
{
	hdr_of(isbc)->len_kr.num_srk = MAX_KEY_ENTRIES + 1;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_key_select_zero)
{
	hdr_of(isbc)->len_kr.srk_sel = 0;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_key_select_beyond_table)
{
	hdr_of(isbc)->len_kr.srk_sel = CSF_VEC_NUM_SRK + 1;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_revoked_key)
{
	csf_mock.key_revoc = REVOC_BIT(1);

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, ignores_revocation_of_other_keys)
{
	csf_mock.key_revoc = REVOC_BIT(2) | REVOC_BIT(3);

	LONGS_EQUAL(0, validate(isbc));
}

TEST(csf_hdr_parser, last_srk_entry_cannot_be_revoked)
{
	make_big_header(UNREVOCABLE_KEY);
	csf_mock.key_revoc = 0xffffffffU;

	LONGS_EQUAL(0, validate(big));
	POINTERS_EQUAL(&srk_of(big)[UNREVOCABLE_KEY - 1].pkey, key);
}

TEST(csf_hdr_parser, rejects_unsupported_key_length)
{
	srk_of(isbc)->key_len = CSF_VEC_KEY_LEN + 4;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_unsupported_key_length_in_unselected_entry)
{
	make_big_header(1);
	srk_of(big)[MAX_KEY_ENTRIES - 1].key_len = 100;

	LONGS_EQUAL(-1, validate(big));
}

TEST(csf_hdr_parser, rejects_signature_length_not_matching_key)
{
	hdr_of(isbc)->sign_len = CSF_VEC_SIGN_LEN / 2;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_modulus_without_top_bit)
{
	srk_of(isbc)->pkey[0] &= 0x7f;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_even_modulus)
{
	srk_of(isbc)->pkey[CSF_VEC_KEY_LEN / 2 - 1] &= 0xfe;

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, rejects_signature_not_below_modulus)
{
	/* A signature equal to the modulus is not a valid RSA value */
	memcpy(isbc + CSF_ISBC_PSIGN, srk_of(isbc)->pkey, CSF_VEC_SIGN_LEN);

	LONGS_EQUAL(-1, validate(isbc));
}

TEST(csf_hdr_parser, image_hash_matches_signed_digest)
{
	uint8_t digest[SHA256_BYTES];
	uint32_t len = 0;

	memset(digest, 0, sizeof(digest));

	LONGS_EQUAL(0, calc_img_hash(hdr_of(esbc), (void *)csf_esbc_img,
				     sizeof(csf_esbc_img), digest, &len));

	UNSIGNED_LONGS_EQUAL(SHA256_BYTES, len);
	MEMCMP_EQUAL(csf_vec_esbc_img_hash, digest, SHA256_BYTES);
}

TEST(csf_hdr_parser, image_hash_covers_the_image)
{
	uint8_t digest[SHA256_BYTES];
	uint8_t img[sizeof(csf_esbc_img)];
	uint32_t len = 0;

	memcpy(img, csf_esbc_img, sizeof(img));
	img[0] ^= 0x01;

	LONGS_EQUAL(0, calc_img_hash(hdr_of(esbc), img, sizeof(img), digest,
				     &len));

	CHECK_TRUE(memcmp(csf_vec_esbc_img_hash, digest, SHA256_BYTES) != 0);
}

TEST(csf_hdr_parser, image_hash_covers_the_header)
{
	uint8_t digest[SHA256_BYTES];
	uint32_t len = 0;

	hdr_of(esbc)->oem_uid_0 ^= 0x1;

	LONGS_EQUAL(0, calc_img_hash(hdr_of(esbc), (void *)csf_esbc_img,
				     sizeof(csf_esbc_img), digest, &len));

	CHECK_TRUE(memcmp(csf_vec_esbc_img_hash, digest, SHA256_BYTES) != 0);
}

TEST(csf_hdr_parser, image_hash_reports_hash_driver_failure)
{
	uint8_t digest[SHA256_BYTES];
	uint32_t len = 0;

	for (unsigned int call = 1; call <= 5; call++) {
		csf_mock.hash_calls = 0;
		csf_mock.hash_fail_call = call;

		LONGS_EQUAL(-1, calc_img_hash(hdr_of(esbc),
					      (void *)csf_esbc_img,
					      sizeof(csf_esbc_img), digest,
					      &len));
	}
}
