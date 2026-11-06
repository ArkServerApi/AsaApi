#pragma once


enum class EIcmpEchoManyStatus:unsigned char
{
	Invalid = 0x0,
	Success = 0x1,
	Failure = 0x2,
	Canceled = 0x3
};