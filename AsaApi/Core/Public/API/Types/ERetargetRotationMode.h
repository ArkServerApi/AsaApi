#pragma once


enum class ERetargetRotationMode:unsigned char
{
	Interpolated = 0x0,
	OneToOne = 0x1,
	OneToOneReversed = 0x2,
	None = 0x3
};