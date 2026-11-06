#pragma once


namespace FFoliageCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		FoliageUsingHierarchicalISMC = 0x1,
		HierarchicalISMCNonTransactional = 0x2,
		AddedFoliageTypeUpdateGuid = 0x3,
		ProceduralGuid = 0x4,
		CrossLevelBase = 0x5,
		FoliageTypeCustomization = 0x6,
		FoliageTypeCustomizationScaling = 0x7,
		FoliageTypeProceduralScaleAndShade = 0x8,
		FoliageHISMCBlueprints = 0x9,
		AddedMobility = 0xA,
		FoliageUsingFoliageISMC = 0xB,
		FoliageActorSupport = 0xC,
		FoliageActorSupportNoWeakPtr = 0xD,
		FoliageRepairInstancesWithLevelTransform = 0xE,
		FoliageDiscardOnLoad = 0xF,
		VersionPlusOne = 0x10,
		LatestVersion = 0xF
	};
}