#pragma once


enum class EOptimusBufferWriteType:unsigned char
{
	Write = 0x0,
	WriteAtomicAdd = 0x1,
	WriteAtomicMin = 0x2,
	WriteAtomicMax = 0x3,
	Count = 0x4
};