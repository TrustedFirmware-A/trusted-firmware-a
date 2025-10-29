/*
 * Copyright (c) 2023-2026, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <common/debug.h>
#include <services/el3_spmd_logical_sp.h>
#include <services/ffa_svc.h>
#include <services/lfa_svc.h>
#include <smccc_helpers.h>

#include <plat/arm/common/plat_arm_lfa_components.h>

#define SPMD_LP_PARTITION_ID SPMD_LP_ID_START
#define SPMD_LP_UUID {0xe98e43ad, 0xb7db524f, 0x47a3bf57, 0x1588f4e3}

/* SPMD Logical SP currently only supports sending direct message. */
#define SPMD_PARTITION_PROPERTIES FFA_PARTITION_DIRECT_REQ_SEND

#define SPMD_LP_MAX_SUPPORTED_SP 10

#define SP_IMAGE_PKG_SIZE	0x100000

#define COMPONENT_ID_SP1	LFA_SP1
#define COMPONENT_ID_SP2	LFA_SP2

static int32_t fvp_spmd_logical_partition_init(void)
{
	INFO("FVP SPMD LSP: Init function called.\n");

	return 0;
}

/*
 * Platform specific SMC handler used to translate SIP SMCs or other platform
 * specific SMCs into FF-A direct messages.
 */
uintptr_t plat_spmd_logical_sp_smc_handler(unsigned int smc_fid,
			u_register_t x1,
			u_register_t x2,
			u_register_t x3,
			u_register_t x4,
			void *cookie,
			void *handle,
			u_register_t flags)
{
	struct ffa_value retval = { 0 };
	uint64_t send_recv_id = SPMD_LP_PARTITION_ID << 16 | 0x8001;

	/*
	 * Forward the SMC as direct request.
	 */
	if (!spmd_el3_ffa_msg_direct_req(send_recv_id, x2, x3, x4, 0U, 0U, 0U, handle, &retval)) {
		panic();
	}

	SMC_RET8(handle, retval.func, retval.arg1, retval.arg2, retval.arg3,
			retval.arg4, retval.arg5, retval.arg6, retval.arg7);
}

#if SUPPORT_SP_LIVE_ACTIVATION

static int32_t lfa_sp_prime(struct lfa_component_status *activation)
{
	/**
	 * On the FVP simulation platform, Secure Partitions are assumed to be
	 * preloaded and authenticated, so skip PRIME. This callback is expected
	 * to be implemented thoroughly for real platforms.
	 */
	return LFA_SUCCESS;
}

static uint16_t component_id_to_sp_ffa_id(uint32_t component_id)
{
	switch (component_id) {
	case COMPONENT_ID_SP1:
		return FFA_ID_SP1;
	case COMPONENT_ID_SP2:
		return FFA_ID_SP2;
	default:
		return 0;
	}
}

static uintptr_t find_sp_image_base_in_staging(uint16_t sp_id)
{
	if (sp_id == FFA_ID_SP1) {
		return FVP_SP1_STAGING_MEM_BASE;
	} else if (sp_id == FFA_ID_SP2) {
		return FVP_SP2_STAGING_MEM_BASE;
	}

	return 0U;
}

bool get_sp_id_and_uuid(uint32_t component_id, uint16_t *sp_id, uint32_t *target_uuid)
{
	const uuid_t uuid_sp1 = IMAGE_UUID_SECURE_PARTITION_1;
	const uuid_t uuid_sp2 = IMAGE_UUID_SECURE_PARTITION_2;

	assert(target_uuid != NULL && sp_id != NULL);

	*sp_id = component_id_to_sp_ffa_id(component_id);

	if (*sp_id == 0U) {
		return false;
	}

	/* Convert uuid to flattened format */
	if (*sp_id == FFA_ID_SP1) {
		convert_uuid_to_u32_array(uuid_sp1, target_uuid);
	} else {
		convert_uuid_to_u32_array(uuid_sp2, target_uuid);
	}

	return true;
}

