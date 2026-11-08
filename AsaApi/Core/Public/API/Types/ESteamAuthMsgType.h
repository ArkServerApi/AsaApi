#pragma once


enum class ESteamAuthMsgType:unsigned char
{
	None = 0x0,
	Auth = 0x1,
	Result = 0x2,
	ResendKey = 0x3,
	ResendResult = 0x4,
	Max = 0x5
};