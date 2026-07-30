#
# Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
#
# SPDX-License-Identifier: BSD-3-Clause
#
# Clock driver
#

$(eval $(call add_define,QTI_CLOCK_ENABLED))

CLOCK_DRV_PATH := drivers/qti/clock

PLAT_INCLUDES += \
	-Iinclude/drivers/qti/clock

BL31_SOURCES += \
	$(CLOCK_DRV_PATH)/clock_driver.c			\
	$(CLOCK_DRV_PATH)/clock_hal.c				\
	$(CLOCK_DRV_PATH)/$(CHIPSET)/clock_init.c		\
	$(CLOCK_DRV_PATH)/$(CHIPSET)/clock_cfg.c

# Rail voltage voting (RPMh/BCM back-end). Platforms that scale rails during
# init set QTI_CLOCK_RAIL_VOTE in their platform.mk; others use the stubs.
ifeq ($(QTI_CLOCK_RAIL_VOTE),1)
$(eval $(call add_define,QTI_CLOCK_RAIL_VOTE))
BL31_SOURCES += $(CLOCK_DRV_PATH)/clock_rail.c
endif
