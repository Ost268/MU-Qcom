APRIORI DXE {

  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  #FILE DRIVER = 90A49AFD-422F-08AE-9611-E788D3804845 {
  #  SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/EnvDxe/EnvDxe.depex
  #  SECTION PE32 = Binaries/winner/QcomPkg/Drivers/EnvDxe/EnvDxe.efi
  #  SECTION UI = "EnvDxe"
  #}

  # INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  # INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  FILE DRIVER = F541D663-4A48-40AA-AABF-FF158CCAE34C {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SmemDxe/SmemDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SmemDxe/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }

  FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.efi
    SECTION UI = "DALSys"
  }

  FILE DRIVER = AF9763A2-033B-4109-8E17-56A98D380C92 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/HWIODxe/HWIODxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/HWIODxe/HWIODxe.efi
    SECTION UI = "HWIODxeDriver"
  }

  FILE DRIVER = 10E193DF-9966-44E7-B17C-59DD831E20FC {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.efi
    SECTION UI = "ChipInfo"
  }

  FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }

  FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.efi
    SECTION UI = "HALIOMMU"
  }

  FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ULogDxe/ULogDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ULogDxe/ULogDxe.efi
    SECTION UI = "ULogDxe"
  }

  FILE DRIVER = ABA01FF8-2CCB-4E12-8B2E-CD3F4A742993 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.efi
    SECTION UI = "CmdDbDxe"
  }

  FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/NpaDxe/NpaDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/NpaDxe/NpaDxe.efi
    SECTION UI = "NpaDxe"
  }

  FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219766 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/RpmhDxe/RpmhDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/RpmhDxe/RpmhDxe.efi
    SECTION UI = "RpmhDxe"
  }

  FILE DRIVER = B43C22DB-6333-490C-872D-0A73439059FD{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/PdcDxe/PdcDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/PdcDxe/PdcDxe.efi
    SECTION UI = "PdcDxe"
  }

  FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ClockDxe/ClockDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ClockDxe/ClockDxe.efi
    SECTION UI = "ClockDxe"
  }

  FILE DRIVER = 9C1EB71F-DD6C-4ED5-9F6A-5CC0CA789F16 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.efi
    SECTION UI = "ShmBridgeDxeLA"
  }

  FILE DRIVER = 2D7A83E3-E343-4FFB-9109-631F2EE11694 {
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/TzDxe/ScmDxeLA.efi
    SECTION UI = "ScmDxeLA"
  }

  FILE DRIVER = 8681CC5A-0DF6-441E-B4B8-E915C538F067 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/TLMMDxe/TLMMDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/TLMMDxe/TLMMDxe.efi
    SECTION UI = "DALTLMM"
  }

  FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/I2CDxe/I2CDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/I2CDxe/I2CDxe.efi
    SECTION UI = "I2C"
  }

  FILE DRIVER = 2A7B4BEF-80CD-49E1-B473-374BA4D673FC {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SPMIDxe/SPMIDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SPMIDxe/SPMIDxe.efi
    SECTION UI = "SPMI"
  }

  FILE DRIVER = 5776232E-082D-4B75-9A0E-FE1D13F7A5D9 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/PmicDxe/PmicDxeLa.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/PmicDxe/PmicDxeLa.efi
    SECTION UI = "PmicDxe"
  }

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  FILE DRIVER = F10F76DB-42C1-533F-34A8-69BE24653110 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SdccDxe/SdccDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SdccDxe/SdccDxe.efi
    SECTION UI = "SdccDxe"
  }

  FILE DRIVER = 0D35CD8E-97EA-4F9A-96AF-0F0D89F76567 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/UFSDxe/UFSDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/UFSDxe/UFSDxe.patched.efi
    SECTION UI = "UFSDxe"
  }

  INF FatPkg/EnhancedFatDxe/Fat.inf

  FILE DRIVER = 6925FAD3-E243-4B69-AD61-3F978C8ABC60 {
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/TzDxe/TzDxeLA.efi
    SECTION UI = "TzDxeLA"
  }

  FILE DRIVER = 5A5CB8CA-9382-4E0C-B383-77FB517CD9EB{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/AdcDxe/AdcDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/AdcDxe/AdcDxe.efi
    SECTION UI = "AdcDxe"
  }

  FILE DRIVER = 2B0ECDCE-01AE-446E-9FFD-C4217DE0340F{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/VariableDxe/VariableDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/VariableDxe/VariableDxe.efi
    SECTION UI = "VariableDxe"
  }

  FILE DRIVER = 040E1E61-0AFB-411B-9EC9-00F3FC59CC13 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.efi
    SECTION UI = "QcomWDogDxe"
  }

  FILE DRIVER = 7DB0793A-4402-4BE1-906E-D0FABAD2707E {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.efi
    SECTION UI = "DDRInfoDxe"
  }

  FILE DRIVER = 3AE17DB7-3CC5-4B89-9304-9549211057EF {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.efi
    SECTION UI = "ResetRuntimeDxe"
  }

  #FILE DRIVER = BFAB1BE9-653F-4624-AE2D-7B7F00CC91F3 {
  #  SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.depex
  #  SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.efi
  #  SECTION UI = "Ccic"
  #}

  #FILE DRIVER = 2CC73155-A1F9-4C4B-88E2-CAF9390E126A {
  #  SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.depex
  #  SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.efi
  #  SECTION UI = "Muic"
  #}

  FILE DRIVER = 3C7596FA-0058-4496-A648-6D14BE4023B2 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.efi
    SECTION UI = "Chg"
  }

