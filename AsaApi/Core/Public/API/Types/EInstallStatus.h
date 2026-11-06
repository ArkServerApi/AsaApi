#pragma once


enum class EInstallStatus:unsigned char
{
	EInstallStatus_Default = 0x0,
	EInstallStatus_Installing = 0x1,
	EInstallStatus_Installed = 0x2,
	EInstallStatus_InstalledButNeedsUpdate = 0x3,
	EInstallStatus_Updating = 0x4,
	EInstallStatus_Uninstalling = 0x5,
	EInstallStatus_InstalledButNeedsUpdateMyMods = 0x6
};