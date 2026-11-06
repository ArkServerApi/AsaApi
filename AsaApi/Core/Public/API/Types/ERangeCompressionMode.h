#pragma once


enum class ERangeCompressionMode:int
{
	RCM_UNorm = 0x0,
	RCM_SNorm = 0x1,
	RCM_MinMaxNorm = 0x2,
	RCM_MinMax = 0x3
};