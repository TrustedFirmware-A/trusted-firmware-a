#
# Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
#
# SPDX-License-Identifier: BSD-3-Clause
#
# IPCC (Inter-Processor Communication Controller) driver, Tx trigger only
#

# Apply the block-level IPCC config (top mode, trace) ourselves, on targets
# where no TME does it.
QTI_IPCC_NO_TME				?= 0

$(eval $(call assert_booleans,QTI_IPCC_NO_TME))

$(eval $(call add_define,QTI_IPCC_ENABLED))
$(eval $(call add_defines,QTI_IPCC_NO_TME))

IPCC_DRV_PATH := drivers/qti/ipcc

PLAT_INCLUDES += \
	-I$(IPCC_DRV_PATH)				\
	-I$(IPCC_DRV_PATH)/$(CHIPSET)			\
	-Iinclude/drivers/qti/ipcc

BL31_SOURCES += \
	$(IPCC_DRV_PATH)/ipcc_core.c			\
	$(IPCC_DRV_PATH)/ipcc_router.c			\
	$(IPCC_DRV_PATH)/$(CHIPSET)/ipcc_config.c
