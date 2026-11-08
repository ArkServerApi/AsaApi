#pragma once


enum class EStaticMeshAsyncProperties:unsigned int
{
	None = 0x0,
	RenderData = 0x1,
	SourceModels = 0x4,
	SectionInfoMap = 0x8,
	OriginalSectionInfoMap = 0x10,
	NavCollision = 0x20,
	LightmapUVVersion = 0x40,
	BodySetup = 0x80,
	LightingGuid = 0x100,
	ExtendedBounds = 0x200,
	NegativeBoundsExtension = 0x400,
	PositiveBoundsExtension = 0x800,
	StaticMaterials = 0x1000,
	LightmapUVDensity = 0x2000,
	IsBuiltAtRuntime = 0x4000,
	MinLOD = 0xFFFF8000,
	LightMapCoordinateIndex = 0x10000,
	LightMapResolution = 0x20000,
	HiResSourceModel = 0x40000,
	All = 0xFFFFFFFF
};