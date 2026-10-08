/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_NOC_ERROR_TARGET_H
#define QTI_NOC_ERROR_TARGET_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>

#include "noc_error.h"

void qti_noc_error_init_target(struct nocerr_info_type *noc_info_list,
			       uint32_t len,
			       struct nocerr_info_type_oem *noc_info_oem_list);

bool qti_noc_error_handle_target(struct nocerr_info_type *noc_info,
				 struct nocerr_info_type_oem *noc_info_oem,
				 bool *delay_fatal);

#endif /* QTI_NOC_ERROR_TARGET_H */
