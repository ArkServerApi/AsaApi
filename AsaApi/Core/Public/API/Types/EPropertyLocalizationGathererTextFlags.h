#pragma once


enum class EPropertyLocalizationGathererTextFlags:unsigned char
{
	None = 0x0,
	ForceHasScript = 0x1,
	ForceEditorOnlyProperties = 0x2,
	ForceEditorOnlyScriptData = 0x4,
	ForceEditorOnly = 0x6,
	ForceIsDefaultValue = 0x8,
	SkipSubObjects = 0x10
};