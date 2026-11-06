#pragma once


namespace FCoreObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		MaterialInputNativeSerialize = 0x1,
		EnumProperties = 0x2,
		SkeletalMaterialEditorDataStripping = 0x3,
		FProperties = 0x4,
		VersionPlusOne = 0x5,
		LatestVersion = 0x4
	};
}