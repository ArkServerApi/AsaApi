#pragma once


enum class AnimationKeyFormat:int
{
	AKF_ConstantKeyLerp = 0x0,
	AKF_VariableKeyLerp = 0x1,
	AKF_PerTrackCompression = 0x2,
	AKF_MAX = 0x3
};