#pragma once


namespace FMediaFrameworkObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		SerializeGUIDsInMediaSourceInsteadOfPlainNames = 0x1,
		SerializeGUIDsInPlatformMediaSourceInsteadOfPlainNames = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}