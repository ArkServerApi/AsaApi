#pragma once


namespace FEnterpriseObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		FixSerializationOfBulkAndExtraData = 0x1,
		BookmarkExtensibilityUpgrade = 0x2,
		MediaFrameworkUserDataLazyObject = 0x3,
		LiveLinkTimeSynchronization = 0x4,
		AjaMediaConfiguration = 0x5,
		HasUDataprepRecipe = 0x6,
		HasUDatatprepAssetInterface = 0x7,
		MeshDescriptionBulkDataGuidIsHash = 0x8,
		LiveLinkControllerSplitPerRole = 0x9,
		CoreTechParametricSurfaceOptim = 0xA,
		VersionPlusOne = 0xB,
		LatestVersion = 0xA
	};
}