/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * QTI ICB (Interconnect Bus) driver - Lemans target data.
 */

#include "icbuarbi.h"

/*
 * HW NODE DECLARATIONS
 */
/* ACV */
static struct icb_hw_request bcm_acv_requests[1];
static struct icb_hw_node bcm_acv = {
	NULL, /**< node linkage */
	"ACV", /**< name */
	ICB_HW_NODE_KIND_VECTOR, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_acv_requests}, /**< request_list */
	0x0 /* output state */
};

/* MC0 */
static struct icb_hw_request bcm_mc0_requests[1];
static struct icb_hw_node bcm_mc0 = {
	NULL, /**< node linkage */
	"MC0", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_mc0_requests}, /**< request_list */
	0 /* vector output state */
};

/* MM0 */
static struct icb_hw_request bcm_mm0_requests[2];
static struct icb_hw_node bcm_mm0 = {
	NULL, /**< node linkage */
	"MM0", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 2, bcm_mm0_requests}, /**< request_list */
	0 /* vector output state */
};

/* NSA0 */
static struct icb_hw_request bcm_nsa0_requests[1];
static struct icb_hw_node bcm_nsa0 = {
	NULL, /**< node linkage */
	"NSA0", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_nsa0_requests}, /**< request_list */
	0 /* vector output state */
};

/* NSA1 */
static struct icb_hw_request bcm_nsa1_requests[1];
static struct icb_hw_node bcm_nsa1 = {
	NULL, /**< node linkage */
	"NSA1", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_nsa1_requests}, /**< request_list */
	0 /* vector output state */
};

/* NSB0 */
static struct icb_hw_request bcm_nsb0_requests[1];
static struct icb_hw_node bcm_nsb0 = {
	NULL, /**< node linkage */
	"NSB0", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_nsb0_requests}, /**< request_list */
	0 /* vector output state */
};

/* NSB1 */
static struct icb_hw_request bcm_nsb1_requests[1];
static struct icb_hw_node bcm_nsb1 = {
	NULL, /**< node linkage */
	"NSB1", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_nsb1_requests}, /**< request_list */
	0 /* vector output state */
};

/* SH0 */
static struct icb_hw_request bcm_sh0_requests[1];
static struct icb_hw_node bcm_sh0 = {
	NULL, /**< node linkage */
	"SH0", /**< name */
	ICB_HW_NODE_KIND_BANDWIDTH, /**< type */
	0, /**< hw_id */
	0, /**< width */
	0, /**< bw_unit */
	0, /**< clk_id */
	false, /**< is_dirty */
	0, /**< vote */
	{0, 0}, /**< state */
	{0, 1, bcm_sh0_requests}, /**< request_list */
	0 /* vector output state */
};

/*
 * MASTER DECLARATIONS
 */
/* LLCC_MC */
static struct icb_master master_llcc_mc = {
	ICBID_MASTER_LLCC,
	4, /**< width */
	8, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	0, /**< number of hw_nodes */
	NULL, /**< hw nodes */
};

/* QNM_CMPNOC0 */
static struct icb_master master_qnm_cmpnoc0 = {
	ICBID_MASTER_COMPUTE_NOC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	0, /**< number of hw_nodes */
	NULL, /**< hw nodes */
};

/* QNM_CMPNOC1 */
static struct icb_master master_qnm_cmpnoc1 = {
	ICBID_MASTER_COMPUTE_NOC_1,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	0, /**< number of hw_nodes */
	NULL, /**< hw nodes */
};

/* QNM_MDP0_0 */
static struct icb_hw_node *master_qnm_mdp0_0_hw_nodes[] = {
	&bcm_mm0,
};

static struct icb_master master_qnm_mdp0_0 = {
	ICBID_MASTER_MDP0,
	32, /**< width */
	1, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	master_qnm_mdp0_0_hw_nodes, /**< hw nodes */
};

/* QNM_MNOC_HF */
static struct icb_master master_qnm_mnoc_hf = {
	ICBID_MASTER_MNOC_HF_MEM_NOC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	0, /**< number of hw_nodes */
	NULL, /**< hw nodes */
};

/* QXM_NSP */
static struct icb_hw_node *master_qxm_nsp_hw_nodes[] = {
	&bcm_nsa1,
};

static struct icb_master master_qxm_nsp = {
	ICBID_MASTER_CDSP_PROC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	master_qxm_nsp_hw_nodes, /**< hw nodes */
};

/* QXM_NSPB */
static struct icb_hw_node *master_qxm_nspb_hw_nodes[] = {
	&bcm_nsb1,
};

static struct icb_master master_qxm_nspb = {
	ICBID_MASTER_CDSP_PROC_B,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	master_qxm_nspb_hw_nodes, /**< hw nodes */
};

/*
 * SLAVE DECLARATIONS
 */
/* EBI */
static struct icb_hw_node *slave_ebi_hw_nodes[] = {
	&bcm_mc0,
	&bcm_acv,
};

