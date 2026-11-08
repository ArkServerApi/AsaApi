#pragma once


enum class DMA_COMPLETION_STATUS:int
{
	DmaComplete = 0x0,
	DmaAborted = 0x1,
	DmaError = 0x2,
	DmaCancelled = 0x3
};