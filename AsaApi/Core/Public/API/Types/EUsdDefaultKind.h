#pragma once


enum class EUsdDefaultKind:int
{
	None = 0x0,
	Model = 0x1,
	Component = 0x2,
	Group = 0x4,
	Assembly = 0x8,
	Subcomponent = 0x10
};