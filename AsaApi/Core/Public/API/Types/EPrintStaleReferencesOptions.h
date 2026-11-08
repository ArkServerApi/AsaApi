#pragma once


enum class EPrintStaleReferencesOptions:int
{
	None = 0x0,
	Log = 0x1,
	Display = 0x2,
	Warning = 0x3,
	Error = 0x4,
	Fatal = 0x5,
	Ensure = 0x100,
	Minimal = 0x200,
	VerbosityMask = 0xFF
};