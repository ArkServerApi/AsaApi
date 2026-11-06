#pragma once


enum class EGameModsEvent:unsigned char
{
	EGameModsEvent_ViewRegister = 0x0,
	EGameModsEvent_FinishInstalling = 0x1,
	EGameModsEvent_Uninstalling = 0x2,
	EGameModsEvent_InstallingProgress = 0x3,
	EGameModsEvent_InitInstalling = 0x4,
	EGameModsEvent_InitUninstalling = 0x5,
	EGameModsEvent_AlreadyInstalled = 0x6,
	EGameModsEvent_FinishUpdating = 0x7,
	EGameModsEvent_SearchMods = 0x8,
	EGameModsEvent_MyMods = 0x9,
	EGameModsEvent_CancelInstalling = 0xA
};