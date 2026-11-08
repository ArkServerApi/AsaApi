#pragma once


enum class EHoudiniRuntimeSettingsRecomputeFlag:int
{
	HRSRF_Always = 0x0,
	HRSRF_OnlyIfMissing = 0x1,
	HRSRF_Never = 0x2,
	HRSRF_MAX = 0x3
};