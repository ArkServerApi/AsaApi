#pragma once


enum class WICBitmapAlphaChannelOption:int
{
	WICBitmapUseAlpha = 0x0,
	WICBitmapUsePremultipliedAlpha = 0x1,
	WICBitmapIgnoreAlpha = 0x2,
	WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD = 0x7FFFFFFF
};