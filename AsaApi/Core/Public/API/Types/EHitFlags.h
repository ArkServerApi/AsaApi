#pragma once


enum class EHitFlags:unsigned short
{
	None = 0x0,
	Position = 0x1,
	Normal = 0x2,
	Distance = 0x4,
	UV = 0x8,
	MeshMultiple = 0x20,
	MeshBothSides = 0x80,
	MTD = 0x200,
	FaceIndex = 0x400
};