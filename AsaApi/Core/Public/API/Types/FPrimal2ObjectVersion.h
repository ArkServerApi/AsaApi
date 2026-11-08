#pragma once


namespace FPrimal2ObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		FirstVersion = 0x1,
		AddingDynamicCustomDataOutputMaterial = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}