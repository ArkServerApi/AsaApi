#pragma once


enum class EBlueprintStatus:int
{
	BS_Unknown = 0x0,
	BS_Dirty = 0x1,
	BS_Error = 0x2,
	BS_UpToDate = 0x3,
	BS_BeingCreated = 0x4,
	BS_UpToDateWithWarnings = 0x5,
	BS_MAX = 0x6
};