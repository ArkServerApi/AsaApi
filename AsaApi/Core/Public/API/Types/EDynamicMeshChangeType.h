#pragma once


enum class EDynamicMeshChangeType:unsigned char
{
	GeneralEdit = 0x0,
	MeshChange = 0x1,
	MeshReplacementChange = 0x2,
	MeshVertexChange = 0x3,
	DeformationEdit = 0x4,
	AttributeEdit = 0x5
};