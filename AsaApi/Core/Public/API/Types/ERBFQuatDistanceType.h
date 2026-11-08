#pragma once


enum class ERBFQuatDistanceType:unsigned char
{
	Euclidean = 0x0,
	ArcLength = 0x1,
	SwingAngle = 0x2,
	TwistAngle = 0x3
};