#pragma once


enum class ERemoteStoragePlatform:int
{
	k_ERemoteStoragePlatformNone = 0x0,
	k_ERemoteStoragePlatformWindows = 0x1,
	k_ERemoteStoragePlatformOSX = 0x2,
	k_ERemoteStoragePlatformPS3 = 0x4,
	k_ERemoteStoragePlatformLinux = 0x8,
	k_ERemoteStoragePlatformSwitch = 0x10,
	k_ERemoteStoragePlatformAndroid = 0x20,
	k_ERemoteStoragePlatformIOS = 0x40,
	k_ERemoteStoragePlatformAll = 0xFF
};