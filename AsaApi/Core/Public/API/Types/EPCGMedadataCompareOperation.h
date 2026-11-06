#pragma once


enum class EPCGMedadataCompareOperation:unsigned short
{
	Equal = 0x0,
	NotEqual = 0x1,
	Greater = 0x2,
	GreaterOrEqual = 0x3,
	Less = 0x4,
	LessOrEqual = 0x5
};