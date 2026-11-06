#pragma once


enum class EWorldPositionIncludedOffsets:int
{
	WPT_Default = 0x0,
	WPT_ExcludeAllShaderOffsets = 0x1,
	WPT_CameraRelative = 0x2,
	WPT_CameraRelativeNoOffsets = 0x3,
	WPT_MAX = 0x4
};