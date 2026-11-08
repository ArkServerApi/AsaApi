#pragma once


enum class ECreateObjectTypeHint:unsigned char
{
	Undefined = 0x0,
	StaticMesh = 0x1,
	Volume = 0x2,
	DynamicMeshActor = 0x3
};