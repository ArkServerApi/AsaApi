#pragma once


enum class TJPF:int
{
	TJPF_RGB = 0x0,
	TJPF_BGR = 0x1,
	TJPF_RGBX = 0x2,
	TJPF_BGRX = 0x3,
	TJPF_XBGR = 0x4,
	TJPF_XRGB = 0x5,
	TJPF_GRAY = 0x6,
	TJPF_RGBA = 0x7,
	TJPF_BGRA = 0x8,
	TJPF_ABGR = 0x9,
	TJPF_ARGB = 0xA,
	TJPF_CMYK = 0xB,
	TJPF_UNKNOWN = 0xFF
};