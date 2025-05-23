/*
 * Copyright (c) 2017-2025, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <string.h>

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/arm/css/css_scp.h>
#include <drivers/arm/css/scmi.h>
#include <lib/mmio.h>
#include <plat/arm/common/plat_arm.h>
#include <plat/arm/css/common/css_pm.h>
#include <plat/common/platform.h>
#include <platform_def.h>

/*
 * This file implements the SCP helper functions using SCMI protocol.
 */

/*
 * SCMI power state parameter bit field encoding for ARM CSS platforms.
 *
 * 31  20 19       16 15      12 11       8 7        4 3         0
 * +-------------------------------------------------------------+
 * | SBZ | Max level |  Level 3 |  Level 2 |  Level 1 |  Level 0 |
 * |     |           |   state  |   state  |   state  |   state  |
 * +-------------------------------------------------------------+
 *
 * `Max level` encodes the highest level that has a valid power state
 * encoded in the power state.
 */
#define SCMI_PWR_STATE_MAX_PWR_LVL_SHIFT	16
#define SCMI_PWR_STATE_MAX_PWR_LVL_WIDTH	4
#define SCMI_PWR_STATE_MAX_PWR_LVL_MASK		\
				((1 << SCMI_PWR_STATE_MAX_PWR_LVL_WIDTH) - 1)
#define SCMI_SET_PWR_STATE_MAX_PWR_LVL(_power_state, _max_level)		\
		(_power_state) |= ((_max_level) & SCMI_PWR_STATE_MAX_PWR_LVL_MASK)\
				<< SCMI_PWR_STATE_MAX_PWR_LVL_SHIFT
#define SCMI_GET_PWR_STATE_MAX_PWR_LVL(_power_state)		\
		(((_power_state) >> SCMI_PWR_STATE_MAX_PWR_LVL_SHIFT)	\
				& SCMI_PWR_STATE_MAX_PWR_LVL_MASK)

#define SCMI_PWR_STATE_LVL_WIDTH		4
#define SCMI_PWR_STATE_LVL_MASK			\
				((1 << SCMI_PWR_STATE_LVL_WIDTH) - 1)
#define SCMI_SET_PWR_STATE_LVL(_power_state, _level, _level_state)		\
		(_power_state) |= ((_level_state) & SCMI_PWR_STATE_LVL_MASK)	\
				<< (SCMI_PWR_STATE_LVL_WIDTH * (_level))
#define SCMI_GET_PWR_STATE_LVL(_power_state, _level)		\
		(((_power_state) >> (SCMI_PWR_STATE_LVL_WIDTH * (_level))) &	\
				SCMI_PWR_STATE_LVL_MASK)

/*
 * The SCMI power state enumeration for a power domain level
 */
typedef enum {
	scmi_power_state_off = 0,
	scmi_power_state_on = 1,
	scmi_power_state_sleep = 2,
} scmi_power_state_t;

/*
 * The global handles for invoking the SCMI driver APIs after the driver
 * has been initialized.
 */
static void *scmi_handles[PLAT_ARM_SCMI_CHANNEL_COUNT];

/* The global SCMI channels array */
static scmi_channel_t scmi_channels[PLAT_ARM_SCMI_CHANNEL_COUNT];

/*
 * Channel ID for the default SCMI channel.
 * The default channel is used to issue SYSTEM level SCMI requests and is
 * initialized to the channel which has the boot cpu as its resource.
 */
static uint32_t default_scmi_channel_id;

/*
 * TODO: Allow use of channel specific lock instead of using a single lock for
 * all the channels.
 */
ARM_SCMI_INSTANTIATE_LOCK;

/*
 * Function to obtain the SCMI Domain ID and SCMI Channel number from the linear
 * core position. The SCMI Channel number is encoded in the upper 16 bits and
 * the Domain ID is encoded in the lower 16 bits in each entry of the mapping
 * array exported by the platform.
 */
static void css_scp_core_pos_to_scmi_channel(unsigned int core_pos,
		unsigned int *scmi_domain_id, unsigned int *scmi_channel_id)
{
	unsigned int composite_id;

	composite_id = plat_css_core_pos_to_scmi_dmn_id_map[core_pos];

	*scmi_channel_id = GET_SCMI_CHANNEL_ID(composite_id);
	*scmi_domain_id = GET_SCMI_DOMAIN_ID(composite_id);
}

/*
 * Helper function to suspend a CPU power domain and its parent power domains
 * if applicable.
 */
