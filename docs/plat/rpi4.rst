Raspberry Pi 4
==============

The `Raspberry Pi 4`_ is an inexpensive single-board computer that contains four
Arm Cortex-A72 cores. Also in contrast to previous Raspberry Pi versions this
model has a GICv2 interrupt controller.

The default configuration loads a non-secure EL2 payload, such as a 64-bit
Linux kernel, from BL31. An optional staged configuration adds BL1 and BL2.

**IMPORTANT NOTE**: This port isn't secure. All of the memory used is DRAM,
which is available from both the Non-secure and Secure worlds. The SoC does
not seem to feature a secure memory controller of any kind, so portions of
DRAM can't be protected properly from the Non-secure world.

Build Instructions
------------------

The default configuration uses ``RESET_TO_BL31=1`` and produces ``bl31.bin``:

.. code:: shell

    CROSS_COMPILE=aarch64-linux-gnu- make PLAT=rpi4 DEBUG=1

Copy the generated build/rpi4/debug/bl31.bin to the SD card, adding an entry
starting with ``armstub=``, then followed by the respective file name to
``config.txt``. You should have AArch64 code in the file loaded as the
"kernel", as BL31 will drop into AArch64/EL2 to the respective load address.
arm64 Linux kernels are known to work this way.

Other options that should be set in ``config.txt`` to properly boot 64-bit
kernels are:

::

    enable_uart=1
    arm_64bit=1
    enable_gic=1

The BL31 code will patch the provided device tree blob in memory to advertise
PSCI support, also will add a reserved-memory node to the DT to tell the
non-secure payload to not touch the resident TF-A code.

If you connect a serial cable between the Mini UART and your computer, and
connect to it (for example, with ``screen /dev/ttyUSB0 115200``) you should
see some text from BL31, followed by the output of the EL2 payload.
The command line provided is read from the ``cmdline.txt`` file on the SD card.

Staged boot
-----------

Set ``RESET_TO_BL31=0`` to build BL1, BL2 and BL31:

.. code:: shell

    CROSS_COMPILE=aarch64-linux-gnu- make PLAT=rpi4 RESET_TO_BL31=0

The resulting ``build/rpi4/release/armstub8.bin`` contains the Raspberry Pi
armstub header, BL1 and the FIP. The header and BL1 are padded to ``0x20000``;
the FIP may occupy ``[0x20000, 0x200000)``.

When using the TF-A output directly, use ``armstub8.bin`` in place of
``bl31.bin`` in the ``armstub=`` entry. BL33 is not included in the FIP and
must already be present in memory when BL2 hands off to it. A platform
integration may package ``armstub8.bin`` and BL33 in one file as long as it
preserves their load addresses. ``PRELOADED_BL33_BASE`` provides a fixed entry
point, which must not overlap the armstub image. If it is not specified, BL2
reads the payload address recorded by the Raspberry Pi firmware in the armstub
header.

The staged configuration supports the following options:

- ``TRANSFER_LIST=1`` enables transfer-list handoff between the boot stages.

- ``RPI3_DIRECT_LINUX_BOOT`` selects the BL33 register convention. Its default
  value is 1, which uses the Linux boot protocol. Set it to 0, together with
  ``TRANSFER_LIST=1``, to use the firmware handoff register convention.

- ``RPI3_PRELOADED_DTB_BASE`` provides a fixed DTB address. If it is omitted,
  BL31 reads the address from the armstub header. The ``device_tree_address``
  and ``device_tree_end`` settings in ``config.txt`` must provide a writable
  window that does not overlap ``armstub8.bin`` or BL33. The firmware handoff
  path requires at least 128 KiB in this window so BL31 can update the tree in
  place.

- ``SPD=spmd`` enables an OP-TEE SPMC at S-EL1. It requires
  ``TRANSFER_LIST=1``, ``SPMD_SPM_AT_SEL2=0``, ``SPMC_AT_EL3=0`` and
  ``SPMC_OPTEE=1``. The RPi4 configuration supports OP-TEE images built
  without the pager.

- ``MEASURED_BOOT=1`` enables measured boot. It requires staged boot,
  transfer lists and ``RPI3_DIRECT_LINUX_BOOT=0``. BL33 is supplied outside
  the FIP and is not measured by BL2.

- ``DISCRETE_TPM=1 TPM_INTERFACE=FIFO_SPI`` selects an SLB9670 TPM connected
  through the Raspberry Pi GPIO header for measured boot. BL1 validates that
  the selected hash bank provides the PCRs required by the platform metadata.

- ``RPI4_PROVISION_TPM=1`` lets BL1 reallocate the TPM PCR banks when the
  required PCRs are unavailable. This debug-only provisioning aid requires
  ``DEBUG=1`` and changes the TPM's persistent PCR allocation.

The existing ``RPI3_`` option names are also used by the RPi4 staged flow
because the corresponding interfaces are shared with the RPi3 port.

TF-A port design
----------------

The default configuration remains a BL31-only port. The staged configuration
uses the same BL1, BL2 and BL31 sequence as the Raspberry Pi 3 port and reuses
the common RPi boot helpers.

As with the previous models, the GPU and its firmware are the first entity to
run after the SoC gets its power. The on-chip Boot ROM loads the next stage
(bootcode.bin) from flash (EEPROM), which is again GPU code.
This part knows how to access the MMC controller and how to parse a FAT
filesystem, so it will load further components and configuration files
from the first FAT partition on the SD card.

To accommodate this existing way of configuring and setting up the board,
we use as much of this workflow as possible.
If bootcode.bin finds a file called ``armstub8.bin`` on the SD card or it gets
pointed to such code by finding a ``armstub=`` key in ``config.txt``, it will
load this file to the beginning of DRAM (address 0) and execute it in
AArch64 EL3.
But before doing that, it will also load a "kernel" and the device tree into
memory. The load addresses have a default, but can also be changed by
setting them in ``config.txt``. If the GPU firmware finds a magic value in the
armstub image file, it will put those two load addresses in memory locations
near the beginning of memory, where TF-A code picks them up.

For direct Linux boot, TF-A uses the kernel load address as the BL33 entry point
and places the DTB address in register x0, as required by the arm64 Linux kernel
boot protocol. This does not require the EL2 payload to be a Linux kernel; a
bootloader or another kernel can use the same interface as long as it accepts
the DTB address in x0. A payload with another way to find the device tree can
ignore this address.

For firmware handoff, BL2 relocates the non-secure transfer list and sets the
standard transfer-list arguments before entering BL33. BL31 obtains the DTB
address from the configured fixed address or the armstub header and updates the
tree before leaving EL3. The BL33 payload must support the transfer-list
register convention.
