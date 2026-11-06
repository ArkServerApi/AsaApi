#pragma once


enum class ERBFDistanceMethod:unsigned char
{
	Euclidean = 0x0,
	Quaternion = 0x1,
	SwingAngle = 0x2,
	TwistAngle = 0x3,
	DefaultMethod = 0x4
};