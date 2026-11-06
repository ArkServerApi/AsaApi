#pragma once


enum class ELevelTick :int
{
	LEVELTICK_TimeOnly = 0x0,
	LEVELTICK_ViewportsOnly = 0x1,
	LEVELTICK_All = 0x2,
	LEVELTICK_PauseTick = 0x3,
};