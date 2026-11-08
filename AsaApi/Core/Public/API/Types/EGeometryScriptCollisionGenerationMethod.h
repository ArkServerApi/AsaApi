#pragma once


enum class EGeometryScriptCollisionGenerationMethod:unsigned char
{
	AlignedBoxes = 0x0,
	OrientedBoxes = 0x1,
	MinimalSpheres = 0x2,
	Capsules = 0x3,
	ConvexHulls = 0x4,
	SweptHulls = 0x5,
	MinVolumeShapes = 0x6
};