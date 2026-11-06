#pragma once


enum class EIcmpResponseStatus:int
{
	Success = 0x0,
	Timeout = 0x1,
	Unreachable = 0x2,
	Unresolvable = 0x3,
	InternalError = 0x4,
	NotImplemented = 0x5
};