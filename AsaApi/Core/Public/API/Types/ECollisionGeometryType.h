#pragma once


enum class ECollisionGeometryType:int
{
	KeepExisting = 0x0,
	AlignedBoxes = 0x1,
	OrientedBoxes = 0x2,
	MinimalSpheres = 0x3,
	Capsules = 0x4,
	ConvexHulls = 0x5,
	SweptHulls = 0x6,
	LevelSets = 0x7,
	MinVolume = 0xA,
	None = 0xB
};