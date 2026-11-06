#pragma once


namespace EWorkingColorSpace
{
	enum Type:int
	{
		sRGB = 0x1,
		Rec2020 = 0x2,
		ACESAP0 = 0x3,
		ACESAP1 = 0x4,
		P3DCI = 0x5,
		P3D65 = 0x6,
		Custom = 0x7
	};
}