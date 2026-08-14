/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_NOC_ERROR_H
#define QTI_NOC_ERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>

#define REGISTER_NOT_APPLICABLE 0xFFFF
#define NO_INTERRUPT UINTPTR_MAX

/* Error code construction */
#define MODULE_BASE_RSVD                 0
#define DEF_MODULE(ID)                   (MODULE_BASE_RSVD + ID)
#define KRNL                             DEF_MODULE(0x07)

#define EC_MSK_NEGATIVE_BIT_SHFT         (31)
#define EC_MSK_RSVD_BIT_SHFT             (30)
#define EC_MSK_MODULE_BIT_SHFT           (20)
#define EC_MSK_NEGATIVE_MSK              (UINT32_C(0x1) << \
					   EC_MSK_NEGATIVE_BIT_SHFT)
#define EC_MSK_RSVD_MSK                  (UINT32_C(0x1) << EC_MSK_RSVD_BIT_SHFT)
#define EC_MSK_MODULE_MSK                (UINT32_C(0x3FF) << \
					   EC_MSK_MODULE_BIT_SHFT)
#define EC_MSK_CODE_MSK                  (0xFFFFF)

#define TFA_ERR_CODE(EC_MODULE, CODE) \
	(((EC_MSK_MODULE_MSK & (EC_MODULE << EC_MSK_MODULE_BIT_SHFT)) | \
	  (EC_MSK_CODE_MSK & (CODE))) | \
	 (EC_MSK_RSVD_MSK & (MODULE_BASE_RSVD << EC_MSK_RSVD_BIT_SHFT)))

#define NOC_ERR_FATAL_SYNDROME_REG       TFA_ERR_CODE(KRNL, 572)
#define NOC_FAULT_NAME_SBMS              TFA_ERR_CODE(KRNL, 573)
#define NOC_FAULT_NAME_MSI               TFA_ERR_CODE(KRNL, 574)
#define NOC_POS_NAME_SYNDROME_REG        TFA_ERR_CODE(KRNL, 628)
#define NOC_POC_NAME_SYNDROME_REG        TFA_ERR_CODE(KRNL, 913)

struct noc_hw {
	uint16_t swid_low;
	uint16_t swid_high;
	uint16_t main_ctl_low;
	uint16_t err_valid_low;
	uint16_t err_clear_low;
	uint16_t errlog0_low;
	uint16_t errlog0_high;
	uint16_t errlog1_low;
	uint16_t errlog1_high;
	uint16_t errlog2_low;
	uint16_t errlog2_high;
	uint16_t errlog3_low;
	uint16_t errlog3_high;
	uint16_t errlog2_1_low;
	uint16_t errlog2_1_high;
	uint16_t errlog4_3_low;
	uint16_t errlog4_3_high;
	uint16_t errlog6_5_low;
	uint16_t errlog6_5_high;
	uint16_t errlog8_high;
};

struct noc_sideband_hw {
	uint16_t swid_low;
	uint16_t swid_high;
	uint16_t faultin_en0_low;
	uint16_t faultin_en0_high;
	uint16_t faultin_status0_low;
	uint16_t faultin_status0_high;
	uint16_t faultin_en1_low;
	uint16_t faultin_en1_high;
	uint16_t faultin_status1_low;
	uint16_t faultin_status1_high;
	uint16_t faultin_en2_low;
	uint16_t faultin_en2_high;
	uint16_t faultin_status2_low;
	uint16_t faultin_status2_high;
};

struct noc_pos_hw {
	uint16_t swid_low;
	uint16_t swid_high;
	uint16_t errlog_low;
	uint16_t errlog_high;
	uint16_t errlogclr_low;
};

struct noc_poc_hw {
	uint16_t swid_low;
	uint16_t swid_high;
	uint16_t errset_low;
	uint16_t errstatus_low;
	uint16_t errack_low;
	uint16_t errlogmain_low;
	uint16_t errlogmain_high;
	uint16_t errlogaddr_low;
	uint16_t errlogaddr_high;
	uint16_t errloguser_low;
	uint16_t errloguser_high;
	uint16_t errlogmisc_low;
	uint16_t errlogmisc_high;
};

struct nocerr_sbm_syndrome {
	uint32_t faultinstatus0_low;
	uint32_t faultinstatus0_high;
	uint32_t faultinstatus1_low;
	uint32_t faultinstatus1_high;
	uint32_t faultinstatus2_low;
	uint32_t faultinstatus2_high;
};

struct nocerr_pos_syndrome {
	uint32_t errlog_low;
	uint32_t errlog_high;
};

struct nocerr_poc_syndrome {
	uint32_t errlogstatus_low;
	uint32_t errlogmain_low;
	uint32_t errlogmain_high;
	uint32_t errlogaddr_low;
	uint32_t errlogaddr_high;
	uint32_t errloguser_low;
	uint32_t errloguser_high;
	uint32_t errlogmisc_low;
	uint32_t errlogmisc_high;
};

struct nocerr_msi_syndrome {
	uint32_t msienc_errlog0_low;
	uint32_t msienc_errlog0_high;
	uint32_t msienc_errlog1_low;
	uint32_t msienc_errlog1_high;
	uint32_t msienc_errlog2_low;
	uint32_t msienc_errlog2_high;
};

