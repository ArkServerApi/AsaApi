#pragma once


enum class EInputEvent:int
{
	IE_Pressed = 0x0,
	IE_Released = 0x1,
	IE_Repeat = 0x2,
	IE_DoubleClick = 0x3,
	IE_Axis = 0x4,
	IE_MAX = 0x5
};