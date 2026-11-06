#pragma once


enum class EPersistentStorageManagerFileSizeFlags:unsigned char
{
	None = 0x0,
	OnlyUpdateIfLess = 0x1,
	RespectQuota = 0x2
};