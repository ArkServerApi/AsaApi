#pragma once


enum class EBitmapCompression:int
{
	BCBI_RGB = 0x0,
	BCBI_RLE8 = 0x1,
	BCBI_RLE4 = 0x2,
	BCBI_BITFIELDS = 0x3,
	BCBI_JPEG = 0x4,
	BCBI_PNG = 0x5,
	BCBI_ALPHABITFIELDS = 0x6
};