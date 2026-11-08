#pragma once


enum class WICBitmapLockFlags:int
{
	WICBitmapLockRead = 0x1,
	WICBitmapLockWrite = 0x2,
	WICBITMAPLOCKFLAGS_FORCE_DWORD = 0x7FFFFFFF
};