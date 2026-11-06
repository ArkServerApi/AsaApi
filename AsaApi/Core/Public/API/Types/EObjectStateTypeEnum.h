#pragma once


enum class EObjectStateTypeEnum:unsigned char
{
	Chaos_NONE = 0x0,
	Chaos_Object_Sleeping = 0x1,
	Chaos_Object_Kinematic = 0x2,
	Chaos_Object_Static = 0x3,
	Chaos_Object_Dynamic = 0x4,
	Chaos_Object_UserDefined = 0x64,
	Chaos_Max = 0x65
};