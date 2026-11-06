#pragma once


enum class EOS_ELogCategory:int
{
	EOS_LC_Core = 0x0,
	EOS_LC_Auth = 0x1,
	EOS_LC_Friends = 0x2,
	EOS_LC_Presence = 0x3,
	EOS_LC_UserInfo = 0x4,
	EOS_LC_HttpSerialization = 0x5,
	EOS_LC_Ecom = 0x6,
	EOS_LC_P2P = 0x7,
	EOS_LC_Sessions = 0x8,
	EOS_LC_RateLimiter = 0x9,
	EOS_LC_PlayerDataStorage = 0xA,
	EOS_LC_Analytics = 0xB,
	EOS_LC_Messaging = 0xC,
	EOS_LC_Connect = 0xD,
	EOS_LC_Overlay = 0xE,
	EOS_LC_Achievements = 0xF,
	EOS_LC_Stats = 0x10,
	EOS_LC_UI = 0x11,
	EOS_LC_Lobby = 0x12,
	EOS_LC_Leaderboards = 0x13,
	EOS_LC_Keychain = 0x14,
	EOS_LC_IntegratedPlatform = 0x15,
	EOS_LC_TitleStorage = 0x16,
	EOS_LC_Mods = 0x17,
	EOS_LC_AntiCheat = 0x18,
	EOS_LC_Reports = 0x19,
	EOS_LC_Sanctions = 0x1A,
	EOS_LC_ProgressionSnapshots = 0x1B,
	EOS_LC_KWS = 0x1C,
	EOS_LC_RTC = 0x1D,
	EOS_LC_RTCAdmin = 0x1E,
	EOS_LC_CustomInvites = 0x1F,
	EOS_LC_ALL_CATEGORIES = 0x7FFFFFFF
};