void css_scp_suspend(const struct psci_power_state *target_state)
{
	int ret;

	/* At least power domain level 0 should be specified to be suspended */
	assert(target_state->pwr_domain_state[ARM_PWR_LVL0] ==
						ARM_LOCAL_STATE_OFF);

	/* Check if power down at system power domain level is requested */
	if (css_system_pwr_state(target_state) == ARM_LOCAL_STATE_OFF) {
		/* Issue SCMI command for SYSTEM_SUSPEND on all SCMI channels */
		ret = scmi_sys_pwr_state_set(
				scmi_handles[default_scmi_channel_id],
				SCMI_SYS_PWR_FORCEFUL_REQ, SCMI_SYS_PWR_SUSPEND);
		if (ret != SCMI_E_SUCCESS) {
			ERROR("SCMI system power domain suspend return 0x%x unexpected\n",
					ret);
			panic();
		}
		return;
	}
#if !HW_ASSISTED_COHERENCY
	unsigned int lvl, channel_id, domain_id;
	uint32_t scmi_pwr_state = 0;
	/*
	 * If we reach here, then assert that power down at system power domain
	 * level is running.
	 */
	assert(css_system_pwr_state(target_state) == ARM_LOCAL_STATE_RUN);

	/* For level 0, specify `scmi_power_state_sleep` as the power state */
	SCMI_SET_PWR_STATE_LVL(scmi_pwr_state, ARM_PWR_LVL0,
						scmi_power_state_sleep);

	for (lvl = ARM_PWR_LVL1; lvl <= PLAT_MAX_PWR_LVL; lvl++) {
		if (target_state->pwr_domain_state[lvl] == ARM_LOCAL_STATE_RUN)
			break;

		assert(target_state->pwr_domain_state[lvl] ==
							ARM_LOCAL_STATE_OFF);
		/*
		 * Specify `scmi_power_state_off` as power state for higher
		 * levels.
		 */
		SCMI_SET_PWR_STATE_LVL(scmi_pwr_state, lvl,
						scmi_power_state_off);
	}

	SCMI_SET_PWR_STATE_MAX_PWR_LVL(scmi_pwr_state, lvl - 1);

	css_scp_core_pos_to_scmi_channel(plat_my_core_pos(),
			&domain_id, &channel_id);
	ret = scmi_pwr_state_set(scmi_handles[channel_id],
		domain_id, scmi_pwr_state);

	if (ret != SCMI_E_SUCCESS) {
		ERROR("SCMI set power state command return 0x%x unexpected\n",
				ret);
		panic();
	}
#endif
}

/*
 * Helper function to turn off a CPU power domain and its parent power domains
 * if applicable.
 */
void css_scp_off(const struct psci_power_state *target_state)
{
	unsigned int lvl = 0, channel_id, domain_id;
	int ret;
	uint32_t scmi_pwr_state = 0;

	/* At-least the CPU level should be specified to be OFF */
	assert(target_state->pwr_domain_state[ARM_PWR_LVL0] ==
							ARM_LOCAL_STATE_OFF);

	/* PSCI CPU OFF cannot be used to turn OFF system power domain */
	assert(css_system_pwr_state(target_state) == ARM_LOCAL_STATE_RUN);

	for (; lvl <= PLAT_MAX_PWR_LVL; lvl++) {
		if (target_state->pwr_domain_state[lvl] == ARM_LOCAL_STATE_RUN)
			break;

		assert(target_state->pwr_domain_state[lvl] ==
							ARM_LOCAL_STATE_OFF);
		SCMI_SET_PWR_STATE_LVL(scmi_pwr_state, lvl,
				scmi_power_state_off);
	}

	SCMI_SET_PWR_STATE_MAX_PWR_LVL(scmi_pwr_state, lvl - 1);

	css_scp_core_pos_to_scmi_channel(plat_my_core_pos(),
			&domain_id, &channel_id);
	ret = scmi_pwr_state_set(scmi_handles[channel_id],
		domain_id, scmi_pwr_state);
	if (ret != SCMI_E_QUEUED && ret != SCMI_E_SUCCESS) {
		ERROR("SCMI set power state command return 0x%x unexpected\n",
				ret);
		panic();
	}
}

/*
 * Helper function to turn ON a CPU power domain and its parent power domains
 * if applicable.
 */
void css_scp_on(u_register_t mpidr)
{
	unsigned int lvl = 0, channel_id, core_pos, domain_id;
	int ret;
	uint32_t scmi_pwr_state = 0;

	for (; lvl <= PLAT_MAX_PWR_LVL; lvl++)
		SCMI_SET_PWR_STATE_LVL(scmi_pwr_state, lvl,
				scmi_power_state_on);

	SCMI_SET_PWR_STATE_MAX_PWR_LVL(scmi_pwr_state, lvl - 1);

	core_pos = (unsigned int)plat_core_pos_by_mpidr(mpidr);
	assert(core_pos < PLATFORM_CORE_COUNT);

	css_scp_core_pos_to_scmi_channel(core_pos, &domain_id,
			&channel_id);
	ret = scmi_pwr_state_set(scmi_handles[channel_id],
		domain_id, scmi_pwr_state);
	if (ret != SCMI_E_QUEUED && ret != SCMI_E_SUCCESS) {
		ERROR("SCMI set power state command return 0x%x unexpected\n",
				ret);
		panic();
	}
}

