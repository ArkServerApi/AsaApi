#pragma once


enum class ELargeMemoryReaderFlags:unsigned char
{
	None = 0x0,
	TakeOwnership = 0x1,
	Persistent = 0x2
};