#pragma once


namespace FFortniteReleaseBranchCustomObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		DisableLevelset_v14_10 = 0x1,
		ChaosClothAddTethersToCachedData = 0x2,
		ChaosKinematicTargetRemoveScale = 0x3,
		ActorComponentUCSModifiedPropertiesSparseStorage = 0x4,
		FixupNaniteLandscapeMeshes = 0x5,
		RemoveUselessLandscapeMeshesCookedCollisionData = 0x6,
		VersionPlusOne = 0x7,
		LatestVersion = 0x6
	};
}