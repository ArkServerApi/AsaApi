#pragma once


enum class EDragPivot:unsigned char
{
	MouseDown = 0x0,
	TopLeft = 0x1,
	TopCenter = 0x2,
	TopRight = 0x3,
	CenterLeft = 0x4,
	CenterCenter = 0x5,
	CenterRight = 0x6,
	BottomLeft = 0x7,
	BottomCenter = 0x8,
	BottomRight = 0x9
};