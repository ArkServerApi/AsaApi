#pragma once


enum class EComparisonOp:int
{
	ECO_Unknown = 0x0,
	ECO_Equal = 0x1,
	ECO_NotEqual = 0x2,
	ECO_Larger = 0x3,
	ECO_LargerThan = 0x4,
	ECO_Smaller = 0x5,
	ECO_SmallerThan = 0x6
};