#pragma once


enum class ESteamNetworkingConfigScope:int
{
	k_ESteamNetworkingConfig_Global = 0x1,
	k_ESteamNetworkingConfig_SocketsInterface = 0x2,
	k_ESteamNetworkingConfig_ListenSocket = 0x3,
	k_ESteamNetworkingConfig_Connection = 0x4,
	k_ESteamNetworkingConfigScope__Force32Bit = 0x7FFFFFFF
};