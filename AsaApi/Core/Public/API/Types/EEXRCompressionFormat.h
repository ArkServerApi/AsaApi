#pragma once


enum class EEXRCompressionFormat:unsigned char
{
	None = 0x0,
	PIZ = 0x1,
	ZIP = 0x2,
	DWAA = 0x3,
	DWAB = 0x4
};