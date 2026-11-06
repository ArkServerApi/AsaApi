#pragma once


enum class EPlayerMappableKeySettingBehaviors:unsigned char
{
	InheritSettingsFromAction = 0x0,
	OverrideSettings = 0x1,
	IgnoreSettings = 0x2
};