#pragma once


enum class EStreamReadRequestStatus:int
{
	Scheduled = 0x0,
	Completed = 0x1,
	Cancelled = 0x2
};