#pragma once


enum class EPCGActorFilter:unsigned char
{
	Self = 0x0,
	Parent = 0x1,
	Root = 0x2,
	AllWorldActors = 0x3,
	Original = 0x4
};