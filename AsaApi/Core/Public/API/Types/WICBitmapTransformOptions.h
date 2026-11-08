#pragma once


enum class WICBitmapTransformOptions:int
{
	WICBitmapTransformRotate0 = 0x0,
	WICBitmapTransformRotate90 = 0x1,
	WICBitmapTransformRotate180 = 0x2,
	WICBitmapTransformRotate270 = 0x3,
	WICBitmapTransformFlipHorizontal = 0x8,
	WICBitmapTransformFlipVertical = 0x10,
	WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD = 0x7FFFFFFF
};