/*
 * Helper function to get the power state of a power domain node as reported
 * by the SCP.
 */
int css_scp_get_power_state(u_register_t mpidr, unsigned int power_level)
{
	int ret;
	uint32_t scmi_pwr_state = 0, lvl_state;
	unsigned int channel_id, cpu_idx, domain_id;

	/* We don't support get power state at the system power domain level */
	if ((power_level > PLAT_MAX_PWR_LVL) ||
			(power_level == CSS_SYSTEM_PWR_DMN_LVL)) {
		WARN("Invalid power level %u specified for SCMI get power state\n",
				power_level);
		return PSCI_E_INVALID_PARAMS;
	}

	cpu_idx = (unsigned int)plat_core_pos_by_mpidr(mpidr);
	assert(cpu_idx < PLATFORM_CORE_COUNT);

	css_scp_core_pos_to_scmi_channel(cpu_idx, &domain_id, &channel_id);
	ret = scmi_pwr_state_get(scmi_handles[channel_id],
		domain_id, &scmi_pwr_state);

	if (ret != SCMI_E_SUCCESS) {
		WARN("SCMI get power state command return 0x%x unexpected\n",
				ret);
		return PSCI_E_INVALID_PARAMS;
	}

	/*
	 * Find the maximum power level described in the get power state
	 * command. If it is less than the requested power level, then assume
	 * the requested power level is ON.
	 */
	if (SCMI_GET_PWR_STATE_MAX_PWR_LVL(scmi_pwr_state) < power_level)
		return HW_ON;

	lvl_state = SCMI_GET_PWR_STATE_LVL(scmi_pwr_state, power_level);
	if (lvl_state == scmi_power_state_on)
		return HW_ON;

	assert((lvl_state == scmi_power_state_off) ||
				(lvl_state == scmi_power_state_sleep));
	return HW_OFF;
}

/*
 * Callback function to raise a SGI designated to trigger the CPU power down
 * sequence on all the online secondary cores.
 */
static void css_raise_pwr_down_interrupt(u_register_t mpidr)
{
#if CSS_SYSTEM_GRACEFUL_RESET
	plat_ic_raise_el3_sgi(CSS_CPU_PWR_DOWN_REQ_INTR, mpidr);
#endif
}

void css_scp_system_off(int state)
{
	int ret;

	/*
	 * Before issuing the system power down command, set the trusted mailbox
	 * to 0. This will ensure that in the case of a warm/cold reset, the
	 * primary CPU executes from the cold boot sequence.
	 */
	mmio_write_64(PLAT_ARM_TRUSTED_MAILBOX_BASE, 0U);

	unsigned int core_pos = plat_my_core_pos();
	/*
	 * Send powerdown request to online secondary core(s)
	 */
	ret = psci_stop_other_cores(core_pos, 0, css_raise_pwr_down_interrupt);
	if (ret != PSCI_E_SUCCESS) {
		ERROR("Failed to powerdown secondary core(s)\n");
	}

	/*
	 * Disable GIC CPU interface to prevent pending interrupt from waking
	 * up the AP from WFI.
	 */
	gic_cpuif_disable(core_pos);
	gic_pcpu_off(core_pos);

	/*
	 * Issue SCMI command. First issue a graceful
	 * request and if that fails force the request.
	 */
	ret = scmi_sys_pwr_state_set(scmi_handles[default_scmi_channel_id],
			SCMI_SYS_PWR_FORCEFUL_REQ,
			state);

	if (ret != SCMI_E_SUCCESS) {
		ERROR("SCMI system power state set 0x%x returns unexpected 0x%x\n",
			state, ret);
		panic();
	}

	/* Powerdown of primary core */
	psci_pwrdown_cpu_start(PLAT_MAX_PWR_LVL);
}

/*
 * Helper function to shutdown the system via SCMI.
 */
void css_scp_sys_shutdown(void)
{
	css_scp_system_off(SCMI_SYS_PWR_SHUTDOWN);
}

/*
 * Helper function to reset the system via SCMI.
 */
void css_scp_sys_reboot(void)
{
	css_scp_system_off(SCMI_SYS_PWR_COLD_RESET);
}

