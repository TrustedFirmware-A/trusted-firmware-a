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

static int32_t lfa_sp_activate(struct lfa_component_status *activation,
			       uint64_t ep_address, uint64_t context_id)
{
	return LFA_SUCCESS;
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
