#pragma once


enum class EBuildPatchDownloadHealth:int
{
	Disconnected = 0x0,
	Poor = 0x1,
	OK = 0x2,
	Good = 0x3,
	Excellent = 0x4,
	NUM_Values = 0x5
};