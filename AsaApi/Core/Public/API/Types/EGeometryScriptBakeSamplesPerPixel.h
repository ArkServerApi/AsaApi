#pragma once


enum class EGeometryScriptBakeSamplesPerPixel:unsigned char
{
	Sample1 = 0x0,
	Sample4 = 0x1,
	Sample16 = 0x2,
	Sample64 = 0x3,
	Samples256 = 0x4
};