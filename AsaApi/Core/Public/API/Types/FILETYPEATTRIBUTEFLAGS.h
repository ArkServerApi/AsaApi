#pragma once


enum class FILETYPEATTRIBUTEFLAGS:unsigned __int64
{
	FTA_None = 0x0,
	FTA_Exclude = 0x1,
	FTA_Show = 0x2,
	FTA_HasExtension = 0x4,
	FTA_NoEdit = 0x8,
	FTA_NoRemove = 0x10,
	FTA_NoNewVerb = 0x20,
	FTA_NoEditVerb = 0x40,
	FTA_NoRemoveVerb = 0x80,
	FTA_NoEditDesc = 0x100,
	FTA_NoEditIcon = 0x200,
	FTA_NoEditDflt = 0x400,
	FTA_NoEditVerbCmd = 0x800,
	FTA_NoEditVerbExe = 0x1000,
	FTA_NoDDE = 0x2000,
	FTA_NoEditMIME = 0xFFFF8000,
	FTA_OpenIsSafe = 0x10000,
	FTA_AlwaysUnsafe = 0x20000,
	FTA_NoRecentDocs = 0x100000,
	FTA_SafeForElevation = 0x200000,
	FTA_AlwaysUseDirectInvoke = 0x400000
};