#pragma once


namespace FVirtualProductionObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		SupportAjaLTCPin = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}