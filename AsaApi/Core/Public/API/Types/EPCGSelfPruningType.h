#pragma once


enum class EPCGSelfPruningType:unsigned char
{
	LargeToSmall = 0x0,
	SmallToLarge = 0x1,
	AllEqual = 0x2,
	None = 0x3,
	RemoveDuplicates = 0x4
};