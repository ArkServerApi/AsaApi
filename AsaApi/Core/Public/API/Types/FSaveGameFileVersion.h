#pragma once


namespace FSaveGameFileVersion
{
	enum Type:int
	{
		InitialVersion = 0x1,
		AddedCustomVersions = 0x2,
		PackageFileSummaryVersionChange = 0x3,
		VersionPlusOne = 0x4,
		LatestVersion = 0x3
	};
}