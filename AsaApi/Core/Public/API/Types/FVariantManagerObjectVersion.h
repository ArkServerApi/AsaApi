#pragma once


namespace FVariantManagerObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		CorrectSerializationOfFNameBytes = 0x1,
		CategoryFlagsAndManualDisplayText = 0x2,
		CorrectSerializationOfFStringBytes = 0x3,
		SerializePropertiesAsNames = 0x4,
		StoreDisplayOrder = 0x5,
		VersionPlusOne = 0x6,
		LatestVersion = 0x5
	};
}