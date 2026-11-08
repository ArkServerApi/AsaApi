#pragma once


enum class ERayTracingPayloadType:unsigned int
{
	None = 0x0,
	Minimal = 0x1,
	Default = 0x2,
	RayTracingMaterial = 0x4,
	RayTracingDebug = 0x8,
	Deferred = 0x10,
	PathTracingMaterial = 0x20,
	LumenMinimal = 0x40,
	VFX = 0x80,
	Decals = 0x100,
	SparseVoxel = 0x200
};