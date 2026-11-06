#pragma once


enum class GFSDK_Aftermath_Result:unsigned int
{
	GFSDK_Aftermath_Result_Success = 0x1,
	GFSDK_Aftermath_Result_NotAvailable = 0x2,
	GFSDK_Aftermath_Result_Fail = 0xBAD00000,
	GFSDK_Aftermath_Result_FAIL_VersionMismatch = 0xBAD00001,
	GFSDK_Aftermath_Result_FAIL_NotInitialized = 0xBAD00002,
	GFSDK_Aftermath_Result_FAIL_InvalidAdapter = 0xBAD00003,
	GFSDK_Aftermath_Result_FAIL_InvalidParameter = 0xBAD00004,
	GFSDK_Aftermath_Result_FAIL_Unknown = 0xBAD00005,
	GFSDK_Aftermath_Result_FAIL_ApiError = 0xBAD00006,
	GFSDK_Aftermath_Result_FAIL_NvApiIncompatible = 0xBAD00007,
	GFSDK_Aftermath_Result_FAIL_GettingContextDataWithNewCommandList = 0xBAD00008,
	GFSDK_Aftermath_Result_FAIL_AlreadyInitialized = 0xBAD00009,
	GFSDK_Aftermath_Result_FAIL_D3DDebugLayerNotCompatible = 0xBAD0000A,
	GFSDK_Aftermath_Result_FAIL_DriverInitFailed = 0xBAD0000B,
	GFSDK_Aftermath_Result_FAIL_DriverVersionNotSupported = 0xBAD0000C,
	GFSDK_Aftermath_Result_FAIL_OutOfMemory = 0xBAD0000D,
	GFSDK_Aftermath_Result_FAIL_GetDataOnBundle = 0xBAD0000E,
	GFSDK_Aftermath_Result_FAIL_GetDataOnDeferredContext = 0xBAD0000F,
	GFSDK_Aftermath_Result_FAIL_FeatureNotEnabled = 0xBAD00010,
	GFSDK_Aftermath_Result_FAIL_NoResourcesRegistered = 0xBAD00011,
	GFSDK_Aftermath_Result_FAIL_ThisResourceNeverRegistered = 0xBAD00012,
	GFSDK_Aftermath_Result_FAIL_NotSupportedInUWP = 0xBAD00013,
	GFSDK_Aftermath_Result_FAIL_D3dDllNotSupported = 0xBAD00014,
	GFSDK_Aftermath_Result_FAIL_D3dDllInterceptionNotSupported = 0xBAD00015,
	GFSDK_Aftermath_Result_FAIL_Disabled = 0xBAD00016
};