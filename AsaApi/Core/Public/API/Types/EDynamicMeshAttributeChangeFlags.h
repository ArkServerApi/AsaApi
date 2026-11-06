#pragma once


enum class EDynamicMeshAttributeChangeFlags:unsigned char
{
	Unknown = 0x0,
	MeshTopology = 0x1,
	VertexPositions = 0x2,
	NormalsTangents = 0x4,
	VertexColors = 0x8,
	UVs = 0x10,
	TriangleGroups = 0x20
};