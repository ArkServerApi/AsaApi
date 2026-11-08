#pragma once


enum class EMessageScope:unsigned char
{
	Thread = 0x0,
	Process = 0x1,
	Network = 0x2,
	All = 0x3
};