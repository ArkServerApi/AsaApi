#pragma once


enum class _MODE:int
{
	KernelMode = 0x0,
	UserMode = 0x1,
	MaximumMode = 0x2
};