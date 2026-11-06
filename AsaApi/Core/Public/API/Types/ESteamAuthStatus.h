#pragma once


enum class ESteamAuthStatus:unsigned char
{
	None = 0x0,
	AuthSuccess = 0x1,
	AuthFail = 0x2,
	ValidationStarted = 0x4,
	KickUser = 0x8,
	FailKick = 0xA,
	HasOrIsPendingAuth = 0x5
};