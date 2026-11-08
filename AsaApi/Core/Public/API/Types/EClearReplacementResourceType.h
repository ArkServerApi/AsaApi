#pragma once


enum class EClearReplacementResourceType:int
{
	Buffer = 0x0,
	Texture2D = 0x1,
	Texture2DArray = 0x2,
	Texture3D = 0x3,
	StructuredBuffer = 0x4,
	LargeBuffer = 0x5
};