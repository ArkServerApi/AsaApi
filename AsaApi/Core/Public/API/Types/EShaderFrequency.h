#pragma once


enum class EShaderFrequency:unsigned char
{
	SF_Vertex = 0x0,
	SF_Mesh = 0x1,
	SF_Amplification = 0x2,
	SF_Pixel = 0x3,
	SF_Geometry = 0x4,
	SF_Compute = 0x5,
	SF_RayGen = 0x6,
	SF_RayMiss = 0x7,
	SF_RayHitGroup = 0x8,
	SF_RayCallable = 0x9,
	SF_NumFrequencies = 0xA,
	SF_NumGraphicsFrequencies = 0x5,
	SF_NumStandardFrequencies = 0x6,
	SF_NumBits = 0x4
};