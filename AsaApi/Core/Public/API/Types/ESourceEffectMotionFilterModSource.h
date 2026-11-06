#pragma once


enum class ESourceEffectMotionFilterModSource:unsigned char
{
	DistanceFromListener = 0x0,
	SpeedRelativeToListener = 0x1,
	SpeedOfSourceEmitter = 0x2,
	SpeedOfListener = 0x3,
	SpeedOfAngleDelta = 0x4,
	Count = 0x5
};