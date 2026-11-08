#pragma once


enum class EResizingAxis:unsigned char
{
	None = 0x0,
	LeftRightMask = 0x1,
	UpDownMask = 0x10,
	CrossMask = 0x11
};