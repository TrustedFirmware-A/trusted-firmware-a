#!/usr/bin/env bash
#
# Copyright (c) 2026, Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#

# BaseV2-specific GPT generation script with some differences from the generic
# script in fvp_utils.sh because the current BaseV2 RSE firmware requires metadata
# partitions to start on 8 KiB boundaries. Align partition starts to remain
# compatible with the supplied firmware. Later RSE firmware updates may remove
# this metadata alignment requirement.
#
# Usage: bash generate_gpt.sh <combined-fip> <output-image> <fip-size-bytes> [python]

set -eu

fip="${1:?}"
output="${2:?}"
fip_size="${3:?}"
python="${4:-python3}"
script_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
sector_size=512
header_sectors=33
metadata_sectors=1
private_sectors=1
# Keep consecutive FIP starts aligned to 8 KiB.
if [[ ! "$fip_size" =~ ^[1-9][0-9]*$ ]] || (( fip_size <= 0 || fip_size % 8192 != 0 )); then
	echo "FIP partition size must be a positive multiple of 8192 bytes" >&2
	exit 1
fi
fip_sectors=$((fip_size / sector_size))

if [ "$(stat -c %s "$fip")" -gt "$fip_size" ]; then
	echo "Combined FIP exceeds the $fip_size byte partition capacity" >&2
	exit 1
fi

# Align partition starts to 8 KiB for compatibility with older RSE firmware.
align16() {
	echo $(( (($1 + 15) / 16) * 16 ))
}

start1="$(align16 $((1 + header_sectors)))"
start2="$(align16 $((start1 + fip_sectors)))"
start3="$(align16 $((start2 + fip_sectors)))"
start4="$(align16 $((start3 + metadata_sectors)))"
start5="$(align16 $((start4 + metadata_sectors)))"
total_sectors="$(align16 $((start5 + private_sectors + header_sectors)))"

fip_type_uuid="$(uuidgen --sha1 --namespace @dns --name fip_type_uuid)"
metadata_type_uuid="8a7a84a0-8387-40f6-ab41-a8b9a5a60d23"
location_uuid="$(uuidgen)"
fip_a_uuid="$(uuidgen)"
fip_b_uuid="$(uuidgen)"
private_uuid="$(uuidgen)"
metadata="$(mktemp)"
trap 'rm -f "$metadata"' EXIT
"$python" "$script_dir/../fwu_metadata/generate_fwu_metadata.py" \
	--metadata_file "$metadata" \
	--image_data "[('$fip_type_uuid', '$location_uuid', ['$fip_a_uuid', '$fip_b_uuid'])]"

dd if=/dev/zero of="$output" bs="$sector_size" count="$total_sectors" status=none
sgdisk "$output" \
	--set-alignment 16 \
	--disk-guid "$location_uuid" \
	--new 1:"$start1":+"$fip_sectors" --change-name 1:FIP_A \
	--typecode 1:"$fip_type_uuid" --partition-guid 1:"$fip_a_uuid" \
	--new 2:"$start2":+"$fip_sectors" --change-name 2:FIP_B \
	--typecode 2:"$fip_type_uuid" --partition-guid 2:"$fip_b_uuid" \
	--new 3:"$start3":+"$metadata_sectors" --change-name 3:FWU-Metadata \
	--typecode 3:"$metadata_type_uuid" \
	--new 4:"$start4":+"$metadata_sectors" --change-name 4:Bkup-FWU-Metadata \
	--typecode 4:"$metadata_type_uuid" \
	--new 5:"$start5":+"$private_sectors" --change-name 5:private_metadata_1 \
	--typecode 5:"$private_uuid"

dd if="$fip" of="$output" bs="$sector_size" seek="$start1" conv=notrunc status=none
dd if="$fip" of="$output" bs="$sector_size" seek="$start2" conv=notrunc status=none
dd if="$metadata" of="$output" bs="$sector_size" seek="$start3" conv=notrunc status=none
dd if="$metadata" of="$output" bs="$sector_size" seek="$start4" conv=notrunc status=none
echo "Built BaseV2 GPT flash image: $output"
