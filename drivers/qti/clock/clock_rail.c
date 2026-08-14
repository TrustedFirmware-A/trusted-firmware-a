/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Rail voltage voting for the QTI clock driver (RPMh/BCM back-end). See
 * clock_rail.h for what these votes are for and when the stubs are built.
 */

#include <stdbool.h>
#include <stdint.h>

#include <common/debug.h>
#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/clock/clock_cfg.h>
#include <drivers/qti/clock/clock_rail.h>
#include <drivers/qti/cmd_db/cmd_db.h>
#include <drivers/qti/pwr_utils/pwr_utils.h>
#include <drivers/qti/rpmh/rpmh_client.h>

/* Value to enable the path to XO. */
#define CLOCK_XO_ENABLE_VAL	3U

static struct rpmh_client *clock_rpmh;

/*
 * cx/mx rail addresses, resolved once in rail_vote_init(). On targets where
 * mx is merged into cx it has no cmd-DB entry, so clock_mx_addr stays 0 and
 * the mx vote/clear is skipped — cx alone then covers the merged rail.
 */
static uint32_t clock_cx_addr;
static uint32_t clock_mx_addr;

void rail_vote_init(void)
{
	uint32_t xo_addr;
	uint32_t req_id;
	int cx_hlvl;

	clock_rpmh = rpmh_create_handle(RSC_DRV_TZ, "clock");
	xo_addr = cmd_db_query_addr("xo.lvl");
	clock_cx_addr = cmd_db_query_addr("cx.lvl");
	clock_mx_addr = cmd_db_query_addr("mx.lvl");

	if ((clock_rpmh == NULL) || (xo_addr == 0U) || (clock_cx_addr == 0U)) {
		ERROR("Clock: rail init: missing RPMh/cmd-DB resource\n");
		panic();
	}

	/* SP never needs a request in its sleep set, so a static active vote suffices. */
	req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
				    xo_addr, CLOCK_XO_ENABLE_VAL);
	rpmh_barrier_single(clock_rpmh, req_id);

	/*
	 * Hold cx (and mx, when not merged into cx) up across clock init, the
	 * same static NOM hold applied to mmcx/gfx for xPU/secure programming.
	 * Released in rail_vote_deinit() at init-done.
	 */
	cx_hlvl = pwr_utils_hlvl_named_resource("cx.lvl",
						RAIL_VOLTAGE_LEVEL_NOM, NULL);
	if (cx_hlvl == -1) {
		ERROR("Clock: rail init: cx.lvl level lookup failed\n");
		panic();
	}
	req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
				    clock_cx_addr, (uint32_t)cx_hlvl);
	rpmh_barrier_single(clock_rpmh, req_id);

	if (clock_mx_addr != 0U) {
		int mx_hlvl = pwr_utils_hlvl_named_resource(
			"mx.lvl", RAIL_VOLTAGE_LEVEL_NOM, NULL);

		if (mx_hlvl == -1) {
			ERROR("Clock: rail init: mx.lvl level lookup failed\n");
			clock_mx_addr = 0U;
		} else {
			req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
						    clock_mx_addr, (uint32_t)mx_hlvl);
			rpmh_barrier_single(clock_rpmh, req_id);
		}
	}
}

void rail_vote_deinit(void)
{
	uint32_t req_id;

	/* Release the cx/mx holds taken in rail_vote_init(). */
	if (clock_cx_addr != 0U) {
		req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
					    clock_cx_addr, 0U);
		rpmh_barrier_single(clock_rpmh, req_id);
	}

	if (clock_mx_addr != 0U) {
		req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
					    clock_mx_addr, 0U);
		rpmh_barrier_single(clock_rpmh, req_id);
	}
}

void rail_vote_apply(struct clock_group *group)
{
	struct clock_voltage_request *vrequest;
	uint32_t req_id;

	if (group->volt_reqs == NULL) {
		return;
	}

	group->volt_req_count = 0U;
	for (vrequest = group->volt_reqs; vrequest->rail != NULL;
	     vrequest++) {
		group->volt_req_count++;

		if (chipinfo_is_part_disabled(vrequest->part,
					      vrequest->part_idx)) {
			continue;
		}

		if (vrequest->rail_addr == 0U) {
			vrequest->rail_addr = cmd_db_query_addr(vrequest->rail);
			vrequest->hlvl = pwr_utils_hlvl_named_resource(
				vrequest->rail, vrequest->vlvl, NULL);
			if ((vrequest->rail_addr == 0U) || (vrequest->hlvl == -1)) {
				ERROR("Clock: rail vote: %s lookup failed\n",
				      vrequest->rail);
				vrequest->rail_addr = 0U;
				continue;
			}
		}

		req_id = rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
					    vrequest->rail_addr,
					    (uint32_t)vrequest->hlvl);
		rpmh_barrier_single(clock_rpmh, req_id);
	}
}

void rail_vote_clear(struct clock_group *group)
{
	struct clock_voltage_request *vrequest;
	uint32_t i;

	if (group->volt_reqs == NULL) {
		return;
	}

	for (i = group->volt_req_count; i > 0U; i--) {
		vrequest = &group->volt_reqs[i - 1U];
		if (vrequest->rail_addr != 0U) {
			rpmh_issue_command(clock_rpmh, RPMH_SET_ACTIVE, true,
					   vrequest->rail_addr, 0U);
		}
	}
}
