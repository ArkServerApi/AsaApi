#pragma once


enum class ERenderTargetLoadAction:unsigned char
{
	ENoAction = 0x0,
	ELoad = 0x1,
	EClear = 0x2,
	Num = 0x3,
	NumBits = 0x2
};