#pragma once


enum class ERecomputeUVsPropertiesLayoutType:int
{
	None = 0x0,
	Repack = 0x1,
	NormalizeToExistingBounds = 0x2,
	NormalizeToBounds = 0x3,
	NormalizeToWorld = 0x4
};