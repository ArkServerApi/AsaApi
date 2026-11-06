#pragma once


enum class ERequestedCultureOverrideLevel:unsigned char
{
	CommandLine = 0x0,
	EditorSettings = 0x1,
	GameUserSettings = 0x2,
	GameSettings = 0x3,
	EngineSettings = 0x4,
	Defaults = 0x5
};