#pragma once


enum class EDynamicBoxType:unsigned char
{
	Horizontal = 0x0,
	Vertical = 0x1,
	Wrap = 0x2,
	VerticalWrap = 0x3,
	Radial = 0x4,
	Overlay = 0x5
};