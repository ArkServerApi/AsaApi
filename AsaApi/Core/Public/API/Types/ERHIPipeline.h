#pragma once


enum class ERHIPipeline:unsigned char
{
	Graphics = 0x1,
	AsyncCompute = 0x2,
	None = 0x0,
	All = 0x3,
	Num = 0x2
};