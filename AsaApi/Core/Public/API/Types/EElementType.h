#pragma once


enum class EElementType:unsigned char
{
	ET_Box = 0x0,
	ET_DebugQuad = 0x1,
	ET_Text = 0x2,
	ET_ShapedText = 0x3,
	ET_Spline = 0x4,
	ET_Line = 0x5,
	ET_Gradient = 0x6,
	ET_Viewport = 0x7,
	ET_Border = 0x8,
	ET_Custom = 0x9,
	ET_CustomVerts = 0xA,
	ET_PostProcessPass = 0xB,
	ET_RoundedBox = 0xC,
	ET_Count = 0xD
};