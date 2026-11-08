#pragma once


enum class EHLODBatchingPolicy:unsigned char
{
	None = 0x0,
	MeshSection = 0x1,
	Instancing = 0x2
};