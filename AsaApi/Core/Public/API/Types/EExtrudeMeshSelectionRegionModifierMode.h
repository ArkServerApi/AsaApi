#pragma once


enum class EExtrudeMeshSelectionRegionModifierMode:unsigned char
{
	OriginalShape = 0x0,
	FlattenToPlane = 0x1,
	RaycastToPlane = 0x2
};