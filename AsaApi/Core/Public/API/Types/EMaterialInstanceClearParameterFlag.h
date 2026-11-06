#pragma once


enum class EMaterialInstanceClearParameterFlag:int
{
	None = 0x0,
	Numeric = 0x1,
	Texture = 0x2,
	Static = 0x4,
	AllNonStatic = 0x3,
	All = 0x7
};