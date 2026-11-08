#pragma once


enum class EViewTargetBlendFunction:int
{
	VTBlend_Linear = 0x0,
	VTBlend_Cubic = 0x1,
	VTBlend_EaseIn = 0x2,
	VTBlend_EaseOut = 0x3,
	VTBlend_EaseInOut = 0x4,
	VTBlend_PreBlended = 0x5,
	VTBlend_MAX = 0x6
};