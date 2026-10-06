/*
 * Copyright (c) 2024-2026, Intel Corporation. All rights reserved.
 * Copyright (c) 2024-2026, Altera Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * SCSR mailbox backend umbrella header.
 *
 * Devices that use the SCSR (single-channel shared circular register) SDM
 * mailbox include only this header from their socfpga_plat_def.h.  It exposes
 * the SCSR backend vtable and advertises SCSR support to the common core
 * dispatcher (mailbox_core_init).
 */

#ifndef SOCFPGA_SCSR_MAILBOX_H
#define SOCFPGA_SCSR_MAILBOX_H

#ifndef __ASSEMBLER__

struct mailbox_backend;

/* SCSR backend vtable, defined in socfpga_scsr_mailbox.c. */
extern struct mailbox_backend scsr_backend;

#endif /* __ASSEMBLER__ */

#endif /* SOCFPGA_SCSR_MAILBOX_H */
