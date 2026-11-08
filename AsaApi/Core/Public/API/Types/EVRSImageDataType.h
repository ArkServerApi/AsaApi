#pragma once


enum class EVRSImageDataType:unsigned char
{
	VRSImage_NotSupported = 0x0,
	VRSImage_Palette = 0x1,
	VRSImage_Fractional = 0x2
};