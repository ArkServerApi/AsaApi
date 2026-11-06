#pragma once


enum class EMemoryTraceRootHeap:unsigned char
{
	SystemMemory = 0x0,
	VideoMemory = 0x1,
	EndHardcoded = 0x1,
	EndReserved = 0xF
};