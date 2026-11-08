#pragma once


namespace FParticleSystemCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		SkipCookingEmittersBasedOnDetailMode = 0x1,
		FixLegacySpawningBugs = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}