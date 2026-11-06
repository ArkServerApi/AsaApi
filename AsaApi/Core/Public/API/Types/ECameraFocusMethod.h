#pragma once


enum class ECameraFocusMethod:unsigned char
{
	DoNotOverride = 0x0,
	Manual = 0x1,
	Tracking = 0x2,
	Disable = 0x3,
	MAX = 0x4
};