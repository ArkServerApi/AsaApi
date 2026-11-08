#pragma once


enum class ERayTracingPrimitiveFlags:unsigned char
{
	UnsupportedProxyType = 0x0,
	Excluded = 0x1,
	Dynamic = 0x2,
	CacheMeshCommands = 0x4,
	CacheInstances = 0x8,
	ComputeLOD = 0x10,
	FarField = 0x20,
	Streaming = 0x40,
	StaticMesh = 0x80
};