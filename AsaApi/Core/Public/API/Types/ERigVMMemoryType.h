#pragma once


enum class ERigVMMemoryType:unsigned char
{
	Work = 0x0,
	Literal = 0x1,
	External = 0x2,
	Debug = 0x3,
	Invalid = 0x4
};