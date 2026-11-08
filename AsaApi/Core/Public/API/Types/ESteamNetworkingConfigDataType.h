#pragma once


enum class ESteamNetworkingConfigDataType:int
{
	k_ESteamNetworkingConfig_Int32 = 0x1,
	k_ESteamNetworkingConfig_Int64 = 0x2,
	k_ESteamNetworkingConfig_Float = 0x3,
	k_ESteamNetworkingConfig_String = 0x4,
	k_ESteamNetworkingConfig_Ptr = 0x5,
	k_ESteamNetworkingConfigDataType__Force32Bit = 0x7FFFFFFF
};