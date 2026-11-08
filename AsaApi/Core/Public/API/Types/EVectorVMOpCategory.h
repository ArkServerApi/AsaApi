#pragma once


enum class EVectorVMOpCategory:unsigned char
{
	Input = 0x0,
	Output = 0x1,
	Op = 0x2,
	ExtFnCall = 0x3,
	IndexGen = 0x4,
	RWBuffer = 0x5,
	Stat = 0x6,
	Fused = 0x7,
	Other = 0x8,
	MAX = 0x9
};