#pragma once


namespace ERootMotionMode
{
	enum Type:int
	{
		NoRootMotionExtraction = 0x0,
		IgnoreRootMotion = 0x1,
		RootMotionFromEverything = 0x2,
		RootMotionFromMontagesOnly = 0x3
	};
}