static int scmi_ap_core_init(scmi_channel_t *ch)
{
#if PROGRAMMABLE_RESET_ADDRESS
	uint32_t version;
	int ret;

	ret = scmi_proto_version(ch, SCMI_AP_CORE_PROTO_ID, &version);
	if (ret != SCMI_E_SUCCESS) {
		WARN("SCMI AP core protocol version message failed\n");
		return -1;
	}

	if (!is_scmi_version_compatible(SCMI_AP_CORE_PROTO_VER, version)) {
		WARN("SCMI AP core protocol version 0x%x incompatible with driver version 0x%x\n",
			version, SCMI_AP_CORE_PROTO_VER);
		return -1;
	}
	INFO("SCMI AP core protocol version 0x%x detected\n", version);
#endif
	return 0;
}

void __init plat_arm_pwrc_setup(void)
{
	unsigned int composite_id, idx;

	for (idx = 0; idx < PLAT_ARM_SCMI_CHANNEL_COUNT; idx++) {
		INFO("Initializing SCMI driver on channel %d\n", idx);

		scmi_channels[idx].info = plat_css_get_scmi_info(idx);
		scmi_channels[idx].lock = ARM_SCMI_LOCK_GET_INSTANCE;
		scmi_handles[idx] = scmi_init(&scmi_channels[idx]);

		if (scmi_handles[idx] == NULL) {
			ERROR("SCMI Initialization failed on channel %d\n", idx);
			panic();
		}

		if (scmi_ap_core_init(&scmi_channels[idx]) < 0) {
			ERROR("SCMI AP core protocol initialization failed\n");
			panic();
		}
	}

	composite_id = plat_css_core_pos_to_scmi_dmn_id_map[plat_my_core_pos()];
	default_scmi_channel_id = GET_SCMI_CHANNEL_ID(composite_id);
}

/******************************************************************************
 * This function overrides the default definition for ARM platforms. Initialize
 * the SCMI driver, query capability via SCMI and modify the PSCI capability
 * based on that.
 *****************************************************************************/
const plat_psci_ops_t *css_scmi_override_pm_ops(plat_psci_ops_t *ops)
{
	uint32_t msg_attr;
	int ret;
	void *scmi_handle = scmi_handles[default_scmi_channel_id];

	assert(scmi_handle);

	/* Check that power domain POWER_STATE_SET message is supported */
	ret = scmi_proto_msg_attr(scmi_handle, SCMI_PWR_DMN_PROTO_ID,
				SCMI_PWR_STATE_SET_MSG, &msg_attr);
	if (ret != SCMI_E_SUCCESS) {
		ERROR("Set power state command is not supported by SCMI\n");
		panic();
	}

	/*
	 * Don't support PSCI NODE_HW_STATE call if SCMI doesn't support
	 * POWER_STATE_GET message.
	 */
	ret = scmi_proto_msg_attr(scmi_handle, SCMI_PWR_DMN_PROTO_ID,
				SCMI_PWR_STATE_GET_MSG, &msg_attr);
	if (ret != SCMI_E_SUCCESS)
		ops->get_node_hw_state = NULL;

	/* Check if the SCMI SYSTEM_POWER_STATE_SET message is supported */
	ret = scmi_proto_msg_attr(scmi_handle, SCMI_SYS_PWR_PROTO_ID,
				SCMI_SYS_PWR_STATE_SET_MSG, &msg_attr);
	if (ret != SCMI_E_SUCCESS) {
		/* System power management operations are not supported */
		ops->system_off = NULL;
		ops->system_reset = NULL;
		ops->get_sys_suspend_power_state = NULL;
	} else {
		if (!(msg_attr & SCMI_SYS_PWR_SUSPEND_SUPPORTED)) {
			/*
			 * System power management protocol is available, but
			 * it does not support SYSTEM SUSPEND.
			 */
			ops->get_sys_suspend_power_state = NULL;
		}
		if (!(msg_attr & SCMI_SYS_PWR_WARM_RESET_SUPPORTED)) {
			/*
			 * WARM reset is not available.
			 */
			ops->system_reset2 = NULL;
		}
	}

	return ops;
}

int css_system_reset2(int is_vendor, int reset_type, u_register_t cookie)
{
	if (is_vendor || (reset_type != PSCI_RESET2_SYSTEM_WARM_RESET))
		return PSCI_E_INVALID_PARAMS;

	css_scp_system_off(SCMI_SYS_PWR_WARM_RESET);
	/* return SUCCESS to finish the powerdown */
	return PSCI_E_SUCCESS;
}

#if PROGRAMMABLE_RESET_ADDRESS
void plat_arm_program_trusted_mailbox(uintptr_t address)
{
	int ret, i;

	for (i = 0; i < PLAT_ARM_SCMI_CHANNEL_COUNT; i++) {
		assert(scmi_handles[i]);

		ret = scmi_ap_core_set_reset_addr(scmi_handles[i], address,
				SCMI_AP_CORE_LOCK_ATTR);
		if (ret != SCMI_E_SUCCESS) {
			ERROR("CSS: Failed to program reset address: %d\n", ret);
			panic();
		}
	}
}
#endif
