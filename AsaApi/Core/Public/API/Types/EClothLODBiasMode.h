#pragma once


enum class EClothLODBiasMode:unsigned char
{
	MappingsToSameLOD = 0x0,
	MappingsToMinLOD = 0x1,
	MappingsToAnyLOD = 0x2
};