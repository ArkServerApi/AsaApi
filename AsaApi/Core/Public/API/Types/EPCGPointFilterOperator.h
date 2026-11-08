#pragma once


enum class EPCGPointFilterOperator:unsigned char
{
	Greater = 0x0,
	GreaterOrEqual = 0x1,
	Lesser = 0x2,
	LesserOrEqual = 0x3,
	Equal = 0x4,
	NotEqual = 0x5
};