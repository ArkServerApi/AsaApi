#pragma once


enum class EConfigExpansionFlags:int
{
	None = 0x0,
	ForUncooked = 0x1,
	ForCooked = 0x2,
	ForPlugin = 0x4,
	All = 0xFF
};