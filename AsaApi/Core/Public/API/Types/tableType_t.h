#pragma once


enum class tableType_t:int
{
	clearedTable = 0x0,
	byPtr = 0x1,
	byU32 = 0x2,
	byU16 = 0x3
};