#pragma once


enum class ECFCoreInstallationCommands:unsigned char
{
	Download = 0x0,
	VerifyHash = 0x1,
	Unzip = 0x2,
	Cleanup = 0x1E
};