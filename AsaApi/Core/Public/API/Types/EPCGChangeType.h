#pragma once


enum class EPCGChangeType:unsigned char
{
	None = 0x0,
	Cosmetic = 0x1,
	Settings = 0x2,
	Input = 0x4,
	Edge = 0x8,
	Node = 0x10,
	Structural = 0x20
};