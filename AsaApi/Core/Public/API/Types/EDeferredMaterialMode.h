#pragma once


enum class EDeferredMaterialMode:int
{
	None = 0x0,
	Gather = 0x1,
	Shade = 0x2,
	Reorder = 0x3,
	MAX = 0x4
};