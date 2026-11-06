#pragma once


enum class EHLODLevelExclusion:unsigned char
{
	HLOD0 = 0x1,
	HLOD1 = 0x2,
	HLOD2 = 0x4,
	HLOD3 = 0x8,
	HLOD4 = 0x10,
	HLOD5 = 0x20,
	HLOD6 = 0x40,
	HLOD7 = 0x80
};