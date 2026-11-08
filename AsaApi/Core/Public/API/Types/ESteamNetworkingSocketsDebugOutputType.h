#pragma once


enum class ESteamNetworkingSocketsDebugOutputType:int
{
	k_ESteamNetworkingSocketsDebugOutputType_None = 0x0,
	k_ESteamNetworkingSocketsDebugOutputType_Bug = 0x1,
	k_ESteamNetworkingSocketsDebugOutputType_Error = 0x2,
	k_ESteamNetworkingSocketsDebugOutputType_Important = 0x3,
	k_ESteamNetworkingSocketsDebugOutputType_Warning = 0x4,
	k_ESteamNetworkingSocketsDebugOutputType_Msg = 0x5,
	k_ESteamNetworkingSocketsDebugOutputType_Verbose = 0x6,
	k_ESteamNetworkingSocketsDebugOutputType_Debug = 0x7,
	k_ESteamNetworkingSocketsDebugOutputType_Everything = 0x8,
	k_ESteamNetworkingSocketsDebugOutputType__Force32Bit = 0x7FFFFFFF
};