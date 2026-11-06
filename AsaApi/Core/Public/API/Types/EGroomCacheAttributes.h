#pragma once


enum class EGroomCacheAttributes:unsigned char
{
	None = 0x0,
	Position = 0x1,
	Width = 0x2,
	Color = 0x4,
	PositionWidth = 0x3,
	PositionColor = 0x5,
	WidthColor = 0x5,
	PositionWidthColor = 0x7
};