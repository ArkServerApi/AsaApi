#pragma once


enum class EFontLoadingPolicy:unsigned char
{
	LazyLoad = 0x0,
	Stream = 0x1,
	Inline = 0x2
};