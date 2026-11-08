#pragma once


enum class EHoudiniOutputType:unsigned char
{
	Invalid = 0x0,
	Mesh = 0x1,
	Instancer = 0x2,
	Landscape = 0x3,
	Curve = 0x4,
	Skeletal = 0x5,
	GeometryCollection = 0x6,
	DataTable = 0x7
};