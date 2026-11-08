#pragma once


enum class EVertexFactoryFlags:unsigned int
{
	None = 0x0,
	UsedWithMaterials = 0x2,
	SupportsStaticLighting = 0x4,
	SupportsDynamicLighting = 0x8,
	SupportsPrecisePrevWorldPos = 0x10,
	SupportsPositionOnly = 0x20,
	SupportsCachingMeshDrawCommands = 0x40,
	SupportsPrimitiveIdStream = 0x80,
	SupportsNaniteRendering = 0x100,
	SupportsRayTracing = 0x200,
	SupportsRayTracingDynamicGeometry = 0x400,
	SupportsRayTracingProceduralPrimitive = 0x800,
	SupportsLightmapBaking = 0x1000,
	SupportsPSOPrecaching = 0x2000,
	SupportsManualVertexFetch = 0x4000,
	DoesNotSupportNullPixelShader = 0xFFFF8000,
	SupportsGPUSkinPassThrough = 0x10000,
	SupportsComputeShading = 0x20000,
	SupportsLumenMeshCards = 0x40000
};