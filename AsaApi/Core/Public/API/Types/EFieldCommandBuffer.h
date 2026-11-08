#pragma once


enum class EFieldCommandBuffer:unsigned char
{
	GPUFieldBuffer = 0x0,
	CPUReadBuffer = 0x1,
	CPUWriteBuffer = 0x2,
	GPUDebugBuffer = 0x3,
	NumFieldBuffers = 0x4
};