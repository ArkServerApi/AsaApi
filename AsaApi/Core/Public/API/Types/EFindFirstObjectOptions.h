#pragma once


enum class EFindFirstObjectOptions:int
{
	None = 0x0,
	ExactClass = 0x2,
	NativeFirst = 0x4,
	EnsureIfAmbiguous = 0x8
};