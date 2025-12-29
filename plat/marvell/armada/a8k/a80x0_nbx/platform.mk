#
# Copyright (C) 2018 Marvell International Ltd.
# Copyright (C) 2025-2026 Free Mobile / Freebox
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses
#

PCI_EP_SUPPORT		:= 0

CP_NUM			:= 2
$(eval $(call add_define,CP_NUM))

DOIMAGE_SEC     	:=	tools/doimage/secure/sec_img_8K.cfg

MARVELL_MOCHI_DRV	:=	drivers/marvell/mochi/apn806_setup.c

BOARD_DIR		:= $(shell dirname $(lastword $(MAKEFILE_LIST)))

# BLE porting sources - include ramoopsies for ECC memory support
BLE_PORTING_SOURCES	:=	$(BOARD_DIR)/board/dram_port.c \
				$(BOARD_DIR)/board/marvell_plat_config.c \
				$(BOARD_DIR)/board/ramoopsies.c

# Use linker --wrap to intercept mv_ddr_mem_scrubbing() for ramoopsies
# This allows saving/restoring the ramoops buffer during ECC scrubbing
# without modifying the upstream mv-ddr-marvell repository
BLE_LDFLAGS		+=	-Wl,--wrap=mv_ddr_mem_scrubbing

include plat/marvell/armada/a8k/common/a8k_common.mk

include plat/marvell/armada/common/marvell_common.mk
