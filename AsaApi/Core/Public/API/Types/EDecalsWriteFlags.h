#pragma once


enum class EDecalsWriteFlags:unsigned int
{
	None = 0x0,
	BaseColor = 0x1,
	Normal = 0x2,
	RoughnessSpecularMetallic = 0x4,
	Emissive = 0x8,
	AmbientOcclusion = 0x10
};