# Copyright (c) 2026, Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#

# host flash image packaging using locally supplied RSE resources.
BASEV2_BL1_VERSION ?= 1.5.0
BASEV2_BL1_SECURITY_COUNTER ?= 1
BASEV2_MCUBOOT_SCRIPTS ?= contrib/mcuboot/scripts
# Set default 12 MiB capacity per FIP partition.
BASEV2_FIP_SIZE ?= 12582912

# Default payload paths follow the RSE build output filenames.
ifneq ($(strip ${BASEV2_RSE_BIN_DIR}),)
BASEV2_RSE_BL2 ?= ${BASEV2_RSE_BIN_DIR}/bl2_signed.bin
BASEV2_SCP_BL1 ?= ${BASEV2_RSE_BIN_DIR}/signed_scp-css.bin
BASEV2_RSE_S ?= ${BASEV2_RSE_BIN_DIR}/tfm_s_encrypted.bin
BASEV2_RSE_SIC_TABLES ?= ${BASEV2_RSE_BIN_DIR}/tfm_s_sic_tables_signed.bin
endif

.PHONY: basev2_flashimage
basev2_flashimage: ${BUILD_PLAT}/bl1.bin ${BUILD_PLAT}/${FIP_NAME} ${FIPTOOL}
	$(q)printf '%s\n' 'enum image_attributes {' \
		'    RE_IMAGE_LOAD_ADDRESS = 0x70000000,' \
		'    RE_SIGN_BIN_SIZE = 0x20000,' '};' > ${BUILD_PLAT}/bl1_ns
	$(q)PYTHONPATH=$(call shell-quote,$(abspath ${BASEV2_MCUBOOT_SCRIPTS}))$${PYTHONPATH:+:$$PYTHONPATH} \
		${PYTHON} $(call shell-quote,$(abspath ${BASEV2_RSE_WRAPPER})) \
		-v $(call shell-quote,${BASEV2_BL1_VERSION}) \
		--layout $(call shell-quote,${BUILD_PLAT}/bl1_ns) \
		-k $(call shell-quote,$(abspath ${BASEV2_BL1_SIGN_KEY})) \
		--public-key-format full --align 1 --pad --pad-header -H 0x2000 \
		-s $(call shell-quote,${BASEV2_BL1_SECURITY_COUNTER}) \
		$(call shell-quote,${BUILD_PLAT}/bl1.bin) \
		$(call shell-quote,${BUILD_PLAT}/signed_bl1.bin)
	$(q)${FIPTOOL} update --align 8192 \
		--rse-bl2 $(call shell-quote,${BASEV2_RSE_BL2}) \
		--rse-scp-bl1 $(call shell-quote,${BASEV2_SCP_BL1}) \
		--rse-ap-bl1 $(call shell-quote,${BUILD_PLAT}/signed_bl1.bin) \
		--rse-s $(call shell-quote,${BASEV2_RSE_S}) \
		--rse-sic-tables-s $(call shell-quote,${BASEV2_RSE_SIC_TABLES}) \
		--out ${BUILD_PLAT}/host_flash_fip.bin ${BUILD_PLAT}/${FIP_NAME}
	$(q)bash tools/basev2/generate_gpt.sh \
		${BUILD_PLAT}/host_flash_fip.bin ${BUILD_PLAT}/fip_gpt.bin \
		$(call shell-quote,${BASEV2_FIP_SIZE}) $(call shell-quote,${PYTHON})
