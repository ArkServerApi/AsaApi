#pragma once


enum class ESkeletalMeshVertexFlags:unsigned char
{
	None = 0x0,
	UseFullPrecisionUVs = 0x1,
	HasVertexColors = 0x2,
	UseHighPrecisionTangentBasis = 0x4,
	UseBackwardsCompatibleF16TruncUVs = 0x8,
	UseHighPrecisionWeights = 0x10
};