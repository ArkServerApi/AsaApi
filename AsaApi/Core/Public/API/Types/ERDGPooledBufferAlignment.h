#pragma once


enum class ERDGPooledBufferAlignment:unsigned char
{
	None = 0x0,
	Page = 0x1,
	PowerOfTwo = 0x2
};