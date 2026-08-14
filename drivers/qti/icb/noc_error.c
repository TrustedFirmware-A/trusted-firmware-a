/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdbool.h>
#include <stdint.h>

#include <common/debug.h>
#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/icb/icb_error.h>
#include "icb_cfg_match.h"
#include <lib/mmio.h>
#include <lib/utils_def.h>
#include "noc_error.h"
#include "noc_error_target.h"

#include <platform_def.h>
#include <qti_interrupt_svc.h>

#define NOC_REG_ADDR(base, offset)   ((uintptr_t)(base) + (uintptr_t)(offset))

#define REGISTER_VALID(offs) ((offs) != REGISTER_NOT_APPLICABLE)

static struct nocerr_propdata_type *nocerr_propdata;
static struct nocerr_propdata_type_oem *nocerr_propdata_oem;
static struct nocerr_info_type *noc_info;
static struct nocerr_info_type_oem *noc_info_oem;

static struct nocerr_propdata_type *qti_noc_error_platform_get_propdata(void)
{
	struct nocerr_config_info *info = nocerr_target_get_config_info();
	uint32_t i;

	for (i = 0U; i < info->num_configs; i++) {
		struct nocerr_propdata_type *cfg = &info->configs[i];

		if (!qti_icb_cfg_matches(cfg->family, cfg->match, cfg->version,
					 cfg->reg_addr, cfg->reg_mask,
					 cfg->reg_val)) {
			continue;
		}

		return cfg;
	}

	return NULL;
}

static struct nocerr_propdata_type_oem *qti_noc_error_platform_get_propdata_oem(void)
{
	struct nocerr_config_info_oem *info = nocerr_target_get_config_info_oem();
	uint32_t i;

	for (i = 0U; i < info->num_configs; i++) {
		struct nocerr_propdata_type_oem *cfg = &info->configs[i];

		if (!qti_icb_cfg_matches(cfg->family, cfg->match, cfg->version,
					 cfg->reg_addr, cfg->reg_mask,
					 cfg->reg_val)) {
			continue;
		}

		return cfg;
	}

	return NULL;
}

/*
 * Has the NoC at @idx already been registered? NO_INTERRUPT entries are
 * treated as "already registered" so that callers skip them.
 */
static bool is_qti_noc_error_isr_registered(uint32_t idx)
{
	uintptr_t intr_vector;

	if (noc_info == NULL) {
		return false;
	}

	intr_vector = noc_info[idx].intr_vector;

	if (intr_vector == NO_INTERRUPT) {
		return true;
	}

	for (uint32_t noc_idx = 0;
	     noc_idx < idx && noc_idx < nocerr_propdata->len;
	     noc_idx++) {
		if (noc_info[noc_idx].is_part_disabled) {
			continue;
		}
		if (noc_info[noc_idx].intr_vector == intr_vector) {
			return true;
		}
	}

	return false;
}

static void qti_noc_error_log_obs(struct nocerr_info_type *nocinfo)
{
	if (nocinfo == NULL) {
		return;
	}

	if (REGISTER_VALID(nocinfo->hw->errlog0_low)) {
		nocinfo->syndrome.errlog0_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog0_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog0_high)) {
		nocinfo->syndrome.errlog0_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog0_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog1_low)) {
		nocinfo->syndrome.errlog1_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog1_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog1_high)) {
		nocinfo->syndrome.errlog1_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog1_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog2_low)) {
		nocinfo->syndrome.errlog2_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog2_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog2_high)) {
		nocinfo->syndrome.errlog2_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog2_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog3_low)) {
		nocinfo->syndrome.errlog3_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog3_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog3_high)) {
		nocinfo->syndrome.errlog3_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog3_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog2_1_low)) {
		nocinfo->syndrome.errlog2_1_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog2_1_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog2_1_high)) {
		nocinfo->syndrome.errlog2_1_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog2_1_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog4_3_low)) {
		nocinfo->syndrome.errlog4_3_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog4_3_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog4_3_high)) {
		nocinfo->syndrome.errlog4_3_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog4_3_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog6_5_low)) {
		nocinfo->syndrome.errlog6_5_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog6_5_low));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog6_5_high)) {
		nocinfo->syndrome.errlog6_5_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog6_5_high));
	}

	if (REGISTER_VALID(nocinfo->hw->errlog8_high)) {
		nocinfo->syndrome.errlog8_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
					      nocinfo->hw->errlog8_high));
	}

	ERROR("(%x %s %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x)\n",
	      NOC_ERR_FATAL_SYNDROME_REG, nocinfo->name,
	      nocinfo->syndrome.errlog0_low,
	      nocinfo->syndrome.errlog0_high,
	      nocinfo->syndrome.errlog1_low,
	      nocinfo->syndrome.errlog1_high,
	      nocinfo->syndrome.errlog2_low,
	      nocinfo->syndrome.errlog2_high,
	      nocinfo->syndrome.errlog3_low,
	      nocinfo->syndrome.errlog3_high,
	      nocinfo->syndrome.errlog2_1_low,
	      nocinfo->syndrome.errlog2_1_high,
	      nocinfo->syndrome.errlog4_3_low,
	      nocinfo->syndrome.errlog4_3_high,
	      nocinfo->syndrome.errlog6_5_low,
	      nocinfo->syndrome.errlog6_5_high,
	      nocinfo->syndrome.errlog8_high);
}

