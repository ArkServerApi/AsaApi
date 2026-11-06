#pragma once


enum class EControlRigInteractionType:unsigned char
{
	None = 0x0,
	Translate = 0x1,
	Rotate = 0x2,
	Scale = 0x4,
	All = 0x7
};