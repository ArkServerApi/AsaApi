#pragma once


enum class EPCGUnionType:unsigned char
{
	LeftToRightPriority = 0x0,
	RightToLeftPriority = 0x1,
	KeepAll = 0x2
};