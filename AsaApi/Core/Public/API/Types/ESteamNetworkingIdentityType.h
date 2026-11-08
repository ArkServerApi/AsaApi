#pragma once


enum class ESteamNetworkingIdentityType:int
{
	k_ESteamNetworkingIdentityType_Invalid = 0x0,
	k_ESteamNetworkingIdentityType_SteamID = 0x10,
	k_ESteamNetworkingIdentityType_IPAddress = 0x1,
	k_ESteamNetworkingIdentityType_GenericString = 0x2,
	k_ESteamNetworkingIdentityType_GenericBytes = 0x3,
	k_ESteamNetworkingIdentityType_UnknownType = 0x4,
	k_ESteamNetworkingIdentityType__Force32bit = 0x7FFFFFFF
};