static struct icb_slave slave_ebi = {
	ICBID_SLAVE_EBI1,
	4, /**< width */
	8, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	2, /**< number of hw_nodes */
	slave_ebi_hw_nodes, /**< hw nodes */
};

/* QNS_LLCC */
static struct icb_hw_node *slave_qns_llcc_hw_nodes[] = {
	&bcm_sh0,
};

static struct icb_slave slave_qns_llcc = {
	ICBID_SLAVE_LLCC,
	16, /**< width */
	6, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	slave_qns_llcc_hw_nodes, /**< hw nodes */
};

/* QNS_MEM_NOC_HF */
static struct icb_hw_node *slave_qns_mem_noc_hf_hw_nodes[] = {
	&bcm_mm0,
};

static struct icb_slave slave_qns_mem_noc_hf = {
	ICBID_SLAVE_MNOC_HF_MEM_NOC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	slave_qns_mem_noc_hf_hw_nodes, /**< hw nodes */
};

/* QNS_NSP_GEMNOC */
static struct icb_hw_node *slave_qns_nsp_gemnoc_hw_nodes[] = {
	&bcm_nsa0,
};

static struct icb_slave slave_qns_nsp_gemnoc = {
	ICBID_SLAVE_CDSP_MEM_NOC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	slave_qns_nsp_gemnoc_hw_nodes, /**< hw nodes */
};

/* QNS_NSPB_GEMNOC */
static struct icb_hw_node *slave_qns_nspb_gemnoc_hw_nodes[] = {
	&bcm_nsb0,
};

static struct icb_slave slave_qns_nspb_gemnoc = {
	ICBID_SLAVE_CDSPB_MEM_NOC,
	32, /**< width */
	2, /**< num ports */
	{0, 0}, /**< state */
	{0, 0, NULL}, /**< request_list */
	1, /**< number of hw_nodes */
	slave_qns_nspb_gemnoc_hw_nodes, /**< hw nodes */
};

/*
 * TOPOLOGY ROUTE DECLARATIONS
 */
static struct icb_pair route_qnm_mdp0_0_ebi_hops[3] = {
	{
		&master_qnm_mdp0_0,
		&slave_qns_mem_noc_hf
	},
	{
		&master_qnm_mnoc_hf,
		&slave_qns_llcc
	},
	{
		&master_llcc_mc,
		&slave_ebi
	},
};

static struct icb_route route_qnm_mdp0_0_ebi = {
	ICBID_MASTER_MDP0,
	ICBID_SLAVE_EBI1,
	3,
	route_qnm_mdp0_0_ebi_hops
};

static struct icb_pair route_qxm_nspb_ebi_hops[3] = {
	{
		&master_qxm_nspb,
		&slave_qns_nspb_gemnoc
	},
	{
		&master_qnm_cmpnoc1,
		&slave_qns_llcc
	},
	{
		&master_llcc_mc,
		&slave_ebi
	},
};

static struct icb_route route_qxm_nspb_ebi = {
	ICBID_MASTER_CDSP_PROC_B,
	ICBID_SLAVE_EBI1,
	3,
	route_qxm_nspb_ebi_hops
};

static struct icb_pair route_qxm_nsp_ebi_hops[3] = {
	{
		&master_qxm_nsp,
		&slave_qns_nsp_gemnoc
	},
	{
		&master_qnm_cmpnoc0,
		&slave_qns_llcc
	},
	{
		&master_llcc_mc,
		&slave_ebi
	},
};

static struct icb_route route_qxm_nsp_ebi = {
	ICBID_MASTER_CDSP_PROC,
	ICBID_SLAVE_EBI1,
	3,
	route_qxm_nsp_ebi_hops
};

/*
 * NODE AND ROUTE LISTS
 */
static struct icb_route *icb_route_list[3] = {
	&route_qnm_mdp0_0_ebi,
	&route_qxm_nspb_ebi,
	&route_qxm_nsp_ebi,
};

static struct icb_master *icb_master_list[7] = {
	&master_llcc_mc,
	&master_qnm_cmpnoc0,
	&master_qnm_cmpnoc1,
	&master_qnm_mdp0_0,
	&master_qnm_mnoc_hf,
	&master_qxm_nsp,
	&master_qxm_nspb,
};

static struct icb_slave *icb_slave_list[5] = {
	&slave_ebi,
	&slave_qns_llcc,
	&slave_qns_mem_noc_hf,
	&slave_qns_nsp_gemnoc,
	&slave_qns_nspb_gemnoc,
};

static struct icb_hw_node *icb_hw_node_list[8] = {
	&bcm_acv,
	&bcm_mc0,
	&bcm_mm0,
	&bcm_nsa0,
	&bcm_nsa1,
	&bcm_nsb0,
	&bcm_nsb1,
	&bcm_sh0,
};

static struct icb_info icb_target_info = {
	3,
	icb_route_list,
	7,
	icb_master_list,
	5,
	icb_slave_list,
	8,
	icb_hw_node_list
};

struct icb_info *icbuarb_target_get_info(void)
{
	return &icb_target_info;
}
