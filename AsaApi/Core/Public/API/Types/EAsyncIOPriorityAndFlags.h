#pragma once


enum class EAsyncIOPriorityAndFlags:int
{
	AIOP_PRIORITY_MASK = 0xFF,
	AIOP_FLAG_PRECACHE = 0x100,
	AIOP_FLAG_DONTCACHE = 0x200,
	AIOP_MIN = 0x0,
	AIOP_Low = 0x1,
	AIOP_BelowNormal = 0x2,
	AIOP_Normal = 0x3,
	AIOP_High = 0x4,
	AIOP_CriticalPath = 0x5,
	AIOP_MAX = 0x5,
	AIOP_NUM = 0x6,
	AIOP_Precache = 0x100
};