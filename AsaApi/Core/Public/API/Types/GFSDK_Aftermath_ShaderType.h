#pragma once


enum class GFSDK_Aftermath_ShaderType:unsigned int
{
	GFSDK_Aftermath_ShaderType_Unknown = 0x0,
	GFSDK_Aftermath_ShaderType_Vertex = 0x1,
	GFSDK_Aftermath_ShaderType_Tessellation_Control = 0x2,
	GFSDK_Aftermath_ShaderType_Hull = 0x2,
	GFSDK_Aftermath_ShaderType_Tessellation_Evaluation = 0x3,
	GFSDK_Aftermath_ShaderType_Domain = 0x3,
	GFSDK_Aftermath_ShaderType_Geometry = 0x4,
	GFSDK_Aftermath_ShaderType_Fragment = 0x5,
	GFSDK_Aftermath_ShaderType_Pixel = 0x5,
	GFSDK_Aftermath_ShaderType_Compute = 0x6,
	GFSDK_Aftermath_ShaderType_RayTracing_RayGeneration = 0x7,
	GFSDK_Aftermath_ShaderType_RayTracing_Miss = 0x8,
	GFSDK_Aftermath_ShaderType_RayTracing_Intersection = 0x9,
	GFSDK_Aftermath_ShaderType_RayTracing_AnyHit = 0xA,
	GFSDK_Aftermath_ShaderType_RayTracing_ClosestHit = 0xB,
	GFSDK_Aftermath_ShaderType_RayTracing_Callable = 0xC,
	GFSDK_Aftermath_ShaderType_RayTracing_Internal = 0xD,
	GFSDK_Aftermath_ShaderType_Mesh = 0xE,
	GFSDK_Aftermath_ShaderType_Task = 0xF
};