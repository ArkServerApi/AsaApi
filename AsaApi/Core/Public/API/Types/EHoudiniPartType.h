#pragma once


enum class EHoudiniPartType:unsigned char
{
	Invalid = 0x0,
	Mesh = 0x1,
	Instancer = 0x2,
	Curve = 0x3,
	Volume = 0x4,
	DataTable = 0x5
};