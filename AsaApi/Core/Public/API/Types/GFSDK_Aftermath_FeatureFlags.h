#pragma once


enum class GFSDK_Aftermath_FeatureFlags:unsigned int
{
	GFSDK_Aftermath_FeatureFlags_Minimum = 0x0,
	GFSDK_Aftermath_FeatureFlags_EnableMarkers = 0x1,
	GFSDK_Aftermath_FeatureFlags_EnableResourceTracking = 0x2,
	GFSDK_Aftermath_FeatureFlags_CallStackCapturing = 0x40000000,
	GFSDK_Aftermath_FeatureFlags_GenerateShaderDebugInfo = 0x8,
	GFSDK_Aftermath_FeatureFlags_EnableShaderErrorReporting = 0x10,
	GFSDK_Aftermath_FeatureFlags_Maximum = 0x4000001B
};