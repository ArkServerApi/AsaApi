#pragma once


enum class EGLTFTaskPriority:unsigned char
{
	Animation = 0x0,
	Mesh = 0x1,
	Material = 0x2,
	Texture = 0x3,
	MAX = 0x4
};