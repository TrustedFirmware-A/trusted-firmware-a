/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <stdint.h>

#include <cpu_config.h>
#include <cpucp.h>
#include <cpucp_hwio.h>
#include <drivers/arm/css/scmi.h>
#include <lib/mmio.h>
#include <lib/spinlock.h>
#include <plat/common/platform.h>

#include <scmi_private.h>

/*
 * Lean CPUCP host driver for TF-A. Only the clock-domain enable path that is
 * required during secondary-core cold boot is implemented. CPUCP speaks the
 * SCMI protocol over a shared-memory mailbox, so the generic TF-A SCMI driver
 * (drivers/arm/css/scmi) is reused for the transport and message handling; this
 * file only wires up the CPUCP mailbox/doorbell and issues the SCMI Clock
 * Management "config set" command that is not part of the generic driver.
 */

/* SCMI Clock Management protocol (SCMI spec, Section 4.6). */
#define SCMI_CLOCK_PROTO_ID			0x14
#define SCMI_CLOCK_CONFIG_SET_MSG		0x7

/* Message length: header word (4) + clock_id (4) + attributes (4). */
#define SCMI_CLOCK_CONFIG_SET_MSG_LEN		12

/* CLOCK_CONFIG_SET attributes: enable the clock. */
#define SCMI_CLOCK_CONFIG_SET_ENABLE		0x1

/* CPUCP doorbell: APSS -> CPUCP IPC interrupt trigger bit. */
#define CPUCP_DB_MODIFY_MASK		\
	(1U << APSS_SHARED_TZ_IPC_INTERRUPT_OSM_IPC_SHFT)
#define CPUCP_DB_PRESERVE_MASK		(~CPUCP_DB_MODIFY_MASK)

/* CPUCP SCMI channel poll interval and command timeout, in micro-seconds. */
#define CPUCP_SCMI_POLL_DELAY_US		1U
#define CPUCP_SCMI_TIMEOUT_US			(500U * 1000U)

static scmi_lock_t cpucp_scmi_lock;
static spinlock_t cpucp_clkdom_init_spinlock;
static void *cpucp_scmi_handle;

/* Ring the CPUCP doorbell to hand the SCMI channel over for processing. */
static void cpucp_ring_doorbell(struct scmi_channel_plat_info *plat_info)
{
	mmio_write_32(plat_info->db_reg_addr, plat_info->db_modify_mask);
}

static scmi_channel_plat_info_t cpucp_scmi_plat_info = {
	.scmi_mbx_mem = CPUCP_IPC_SEC_BUF_BASE,
	.db_reg_addr = APSS_SHARED_TZ_IPC_INTERRUPT_ADDR,
	.db_preserve_mask = CPUCP_DB_PRESERVE_MASK,
	.db_modify_mask = CPUCP_DB_MODIFY_MASK,
	.ring_doorbell = &cpucp_ring_doorbell,
	.delay = CPUCP_SCMI_POLL_DELAY_US,
	.timeout = CPUCP_SCMI_TIMEOUT_US,
};

static scmi_channel_t cpucp_scmi_channel = {
	.info = &cpucp_scmi_plat_info,
	.lock = &cpucp_scmi_lock,
};

/*
 * cpucp_scmi_clock_enable - issue an SCMI Clock Management CLOCK_CONFIG_SET
 * (enable) command for @clock_id over the CPUCP channel, returning the SCMI
 * status code.
 */
static int cpucp_scmi_clock_enable(void *p, uint32_t clock_id)
{
	mailbox_mem_t *mbx_mem;
	unsigned int token = 0U;
	int ret;
	scmi_channel_t *ch = (scmi_channel_t *)p;

	validate_scmi_channel(ch);

	scmi_get_channel(ch);

	mbx_mem = (mailbox_mem_t *)(ch->info->scmi_mbx_mem);
	mbx_mem->msg_header = SCMI_MSG_CREATE(SCMI_CLOCK_PROTO_ID,
					     SCMI_CLOCK_CONFIG_SET_MSG, token);
	mbx_mem->len = SCMI_CLOCK_CONFIG_SET_MSG_LEN;
	mbx_mem->flags = SCMI_FLAG_RESP_POLL;
	SCMI_PAYLOAD_ARG2(mbx_mem->payload, clock_id,
			  SCMI_CLOCK_CONFIG_SET_ENABLE);

	scmi_send_sync_command(ch);

	/* Get the SCMI return status. */
	SCMI_PAYLOAD_RET_VAL1(mbx_mem->payload, ret);

	scmi_put_channel(ch);

	return ret;
}

/*
 * cpucp_clkdom_init - request CPUCP to enable the clock domain owning the
 * calling core during cold boot.
 *
 * If the calling core is the first core of its clock domain to cold boot, issue
 * an SCMI Clock Management "config set" command to CPUCP to enable the clock
 * domain.
 */
void cpucp_clkdom_init(void)
{
	unsigned int core_pos = plat_my_core_pos();
	uint32_t linear_id;
	int i;

	/* CPU masks are 32-bit, so the core index must fit a 32-bit shift. */
	assert(core_pos < 32U);
	linear_id = 1U << core_pos;

	spin_lock(&cpucp_clkdom_init_spinlock);

	/* Bring up the SCMI channel on first use. */
	if (cpucp_scmi_handle == NULL) {
		cpucp_scmi_handle = scmi_init(&cpucp_scmi_channel, NULL);
		assert(cpucp_scmi_handle != NULL);
	}

	for (i = 0; i < CD_MAX; i++) {
		if ((clkdom_init_status[i] != 0U) ||
		    ((linear_id & clkdom_cpumasks[i].cpumask) == 0U)) {
			continue;
		}

		if (cpucp_scmi_clock_enable(cpucp_scmi_handle,
					    clkdom_cpumasks[i].clkdom) ==
		    SCMI_E_SUCCESS) {
			clkdom_init_status[i] = 1U;
		}

		break;
	}

	spin_unlock(&cpucp_clkdom_init_spinlock);
}