static void qti_noc_error_log_msi(struct nocerr_info_type *nocinfo,
				  uint32_t idx)
{
	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog0_low)) {
		nocinfo->syndrome.msis[idx].msienc_errlog0_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					      nocinfo->msi_info->msi_hw[idx]->msienc_errlog0_low));
	}

	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog0_high)) {
		nocinfo->syndrome.msis[idx].msienc_errlog0_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					     nocinfo->msi_info->msi_hw[idx]->msienc_errlog0_high));
	}

	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog1_low)) {
		nocinfo->syndrome.msis[idx].msienc_errlog1_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					      nocinfo->msi_info->msi_hw[idx]->msienc_errlog1_low));
	}

	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog1_high)) {
		nocinfo->syndrome.msis[idx].msienc_errlog1_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					     nocinfo->msi_info->msi_hw[idx]->msienc_errlog1_high));
	}

	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog2_low)) {
		nocinfo->syndrome.msis[idx].msienc_errlog2_low =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					      nocinfo->msi_info->msi_hw[idx]->msienc_errlog2_low));
	}

	if (REGISTER_VALID(nocinfo->msi_info->msi_hw[idx]->msienc_errlog2_high)) {
		nocinfo->syndrome.msis[idx].msienc_errlog2_high =
			mmio_read_32(NOC_REG_ADDR(nocinfo->msi_info->msi_base_addrs[idx],
					     nocinfo->msi_info->msi_hw[idx]->msienc_errlog2_high));
	}

	ERROR("(%x %s %x %x %x %x %x %x %x)\n", NOC_FAULT_NAME_MSI,
	      nocinfo->name, idx,
	      nocinfo->syndrome.msis[idx].msienc_errlog0_low,
	      nocinfo->syndrome.msis[idx].msienc_errlog0_high,
	      nocinfo->syndrome.msis[idx].msienc_errlog1_low,
	      nocinfo->syndrome.msis[idx].msienc_errlog1_high,
	      nocinfo->syndrome.msis[idx].msienc_errlog2_low,
	      nocinfo->syndrome.msis[idx].msienc_errlog2_high);
}

static bool qti_noc_error_scan_faultin(uint32_t num_sbms,
				       struct nocerr_sbm_syndrome *sbms,
				       struct nocerr_sbm_info_oem *obs_mask)
{
	uint32_t fault_mask = 0;

	for (uint32_t idx = 0; idx < num_sbms; idx++) {
		fault_mask |= sbms[idx].faultinstatus0_low &
			      ~obs_mask[idx].faultin_en0_low;
		fault_mask |= sbms[idx].faultinstatus0_high &
			      ~obs_mask[idx].faultin_en0_high;
		fault_mask |= sbms[idx].faultinstatus1_low &
			      ~obs_mask[idx].faultin_en1_low;
		fault_mask |= sbms[idx].faultinstatus1_high &
			      ~obs_mask[idx].faultin_en1_high;
		fault_mask |= sbms[idx].faultinstatus2_low &
			      ~obs_mask[idx].faultin_en2_low;
		fault_mask |= sbms[idx].faultinstatus2_high &
			      ~obs_mask[idx].faultin_en2_high;
	}

	return fault_mask != 0;
}

