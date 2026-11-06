#pragma once


enum class EGLTFMaterialBakeSizePOT:unsigned char
{
	POT_1 = 0x0,
	POT_2 = 0x1,
	POT_4 = 0x2,
	POT_8 = 0x3,
	POT_16 = 0x4,
	POT_32 = 0x5,
	POT_64 = 0x6,
	POT_128 = 0x7,
	POT_256 = 0x8,
	POT_512 = 0x9,
	POT_1024 = 0xA,
	POT_2048 = 0xB,
	POT_4096 = 0xC,
	POT_8192 = 0xD
};