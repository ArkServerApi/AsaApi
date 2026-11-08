#pragma once


namespace FAnimObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		LinkTimeAnimBlueprintRootDiscovery = 0x1,
		StoreMarkerNamesOnSkeleton = 0x2,
		SerializeRigVMRegisterArrayState = 0x3,
		IncreaseBoneIndexLimitPerChunk = 0x4,
		UnlimitedBoneInfluences = 0x5,
		AnimSequenceCurveColors = 0x6,
		NotifyAndSyncMarkerGuids = 0x7,
		SerializeRigVMRegisterDynamicState = 0x8,
		SerializeGroomCards = 0x9,
		SerializeRigVMEntries = 0xA,
		SerializeHairBindingAsset = 0xB,
		SerializeHairClusterCullingData = 0xC,
		SerializeGroomCardsAndMeshes = 0xD,
		GroomLODStripping = 0xE,
		GroomBindingSerialization = 0xF,
		VersionPlusOne = 0x10,
		LatestVersion = 0xF
	};
}