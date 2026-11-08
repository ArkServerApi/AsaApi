#pragma once


enum class EMediaPlateEventState:unsigned char
{
	Play = 0x0,
	Open = 0x1,
	Close = 0x2,
	Pause = 0x3,
	Reverse = 0x4,
	Forward = 0x5,
	Rewind = 0x6,
	MAX = 0x7
};