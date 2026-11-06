#pragma once


enum class EIoContainerFlags:unsigned char
{
	None = 0x0,
	Compressed = 0x1,
	Encrypted = 0x2,
	Signed = 0x4,
	Indexed = 0x8
};