#pragma once


enum class ECompareFunction:int
{
	CF_Less = 0x0,
	CF_LessEqual = 0x1,
	CF_Greater = 0x2,
	CF_GreaterEqual = 0x3,
	CF_Equal = 0x4,
	CF_NotEqual = 0x5,
	CF_Never = 0x6,
	CF_Always = 0x7,
	ECompareFunction_Num = 0x8,
	ECompareFunction_NumBits = 0x3,
	CF_DepthNearOrEqual = 0x3,
	CF_DepthNear = 0x2,
	CF_DepthFartherOrEqual = 0x1,
	CF_DepthFarther = 0x0
};