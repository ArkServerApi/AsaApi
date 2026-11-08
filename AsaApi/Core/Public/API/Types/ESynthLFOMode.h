#pragma once


enum class ESynthLFOMode:unsigned char
{
	Sync = 0x0,
	OneShot = 0x1,
	Free = 0x2,
	Count = 0x3
};