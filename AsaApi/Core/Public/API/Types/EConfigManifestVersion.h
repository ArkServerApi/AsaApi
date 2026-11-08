#pragma once


enum class EConfigManifestVersion:int
{
	Initial = 0x0,
	RenameEditorAgnosticSettings = 0x1,
	MigrateProjectSpecificInisToAgnostic = 0x2,
	NumOfVersions = 0x3
};