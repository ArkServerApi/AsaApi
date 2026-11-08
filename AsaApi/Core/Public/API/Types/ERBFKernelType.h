#pragma once


enum class ERBFKernelType:unsigned char
{
	Gaussian = 0x0,
	Exponential = 0x1,
	Linear = 0x2,
	Cubic = 0x3,
	Quintic = 0x4
};