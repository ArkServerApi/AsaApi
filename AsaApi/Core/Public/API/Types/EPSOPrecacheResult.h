#pragma once


enum class EPSOPrecacheResult:int
{
	Unknown = 0x0,
	Active = 0x1,
	Complete = 0x2,
	Missed = 0x3,
	TooLate = 0x4,
	NotSupported = 0x5,
	Untracked = 0x6
};