static bool errcode_matches_filter(struct nocerr_filter *filter,
				   uint32_t errcode)
{
	for (uint32_t i = 0; i < filter->num_errcodes; i++) {
		if (errcode == filter->errcodes[i]) {
			return true;
		}
	}
	return false;
}

/*
 * Match the captured syndrome against the OEM filter list and return whether
 * the fault should still be treated as fatal.
 */
static bool qti_noc_error_handle_filter(struct nocerr_info_type *nocinfo,
					struct nocerr_info_type_oem *nocinfooem,
					bool obs_err_valid,
					bool *delay_crash)
{
	bool is_fatal_allowed = true, is_fault = true;

	if (nocerr_propdata == NULL ||
	    nocerr_propdata_oem == NULL ||
	    noc_info == NULL ||
	    noc_info_oem == NULL ||
	    delay_crash == NULL) {
		return true;
	}

	*delay_crash = false;

	if (nocerr_propdata->filters != NULL &&
	    nocerr_propdata->num_filters != 0) {
		/* Check for non-obs faults, these are always fatal. */
		is_fault = qti_noc_error_scan_faultin(nocinfo->num_sbms,
						      nocinfo->syndrome.sbms,
						      nocinfooem->obs_mask);

		if (obs_err_valid) {
			bool matched = false;
			/* ERRLOG1_HIGH masks out the MID field. */
			uint32_t extid = nocinfo->syndrome.errlog1_high & 0xFFFFFF00;
			uint32_t errcode = (nocinfo->syndrome.errlog0_low >> 8) & 0x7;
			struct nocerr_filter *filter = NULL;
			struct nocerr_filter_oem *oem_filter = NULL;

			for (uint32_t fidx = 0;
			     fidx < MIN(nocerr_propdata->num_filters,
					nocerr_propdata_oem->num_filters);
			     fidx++) {
				filter = &nocerr_propdata->filters[fidx];
				oem_filter = &nocerr_propdata_oem->filters[fidx];

				for (uint32_t extidx = 0;
				     extidx < filter->num_extids;
				     extidx++) {
					if (extid == filter->extids[extidx]) {
						matched = true;
						break;
					}
				}

				if (matched) {
					if (oem_filter->enable && filter->non_fatal &&
					    errcode_matches_filter(filter, errcode)) {
						is_fatal_allowed = false;
					}

					if (is_fatal_allowed) {
						*delay_crash = filter->delay_fatal &&
							       oem_filter->delay_fatal;
					}

					break;
				}
			}
		}
	}

	return is_fatal_allowed || is_fault;
}

/*
 * Per-vector ISR registered through qti_interrupt_svc_register(). Walks the
 * platform NoC list, logs syndrome on a faulted instance, and panics on a
 * fatal fault. Returns @ctx as required by qti_int_svc_isr_t.
 */
