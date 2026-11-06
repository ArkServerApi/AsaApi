#pragma once


enum class EObjectIteratorThreadSafetyOptions:unsigned char
{
	None = 0x0,
	ThreadSafe = 0x1,
	ThreadSafeAdvance = 0x2
};