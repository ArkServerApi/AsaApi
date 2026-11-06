#pragma once


enum class ESkeletalMeshSkinningImportVersions:unsigned char
{
	Before_Versionning = 0x0,
	SkeletalMeshBuildRefactor = 0x1,
	VersionPlusOne = 0x2,
	LatestVersion = 0x1
};