#pragma once


namespace FIKRigObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		RetargetPoseQuatPostMultiplied = 0x1,
		ChainSettingsConvertedToStruct = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2
	};
}