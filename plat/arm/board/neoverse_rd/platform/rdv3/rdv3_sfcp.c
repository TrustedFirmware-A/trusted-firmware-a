/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include <assert.h>

#include "mhu_v3_x.h"
#include <sfcp_platform.h>

#include <platform_def.h>

/* These must be kept up to data with the routing table
 * definition in RSE as the node IDs are global
 */
#define AP_MONITOR_NODE_ID (1)

static struct mhu_v3_x_dev_t mhu_rse_ap_snd_dev = { AP_RSE_ROOT_MHU_V3_PBX,
						    MHU_V3_X_PBX_FRAME };
static struct mhu_v3_x_dev_t mhu_rse_ap_recv_dev = { AP_RSE_ROOT_MHU_V3_MBX,
						     MHU_V3_X_MBX_FRAME };

static struct sfcp_platform_device_t sender_devices[] = {
	/* Link ID 0 is reserved */
	[0] = { 0 },
	[1] = { &mhu_rse_ap_snd_dev, SFCP_PLATFORM_DEVICE_TYPE_MHUV3 },
};

struct sfcp_platform_device_t
sfcp_platform_get_send_device(sfcp_link_id_t link_id)
{
	assert(link_id < ARRAY_SIZE(sender_devices));

	return sender_devices[link_id];
}

static struct sfcp_platform_device_t receiver_devices[] = {
	/* Link ID 0 is reserved */
	[0] = { 0 },
	[1] = { &mhu_rse_ap_recv_dev, SFCP_PLATFORM_DEVICE_TYPE_MHUV3 },
};

struct sfcp_platform_device_t
sfcp_platform_get_receive_device(sfcp_link_id_t link_id)
{
	assert(link_id < ARRAY_SIZE(receiver_devices));

	return receiver_devices[link_id];
}

sfcp_link_id_t
sfcp_platform_get_receive_link_id(struct sfcp_platform_device_t device)
{
	for (uint8_t i = 1; i < ARRAY_SIZE(receiver_devices); i++) {
		if ((receiver_devices[i].type == device.type) &&
		    (receiver_devices[i].device == device.device)) {
			return i;
		}
	}

	return 0;
}

sfcp_node_id_t sfcp_platform_get_my_node_id(void)
{
	return AP_MONITOR_NODE_ID;
}

/* Currently only link defined is to RSE. All other links are
 * defined as 0 (invalid link ID) as SFCP is currently only
 * used for communication with the RSE.
 *
 * TODO: Once SFCP has been adopted by other components
 * update this table to add link IDs for communication
 * with other nodes
 */
static const uint8_t ap_monitor_routing_tables[] = {
	[0] = 1,
	[1] = 0,
	[2] = 0,
};

void sfcp_platform_get_routing_tables(const uint8_t **routing_tables,
				      size_t *routing_tables_size)
{
	assert(routing_tables != NULL);
	assert(routing_tables_size != NULL);

	*routing_tables = ap_monitor_routing_tables;
	*routing_tables_size = ARRAY_SIZE(ap_monitor_routing_tables);
}
