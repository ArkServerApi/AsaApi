#pragma once


enum class EUserDefinedStructureStatus:int
{
	UDSS_UpToDate = 0x0,
	UDSS_Dirty = 0x1,
	UDSS_Error = 0x2,
	UDSS_Duplicate = 0x3,
	UDSS_MAX = 0x4
};