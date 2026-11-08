#pragma once


enum class ESteamNetworkingConnectionState:int
{
	k_ESteamNetworkingConnectionState_None = 0x0,
	k_ESteamNetworkingConnectionState_Connecting = 0x1,
	k_ESteamNetworkingConnectionState_FindingRoute = 0x2,
	k_ESteamNetworkingConnectionState_Connected = 0x3,
	k_ESteamNetworkingConnectionState_ClosedByPeer = 0x4,
	k_ESteamNetworkingConnectionState_ProblemDetectedLocally = 0x5,
	k_ESteamNetworkingConnectionState_FinWait = 0xFF,
	k_ESteamNetworkingConnectionState_Linger = 0xFE,
	k_ESteamNetworkingConnectionState_Dead = 0xFD,
	k_ESteamNetworkingConnectionState__Force32Bit = 0x7FFFFFFF
};