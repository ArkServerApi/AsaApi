#pragma once


enum class ERHIBindlessSupport:unsigned char
{
	Unsupported = 0x0,
	RayTracingOnly = 0x1,
	AllShaderTypes = 0x2,
	NumBits = 0x2
};