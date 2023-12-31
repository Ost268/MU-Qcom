  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/winner/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/winner/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/sweet_k6a/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/winner/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/winner/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/RngDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/winner/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/winner/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
