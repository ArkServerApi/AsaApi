#pragma once


enum class EMemoryTraceHeapFlags:unsigned short
{
	None = 0x0,
	Root = 0x1,
	NeverFrees = 0x2
};