#pragma once


namespace EOnlineComparisonOp
{
	enum Type:int
	{
		Equals = 0x0,
		NotEquals = 0x1,
		GreaterThan = 0x2,
		GreaterThanEquals = 0x3,
		LessThan = 0x4,
		LessThanEquals = 0x5,
		Near = 0x6,
		In = 0x7,
		NotIn = 0x8
	};
}