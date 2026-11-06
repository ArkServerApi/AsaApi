#pragma once


enum class _IO_ALLOCATION_ACTION:int
{
	KeepObject = 0x1,
	DeallocateObject = 0x2,
	DeallocateObjectKeepRegisters = 0x3
};