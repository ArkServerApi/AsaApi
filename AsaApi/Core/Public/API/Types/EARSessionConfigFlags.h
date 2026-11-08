#pragma once


enum class EARSessionConfigFlags:unsigned char
{
	None = 0x0,
	GenerateMeshData = 0x1,
	RenderMeshDataInWireframe = 0x2,
	GenerateCollisionForMeshData = 0x4,
	GenerateNavMeshForMeshData = 0x8,
	UseMeshDataForOcclusion = 0x10
};