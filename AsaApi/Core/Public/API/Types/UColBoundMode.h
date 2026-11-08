#pragma once


enum class UColBoundMode:int
{
	UCOL_BOUND_LOWER = 0x0,
	UCOL_BOUND_UPPER = 0x1,
	UCOL_BOUND_UPPER_LONG = 0x2,
	UCOL_BOUND_VALUE_COUNT = 0x3
};