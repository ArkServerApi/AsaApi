#pragma once


namespace FBuildObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		VersionPlusOne = 0x1,
		LatestVersion = 0x0
	};
}