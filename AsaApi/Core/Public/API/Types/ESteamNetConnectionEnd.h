#pragma once


enum class ESteamNetConnectionEnd:int
{
	k_ESteamNetConnectionEnd_Invalid = 0x0,
	k_ESteamNetConnectionEnd_App_Min = 0x3E8,
	k_ESteamNetConnectionEnd_App_Generic = 0x3E8,
	k_ESteamNetConnectionEnd_App_Max = 0x7CF,
	k_ESteamNetConnectionEnd_AppException_Min = 0x7D0,
	k_ESteamNetConnectionEnd_AppException_Generic = 0x7D0,
	k_ESteamNetConnectionEnd_AppException_Max = 0xBB7,
	k_ESteamNetConnectionEnd_Local_Min = 0xBB8,
	k_ESteamNetConnectionEnd_Local_OfflineMode = 0xBB9,
	k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity = 0xBBA,
	k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay = 0xBBB,
	k_ESteamNetConnectionEnd_Local_NetworkConfig = 0xBBC,
	k_ESteamNetConnectionEnd_Local_Rights = 0xBBD,
	k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses = 0xBBE,
	k_ESteamNetConnectionEnd_Local_Max = 0xF9F,
	k_ESteamNetConnectionEnd_Remote_Min = 0xFA0,
	k_ESteamNetConnectionEnd_Remote_Timeout = 0xFA1,
	k_ESteamNetConnectionEnd_Remote_BadCrypt = 0xFA2,
	k_ESteamNetConnectionEnd_Remote_BadCert = 0xFA3,
	k_ESteamNetConnectionEnd_Remote_BadProtocolVersion = 0xFA6,
	k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses = 0xFA7,
	k_ESteamNetConnectionEnd_Remote_Max = 0x1387,
	k_ESteamNetConnectionEnd_Misc_Min = 0x1388,
	k_ESteamNetConnectionEnd_Misc_Generic = 0x1389,
	k_ESteamNetConnectionEnd_Misc_InternalError = 0x138A,
	k_ESteamNetConnectionEnd_Misc_Timeout = 0x138B,
	k_ESteamNetConnectionEnd_Misc_SteamConnectivity = 0x138D,
	k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient = 0x138E,
	k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous = 0x1390,
	k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall = 0x1391,
	k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection = 0x1392,
	k_ESteamNetConnectionEnd_Misc_Max = 0x176F,
	k_ESteamNetConnectionEnd__Force32Bit = 0x7FFFFFFF
};