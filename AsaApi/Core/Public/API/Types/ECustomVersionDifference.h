#pragma once


enum class ECustomVersionDifference:int
{
	Missing = 0x0,
	Newer = 0x1,
	Older = 0x2,
	Invalid = 0x3
};