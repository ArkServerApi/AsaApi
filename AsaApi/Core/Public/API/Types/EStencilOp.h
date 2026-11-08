#pragma once


enum class EStencilOp:int
{
	SO_Keep = 0x0,
	SO_Zero = 0x1,
	SO_Replace = 0x2,
	SO_SaturatedIncrement = 0x3,
	SO_SaturatedDecrement = 0x4,
	SO_Invert = 0x5,
	SO_Increment = 0x6,
	SO_Decrement = 0x7,
	EStencilOp_Num = 0x8,
	EStencilOp_NumBits = 0x3
};