/*
 * Copyright (c) 2026 Free Mobile - Vincent Jardin
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Mock of include/drivers/nxp/crypto/caam/caam.h: the CSF header parser
 * only needs the signature algorithm enumeration, not the CAAM job ring
 * driver the real header drags in.
 */

#ifndef CAAM_H
#define CAAM_H

enum sig_alg {
	RSA,
	ECC
};

#endif /* CAAM_H */
