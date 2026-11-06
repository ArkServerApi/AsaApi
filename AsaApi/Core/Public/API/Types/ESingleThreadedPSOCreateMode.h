#pragma once


enum class ESingleThreadedPSOCreateMode:int
{
	None = 0x0,
	All = 0x1,
	Precompile = 0x2,
	NonPrecompiled = 0x3
};