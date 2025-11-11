/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/desc_image_load.h>
#include <plat/common/platform.h>

#include <platform_def.h>

static bl_mem_params_node_t bl2_mem_params_descs[] = {
#if (APPLOAD == RZ_NOFIP)
	{
		.image_id = MAX_IMAGE_IDS,

		SET_STATIC_PARAM_HEAD(ep_info, PARAM_EP, VERSION_2,
				      entry_point_info_t,
				      SECURE | EXECUTABLE | EP_FIRST_EXE),
		.ep_info.spsr =
			SPSR_64(MODE_EL3, MODE_SP_ELX, DISABLE_ALL_EXCEPTIONS),
		.ep_info.pc = BSP_BASE,
		.ep_info.args.arg0 = (uintptr_t)PARAMS_BASE,

		SET_STATIC_PARAM_HEAD(
			image_info, PARAM_EP, VERSION_2, image_info_t,
			IMAGE_ATTRIB_PLAT_SETUP | IMAGE_ATTRIB_SKIP_LOADING),

		.next_handoff_image_id = INVALID_IMAGE_ID,
	}
#endif /* (APPLOAD == RZ_NOFIP) */
};

REGISTER_BL_IMAGE_DESCS(bl2_mem_params_descs)
