#pragma once


enum class EPlatformUserSelectorFlags:unsigned char
{
	None = 0x0,
	RequiresOnlineEnabledProfile = 0x2,
	ShowSkipButton = 0x4,
	AllowGuests = 0x8,
	ShowNewUsersOnly = 0x10,
	Default = 0x4
};