/*
 * Copyright (c) 2018,2020, The Linux Foundation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_INTERRUPT_SVC_H
#define QTI_INTERRUPT_SVC_H

typedef  void* (*qti_int_svc_isr_t)(uint32_t id, void *ctx);

int qti_interrupt_svc_register(uint32_t id, qti_int_svc_isr_t func, void *ctx);
int qti_interrupt_svc_unregister(uint32_t id);
int qti_interrupt_svc_init(bool have_sel1);

#endif /* QTI_INTERRUPT_SVC_H */
