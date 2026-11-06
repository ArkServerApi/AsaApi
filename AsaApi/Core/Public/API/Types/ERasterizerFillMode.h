#pragma once


enum class ERasterizerFillMode:int
{
	FM_Point = 0x0,
	FM_Wireframe = 0x1,
	FM_Solid = 0x2,
	ERasterizerFillMode_Num = 0x3,
	ERasterizerFillMode_NumBits = 0x2
};