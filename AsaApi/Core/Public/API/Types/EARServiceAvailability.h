#pragma once


enum class EARServiceAvailability:unsigned char
{
	UnknownError = 0x0,
	UnknownChecking = 0x1,
	UnknownTimedOut = 0x2,
	UnsupportedDeviceNotCapable = 0x3,
	SupportedNotInstalled = 0x4,
	SupportedVersionTooOld = 0x5,
	SupportedInstalled = 0x6
};