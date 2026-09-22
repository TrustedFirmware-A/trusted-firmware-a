/*
 * Copyright (c) 2026 Free Mobile - Vincent Jardin
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Control interface of the mocked environment of the NXP CSF header parser:
 * the SFP fuse block, the DCFG secure-boot status and the CAAM hash driver.
 */

#ifndef CSF_HDR_PARSER_MOCKS_H
#define CSF_HDR_PARSER_MOCKS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* Size of the fake SFP CCSR block returned by get_sfp_addr(), in bytes */
#define CSF_MOCK_SFP_SIZE	0x300U

struct csf_parser_mock {
	/* Fake SFP CCSR block; the fuse registers live at SFP_FUSE_REGS_OFFSET */
	uint32_t sfp[CSF_MOCK_SFP_SIZE / sizeof(uint32_t)];

	/* check_boot_mode_secure(): return value and *mode (1 = ITS, 0 = dev) */
	bool secure_boot;
	uint32_t boot_mode;

	/* get_key_revoc() */
	uint32_t key_revoc;

	/* Fail the Nth call to hash_init/hash_update/hash_final; 0 = never */
	unsigned int hash_fail_call;
	unsigned int hash_calls;
};

extern struct csf_parser_mock csf_mock;

/* Restore the mock to its defaults: non-secure boot, blank fuses, no failure */
void csf_mock_reset(void);

/* Program the 256-bit SRKH fuse words with the given SHA-256 digest */
void csf_mock_set_srkh(const uint8_t *hash);

/* Host SHA-256, the reference behind the mocked CAAM hash driver */
void csf_mock_sha256(const uint8_t *data, size_t len, uint8_t *out);

#endif /* CSF_HDR_PARSER_MOCKS_H */