static int32_t lfa_sp_activate(struct lfa_component_status *activation,
			       uint64_t ep_address, uint64_t context_id)
{
	enum lfa_retc ret_lfa;
	uint16_t sp_id = 0U;
	uintptr_t image_base;
	uint32_t target_uuid[4] = { 0 };
	static struct ffa_partition_info_v1_3 target_info;
	struct ffa_value ret = { 0 };
	uint64_t image_page_count = SP_IMAGE_PKG_SIZE / PAGE_SIZE;

	if (activation == NULL) {
		ERROR("Live activation of endpoint not supported by platform\n");
		return LFA_NOT_SUPPORTED;
	}

	if (!get_sp_id_and_uuid(activation->component_id, &sp_id, target_uuid)) {
		ERROR("Unrecognized endpoint specified for live activation\n");
		return LFA_NOT_SUPPORTED;
	}

	/* Get partition properties. */
	if (!spmd_el3_invoke_partition_info_get(target_uuid, 0, 0, &ret)) {
		ERROR("Unable to retrieve partition info\n");
		return LFA_COMPONENT_WRONG_STATE;
	}

	if (is_ffa_error(&ret)) {
		return convert_ffa_error_code_to_lfa((int32_t)ret.arg2);
	}

	/*
	 * Extract partition information from the first descriptor. The number
	 * of descriptors may be more than 1 if the SP exposes multiple protocol
	 * UUIDs.
	 */
	if (!ffa_partition_info_regs_get_part_info(&ret, 0, &target_info)) {
		ERROR("Failed to obtain partition info\n");
		return LFA_COMPONENT_WRONG_STATE;
	}

	if (target_info.ep_id != sp_id) {
		ERROR("Mismatch in SP endpoint ID\n");
		return LFA_COMPONENT_WRONG_STATE;
	}

	/* Ensure it is UP SP. */
	if (target_info.execution_ctx_count != 1) {
		ERROR("Live activation not supported for MP SP\n");
		return LFA_NOT_SUPPORTED;
	}

	/* Ensure it supports live activation. */
	if ((target_info.properties & FFA_PARTITION_LIVE_ACTIVATION) == 0U) {
		ERROR("Partition does not support live activation\n");
		return LFA_NOT_SUPPORTED;
	}

	/* Ensure CPU rendezvous is not required. */
	if ((target_info.properties & FFA_PARTITION_CPU_RENDEZVOUS) != 0U) {
		ERROR("Partition requires CPU Rendezvous. Not supported\n");
		return LFA_NOT_SUPPORTED;
	}

	image_base = find_sp_image_base_in_staging(sp_id);

	/*
	 * Check if the new firmware image could not be loaded from live
	 * activation store to staging area.
	 */
	if (image_base == 0U) {
		return LFA_DEVICE_ERROR;
	}

	INFO("LSP: Initiate Live activation start request\n");
	/* SP live activation start request. */
	ret_lfa = spmd_lsp_start_request_sp_live_activation(
		SPMD_LP_PARTITION_ID, sp_id, image_base, image_page_count, 0,
		0);

	if (ret_lfa != LFA_SUCCESS) {
		ERROR("LSP: Live activation start request failed\n");
		return ret_lfa;
	}

	INFO("LSP: Initiate Live activation finish request\n");

	/* SP live activation finish request. */
	ret_lfa = spmd_lsp_finish_request_sp_live_activation(
		SPMD_LP_PARTITION_ID, sp_id);

	if (ret_lfa != LFA_SUCCESS) {
		ERROR("LSP: Live activation finish request failed\n");

		/*
		 * The target SP's old image has already been replaced by
		 * new image. Since the activation failed, the SP is no
		 * longer able to provide any services. The only choice left
		 * is system reset.
		 */
		return LFA_CRITICAL_ERROR;
	}

	return ret_lfa;
}

static struct lfa_component_ops secure_partition_activator = {
	.prime = lfa_sp_prime,
	.activate = lfa_sp_activate,
	.may_reset_cpu = false,
	.cpu_rendezvous_required = false,
};

struct lfa_component_ops *get_secure_partition_activator(void)
{
	return &secure_partition_activator;
}

#endif /* SUPPORT_SP_LIVE_ACTIVATION */

/* Register SPMD logical partition  */
DECLARE_SPMD_LOGICAL_PARTITION(
	fvp_spmd_logical_partition,
	fvp_spmd_logical_partition_init,/* Init Function */
	SPMD_LP_PARTITION_ID,		/* FF-A Partition ID */
	SPMD_LP_UUID,			/* UUID */
	SPMD_PARTITION_PROPERTIES	/* Partition Properties. */
);
