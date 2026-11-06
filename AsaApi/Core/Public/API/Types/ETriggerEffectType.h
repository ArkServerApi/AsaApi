#pragma once


enum class ETriggerEffectType:unsigned char
{
	None = 0x0,
	Feedback = 0x1,
	Weapon = 0x2,
	Slope = 0x3,
	Vibration = 0x4,
	VibrationSlope = 0x5
};