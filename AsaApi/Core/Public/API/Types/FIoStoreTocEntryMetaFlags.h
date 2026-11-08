#pragma once


enum class FIoStoreTocEntryMetaFlags:unsigned char
{
	None = 0x0,
	Compressed = 0x1,
	MemoryMapped = 0x2
};