#pragma once


enum class EUpdateStaticMeshFlags:unsigned char
{
	RasterCommands = 0x2,
	RayTracingCommands = 0x4,
	AllCommands = 0x6
};