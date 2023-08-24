MFGTOOLCONFIG:imx-nxp-bsp = "bootloader.uuu.in"
MFGTOOLCONFIG:imx-mainline-bsp = "bootloader.uuu.in"

MFGTOOLCONFIG_TASKS ?= ""
MFGTOOLCONFIG_TASKS:imx-nxp-bsp = "u-boot-imx:do_deploy"
MFGTOOLCONFIG_TASKS:imx-mainline-bsp = "u-boot-fslc:do_deploy"


MFGTOOLCONFIG_FILES ?= ""
MFGTOOLCONFIG_FILES:imx6-nxp-bsp = "u-boot-${MACHINE}.bin SPL-${MACHINE} sit-${MACHINE}.bin u-boot-${MACHINE}.itb"
MFGTOOLCONFIG_FILES:imx93-nxp-bsp = "u-boot-${MACHINE}.bin imx-boot-${MACHINE} sit-${MACHINE}.bin u-boot-${MACHINE}.itb"
MFGTOOLCONFIG_FILES:imx8-nxp-bsp = "u-boot-${MACHINE}.bin imx-boot-${MACHINE} sit-${MACHINE}.bin u-boot-${MACHINE}.itb"

MFGTOOLCONFIG_FILES:imx-mainline-bsp = "u-boot-${MACHINE}.bin imx-boot"



MFGTOOLCONFIG[bootloader.uuu.in] = "${MFGTOOLCONFIG_TASKS}, ${MFGTOOLCONFIG_FILES}"

UBOOT_CONFIG:imx8mm-lpddr4-evk:append = " fspi sd"
UBOOT_CONFIG:imx6ullevk:append = " sd-optee "
UBOOT_CONFIG:imx8ulp-lpddr4-evk:append = " fspi sd "
UBOOT_CONFIG:imx93-11x11-lpddr4x-evk:append = " ld "
