#pragma once


namespace EEasingFunc
{
	enum Type:int
	{
		Linear = 0x0,
		Step = 0x1,
		SinusoidalIn = 0x2,
		SinusoidalOut = 0x3,
		SinusoidalInOut = 0x4,
		EaseIn = 0x5,
		EaseOut = 0x6,
		EaseInOut = 0x7,
		ExpoIn = 0x8,
		ExpoOut = 0x9,
		ExpoInOut = 0xA,
		CircularIn = 0xB,
		CircularOut = 0xC,
		CircularInOut = 0xD
	};
}