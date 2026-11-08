#pragma once


enum class EVirtualStackAllocatorDecommitMode:unsigned char
{
	AllOnDestruction = 0x0,
	AllOnStackEmpty = 0x1,
	ExcessOnStackEmpty = 0x2,
	NumModes = 0x3
};