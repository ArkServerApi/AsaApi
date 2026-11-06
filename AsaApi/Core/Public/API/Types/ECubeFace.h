#pragma once


enum class ECubeFace:unsigned int
{
	CubeFace_PosX = 0x0,
	CubeFace_NegX = 0x1,
	CubeFace_PosY = 0x2,
	CubeFace_NegY = 0x3,
	CubeFace_PosZ = 0x4,
	CubeFace_NegZ = 0x5,
	CubeFace_MAX = 0x6
};