#pragma once


namespace FEditorObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		GatheredTextProcessVersionFlagging = 0x1,
		GatheredTextPackageCacheFixesV1 = 0x2,
		RootMetaDataSupport = 0x3,
		GatheredTextPackageCacheFixesV2 = 0x4,
		TextFormatArgumentDataIsVariant = 0x5,
		SplineComponentCurvesInStruct = 0x6,
		ComboBoxControllerSupportUpdate = 0x7,
		RefactorMeshEditorMaterials = 0x8,
		AddedFontFaceAssets = 0x9,
		UPropertryForMeshSection = 0xA,
		WidgetGraphSchema = 0xB,
		AddedBackgroundBlurContentSlot = 0xC,
		StableUserDefinedEnumDisplayNames = 0xD,
		AddedInlineFontFaceAssets = 0xE,
		UPropertryForMeshSectionSerialize = 0xF,
		FastWidgetTemplates = 0x10,
		MaterialThumbnailRenderingChanges = 0x11,
		NewSlateClippingSystem = 0x12,
		MovieSceneMetaDataSerialization = 0x13,
		GatheredTextEditorOnlyPackageLocId = 0x14,
		AddedAlwaysSignNumberFormattingOption = 0x15,
		AddedMaterialSharedInputs = 0x16,
		AddedMorphTargetSectionIndices = 0x17,
		SerializeInstancedStaticMeshRenderData = 0x18,
		MeshDescriptionNewSerialization_MovedToRelease = 0x19,
		MeshDescriptionNewAttributeFormat = 0x1A,
		ChangeSceneCaptureRootComponent = 0x1B,
		StaticMeshDeprecatedRawMesh = 0x1C,
		MeshDescriptionBulkDataGuid = 0x1D,
		MeshDescriptionRemovedHoles = 0x1E,
		ChangedWidgetComponentWindowVisibilityDefault = 0x1F,
		CultureInvariantTextSerializationKeyStability = 0x20,
		ScrollBarThicknessChange = 0x21,
		RemoveLandscapeHoleMaterial = 0x22,
		MeshDescriptionTriangles = 0x23,
		ComputeWeightedNormals = 0x24,
		SkeletalMeshBuildRefactor = 0x25,
		SkeletalMeshMoveEditorSourceDataToPrivateAsset = 0x26,
		NumberParsingOptionsNumberLimitsAndClamping = 0x27,
		SkeletalMeshSourceDataSupport16bitOfMaterialNumber = 0x28,
		VersionPlusOne = 0x29,
		LatestVersion = 0x28
	};
}