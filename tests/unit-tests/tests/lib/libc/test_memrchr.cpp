/*
 * Copyright (c) 2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <stdint.h>

#include "CppUTest/TestHarness.h"

extern "C" void *memrchr(const void *src, int c, size_t len);

TEST_GROUP(memrchr) {
};

TEST(memrchr, zero_length) {
	const uint8_t buffer[] = { 0x55 };

	/* UBSan verifies that this call does not form buffer - 1 internally. */
	POINTERS_EQUAL(NULL, memrchr(buffer, buffer[0], 0));
}

TEST(memrchr, match_at_end) {
	const uint8_t buffer[] = { 1, 2, 3, 4 };

	POINTERS_EQUAL(&buffer[3], memrchr(buffer, 4, sizeof(buffer)));
}

TEST(memrchr, match_at_start) {
	const uint8_t buffer[] = { 1, 2, 3, 4 };

	POINTERS_EQUAL(&buffer[0], memrchr(buffer, 1, sizeof(buffer)));
}

TEST(memrchr, duplicate_matches) {
	const uint8_t buffer[] = { 1, 2, 1, 2 };

	POINTERS_EQUAL(&buffer[2], memrchr(buffer, 1, sizeof(buffer)));
}

TEST(memrchr, no_match) {
	const uint8_t buffer[] = { 1, 2, 3, 4 };

	POINTERS_EQUAL(NULL, memrchr(buffer, 5, sizeof(buffer)));
}

TEST(memrchr, limited_length) {
	const uint8_t buffer[] = { 1, 2, 3, 4 };

	/* The matching byte is outside the first three bytes being searched. */
	POINTERS_EQUAL(NULL, memrchr(buffer, 4, 3));
}

TEST(memrchr, single_byte_match) {
	const uint8_t buffer[] = { 0x55 };

	POINTERS_EQUAL(buffer, memrchr(buffer, 0x55, sizeof(buffer)));
}

TEST(memrchr, single_byte_no_match) {
	const uint8_t buffer[] = { 0x55 };

	POINTERS_EQUAL(NULL, memrchr(buffer, 0xaa, sizeof(buffer)));
}

TEST(memrchr, character_is_converted_to_unsigned_char) {
	const uint8_t buffer[] = { 0xff };

	POINTERS_EQUAL(buffer, memrchr(buffer, 0x1ff, sizeof(buffer)));
}
