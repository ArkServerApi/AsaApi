#pragma once


enum class ODSCRecompileCommand:int
{
	None = 0x0,
	Changed = 0x1,
	Global = 0x2,
	Material = 0x3,
	SingleShader = 0x4
};