#pragma once


enum class EBufferWriterFlags:unsigned char
{
	None = 0x0,
	TakeOwnership = 0x1,
	AllowResize = 0x2
};