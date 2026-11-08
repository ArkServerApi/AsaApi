#pragma once


enum class EInstalledModStatus:unsigned char
{
	Pending = 0x0,
	OutOfDate = 0x1,
	Normal = 0x2,
	Invalid = 0x3,
	WorkingCopy = 0x4,
	Uploading = 0x5,
	Modified = 0x6,
	Uninstalled = 0x7
};