/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_NOC_HW_TYPE_H
#define QTI_NOC_HW_TYPE_H

#include "noc_error.h"

static struct noc_hw qnoc_4_0 = {
	.swid_low       = 0x0,
	.swid_high      = 0x4,
	.main_ctl_low   = 0x8,
	.err_valid_low  = 0x10,
	.err_clear_low  = 0x18,
	.errlog0_low    = 0x20,
	.errlog0_high   = 0x24,
	.errlog1_low    = 0x28,
	.errlog1_high   = 0x2C,
	.errlog2_low    = 0x30,
	.errlog2_high   = 0x34,
	.errlog3_low    = 0x38,
	.errlog3_high   = 0x3C,
	.errlog2_1_low  = REGISTER_NOT_APPLICABLE,
	.errlog2_1_high = REGISTER_NOT_APPLICABLE,
	.errlog4_3_low  = REGISTER_NOT_APPLICABLE,
	.errlog4_3_high = REGISTER_NOT_APPLICABLE,
	.errlog6_5_low  = REGISTER_NOT_APPLICABLE,
	.errlog6_5_high = REGISTER_NOT_APPLICABLE,
	.errlog8_high   = REGISTER_NOT_APPLICABLE,
};

/* NOC SidebandManager HW Register Offsets */
static struct noc_sideband_hw qnoc_sb_4_0_l = {
	.swid_low             = 0x0,
	.swid_high            = 0x4,
	.faultin_en0_low      = 0x40,
	.faultin_en0_high     = REGISTER_NOT_APPLICABLE,
	.faultin_status0_low  = 0x48,
	.faultin_status0_high = REGISTER_NOT_APPLICABLE,
	.faultin_en1_low      = REGISTER_NOT_APPLICABLE,
	.faultin_en1_high     = REGISTER_NOT_APPLICABLE,
	.faultin_status1_low  = REGISTER_NOT_APPLICABLE,
	.faultin_status1_high = REGISTER_NOT_APPLICABLE,
	.faultin_en2_low      = REGISTER_NOT_APPLICABLE,
	.faultin_en2_high     = REGISTER_NOT_APPLICABLE,
	.faultin_status2_low  = REGISTER_NOT_APPLICABLE,
	.faultin_status2_high = REGISTER_NOT_APPLICABLE,
};

static struct noc_sideband_hw qnoc_sb_4_0_2l = {
	.swid_low             = 0x0,
	.swid_high            = 0x4,
	.faultin_en0_low      = 0x40,
	.faultin_en0_high     = 0x44,
	.faultin_status0_low  = 0x48,
	.faultin_status0_high = 0x4C,
	.faultin_en1_low      = 0x50,
	.faultin_en1_high     = REGISTER_NOT_APPLICABLE,
	.faultin_status1_low  = 0x58,
	.faultin_status1_high = REGISTER_NOT_APPLICABLE,
	.faultin_en2_low      = REGISTER_NOT_APPLICABLE,
	.faultin_en2_high     = REGISTER_NOT_APPLICABLE,
	.faultin_status2_low  = REGISTER_NOT_APPLICABLE,
	.faultin_status2_high = REGISTER_NOT_APPLICABLE,
};

/* NOC Point-Of-Coherency HW Register Offsets - with errloguser */
static struct noc_poc_hw qnoc_poc_1_0 = {
	.swid_low        = 0x00,
	.swid_high       = 0x04,
	.errset_low      = 0x08,
	.errstatus_low   = 0x10,
	.errack_low      = 0x18,
	.errlogmain_low  = 0x20,
	.errlogmain_high = 0x24,
	.errlogaddr_low  = 0x28,
	.errlogaddr_high = 0x2C,
	.errloguser_low  = 0x30,
	.errloguser_high = 0x34,
	.errlogmisc_low  = REGISTER_NOT_APPLICABLE,
	.errlogmisc_high = REGISTER_NOT_APPLICABLE,
};

#endif /* QTI_NOC_HW_TYPE_H */
