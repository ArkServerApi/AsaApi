#pragma once


enum class EUGCMatchingUGCType:int
{
	k_EUGCMatchingUGCType_Items = 0x0,
	k_EUGCMatchingUGCType_Items_Mtx = 0x1,
	k_EUGCMatchingUGCType_Items_ReadyToUse = 0x2,
	k_EUGCMatchingUGCType_Collections = 0x3,
	k_EUGCMatchingUGCType_Artwork = 0x4,
	k_EUGCMatchingUGCType_Videos = 0x5,
	k_EUGCMatchingUGCType_Screenshots = 0x6,
	k_EUGCMatchingUGCType_AllGuides = 0x7,
	k_EUGCMatchingUGCType_WebGuides = 0x8,
	k_EUGCMatchingUGCType_IntegratedGuides = 0x9,
	k_EUGCMatchingUGCType_UsableInGame = 0xA,
	k_EUGCMatchingUGCType_ControllerBindings = 0xB,
	k_EUGCMatchingUGCType_GameManagedItems = 0xC,
	k_EUGCMatchingUGCType_All = 0xFF
};