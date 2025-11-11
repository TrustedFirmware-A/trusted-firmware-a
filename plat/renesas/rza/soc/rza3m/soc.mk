#
# Copyright (c) 2021-2026, Renesas Electronics Corporation. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#

PLAT_INCLUDES		+=	-Iplat/renesas/rza/soc/rza3m/include

ifneq (${USE_SDRAM},0)
DDR_PLL4		?= 1600
$(eval $(call add_define,DDR_PLL4))

DDR_SOURCES		+=	drivers/renesas/rza/ddr/param_swizzle_T1.c

ifeq (${DDR_PLL4},1333)
DDR_SOURCES		+=	plat/renesas/rza/soc/rza3m/drivers/ddr/param_mc_C-011_D3-02-1.c
else
DDR_SOURCES		+=	plat/renesas/rza/soc/rza3m/drivers/ddr/param_mc_C-011_D3-01-1.c
endif
endif

BL2_SOURCES		+=	${DDR_SOURCES}

RZA3 			:= 	1
RZA3M 			:= 	1
DEVICE_TYPE 		:= 	1
LOG_LEVEL 		?= 	20
ifeq (${SOC_TYPE},2)
DEVICE_TYPE 		:= 	2
endif
RZ_XSPI_MEMORY_BASE 	:= 	0x20000000

$(eval $(call add_define,RZA3))
$(eval $(call add_define,RZA3M))
$(eval $(call add_define,DEVICE_TYPE))
$(eval $(call add_define,RZ_XSPI_MEMORY_BASE))
