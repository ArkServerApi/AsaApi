#pragma once


enum class EHoudiniRuntimeSettingsSessionType:int
{
	HRSST_InProcess = 0x0,
	HRSST_Socket = 0x1,
	HRSST_NamedPipe = 0x2,
	HRSST_None = 0x3,
	HRSST_MAX = 0x4
};