#pragma once


enum class EShaderCompileJobPriority:unsigned char
{
	None = 0xFF,
	Low = 0x0,
	Normal = 0x1,
	High = 0x2,
	ForceLocal = 0x3,
	Num = 0x4
};