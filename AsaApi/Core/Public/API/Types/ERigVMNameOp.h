#pragma once


enum class ERigVMNameOp:unsigned char
{
	None = 0x0,
	Concat = 0x1,
	Left = 0x2,
	Right = 0x3,
	LeftChop = 0x4,
	RightChop = 0x5,
	ReplaceCase = 0x6,
	ReplaceNoCase = 0x7,
	EndsWithCase = 0x8,
	EndsWithNoCase = 0x9,
	StartsWithCase = 0xA,
	StartsWithNoCase = 0xB,
	ContainsCase = 0xC,
	ContainsNoCase = 0xD
};