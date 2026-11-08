#pragma once


enum class EARServiceInstallRequestResult:unsigned char
{
	Installed = 0x0,
	DeviceNotCompatible = 0x1,
	UserDeclinedInstallation = 0x2,
	FatalError = 0x3
};