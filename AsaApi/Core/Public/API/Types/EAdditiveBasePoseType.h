#pragma once


enum class EAdditiveBasePoseType:int
{
	ABPT_None = 0x0,
	ABPT_RefPose = 0x1,
	ABPT_AnimScaled = 0x2,
	ABPT_AnimFrame = 0x3,
	ABPT_LocalAnimFrame = 0x4,
	ABPT_MAX = 0x5
};