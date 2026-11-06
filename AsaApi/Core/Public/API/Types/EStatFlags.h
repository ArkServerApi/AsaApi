#pragma once


enum class EStatFlags:unsigned char
{
	None = 0x0,
	ClearEveryFrame = 0x1,
	CycleStat = 0x2,
	Verbose = 0x4
};