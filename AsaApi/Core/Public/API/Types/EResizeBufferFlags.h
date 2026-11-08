#pragma once


enum class EResizeBufferFlags:int
{
	None = 0x0,
	AllowSlackOnGrow = 0x1,
	AllowSlackOnReduce = 0x2
};