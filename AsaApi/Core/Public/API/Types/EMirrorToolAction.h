#pragma once


enum class EMirrorToolAction:int
{
	NoAction = 0x0,
	ShiftToCenter = 0x1,
	Left = 0x2,
	Right = 0x3,
	Up = 0x4,
	Down = 0x5,
	Forward = 0x6,
	Backward = 0x7
};