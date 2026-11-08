#pragma once


enum class EDynamicResolutionStatus:int
{
	Unsupported = 0x0,
	Disabled = 0x1,
	Paused = 0x2,
	Enabled = 0x3,
	DebugForceEnabled = 0x4
};