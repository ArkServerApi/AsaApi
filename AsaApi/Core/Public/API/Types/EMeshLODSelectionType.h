#pragma once


enum class EMeshLODSelectionType:unsigned char
{
	AllLODs = 0x0,
	SpecificLOD = 0x1,
	CalculateLOD = 0x2,
	LowestDetailLOD = 0x3
};