!if $(USE_DISPLAYDXE) == 1
  FILE DRIVER = 4138022F-06C7-4F79-9C94-7E33B511A4E7 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/DisplayDxe/DisplayDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/DisplayDxe/DisplayDxe.efi
    SECTION UI = "DisplayDxe"
  }
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  FILE DRIVER = 1D317734-4083-47C6-83EA-E3A42F2A6Bff {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/PILDxe/PILDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/PILDxe/PILDxe.efi
    SECTION UI = "PILDxe"
  }

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/FontDxe/FontDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/FontDxe/FontDxe.efi
    SECTION UI = "FontDxe"
  }

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
  }

  FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
  }

  FILE DRIVER = A25F5839-4D55-428F-8F0B-5CE1D565F53E{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.efi
    SECTION UI = "VerifiedBootDxe"
  }

  FILE DRIVER = C2F9A4F5-F7B4-43E7-BA99-5EA804CC103A{
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.efi
    SECTION UI = "ASN1X509Dxe"
  }

  FILE DRIVER = 32C71E68-83A8-46ED-AED1-094E71B12057{
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SecRSADxe/SecRSADxe.efi
    SECTION UI = "SecRSADxe"
  }

  FILE DRIVER = 37795BA0-E1CF-4ED5-BD8B-16DF6BCB1E1A{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.efi
    SECTION UI = "EmbeddedMonotonicCounter"
  }

  FILE DRIVER = 5A50AA81-C3AE-4608-A0E3-41A2E69BAF94{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/QcomBds/QcomBds.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/QcomBds/QcomBds.efi
    SECTION UI = "QcomBds"
  }

  FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.patched.efi
    SECTION UI = "UsbConfigDxe"
  }

  FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.efi
    SECTION UI = "ButtonsDxe"
  }

  FILE DRIVER = F09AD92E-485C-9CDB-3E05-3385C38F94CC{
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/TsensDxe/TsensDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/TsensDxe/TsensDxe.efi
    SECTION UI = "TsensDxe"
  }

  FILE DRIVER = F09AD92E-4E91-490F-AB99-E69939B840B2{
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/LimitsDxe/LimitsDxe.efi
    SECTION UI = "LimitsDxe"
  }

!if $(USE_DISPLAYDXE) == 1
  FILE DRIVER = 1B52138D-3FA3-4E50-B958-20887353F809 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/CPRDxe/CPRDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/CPRDxe/CPRDxe.efi
    SECTION UI = "CPRDxe"
  }
!endif

  FILE DRIVER = 3ADF8DDA-1850-44C5-8C63-BB991849BC6F{
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers//HashDxe/HashDxe.efi
    SECTION UI = "HashDxe"
  }

  FILE DRIVER = 569EA0DE-B557-4043-84CF-01103FE516E5 {
    SECTION DXE_DEPEX = Binaries/winner/QcomPkg/Drivers/GpiDxe/GpiDxe.depex
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/GpiDxe/GpiDxe.efi
    SECTION UI = "GpiDxe"
  }

  FILE DRIVER = 5F0937CD-73F9-445E-B320-BB6FD5D3CBDE {
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
    SECTION UI = "CipherDxe"
  }

  FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/RngDxe/RngDxe.efi
    SECTION UI = "RngDxe"
  }

  FILE DRIVER = 857A8741-0EEC-43BD-9482-27D14ED47D72{
    SECTION PE32 = Binaries/winner/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.efi
    SECTION UI = "SimpleTextInOutSerial"
  }

  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
