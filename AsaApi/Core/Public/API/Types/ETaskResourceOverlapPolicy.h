#pragma once


enum class ETaskResourceOverlapPolicy:unsigned char
{
	StartOnTop = 0x0,
	StartAtEnd = 0x1,
	RequestCancelAndStartOnTop = 0x2,
	RequestCancelAndStartAtEnd = 0x3
};