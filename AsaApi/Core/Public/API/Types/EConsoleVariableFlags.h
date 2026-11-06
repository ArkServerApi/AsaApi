#pragma once


enum class EConsoleVariableFlags:unsigned __int64
{
	ECVF_FlagMask = 0xFFFFFFFF,
	ECVF_Default = 0x0,
	ECVF_Cheat = 0x1,
	ECVF_ReadOnly = 0x4,
	ECVF_Unregistered = 0x8,
	ECVF_CreatedFromIni = 0x10,
	ECVF_RenderThreadSafe = 0x20,
	ECVF_Scalability = 0x40,
	ECVF_ScalabilityGroup = 0x80,
	ECVF_Preview = 0x100,
	ECVF_GeneralShaderChange = 0x200,
	ECVF_MobileShaderChange = 0x400,
	ECVF_DesktopShaderChange = 0x800,
	ECVF_ExcludeFromPreview = 0x1000,
	ECVF_SetFlagMask = 0xFF0000,
	ECVF_Set_NoSinkCall_Unsafe = 0x10000,
	ECVF_SetByMask = 0xFF000000,
	ECVF_SetByConstructor = 0x0,
	ECVF_SetByScalability = 0x1000000,
	ECVF_SetByGameSetting = 0x2000000,
	ECVF_SetByProjectSetting = 0x3000000,
	ECVF_SetBySystemSettingsIni = 0x4000000,
	ECVF_SetByDeviceProfile = 0x5000000,
	ECVF_SetByGameOverride = 0x6000000,
	ECVF_SetByConsoleVariablesIni = 0x7000000,
	ECVF_SetByCommandline = 0x8000000,
	ECVF_SetByCode = 0x9000000,
	ECVF_SetByConsole = 0xA000000
};