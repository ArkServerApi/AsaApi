#pragma once


enum class GFSDK_Aftermath_Context_Status:unsigned int
{
	GFSDK_Aftermath_Context_Status_NotStarted = 0x0,
	GFSDK_Aftermath_Context_Status_Executing = 0x1,
	GFSDK_Aftermath_Context_Status_Finished = 0x2,
	GFSDK_Aftermath_Context_Status_Invalid = 0x3
};