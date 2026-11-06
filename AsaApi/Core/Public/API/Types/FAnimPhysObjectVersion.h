#pragma once


namespace FAnimPhysObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		ConvertAnimNodeLookAtAxis = 0x1,
		BoxSphylElemsUseRotators = 0x2,
		ThumbnailSceneInfoAndAssetImportDataAreTransactional = 0x3,
		AddedClothingMaskWorkflow = 0x4,
		RemoveUIDFromSmartNameSerialize = 0x5,
		CreateTargetReference = 0x6,
		TuneSoftLimitStiffnessAndDamping = 0x7,
		FixInvalidClothParticleMasses = 0x8,
		CacheClothMeshInfluences = 0x9,
		SmartNameRefactorForDeterministicCooking = 0xA,
		RenameDisableAnimCurvesToAllowAnimCurveEvaluation = 0xB,
		AddLODToCurveMetaData = 0xC,
		FixupBadBlendProfileReferences = 0xD,
		AllowMultipleAudioPluginSettings = 0xE,
		ChangeRetargetSourceReferenceToSoftObjectPtr = 0xF,
		SaveEditorOnlyFullPoseForPoseAsset = 0x10,
		GeometryCacheAssetDeprecation = 0x11,
		VersionPlusOne = 0x12,
		LatestVersion = 0x11
	};
}