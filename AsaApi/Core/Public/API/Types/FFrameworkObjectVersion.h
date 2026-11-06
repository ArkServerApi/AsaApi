#pragma once


namespace FFrameworkObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		UseBodySetupCollisionProfile = 0x1,
		AnimBlueprintSubgraphFix = 0x2,
		MeshSocketScaleUtilization = 0x3,
		ExplicitAttachmentRules = 0x4,
		MoveCompressedAnimDataToTheDDC = 0x5,
		FixNonTransactionalPins = 0x6,
		SmartNameRefactor = 0x7,
		AddSourceReferenceSkeletonToRig = 0x8,
		ConstraintInstanceBehaviorParameters = 0x9,
		PoseAssetSupportPerBoneMask = 0xA,
		PhysAssetUseSkeletalBodySetup = 0xB,
		RemoveSoundWaveCompressionName = 0xC,
		AddInternalClothingGraphicalSkinning = 0xD,
		WheelOffsetIsFromWheel = 0xE,
		MoveCurveTypesToSkeleton = 0xF,
		CacheDestructibleOverlaps = 0x10,
		GeometryCacheMissingMaterials = 0x11,
		LODsUseResolutionIndependentScreenSize = 0x12,
		BlendSpacePostLoadSnapToGrid = 0x13,
		SupportBlendSpaceRateScale = 0x14,
		LODHysteresisUseResolutionIndependentScreenSize = 0x15,
		ChangeAudioComponentOverrideSubtitlePriorityDefault = 0x16,
		HardSoundReferences = 0x17,
		EnforceConstInAnimBlueprintFunctionGraphs = 0x18,
		InputKeySelectorTextStyle = 0x19,
		EdGraphPinContainerType = 0x1A,
		ChangeAssetPinsToString = 0x1B,
		LocalVariablesBlueprintVisible = 0x1C,
		RemoveUField_Next = 0x1D,
		UserDefinedStructsBlueprintVisible = 0x1E,
		PinsStoreFName = 0x1F,
		UserDefinedStructsStoreDefaultInstance = 0x20,
		FunctionTerminatorNodesUseMemberReference = 0x21,
		EditableEventsUseConstRefParameters = 0x22,
		BlueprintGeneratedClassIsAlwaysAuthoritative = 0x23,
		EnforceBlueprintFunctionVisibility = 0x24,
		StoringUCSSerializationIndex = 0x25,
		VersionPlusOne = 0x26,
		LatestVersion = 0x25
	};
}