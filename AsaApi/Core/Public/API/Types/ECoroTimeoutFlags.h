#pragma once


enum class ECoroTimeoutFlags:unsigned char
{
	Suspend_Named = 0x2,
	Suspend_Worker = 0x4,
	Suspend_All = 0x6
};