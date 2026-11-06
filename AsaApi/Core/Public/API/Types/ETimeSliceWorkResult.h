#pragma once


enum class ETimeSliceWorkResult:unsigned char
{
	Failed = 0x0,
	Succeeded = 0x1,
	CallAgainNextTimeSlice = 0x2
};