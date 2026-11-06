#pragma once


enum class ESteamNetworkingFakeIPType:int
{
	k_ESteamNetworkingFakeIPType_Invalid = 0x0,
	k_ESteamNetworkingFakeIPType_NotFake = 0x1,
	k_ESteamNetworkingFakeIPType_GlobalIPv4 = 0x2,
	k_ESteamNetworkingFakeIPType_LocalIPv4 = 0x3,
	k_ESteamNetworkingFakeIPType__Force32Bit = 0x7FFFFFFF
};