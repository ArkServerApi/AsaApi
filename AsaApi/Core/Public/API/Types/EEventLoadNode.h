#pragma once


enum class EEventLoadNode:int
{
	Package_LoadSummary = 0x0,
	Package_SetupImports = 0x1,
	Package_ExportsSerialized = 0x2,
	Package_NumPhases = 0x3,
	ImportOrExport_Create = 0x0,
	ImportOrExport_Serialize = 0x1,
	Import_NumPhases = 0x2,
	Export_StartIO = 0x2,
	Export_NumPhases = 0x3,
	MAX_NumPhases = 0x3,
	Invalid_Value = 0xFF
};