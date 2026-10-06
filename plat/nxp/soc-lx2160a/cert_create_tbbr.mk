#
# Copyright 2021 NXP
# Copyright 2026 Free Mobile - Vincent Jardin
#
# SPDX-License-Identifier: BSD-3-Clause
#

# cert_create extension for the DDR firmware certificates of the DDR FIP
# (see ddr_tbbr.mk), shared by every LX2160A board: each board directory
# includes this file from its own cert_create_tbbr.mk, the only place
# tools/cert_create/Makefile looks at.
#
# Compile time defines used by NXP platforms

PLAT_DEF_OID := yes

ifeq (${PLAT_DEF_OID},yes)

CRTTOOL_DEFINES += PLAT_DEF_OID
CRTTOOL_DEFINES += PDEF_KEYS
CRTTOOL_DEFINES += PDEF_CERTS
CRTTOOL_DEFINES += PDEF_EXTS


CRTTOOL_INCLUDE_DIRS		+=	${PLAT_DIR}../../common/fip_handler/common/

# PLAT_DIR is plat/nxp/soc-lx2160a/<board>/ relative to tools/cert_create
PDEF_CERT_TOOL_PATH		:=	${PLAT_DIR}../cert_create_helper
CRTTOOL_INCLUDE_DIRS		+=	${PDEF_CERT_TOOL_PATH}/include

CRTTOOL_SOURCES			+=	${PDEF_CERT_TOOL_PATH}/src/pdef_tbb_cert.c \
					${PDEF_CERT_TOOL_PATH}/src/pdef_tbb_ext.c \
					${PDEF_CERT_TOOL_PATH}/src/pdef_tbb_key.c
endif
