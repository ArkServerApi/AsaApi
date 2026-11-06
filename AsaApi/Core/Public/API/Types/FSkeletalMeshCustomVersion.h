#pragma once


namespace FSkeletalMeshCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		CombineSectionWithChunk = 0x1,
		CombineSoftAndRigidVerts = 0x2,
		RecalcMaxBoneInfluences = 0x3,
		SaveNumVertices = 0x4,
		RegenerateClothingShadowFlags = 0x5,
		UseSharedColorBufferFormat = 0x6,
		UseSeparateSkinWeightBuffer = 0x7,
		NewClothingSystemAdded = 0x8,
		CachedClothInverseMasses = 0x9,
		CompactClothVertexBuffer = 0xA,
		RemoveSourceData = 0xB,
		SplitModelAndRenderData = 0xC,
		RemoveTriangleSorting = 0xD,
		RemoveDuplicatedClothingSections = 0xE,
		DeprecateSectionDisabledFlag = 0xF,
		SectionIgnoreByReduceAdded = 0x10,
		SkinWeightProfiles = 0x11,
		RemoveEnableClothLOD = 0x12,
		VersionPlusOne = 0x13,
		LatestVersion = 0x12
	};
}