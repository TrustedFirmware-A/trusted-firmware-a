/*
 * Copyright (c) 2015-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <errno.h>

#include <arch.h>
#include <arch_helpers.h>
#include <common/debug.h>
#include <denver.h>
#include <lib/mmio.h>

#include <mce_private.h>
#include <t18x_ari.h>
#include <tegra_private.h>

int32_t nvg_enter_cstate(uint32_t ari_base, uint32_t state, uint32_t wake_time)
{
	int32_t ret = 0;
	uint64_t val = 0ULL;

	(void)ari_base;

	/* check for allowed power state */
	if ((state != TEGRA_ARI_CORE_C0) && (state != TEGRA_ARI_CORE_C1) &&
	    (state != TEGRA_ARI_CORE_C6) && (state != TEGRA_ARI_CORE_C7)) {
		ERROR("%s: unknown cstate (%d)\n", __func__, state);
		ret = EINVAL;
	} else {
		/* time (TSC ticks) until the core is expected to get a wake event */
		nvg_set_request_data((uint64_t)TEGRA_NVG_CHANNEL_WAKE_TIME, wake_time);

		/* set the core cstate */
		val = read_actlr_el1() & ~ACTLR_EL1_PMSTATE_MASK;
		write_actlr_el1(val | (uint64_t)state);
	}

	return ret;
}

/*
 * This request allows updating of CLUSTER_CSTATE, CCPLEX_CSTATE and
 * SYSTEM_CSTATE values.
 */
int32_t nvg_update_cstate_info(uint32_t ari_base, uint32_t cluster, uint32_t ccplex,
		uint32_t system, uint8_t sys_state_force, uint32_t wake_mask,
		uint8_t update_wake_mask)
{
	uint64_t val = 0ULL;

	(void)ari_base;

	/* update CLUSTER_CSTATE? */
	if (cluster != 0U) {
		val |= ((uint64_t)cluster & CLUSTER_CSTATE_MASK) |
			CLUSTER_CSTATE_UPDATE_BIT;
	}

	/* update CCPLEX_CSTATE? */
	if (ccplex != 0U) {
		val |= (((uint64_t)ccplex & CCPLEX_CSTATE_MASK) << CCPLEX_CSTATE_SHIFT) |
			CCPLEX_CSTATE_UPDATE_BIT;
	}

	/* update SYSTEM_CSTATE? */
	if (system != 0U) {
		val |= (((uint64_t)system & SYSTEM_CSTATE_MASK) << SYSTEM_CSTATE_SHIFT) |
		       (((uint64_t)sys_state_force << SYSTEM_CSTATE_FORCE_UPDATE_SHIFT) |
			SYSTEM_CSTATE_UPDATE_BIT);
	}

	/* update wake mask value? */
	if (update_wake_mask != 0U) {
		val |= CSTATE_WAKE_MASK_UPDATE_BIT;
	}

	/* set the wake mask */
	val &= CSTATE_WAKE_MASK_CLEAR;
	val |= ((uint64_t)wake_mask << CSTATE_WAKE_MASK_SHIFT);

	/* set the updated cstate info */
	nvg_set_request_data((uint64_t)TEGRA_NVG_CHANNEL_CSTATE_INFO, val);

	return 0;
}

int32_t nvg_update_crossover_time(uint32_t ari_base, uint32_t type, uint32_t time)
{
	int32_t ret = 0;

	(void)ari_base;

	/* sanity check crossover type */
	if (type > TEGRA_ARI_CROSSOVER_CCP3_SC1) {
		ret = EINVAL;
	} else {
		/*
		 * The crossover threshold limit types start from
		 * TEGRA_CROSSOVER_TYPE_C1_C6 to TEGRA_CROSSOVER_TYPE_CCP3_SC7.
		 * The command indices for updating the threshold be generated
		 * by adding the type to the NVG_SET_THRESHOLD_CROSSOVER_C1_C6
		 * command index.
		 */
		nvg_set_request_data((TEGRA_NVG_CHANNEL_CROSSOVER_C1_C6 +
			(uint64_t)type), (uint64_t)time);
	}

	return ret;
}

uint64_t nvg_read_cstate_stats(uint32_t ari_base, uint32_t state)
{
	uint64_t ret;

	(void)ari_base;

	/* sanity check state */
	if (state == 0U) {
		ret = EINVAL;
	} else {
		/*
		 * The cstate types start from NVG_READ_CSTATE_STATS_SC7_ENTRIES
		 * to NVG_GET_LAST_CSTATE_ENTRY_A57_3. The command indices for
		 * reading the threshold can be generated by adding the type to
		 * the NVG_CLEAR_CSTATE_STATS command index.
		 */
		nvg_set_request((TEGRA_NVG_CHANNEL_CSTATE_STATS_CLEAR +
				(uint64_t)state));
		ret = nvg_get_result();
	}

	return ret;
}

