#pragma once


enum class EGroomInterpolationType:unsigned char
{
	None = 0x0,
	RigidTransform = 0x2,
	OffsetTransform = 0x4,
	SmoothTransform = 0x8
};