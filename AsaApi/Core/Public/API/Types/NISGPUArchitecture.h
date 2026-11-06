#pragma once


enum class NISGPUArchitecture:unsigned int
{
	NVIDIA_Generic = 0x0,
	AMD_Generic = 0x1,
	Intel_Generic = 0x2,
	NVIDIA_Generic_fp16 = 0x3
};