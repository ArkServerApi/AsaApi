#pragma once


enum class ENCPoolMethod:unsigned char
{
	None = 0x0,
	AutoRelease = 0x1,
	ManualRelease = 0x2,
	ManualRelease_OnComplete = 0x3,
	FreeInPool = 0x4
};