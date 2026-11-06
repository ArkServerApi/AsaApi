#pragma once


enum class ETimerStatus:unsigned char
{
	Pending = 0x0,
	Active = 0x1,
	Paused = 0x2,
	Executing = 0x3,
	ActivePendingRemoval = 0x4
};