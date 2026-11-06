#pragma once


enum class EImportanceLevel:int
{
	IL_Off = 0x0,
	IL_Lowest = 0x1,
	IL_Low = 0x2,
	IL_Normal = 0x3,
	IL_High = 0x4,
	IL_Highest = 0x5,
	TEMP_BROKEN2 = 0x6,
	EImportanceLevel_MAX = 0x7
};