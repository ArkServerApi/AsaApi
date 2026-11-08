#pragma once


enum class ESteamNetworkingGetConfigValueResult:int
{
	k_ESteamNetworkingGetConfigValue_BadValue = 0xFF,
	k_ESteamNetworkingGetConfigValue_BadScopeObj = 0xFE,
	k_ESteamNetworkingGetConfigValue_BufferTooSmall = 0xFD,
	k_ESteamNetworkingGetConfigValue_OK = 0x1,
	k_ESteamNetworkingGetConfigValue_OKInherited = 0x2,
	k_ESteamNetworkingGetConfigValueResult__Force32Bit = 0x7FFFFFFF
};