static void *qti_noc_error_handle_interrupt(uint32_t int_num, void *ctx)
{
	uint32_t noc_idx, idx, val = 0u;
	uintptr_t intr_vector = int_num;
	struct nocerr_info_type *nocinfo = NULL;
	struct nocerr_info_type_oem *nocinfooem = NULL;
	bool fatal_fault_detected = false;
	bool any_irq_match = false;

	if (nocerr_propdata == NULL || noc_info == NULL || noc_info_oem == NULL) {
		ERROR("NOC error handler not properly initialized\n");
		return ctx;
	}

	for (noc_idx = 0; noc_idx < nocerr_propdata->len; noc_idx++) {
		bool fault_detected = false;
		bool target_delay_fatal = false;
		bool filter_delay_fatal = true;
		bool obs_err_valid = false;
		bool handle_target_fatal = false;

		nocinfo = NULL;
		nocinfooem = NULL;

		if (noc_info[noc_idx].intr_vector == intr_vector) {
			any_irq_match = true;
			/*
			 * If a summary interrupt status register is present,
			 * use it to determine which NoC actually faulted.
			 */
			if (noc_info[noc_idx].summary_intr_status_addr != NULL) {
				if (noc_info_oem[noc_idx].summary_intr_enable_bit_set != 0u) {
					void *sap = noc_info[noc_idx].summary_intr_status_addr;
					uint32_t status = mmio_read_32((uintptr_t)sap);

					if ((status &
					     noc_info_oem[noc_idx].summary_intr_enable_bit_set)
					    != 0u) {
						nocinfo = &noc_info[noc_idx];
						nocinfooem = &noc_info_oem[noc_idx];
					}
				}
			} else {
				nocinfo = &noc_info[noc_idx];
				nocinfooem = &noc_info_oem[noc_idx];
			}
		}

		if (nocinfo == NULL || nocinfooem == NULL) {
			continue;
		}

		if (nocinfo->is_part_disabled) {
			continue;
		}

		if (nocinfo->base_addr != NULL) {
			if (mmio_read_32(NOC_REG_ADDR(nocinfo->base_addr,
						  nocinfo->hw->err_valid_low))) {
				fault_detected = true;
				obs_err_valid = true;
				qti_noc_error_log_obs(nocinfo);
			}
		}

		if (nocinfo->msi_info != NULL) {
			for (idx = 0; idx < nocinfo->msi_info->num_msis; idx++) {
				struct noc_msi_hw *mhw =
					nocinfo->msi_info->msi_hw[idx];

				if (REGISTER_VALID(mhw->msienc_errorsts_low)) {
					val = mmio_read_32(NOC_REG_ADDR(
						nocinfo->msi_info->msi_base_addrs[idx],
						mhw->msienc_errorsts_low));
					if ((val & 0x1) != 0) {
						fault_detected = true;
						qti_noc_error_log_msi(nocinfo, idx);
					}
				}
			}
		}

		for (idx = 0; idx < nocinfo->num_sbms; idx++) {
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status0_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status0_low));
				nocinfo->syndrome.sbms[idx].faultinstatus0_low = val;
				if (val != 0) {
					fault_detected = true;
				}
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status0_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status0_high));
				nocinfo->syndrome.sbms[idx].faultinstatus0_high = val;
				if (val != 0) {
					fault_detected = true;
				}
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status1_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status1_low));
				nocinfo->syndrome.sbms[idx].faultinstatus1_low = val;
				if (val != 0) {
					fault_detected = true;
				}
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status1_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status1_high));
				nocinfo->syndrome.sbms[idx].faultinstatus1_high = val;
				if (val != 0) {
					fault_detected = true;
				}
			}
			/* FAULTIN2 (optional, only present on newer SBMs). */
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status2_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status2_low));
				nocinfo->syndrome.sbms[idx].faultinstatus2_low = val;
				if (val != 0) {
					fault_detected = true;
				}
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status2_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status2_high));
				nocinfo->syndrome.sbms[idx].faultinstatus2_high = val;
				if (val != 0) {
					fault_detected = true;
				}
			}

			if (fault_detected) {
				ERROR("(%x %s %x %x %x %x %x %x %x)\n", NOC_FAULT_NAME_SBMS,
				      nocinfo->name, idx,
				      nocinfo->syndrome.sbms[idx].faultinstatus0_low,
				      nocinfo->syndrome.sbms[idx].faultinstatus0_high,
				      nocinfo->syndrome.sbms[idx].faultinstatus1_low,
				      nocinfo->syndrome.sbms[idx].faultinstatus1_high,
				      nocinfo->syndrome.sbms[idx].faultinstatus2_low,
				      nocinfo->syndrome.sbms[idx].faultinstatus2_high);
			}
		}

		for (idx = 0; idx < nocinfo->num_pos; idx++) {
			if (REGISTER_VALID(nocinfo->pos_hw[idx]->errlog_low)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->pos_base_addrs[idx],
							    nocinfo->pos_hw[idx]->errlog_low));
				nocinfo->syndrome.pos[idx].errlog_low = val;

				if ((val & 0x2) != 0) {
					fault_detected = true;
				} else {
					continue;
				}
			}
			if (REGISTER_VALID(nocinfo->pos_hw[idx]->errlog_high)) {
				nocinfo->syndrome.pos[idx].errlog_high =
					mmio_read_32(NOC_REG_ADDR(nocinfo->pos_base_addrs[idx],
							      nocinfo->pos_hw[idx]->errlog_high));
			}

			ERROR("(%x %s %x %x %x)\n", NOC_POS_NAME_SYNDROME_REG,
			      nocinfo->name, idx,
			      nocinfo->syndrome.pos[idx].errlog_low,
			      nocinfo->syndrome.pos[idx].errlog_high);
		}

		for (idx = 0; idx < nocinfo->num_poc; idx++) {
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errstatus_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errstatus_low));

				if ((val & 0x1) != 0) {
					nocinfo->syndrome.poc[idx].errlogstatus_low = val;
					fault_detected = true;
				} else {
					continue;
				}
			}
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogmain_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogmain_low));
				nocinfo->syndrome.poc[idx].errlogmain_low = val;
			}
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogmain_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogmain_high));
				nocinfo->syndrome.poc[idx].errlogmain_high = val;
			}

			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogaddr_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogaddr_low));
				nocinfo->syndrome.poc[idx].errlogaddr_low = val;
			}
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogaddr_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogaddr_high));
				nocinfo->syndrome.poc[idx].errlogaddr_high = val;
			}

			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errloguser_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errloguser_low));
				nocinfo->syndrome.poc[idx].errloguser_low = val;
			}
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errloguser_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errloguser_high));
				nocinfo->syndrome.poc[idx].errloguser_high = val;
			}
			/* ERRLOGMISC (optional, only present on newer PoCs). */
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogmisc_low)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogmisc_low));
				nocinfo->syndrome.poc[idx].errlogmisc_low = val;
			}
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errlogmisc_high)) {
				val = mmio_read_32(NOC_REG_ADDR(
					nocinfo->poc_base_addrs[idx],
					nocinfo->poc_hw[idx]->errlogmisc_high));
				nocinfo->syndrome.poc[idx].errlogmisc_high = val;
			}

			ERROR("(%x %s %x %x %x %x %x %x %x %x %x %x)\n",
			      NOC_POC_NAME_SYNDROME_REG, nocinfo->name, idx,
			      nocinfo->syndrome.poc[idx].errlogstatus_low,
			      nocinfo->syndrome.poc[idx].errlogmain_low,
			      nocinfo->syndrome.poc[idx].errlogmain_high,
			      nocinfo->syndrome.poc[idx].errlogaddr_low,
			      nocinfo->syndrome.poc[idx].errlogaddr_high,
			      nocinfo->syndrome.poc[idx].errloguser_low,
			      nocinfo->syndrome.poc[idx].errloguser_high,
			      nocinfo->syndrome.poc[idx].errlogmisc_low,
			      nocinfo->syndrome.poc[idx].errlogmisc_high);
		}

		if (nocinfo->base_addr != NULL) {
			mmio_write_32(NOC_REG_ADDR(nocinfo->base_addr,
					       nocinfo->hw->err_clear_low), 0x1);
		}

		for (idx = 0; idx < nocinfo->num_pos; idx++) {
			if (REGISTER_VALID(nocinfo->pos_hw[idx]->errlogclr_low)) {
				mmio_write_32(NOC_REG_ADDR(nocinfo->pos_base_addrs[idx],
						       nocinfo->pos_hw[idx]->errlogclr_low),
					  0x1);
			}
		}

		for (idx = 0; idx < nocinfo->num_poc; idx++) {
			if (REGISTER_VALID(nocinfo->poc_hw[idx]->errack_low)) {
				mmio_write_32(NOC_REG_ADDR(nocinfo->poc_base_addrs[idx],
						       nocinfo->poc_hw[idx]->errack_low),
					  0x1);
			}
		}

		if (nocinfo->msi_info != NULL) {
			for (idx = 0; idx < nocinfo->msi_info->num_msis; idx++) {
				struct noc_msi_hw *mhw =
					nocinfo->msi_info->msi_hw[idx];

				if (REGISTER_VALID(mhw->msienc_errorclr_low)) {
					mmio_write_32(NOC_REG_ADDR(
						nocinfo->msi_info->msi_base_addrs[idx],
						mhw->msienc_errorclr_low),
						0x1);
				}
			}
		}

		for (idx = 0; idx < nocinfo->num_sbms; idx++) {
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status0_low)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status0_low));
				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en0_low),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en0_low)) &
					(~val | nocinfooem->obs_mask[idx].faultin_en0_low)));
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status0_high)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status0_high));

				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en0_high),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en0_high)) &
					(~val | nocinfooem->obs_mask[idx].faultin_en0_high)));
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status1_low)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status1_low));

				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en1_low),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en1_low)) &
					(~val |
					nocinfooem->obs_mask[idx].faultin_en1_low)));
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status1_high)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status1_high));

				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en1_high),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en1_high)) &
					(~val |
					nocinfooem->obs_mask[idx].faultin_en1_high)));
			}
			/* FAULTIN2 (optional, only present on newer SBMs). */
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status2_low)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status2_low));

				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en2_low),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en2_low)) &
					(~val |
					nocinfooem->obs_mask[idx].faultin_en2_low)));
			}
			if (REGISTER_VALID(nocinfo->sb_hw[idx]->faultin_status2_high)) {
				val = mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_status2_high));

				mmio_write_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en2_high),
					(mmio_read_32(NOC_REG_ADDR(nocinfo->sb_base_addrs[idx],
					nocinfo->sb_hw[idx]->faultin_en2_high)) &
					(~val |
					nocinfooem->obs_mask[idx].faultin_en2_high)));
			}
		}

		/*
		 * Don't set error fatal until we're sure we're done.
		 * Do record that we need to, though.
		 */
		handle_target_fatal = qti_noc_error_handle_target(nocinfo,
								  nocinfooem,
								  &target_delay_fatal);
		if (fault_detected && nocinfooem->error_fatal) {
			bool filter_fatal_allowed =
				qti_noc_error_handle_filter(nocinfo, nocinfooem,
							    obs_err_valid,
							    &filter_delay_fatal);

			if (filter_fatal_allowed && handle_target_fatal &&
			    !target_delay_fatal && !filter_delay_fatal) {
				fatal_fault_detected = true;
			}
		}
	}

	if (fatal_fault_detected) {
		ERROR("Fatal NOC error detected!\n");
		panic();
	} else if (!any_irq_match) {
		ERROR("NOC Invalid Interrupt Vector!\n");
	}

	return ctx;
}

