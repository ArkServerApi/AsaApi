#pragma once


enum class ESteamInputType:int
{
	k_ESteamInputType_Unknown = 0x0,
	k_ESteamInputType_SteamController = 0x1,
	k_ESteamInputType_XBox360Controller = 0x2,
	k_ESteamInputType_XBoxOneController = 0x3,
	k_ESteamInputType_GenericGamepad = 0x4,
	k_ESteamInputType_PS4Controller = 0x5,
	k_ESteamInputType_AppleMFiController = 0x6,
	k_ESteamInputType_AndroidController = 0x7,
	k_ESteamInputType_SwitchJoyConPair = 0x8,
	k_ESteamInputType_SwitchJoyConSingle = 0x9,
	k_ESteamInputType_SwitchProController = 0xA,
	k_ESteamInputType_MobileTouch = 0xB,
	k_ESteamInputType_PS3Controller = 0xC,
	k_ESteamInputType_PS5Controller = 0xD,
	k_ESteamInputType_SteamDeckController = 0xE,
	k_ESteamInputType_Count = 0xF,
	k_ESteamInputType_MaximumPossibleValue = 0xFF
};