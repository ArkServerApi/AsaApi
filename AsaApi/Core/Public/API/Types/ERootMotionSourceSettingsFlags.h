#pragma once


enum class ERootMotionSourceSettingsFlags:unsigned char
{
	UseSensitiveLiftoffCheck = 0x1,
	DisablePartialEndTick = 0x2,
	IgnoreZAccumulate = 0x4
};