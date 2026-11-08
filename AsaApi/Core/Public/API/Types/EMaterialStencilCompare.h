#pragma once


enum class EMaterialStencilCompare:int
{
	MSC_Less = 0x0,
	MSC_LessEqual = 0x1,
	MSC_Greater = 0x2,
	MSC_GreaterEqual = 0x3,
	MSC_Equal = 0x4,
	MSC_NotEqual = 0x5,
	MSC_Never = 0x6,
	MSC_Always = 0x7,
	MSC_Count = 0x8
};