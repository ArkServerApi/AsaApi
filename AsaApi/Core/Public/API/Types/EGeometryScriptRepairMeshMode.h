#pragma once


enum class EGeometryScriptRepairMeshMode:unsigned char
{
	DeleteOnly = 0x0,
	RepairOrDelete = 0x1,
	RepairOrSkip = 0x2
};