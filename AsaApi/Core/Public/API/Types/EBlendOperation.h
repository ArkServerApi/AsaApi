#pragma once


enum class EBlendOperation:int
{
	BO_Add = 0x0,
	BO_Subtract = 0x1,
	BO_Min = 0x2,
	BO_Max = 0x3,
	BO_ReverseSubtract = 0x4,
	EBlendOperation_Num = 0x5,
	EBlendOperation_NumBits = 0x3
};