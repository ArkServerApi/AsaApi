#pragma once


enum class EMaterialInstanceUsedByRTFlag:unsigned int
{
	None = 0x0,
	ResourceCreate = 0x1,
	CacheUniformExpressions = 0x2,
	All = 0x3
};