#pragma once


namespace FLandscapeCustomVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		NewSplineCrossLevelMeshSerialization = 0x1,
		GrassMaterialWPO = 0x2,
		CollisionMaterialWPO = 0x3,
		LightmassMaterialWPO = 0x4,
		GrassMaterialInstanceFix = 0x5,
		SplineForeignDataLazyObjectPtrFix = 0x6,
		MigrateOldPropertiesToNewRenderingProperties = 0x7,
		AddingBodyInstanceToSplinesElements = 0x8,
		AddSplineLayerFalloff = 0x9,
		AddSplineLayerWidth = 0xA,
		NewLandscapeContinuousLOD = 0xB,
		ARKNX_CompressedAnd4BitGrass_DEPRECATED = 0xC,
		ARKNX_CompressedAnd4BitGrass_REMOVED = 0xD,
		LandscapeGrassOnStaticMeshes = 0xE,
		ASA_4bitGrassweightCompression = 0xF,
		ASA_GrassKrakenCompression = 0x10,
		ASA_GrassPerSliceOffsetsAndMasks = 0x11,
		VersionPlusOne = 0x12,
		LatestVersion = 0x11
	};
}