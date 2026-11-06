#pragma once


enum class ERayTracingMeshCommandsMode:unsigned char
{
	RAY_TRACING = 0x0,
	PATH_TRACING = 0x1,
	LIGHTMAP_TRACING = 0x2
};