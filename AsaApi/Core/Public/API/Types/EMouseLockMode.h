#pragma once


enum class EMouseLockMode:unsigned char
{
	DoNotLock = 0x0,
	LockOnCapture = 0x1,
	LockAlways = 0x2,
	LockInFullscreen = 0x3
};