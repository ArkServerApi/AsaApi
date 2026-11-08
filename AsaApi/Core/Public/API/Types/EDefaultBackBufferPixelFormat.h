#pragma once


namespace EDefaultBackBufferPixelFormat
{
	enum Type:int
	{
		DBBPF_B8G8R8A8 = 0x0,
		DBBPF_A16B16G16R16_DEPRECATED = 0x1,
		DBBPF_FloatRGB_DEPRECATED = 0x2,
		DBBPF_FloatRGBA = 0x3,
		DBBPF_A2B10G10R10 = 0x4,
		DBBPF_MAX = 0x5
	};
}