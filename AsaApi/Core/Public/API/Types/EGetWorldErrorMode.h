#pragma once


enum class EGetWorldErrorMode:int
{
	ReturnNull = 0x0,
	LogAndReturnNull = 0x1,
	Assert = 0x2
};