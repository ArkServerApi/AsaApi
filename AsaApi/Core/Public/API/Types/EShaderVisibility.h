#pragma once


enum class EShaderVisibility:int
{
	SV_Vertex = 0x0,
	SV_Pixel = 0x1,
	SV_Geometry = 0x2,
	SV_Mesh = 0x3,
	SV_Amplification = 0x4,
	SV_All = 0x5,
	SV_ShaderVisibilityCount = 0x6
};