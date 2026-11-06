#pragma once


namespace FWorldSettingCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		DeprecatedEnableHierarchicalLODSystem = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}