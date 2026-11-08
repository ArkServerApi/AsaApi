#pragma once


enum class EConfigLayerFlags:int
{
	None = 0x0,
	AllowCommandLineOverride = 0x2,
	DedicatedServerOnly = 0x4,
	NoExpand = 0x10,
	RequiresCustomConfig = 0x20
};