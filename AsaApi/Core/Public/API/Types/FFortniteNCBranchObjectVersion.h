#pragma once


namespace FFortniteNCBranchObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		AddedWorldDataLayersActorDesc = 0x1,
		FixedDataLayerInstanceDesc = 0x2,
		WorldPartitionActorDescSerializeDataLayerAssets = 0x3,
		RemappedEvaluateWorldPositionOffsetInRayTracing = 0x4,
		WorldPartitionActorDescNativeBaseClassSerialization = 0x5,
		WorldPartitionActorDescTagsSerialization = 0x6,
		WorldPartitionActorDescPropertyMapSerialization = 0x7,
		AddShapeIsProbe = 0x8,
		PhysicsAssetNewSolverSettings = 0x9,
		ChaosGeometryCollectionSaveLevelsAttribute = 0xA,
		VersionPlusOne = 0xB,
		LatestVersion = 0xA
	};
}