#pragma once


enum class EGenericAICheck:unsigned char
{
	Less = 0x0,
	LessOrEqual = 0x1,
	Equal = 0x2,
	NotEqual = 0x3,
	GreaterOrEqual = 0x4,
	Greater = 0x5,
	IsTrue = 0x6,
	MAX = 0x7
};