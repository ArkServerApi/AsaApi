#pragma once


enum class ERDGViewType:unsigned char
{
	TextureUAV = 0x0,
	TextureSRV = 0x1,
	BufferUAV = 0x2,
	BufferSRV = 0x3,
	MAX = 0x4
};