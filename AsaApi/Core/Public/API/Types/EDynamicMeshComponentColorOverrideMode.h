#pragma once


enum class EDynamicMeshComponentColorOverrideMode:unsigned char
{
	None = 0x0,
	VertexColors = 0x1,
	Polygroups = 0x2,
	Constant = 0x3
};