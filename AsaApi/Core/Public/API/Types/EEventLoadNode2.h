#pragma once


enum class EEventLoadNode2:unsigned char
{
	Package_ProcessSummary = 0x0,
	Package_SetupDependencies = 0x1,
	Package_ExportsSerialized = 0x2,
	Package_NumPhases = 0x3,
	ExportBundle_Process = 0x0,
	ExportBundle_PostLoad = 0x1,
	ExportBundle_DeferredPostLoad = 0x2,
	ExportBundle_NumPhases = 0x3
};