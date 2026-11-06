#pragma once


enum class ESlateColorStylingMode:unsigned char
{
	UseColor_Specified = 0x0,
	UseColor_ColorTable = 0x1,
	UseColor_Foreground = 0x2,
	UseColor_Foreground_Subdued = 0x3,
	UseColor_UseStyle = 0x4
};