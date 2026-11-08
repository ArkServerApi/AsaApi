#pragma once


enum class EStreamableRenderAssetType:unsigned char
{
	None = 0x0,
	Texture = 0x1,
	StaticMesh = 0x2,
	SkeletalMesh = 0x3,
	LandscapeMeshMobile = 0x4,
	NaniteCoarseMesh = 0x5
};