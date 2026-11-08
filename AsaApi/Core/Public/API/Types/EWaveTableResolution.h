#pragma once


enum class EWaveTableResolution:unsigned char
{
	None = 0x0,
	Res_8 = 0x3,
	Res_16 = 0x4,
	Res_32 = 0x5,
	Res_64 = 0x6,
	Res_128 = 0x7,
	Res_256 = 0x8,
	Res_512 = 0x9,
	Res_1024 = 0xA,
	Res_2048 = 0xB,
	Res_4096 = 0xC,
	Res_Max = 0xC,
	Maximum = 0xD
};