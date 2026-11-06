#pragma once


namespace ESplinePointType
{
	enum Type:int
	{
		Linear = 0x0,
		Curve = 0x1,
		Constant = 0x2,
		CurveClamped = 0x3,
		CurveCustomTangent = 0x4
	};
}