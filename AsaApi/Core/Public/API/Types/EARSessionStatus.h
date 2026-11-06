#pragma once


enum class EARSessionStatus:unsigned char
{
	NotStarted = 0x0,
	Running = 0x1,
	NotSupported = 0x2,
	FatalError = 0x3,
	PermissionNotGranted = 0x4,
	UnsupportedConfiguration = 0x5,
	Other = 0x6
};