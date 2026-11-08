#pragma once


enum class EEulerRotationOrder:unsigned char
{
	XYZ = 0x0,
	XZY = 0x1,
	YXZ = 0x2,
	YZX = 0x3,
	ZXY = 0x4,
	ZYX = 0x5
};