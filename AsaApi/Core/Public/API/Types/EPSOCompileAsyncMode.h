#pragma once


enum class EPSOCompileAsyncMode:int
{
	None = 0x0,
	All = 0x1,
	Precompile = 0x2,
	NonPrecompiled = 0x3
};