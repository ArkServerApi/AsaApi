#pragma once


enum class EGeometryScriptBakeTypes:unsigned char
{
	TangentSpaceNormal = 0x0,
	ObjectSpaceNormal = 0x1,
	FaceNormal = 0x2,
	BentNormal = 0x3,
	Position = 0x4,
	Curvature = 0x5,
	AmbientOcclusion = 0x6,
	Texture = 0x7,
	MultiTexture = 0x8,
	VertexColor = 0x9,
	MaterialID = 0xA
};