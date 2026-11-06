#pragma once


namespace FDestructionObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		AddedTimestampedGeometryComponentCache = 0x1,
		AddedCacheDataReduction = 0x2,
		GeometryCollectionInDDC = 0x3,
		GeometryCollectionInDDCAndAsset = 0x4,
		ChaosArchiveAdded = 0x5,
		FieldsAdded = 0x6,
		DensityUnitsChanged = 0x7,
		BulkSerializeArrays = 0x8,
		GroupAndAttributeNameRemapping = 0x9,
		ImplicitObjectDoCollideAttribute = 0xA,
		VersionPlusOne = 0xB,
		LatestVersion = 0xA
	};
}