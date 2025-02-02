## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = winner
  PLATFORM_GUID                  = 7b23c557-6bf5-4120-b9c7-8f9cb2137a00
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/winnerPkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = winnerPkg/winner.fdf
  DISPLAY_USES_RGBA              = 0
  USE_DISPLAYDXE                 = 0
  AB_SLOT_SUPPORT                = 1

  # 0 = SM8150
  # 1 = SM8150-AB
  # 2 = SM8150-AC
  SOC_TYPE                       = 0

[BuildOptions.common]
  *_*_*_CC_FLAGS = -DSOC_TYPE=$(SOC_TYPE)

[LibraryClasses.common]
  DeviceMemoryMapLib|winnerPkg/Library/DeviceMemoryMapLib/DeviceMemoryMapLib.inf
  DeviceConfigurationMapLib|winnerPkg/Library/DeviceConfigurationMapLib/DeviceConfigurationMapLib.inf

[PcdsFixedAtBuild.common]
  # Device Specific
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000           # Starting Address
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x300000000          # 12 GB Size

  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVendor|L"Ost268"  # Device Maintainer

  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x9FF8C000

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000         # 256K stack

  # SmBios
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemVendor|"Samsung Technology Co., Ltd."
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Fold"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"winner"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Fold_winner"
  gQcomPkgTokenSpaceGuid.PcdSmbiosBoardModel|"winner"

  # Simple FrameBuffer
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|2152
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1536
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|2152
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1536
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|2152
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1536
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|269  
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|80    
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|269     
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|80  
  
!include SM8150Pkg/SM8150Pkg.dsc.inc
