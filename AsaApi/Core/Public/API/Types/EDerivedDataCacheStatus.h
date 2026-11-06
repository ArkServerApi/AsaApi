#pragma once


enum class EDerivedDataCacheStatus:int
{
	None = 0x0,
	Information = 0x1,
	Warning = 0x2,
	Error = 0x3,
	Deactivation = 0x4
};