#pragma once


enum class ESplitNormalMethod:unsigned char
{
	UseExistingTopology = 0x0,
	FaceNormalThreshold = 0x1,
	FaceGroupID = 0x2,
	PerTriangle = 0x3,
	PerVertex = 0x4
};