static void noc_error_disable_intr_enable(uint32_t idx)
{
	if (noc_info == NULL || noc_info_oem == NULL) {
		return;
	}

	if (!noc_info_oem[idx].intr_enable) {
		return;
	}

	if (noc_info[idx].summary_intr_enable_addr != NULL) {
		uintptr_t addr = (uintptr_t)noc_info[idx].summary_intr_enable_addr;

		mmio_write_32(addr, mmio_read_32(addr) &
			      ~noc_info_oem[idx].summary_intr_enable_bit_set);
	}

	if (noc_info[idx].base_addr != NULL) {
		mmio_write_32(NOC_REG_ADDR(noc_info[idx].base_addr,
					   noc_info[idx].hw->main_ctl_low), 0x0);
	}
}

void qti_icb_error_init(void)
{
	uint32_t i, idx, j;

	nocerr_propdata = qti_noc_error_platform_get_propdata();
	if (nocerr_propdata == NULL) {
		return;
	}

	nocerr_propdata_oem = qti_noc_error_platform_get_propdata_oem();
	if (nocerr_propdata_oem == NULL) {
		return;
	}

	noc_info = nocerr_propdata->noc_info;
	if (noc_info == NULL) {
		return;
	}

	noc_info_oem = nocerr_propdata_oem->noc_info_oem;
	if (noc_info_oem == NULL) {
		return;
	}

	if (nocerr_propdata->len != nocerr_propdata_oem->len) {
		ERROR("icbuerr: noc_info/noc_info_oem length mismatch (%u/%u)\n",
		      nocerr_propdata->len, nocerr_propdata_oem->len);
		return;
	}

	if (nocerr_propdata->num_clock_regs != nocerr_propdata_oem->num_clock_regs) {
		ERROR("icbuerr: clock_reg_addrs/clock_reg_vals length mismatch (%u/%u)\n",
		      nocerr_propdata->num_clock_regs,
		      nocerr_propdata_oem->num_clock_regs);
		return;
	}

	qti_noc_error_init_target(noc_info, nocerr_propdata->len, noc_info_oem);

	for (i = 0; i < nocerr_propdata->num_clock_regs; i++) {
		mmio_write_32((uintptr_t)nocerr_propdata->clock_reg_addrs[i],
			  nocerr_propdata_oem->clock_reg_vals[i]);
	}

	for (i = 0; i < nocerr_propdata->len; i++) {
		/*
		 * If every SKU part associated with this NoC is disabled, skip
		 * programming its registers. Platforms with no SKU fusing leave
		 * num_qtv_parts == 0 and is_part_disabled == false.
		 */
		for (j = 0; j < noc_info[i].num_qtv_parts; j++) {
			struct noc_qtv *qtv = &noc_info[i].qtv_parts[j];

			noc_info[i].is_part_disabled =
				chipinfo_is_part_disabled(qtv->part,
							       qtv->idx);
			if (!noc_info[i].is_part_disabled) {
				break;
			}
		}

		if (noc_info[i].is_part_disabled) {
			continue;
		}

		if (!is_qti_noc_error_isr_registered(i)) {
			int err;

			err = qti_interrupt_svc_register(
				noc_info[i].intr_vector,
				qti_noc_error_handle_interrupt,
				(void *)(uintptr_t)noc_info[i].intr_vector);
			if (err != 0) {
				ERROR("icbuerr: ISR registration failed for vec %u (%d)\n",
				      (uint32_t)noc_info[i].intr_vector, err);
				for (uint32_t k = 0; k < i; k++) {
					if (noc_info[k].is_part_disabled) {
						continue;
					}
					if (noc_info[k].intr_vector != NO_INTERRUPT) {
						(void)qti_interrupt_svc_unregister(
							noc_info[k].intr_vector);
					}
					noc_error_disable_intr_enable(k);
				}
				return;
			}
		}

		if (noc_info_oem[i].intr_enable) {
			if (noc_info[i].summary_intr_enable_addr != NULL) {
				uintptr_t addr = (uintptr_t)noc_info[i].summary_intr_enable_addr;

				mmio_write_32(addr, mmio_read_32(addr) |
					      noc_info_oem[i].summary_intr_enable_bit_set);
			}

			for (idx = 0; idx < noc_info[i].num_sbms; idx++) {
				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en0_low)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en0_low),
						noc_info_oem[i].sbms[idx].faultin_en0_low);
				}
				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en0_high)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en0_high),
						noc_info_oem[i].sbms[idx].faultin_en0_high);
				}

				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en1_low)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en1_low),
						noc_info_oem[i].sbms[idx].faultin_en1_low);
				}

				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en1_high)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en1_high),
						noc_info_oem[i].sbms[idx].faultin_en1_high);
				}

				/* FAULTIN2 (optional, only present on newer SBMs). */
				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en2_low)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en2_low),
						noc_info_oem[i].sbms[idx].faultin_en2_low);
				}

				if (REGISTER_VALID(noc_info[i].sb_hw[idx]->faultin_en2_high)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].sb_base_addrs[idx],
						noc_info[i].sb_hw[idx]->faultin_en2_high),
						noc_info_oem[i].sbms[idx].faultin_en2_high);
				}
			}

			if (noc_info[i].msi_info != NULL) {
				struct msi_info *msi =
					noc_info[i].msi_info;

				for (idx = 0; idx < msi->num_msis; idx++) {
					struct noc_msi_hw *mhw =
						msi->msi_hw[idx];

					if (REGISTER_VALID(mhw->msienc_errorset_low)) {
						mmio_write_32(NOC_REG_ADDR(
							msi->msi_base_addrs[idx],
							mhw->msienc_errorset_low),
							0x1);
					}
				}
			}

			for (idx = 0; idx < noc_info[i].num_pos; idx++) {
				if (REGISTER_VALID(noc_info[i].pos_hw[idx]->errlog_low)) {
					mmio_write_32(NOC_REG_ADDR(
						noc_info[i].pos_base_addrs[idx],
						noc_info[i].pos_hw[idx]->errlog_low),
						noc_info_oem[i].pos[idx].enable ? 1 : 0);
				}
			}

			/* PoC: Point of Coherency. */
			for (idx = 0; idx < noc_info[i].num_poc; idx++) {
				if (REGISTER_VALID(noc_info[i].poc_hw[idx]->errset_low)) {
					uint32_t mask = 0x1;

					mmio_clrsetbits_32(NOC_REG_ADDR(
						noc_info[i].poc_base_addrs[idx],
						noc_info[i].poc_hw[idx]->errset_low), mask,
						(noc_info_oem[i].poc[idx].enable ? 1 : 0));
				}
			}

			for (idx = 0; idx < noc_info[i].num_tos; idx++) {
				mmio_write_32((uintptr_t)noc_info[i].to_addrs[idx],
					  noc_info_oem[i].to_reg_vals[idx]);
			}

			/* 0x3 = fault enable + stall-until-serviced flag. */
			if (noc_info[i].base_addr != NULL) {
				mmio_write_32(NOC_REG_ADDR(noc_info[i].base_addr,
						       noc_info[i].hw->main_ctl_low),
					  0x3);
			}
		}
	}
}
