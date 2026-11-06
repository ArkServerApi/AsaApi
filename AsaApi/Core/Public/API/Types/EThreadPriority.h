#pragma once


enum class EThreadPriority:int
{
	TPri_Normal = 0x0,
	TPri_AboveNormal = 0x1,
	TPri_BelowNormal = 0x2,
	TPri_Highest = 0x3,
	TPri_Lowest = 0x4,
	TPri_SlightlyBelowNormal = 0x5,
	TPri_TimeCritical = 0x6,
	TPri_Num = 0x7
};