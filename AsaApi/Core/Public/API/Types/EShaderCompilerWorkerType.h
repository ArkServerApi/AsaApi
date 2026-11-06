#pragma once


enum class EShaderCompilerWorkerType:unsigned char
{
	None = 0x0,
	LocalThread = 0x1,
	Distributed = 0x2
};