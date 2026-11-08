#pragma once


enum class EFontFallback:unsigned char
{
	FF_NoFallback = 0x0,
	FF_LocalizedFallback = 0x1,
	FF_LastResortFallback = 0x2,
	FF_Max = 0x3
};