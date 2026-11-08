#pragma once


enum class ECubeGridToolFaceSelectionMode:int
{
	OutsideBasedOnNormal = 0x0,
	InsideBasedOnNormal = 0x1,
	OutsideBasedOnViewRay = 0x2,
	InsideBasedOnViewRay = 0x3
};