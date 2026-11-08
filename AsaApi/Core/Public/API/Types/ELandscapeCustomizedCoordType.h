#pragma once


enum class ELandscapeCustomizedCoordType:int
{
	LCCT_None = 0x0,
	LCCT_CustomUV0 = 0x1,
	LCCT_CustomUV1 = 0x2,
	LCCT_CustomUV2 = 0x3,
	LCCT_WeightMapUV = 0x4,
	LCCT_MAX = 0x5
};