#pragma once


enum class EAspectRatioAxisConstraint:int
{
	AspectRatio_MaintainYFOV = 0x0,
	AspectRatio_MaintainXFOV = 0x1,
	AspectRatio_MajorAxisFOV = 0x2,
	AspectRatio_MAX = 0x3
};