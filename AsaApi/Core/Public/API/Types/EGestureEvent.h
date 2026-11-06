#pragma once


enum class EGestureEvent:unsigned char
{
	None = 0x0,
	Scroll = 0x1,
	Magnify = 0x2,
	Swipe = 0x3,
	Rotate = 0x4,
	LongPress = 0x5,
	Count = 0x6
};