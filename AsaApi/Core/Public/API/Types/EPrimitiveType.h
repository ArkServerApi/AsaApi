#pragma once


enum class EPrimitiveType:int
{
	PT_TriangleList = 0x0,
	PT_TriangleStrip = 0x1,
	PT_LineList = 0x2,
	PT_QuadList = 0x3,
	PT_PointList = 0x4,
	PT_RectList = 0x5,
	PT_Num = 0x6,
	PT_NumBits = 0x3
};