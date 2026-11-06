#pragma once


namespace FUE5PrivateFrostyStreamObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		HLODBatchingPolicy = 0x1,
		SerializeSceneComponentStaticBounds = 0x2,
		ChaosClothAddTethersToCachedData = 0x3,
		SerializeActorLabelInCookedBuilds = 0x4,
		ConvertWorldPartitionHLODsCellsToName = 0x5,
		ChaosClothRemoveKinematicTethers = 0x6,
		SerializeSkeletalMeshMorphTargetRenderData = 0x7,
		StripMorphTargetSourceDataForCookedBuilds = 0x8,
		VersionPlusOne = 0x9,
		LatestVersion = 0x8
	};
}