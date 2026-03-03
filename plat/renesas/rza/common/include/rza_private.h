/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RZ_PRIVATE_H__
#define __RZ_PRIVATE_H__

#include <common/bl_common.h>

/*
 * Function and variable prototypes
 */
void rza_io_setup(void);
void rza_print_descs(void);

#if (APPLOAD == RZ_NOFIP)
void rza_load_fsp(void);
#endif /* (APPLOAD == RZ_NOFIP) */

struct bl2_to_bl31_params_mem {
	entry_point_info_t bl32_ep_info;
	entry_point_info_t bl33_ep_info;
};

#endif	/* __RZ_PRIVATE_H__ */
