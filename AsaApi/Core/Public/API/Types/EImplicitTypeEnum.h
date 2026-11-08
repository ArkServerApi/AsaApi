#pragma once


enum class EImplicitTypeEnum:unsigned char
{
	Chaos_Implicit_Box = 0x0,
	Chaos_Implicit_Sphere = 0x1,
	Chaos_Implicit_Capsule = 0x2,
	Chaos_Implicit_LevelSet = 0x3,
	Chaos_Implicit_None = 0x4,
	Chaos_Implicit_Convex = 0x5,
	Chaos_Max = 0x6
};