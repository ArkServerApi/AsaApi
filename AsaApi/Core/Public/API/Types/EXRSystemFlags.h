#pragma once


namespace EXRSystemFlags
{
	enum Type:int
	{
		NoFlags = 0x0,
		IsAR = 0x1,
		IsTablet = 0x2,
		IsHeadMounted = 0x4,
		SupportsHandTracking = 0x8
	};
}