#pragma once


enum class EAsyncComputeBudget:int
{
	ELeast_0 = 0x0,
	EGfxHeavy_1 = 0x1,
	EBalanced_2 = 0x2,
	EComputeHeavy_3 = 0x3,
	EAll_4 = 0x4
};