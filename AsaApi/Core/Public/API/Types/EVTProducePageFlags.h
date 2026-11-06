#pragma once


enum class EVTProducePageFlags:unsigned char
{
	None = 0x0,
	SkipPageBorders = 0x1,
	ContinuousUpdate = 0x2
};