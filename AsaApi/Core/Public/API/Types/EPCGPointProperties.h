#pragma once


enum class EPCGPointProperties:unsigned char
{
	Density = 0x0,
	BoundsMin = 0x1,
	BoundsMax = 0x2,
	Extents = 0x3,
	Color = 0x4,
	Position = 0x5,
	Rotation = 0x6,
	Scale = 0x7,
	Transform = 0x8,
	Steepness = 0x9,
	LocalCenter = 0xA
};