#pragma once


enum class ERenderTargetActions:unsigned char
{
	LoadOpMask = 0x2,
	DontLoad_DontStore = 0x0,
	DontLoad_Store = 0x1,
	Clear_Store = 0x9,
	Load_Store = 0x5,
	Clear_DontStore = 0x8,
	Load_DontStore = 0x4,
	Clear_Resolve = 0xA,
	Load_Resolve = 0x6
};