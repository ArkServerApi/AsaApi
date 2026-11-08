#pragma once


enum class EKnownIniFile:unsigned char
{
	Engine = 0x0,
	Game = 0x1,
	Input = 0x2,
	DeviceProfiles = 0x3,
	GameUserSettings = 0x4,
	Scalability = 0x5,
	RuntimeOptions = 0x6,
	InstallBundle = 0x7,
	Hardware = 0x8,
	GameplayTags = 0x9,
	NumKnownFiles = 0xA
};