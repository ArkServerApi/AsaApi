#pragma once


enum class ERenderTargetStoreAction:unsigned char
{
	ENoAction = 0x0,
	EStore = 0x1,
	EMultisampleResolve = 0x2,
	Num = 0x3,
	NumBits = 0x2
};