int32_t nvg_write_cstate_stats(uint32_t ari_base, uint32_t state, uint32_t stats)
{
	uint64_t val;

	(void)ari_base;

	/*
	 * The only difference between a CSTATE_STATS_WRITE and
	 * CSTATE_STATS_READ is the usage of the 63:32 in the request.
	 * 63:32 are set to '0' for a read, while a write contains the
	 * actual stats value to be written.
	 */
	val = ((uint64_t)stats << MCE_CSTATE_STATS_TYPE_SHIFT) | state;

	/*
	 * The cstate types start from NVG_READ_CSTATE_STATS_SC7_ENTRIES
	 * to NVG_GET_LAST_CSTATE_ENTRY_A57_3. The command indices for
	 * reading the threshold can be generated by adding the type to
	 * the NVG_CLEAR_CSTATE_STATS command index.
	 */
	nvg_set_request_data((TEGRA_NVG_CHANNEL_CSTATE_STATS_CLEAR +
			     (uint64_t)state), val);

	return 0;
}

int32_t nvg_is_ccx_allowed(uint32_t ari_base, uint32_t state, uint32_t wake_time)
{
	(void)ari_base;
	(void)state;
	(void)wake_time;

	/* This does not apply to the Denver cluster */
	return 0;
}

int32_t nvg_is_sc7_allowed(uint32_t ari_base, uint32_t state, uint32_t wake_time)
{
	uint64_t val;
	int32_t ret;

	(void)ari_base;

	/* check for allowed power state */
	if ((state != TEGRA_ARI_CORE_C0) && (state != TEGRA_ARI_CORE_C1) &&
	    (state != TEGRA_ARI_CORE_C6) && (state != TEGRA_ARI_CORE_C7)) {
		ERROR("%s: unknown cstate (%d)\n", __func__, state);
		ret = EINVAL;
	} else {
		/*
		 * Request format -
		 * 63:32 = wake time
		 * 31:0 = C-state for this core
		 */
		val = ((uint64_t)wake_time << MCE_SC7_WAKE_TIME_SHIFT) |
				((uint64_t)state & MCE_SC7_ALLOWED_MASK);

		/* issue command to check if SC7 is allowed */
		nvg_set_request_data((uint64_t)TEGRA_NVG_CHANNEL_IS_SC7_ALLOWED, val);

		/* 1 = SC7 allowed, 0 = SC7 not allowed */
		ret = (nvg_get_result() != 0ULL) ? 1 : 0;
	}

	return ret;
}

int32_t nvg_online_core(uint32_t ari_base, uint32_t core)
{
	uint64_t cpu = read_mpidr() & MPIDR_CPU_MASK;
	uint64_t impl = (read_midr() >> MIDR_IMPL_SHIFT) & MIDR_IMPL_MASK;
	int32_t ret = 0;

	(void)ari_base;

	/* sanity check code id */
	if ((core >= MCE_CORE_ID_MAX) || (cpu == core)) {
		ERROR("%s: unsupported core id (%d)\n", __func__, core);
		ret = EINVAL;
	} else {
		/*
		 * The Denver cluster has 2 CPUs only - 0, 1.
		 */
		if ((impl == DENVER_IMPL) && ((core == 2U) || (core == 3U))) {
			ERROR("%s: unknown core id (%d)\n", __func__, core);
			ret = EINVAL;
		} else {
			/* get a core online */
			nvg_set_request_data((uint64_t)TEGRA_NVG_CHANNEL_ONLINE_CORE,
				((uint64_t)core & MCE_CORE_ID_MASK));
		}
	}

	return ret;
}

int32_t nvg_cc3_ctrl(uint32_t ari_base, uint32_t freq, uint32_t volt, uint8_t enable)
{
	uint32_t val;

	(void)ari_base;

	/*
	 * If the enable bit is cleared, Auto-CC3 will be disabled by setting
	 * the SW visible voltage/frequency request registers for all non
	 * floorswept cores valid independent of StandbyWFI and disabling
	 * the IDLE voltage/frequency request register. If set, Auto-CC3
	 * will be enabled by setting the ARM SW visible voltage/frequency
	 * request registers for all non floorswept cores to be enabled by
	 * StandbyWFI or the equivalent signal, and always keeping the IDLE
	 * voltage/frequency request register enabled.
	 */
	val = (((freq & MCE_AUTO_CC3_FREQ_MASK) << MCE_AUTO_CC3_FREQ_SHIFT) |
		((volt & MCE_AUTO_CC3_VTG_MASK) << MCE_AUTO_CC3_VTG_SHIFT) |
		((enable != 0U) ? MCE_AUTO_CC3_ENABLE_BIT : 0U));

	nvg_set_request_data((uint64_t)TEGRA_NVG_CHANNEL_CC3_CTRL, (uint64_t)val);

	return 0;
}
