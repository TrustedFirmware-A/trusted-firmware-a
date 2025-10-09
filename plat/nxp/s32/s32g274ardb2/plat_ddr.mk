#
# Copyright 2022-2023, 2025-2026 NXP
#
# SPDX-License-Identifier: BSD-3-Clause
#
XXD ?= xxd
SED ?= sed

PLAT_INCLUDES += \
	-I${PLAT_DRIVERS_INCLUDE_PATH}/ddr/s32cc \
	-Iinclude/lib \

DDR_DRV_SRCS += \
	${PLAT_DRIVERS_PATH}/ddr/s32cc/ddr_utils.c \
	${PLAT_DRIVERS_PATH}/ddr/s32cc/ddr_init.c \

ifdef DDR_FW_BIN_PATH
DDR_FW_BIN_PLAT := $(shell ${XXD} ${DDR_FW_BIN_PATH} | ${SED} -n 's/.*\(S32G2\).*/\1/p')
ifneq (${DDR_FW_BIN_PLAT}, $(call uppercase,s32g2))
$(error The provided firmware binary was generated for a different platform, \
not the one expected by the TF-A. Please provide the DDR firmware binary for 's32g274ardb2')
endif
endif

$(eval $(call TOOL_ADD_IMG,DDR_FW_BIN_PATH,--ddr-fw))
