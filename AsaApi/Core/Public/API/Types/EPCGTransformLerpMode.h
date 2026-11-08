#pragma once


enum class EPCGTransformLerpMode:unsigned short
{
	QuatInterp = 0x0,
	EulerInterp = 0x1,
	DualQuatInterp = 0x2
};