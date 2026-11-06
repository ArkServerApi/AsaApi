#pragma once


namespace FLoadTimesObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		UncompressedReflectionCapturesForCookedBuilds = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}