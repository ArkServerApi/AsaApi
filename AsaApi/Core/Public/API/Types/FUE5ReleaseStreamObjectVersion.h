#pragma once


namespace FUE5ReleaseStreamObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		ReflectionMethodEnum = 0x1,
		WorldPartitionActorDescSerializeHLODInfo = 0x2,
		RemovingTessellation = 0x3,
		LevelInstanceSerializeRuntimeBehavior = 0x4,
		PoseAssetRuntimeRefactor = 0x5,
		WorldPartitionActorDescSerializeActorFolderPath = 0x6,
		HairStrandsVertexFormatChange = 0x7,
		AddChaosMaxLinearAngularSpeed = 0x8,
		PackedLevelInstanceVersion = 0x9,
		PackedLevelInstanceBoundsFix = 0xA,
		CustomPropertyAnimGraphNodesUseOptionalPinManager = 0xB,
		TextFormatArgumentData64bitSupport = 0xC,
		MaterialLayerStacksAreNotParameters = 0xD,
		MaterialInterfaceSavedCachedData = 0xE,
		AddClothMappingLODBias = 0xF,
		AddLevelActorPackagingScheme = 0x10,
		WorldPartitionActorDescSerializeAttachParent = 0x11,
		ConvertedActorGridPlacementToSpatiallyLoadedFlag = 0x12,
		ActorGridPlacementDeprecateDefaultValueFixup = 0x13,
		PackedLevelActorUseWorldPartitionActorDesc = 0x14,
		AddLevelActorFolders = 0x15,
		RemoveSkeletalMeshLODModelBulkDatas = 0x16,
		ExcludeBrightnessFromEncodedHDRCubemap = 0x17,
		VolumetricCloudSampleCountUnification = 0x18,
		PoseAssetRawDataGUID = 0x19,
		ConvolutionBloomIntensity = 0x1A,
		WorldPartitionHLODActorDescSerializeHLODSubActors = 0x1B,
		LargeWorldCoordinates = 0x1C,
		BlueprintPinsUseRealNumbers = 0x1D,
		UpdatedDirectionalLightShadowDefaults = 0x1E,
		GeometryCollectionConvexDefaults = 0x1F,
		ChaosClothFasterDamping = 0x20,
		WorldPartitionLandscapeActorDescSerializeLandscapeActorGuid = 0x21,
		AddedInertiaTensorAndRotationOfMassAddedToConvex = 0x22,
		ChaosInertiaConvertedToVec3 = 0x23,
		SerializeFloatPinDefaultValuesAsSinglePrecision = 0x24,
		AnimLayeredBoneBlendMasks = 0x25,
		StoreReflectionCaptureEncodedHDRDataInRG11B10Format = 0x26,
		RawAnimSequenceTrackSerializer = 0x27,
		RemoveDuplicatedStyleInfo = 0x28,
		LinkedAnimGraphMemberReference = 0x29,
		VersionPlusOne = 0x2A,
		LatestVersion = 0x29
	};
}