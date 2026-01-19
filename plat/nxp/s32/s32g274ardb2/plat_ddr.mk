#
# Copyright 2022-2023, 2025 NXP
#
# SPDX-License-Identifier: BSD-3-Clause
#

PLAT_INCLUDES += \
	-I${PLAT_DRIVERS_INCLUDE_PATH}/ddr/s32cc \
	-Iinclude/lib \

DDR_DRV_SRCS += \
	${PLAT_DRIVERS_PATH}/ddr/s32cc/ddr_utils.c \
	${PLAT_DRIVERS_PATH}/ddr/s32cc/ddr_init.c \
