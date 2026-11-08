#pragma once


enum class ESteamNetworkingAvailability:int
{
	k_ESteamNetworkingAvailability_CannotTry = 0x9A,
	k_ESteamNetworkingAvailability_Failed = 0x9B,
	k_ESteamNetworkingAvailability_Previously = 0x9C,
	k_ESteamNetworkingAvailability_Retrying = 0xF6,
	k_ESteamNetworkingAvailability_NeverTried = 0x1,
	k_ESteamNetworkingAvailability_Waiting = 0x2,
	k_ESteamNetworkingAvailability_Attempting = 0x3,
	k_ESteamNetworkingAvailability_Current = 0x64,
	k_ESteamNetworkingAvailability_Unknown = 0x0,
	k_ESteamNetworkingAvailability__Force32bit = 0x7FFFFFFF
};