struct nocerr_syndrome {
	uint32_t errlog0_low;
	uint32_t errlog0_high;
	uint32_t errlog1_low;
	uint32_t errlog1_high;
	uint32_t errlog2_low;
	uint32_t errlog2_high;
	uint32_t errlog3_low;
	uint32_t errlog3_high;
	uint32_t errlog2_1_low;
	uint32_t errlog2_1_high;
	uint32_t errlog4_3_low;
	uint32_t errlog4_3_high;
	uint32_t errlog6_5_low;
	uint32_t errlog6_5_high;
	uint32_t errlog8_high;
	struct nocerr_sbm_syndrome *sbms;
	struct nocerr_pos_syndrome *pos;
	struct nocerr_poc_syndrome *poc;
	struct nocerr_msi_syndrome *msis;
};

struct noc_msi_hw {
	uint16_t msienc_swid_low;
	uint16_t msienc_swid_high;
	uint16_t msienc_errorset_low;
	uint16_t msienc_errorsts_low;
	uint16_t msienc_errorclr_low;
	uint16_t msienc_errlog0_low;
	uint16_t msienc_errlog0_high;
	uint16_t msienc_errlog1_low;
	uint16_t msienc_errlog1_high;
	uint16_t msienc_errlog2_low;
	uint16_t msienc_errlog2_high;
};

struct msi_info {
	uint32_t           num_msis;
	struct noc_msi_hw **msi_hw;
	void             **msi_base_addrs;
};

struct noc_qtv {
	enum chipinfo_part	part;
	uint32_t		idx;
};

struct nocerr_info_type {
	char                    *name;
	struct noc_hw           *hw;
	void                    *base_addr;
	uintptr_t                intr_vector;
	uint32_t                 num_sbms;
	struct noc_sideband_hw **sb_hw;
	void                   **sb_base_addrs;
	uint32_t                 num_tos;
	void                   **to_addrs;
	struct nocerr_syndrome   syndrome;
	uint32_t                 num_pos;
	struct noc_pos_hw      **pos_hw;
	void                   **pos_base_addrs;
	uint32_t                 num_poc;
	struct noc_poc_hw      **poc_hw;
	void                   **poc_base_addrs;
	uint32_t                 num_qtv_parts;
	struct noc_qtv          *qtv_parts;
	bool                     is_part_disabled;
	void                    *summary_intr_enable_addr;
	void                    *summary_intr_status_addr;
	struct msi_info         *msi_info;
};

struct nocerr_sbm_info_oem {
	uint32_t faultin_en0_low;
	uint32_t faultin_en0_high;
	uint32_t faultin_en1_low;
	uint32_t faultin_en1_high;
	uint32_t faultin_en2_low;
	uint32_t faultin_en2_high;
};

struct nocerr_pos_info_oem {
	bool enable;
};

struct nocerr_info_type_oem {
	char                            *name;
	bool                             intr_enable;
	bool                             error_fatal;
	struct nocerr_sbm_info_oem      *sbms;
	struct nocerr_sbm_info_oem      *obs_mask;
	uint32_t                        *to_reg_vals;
	struct nocerr_pos_info_oem      *pos;
	struct nocerr_pos_info_oem      *poc;
	uint32_t                         summary_intr_enable_bit_set;
};

struct nocerr_filter {
	uint32_t  num_extids;
	uint32_t *extids;
	uint32_t  num_errcodes;
	uint32_t *errcodes;
	bool      non_fatal;
	bool      delay_fatal;
	bool      is_smp2p;
};

struct nocerr_filter_oem {
	bool enable;
	bool delay_fatal;
};

struct nocerr_propdata_type {
	uint32_t             family;
	bool                 match;
	uint32_t             version;
	uint32_t             len;
	struct nocerr_info_type  *noc_info;
	uint32_t             num_clock_regs;
	void               **clock_reg_addrs;
	uint32_t             num_filters;
	struct nocerr_filter *filters;
	const uint32_t  *reg_addr;
	uint32_t  reg_mask;
	uint32_t  reg_val;
};

struct nocerr_config_info {
	uint32_t                num_configs;
	struct nocerr_propdata_type *configs;
};

struct nocerr_propdata_type_oem {
	uint32_t                  family;
	bool                      match;
	uint32_t                  version;
	uint32_t                  len;
	struct nocerr_info_type_oem   *noc_info_oem;
	uint32_t                  num_clock_regs;
	uint32_t                 *clock_reg_vals;
	uint32_t                  num_filters;
	struct nocerr_filter_oem *filters;
	const uint32_t  *reg_addr;
	uint32_t  reg_mask;
	uint32_t  reg_val;
};

struct nocerr_config_info_oem {
	uint32_t                    num_configs;
	struct nocerr_propdata_type_oem *configs;
};

struct nocerr_config_info *nocerr_target_get_config_info(void);
struct nocerr_config_info_oem *nocerr_target_get_config_info_oem(void);

#endif /* QTI_NOC_ERROR_H */
