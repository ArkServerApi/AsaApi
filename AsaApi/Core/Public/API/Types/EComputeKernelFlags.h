#pragma once


enum class EComputeKernelFlags:unsigned int
{
	IsDefaultKernel = 0x1,
	IsolatedMemoryWrites = 0x2
};