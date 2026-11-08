#pragma once


enum class ENGXBinariesSearchOrder:int
{
	MinValue = 0x0,
	CustomThenGeneric = 0x0,
	ForceGeneric = 0x1,
	ForceCustom = 0x2,
	ForceDevelopmentGeneric = 0x3,
	MaxValue = 0x3
};