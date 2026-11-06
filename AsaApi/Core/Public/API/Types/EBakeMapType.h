#pragma once


enum class EBakeMapType:int
{
	None = 0x0,
	TangentSpaceNormal = 0x1,
	ObjectSpaceNormal = 0x2,
	FaceNormal = 0x4,
	BentNormal = 0x8,
	Position = 0x10,
	Curvature = 0x20,
	AmbientOcclusion = 0x40,
	Texture = 0x80,
	MultiTexture = 0x100,
	VertexColor = 0x200,
	MaterialID = 0x400,
	All = 0x7FF
};