#
# Copyright (c) 2026 Free Mobile - Vincent Jardin
#
# SPDX-License-Identifier: BSD-3-Clause
#

include(UnitTest)

unit_test_add_suite(
	NAME csf_hdr_parser
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/drivers/nxp/auth/csf_hdr_parser/csf_hdr_parser.c
		${CMAKE_CURRENT_LIST_DIR}/csf_hdr_parser_mocks.c
		${CMAKE_CURRENT_LIST_DIR}/test_csf_hdr_parser.cpp
	INCLUDE_DIRECTORIES
		${CMAKE_CURRENT_LIST_DIR}
		${CMAKE_CURRENT_LIST_DIR}/mocks
		${PROJECT_SOURCE_DIR}/mocks/include
		${PROJECT_SOURCE_DIR}/mocks/include/arch/aarch64
		${PROJECT_SOURCE_DIR}/mocks/include/common
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc
		${UNIT_TEST_PROJECT_PATH}/include
		${UNIT_TEST_PROJECT_PATH}/include/lib
		${UNIT_TEST_PROJECT_PATH}/include/arch/aarch64
		${UNIT_TEST_PROJECT_PATH}/include/drivers/nxp/auth/csf_hdr_parser
		${UNIT_TEST_PROJECT_PATH}/include/drivers/nxp/crypto/caam
		${UNIT_TEST_PROJECT_PATH}/include/drivers/nxp/sfp
	COMPILE_DEFINITIONS
		# Chassis 3 header layout and barker code (LX2160A and friends)
		CSF_HDR_CH3
		# SFP register endianness/version, as set by the LX2160A soc.def
		NXP_SFP_LE
		NXP_SFP_VER_3_4
		CACHE_WRITEBACK_GRANULE=64
		# Silence the parser's logging; the tests check return values
		LOG_LEVEL=0
)
