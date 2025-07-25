#
# Copyright 2024-2025 NXP
#
# SPDX-License-Identifier: BSD-3-Clause
#

include drivers/arm/gic/v3/gicv3.mk
include lib/xlat_tables_v2/xlat_tables.mk

PLAT_DRIVERS_PATH := drivers/nxp
PLAT_COMMON_PATH  := plat/nxp/common
PLAT_S32G274ARDB2 := plat/nxp/s32/s32g274ardb2

CONSOLE           := LINFLEX

include ${PLAT_COMMON_PATH}/plat_make_helper/plat_build_macros.mk

# Flag to apply S32 erratum ERR051700. This erratum applies to all S32
# revisions.
S32_ERRATA_LIST += ERRATA_S32_051700

PLAT_INCLUDES = \
	-I${PLAT_S32G274ARDB2}/include \
	-Idrivers/imx/usdhc \

PROGRAMMABLE_RESET_ADDRESS := 1

COLD_BOOT_SINGLE_CPU := 0

ENABLE_SVE_FOR_NS := 0

RESET_TO_BL2 := 1

INIT_UNUSED_NS_EL2 := 1

ERRATA_A53_855873 := 1
ERRATA_A53_836870 := 1
ERRATA_A53_1530924 := 1
ERRATA_SPECULATIVE_AT := 1
ERRATA_S32_051700 := 1

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

NXP_ESDHC_LE := 1
$(eval $(call add_define,NXP_ESDHC_LE))

# Selecting Drivers for SoC
$(eval $(call SET_NXP_MAKE_FLAG,CONSOLE_NEEDED,BL_COMM))
$(eval $(call SET_NXP_MAKE_FLAG,CLK_NEEDED,BL_COMM))

include ${PLAT_DRIVERS_PATH}/drivers.mk

# Selecting the raw partition where the FIP image is stored
FIP_PART ?= 0
$(eval $(call add_define,FIP_PART))

BL_COMMON_SOURCES += \
	${PLAT_S32G274ARDB2}/plat_console.c \
	${PLAT_S32G274ARDB2}/plat_helpers.S \
	${PLAT_S32G274ARDB2}/s32cc_bl_common.c \
	${XLAT_TABLES_LIB_SRCS} \

BL2_SOURCES += \
	${BL_COMMON_SOURCES} \
	${PLAT_S32G274ARDB2}/plat_bl2_el3_setup.c \
	${PLAT_S32G274ARDB2}/plat_bl2_image_desc.c \
	${PLAT_S32G274ARDB2}/plat_io_storage.c \
	${PLAT_S32G274ARDB2}/s32cc_ncore.c \
	common/desc_image_load.c \
	common/tf_crc32.c \
	drivers/delay_timer/delay_timer.c \
	drivers/delay_timer/generic_delay_timer.c \
	drivers/imx/usdhc/imx_usdhc.c \
	drivers/io/io_block.c \
	drivers/io/io_fip.c \
	drivers/io/io_memmap.c \
	drivers/io/io_storage.c \
	drivers/mmc/mmc.c \
	drivers/partition/gpt.c \
	drivers/partition/partition.c \
	lib/cpus/aarch64/cortex_a53.S \

BL2_CPPFLAGS += -march=armv8-a+crc

BL31_SOURCES += \
	${GICV3_SOURCES} \
	${PLAT_S32G274ARDB2}/plat_bl31_setup.c \
	${PLAT_S32G274ARDB2}/s32g2_psci.c \
	${PLAT_S32G274ARDB2}/s32g2_soc.c \
	${XLAT_TABLES_LIB_SRCS} \
	lib/cpus/aarch64/cortex_a53.S \
	plat/common/plat_gicv3.c \
	plat/common/plat_psci_common.c \

# process all errata flags
$(eval $(call default_zeros, $(S32_ERRATA_LIST)))
$(eval $(call add_defines, $(S32_ERRATA_LIST)))
$(eval $(call assert_booleans, $(S32_ERRATA_LIST)))
