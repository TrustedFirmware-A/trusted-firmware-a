/*
 * Copyright (c) 2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef RPC_H
#define RPC_H

#include <drivers/spi_nor.h>

int rpc_config_xread_mode(const struct spi_mem_op *op);
void rpc_setup(void);

#endif /* RPC_H */
