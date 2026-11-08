#pragma once


namespace FAssetRegistryVersion
{
	enum Type:int
	{
		PreVersioning = 0x0,
		HardSoftDependencies = 0x1,
		AddAssetRegistryState = 0x2,
		ChangedAssetData = 0x3,
		RemovedMD5Hash = 0x4,
		AddedHardManage = 0x5,
		AddedCookedMD5Hash = 0x6,
		AddedDependencyFlags = 0x7,
		FixedTags = 0x8,
		WorkspaceDomain = 0x9,
		PackageImportedClasses = 0xA,
		PackageFileSummaryVersionChange = 0xB,
		ObjectResourceOptionalVersionChange = 0xC,
		AddedChunkHashes = 0xD,
		ClassPaths = 0xE,
		RemoveAssetPathFNames = 0xF,
		AddedHeader = 0x10,
		AssetPackageDataHasExtension = 0x11,
		VersionPlusOne = 0x12,
		LatestVersion = 0x11
	};
}