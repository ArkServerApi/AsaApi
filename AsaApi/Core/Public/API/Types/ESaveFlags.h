#pragma once


enum class ESaveFlags:unsigned __int64
{
	SAVE_None = 0x0,
	SAVE_NoError = 0x1,
	SAVE_FromAutosave = 0x2,
	SAVE_KeepDirty = 0x4,
	SAVE_KeepGUID = 0x8,
	SAVE_Async = 0x10,
	SAVE_Unversioned_Native = 0x20,
	SAVE_CutdownPackage = 0x40,
	SAVE_KeepEditorOnlyCookedPackages = 0x80,
	SAVE_Concurrent = 0x100,
	SAVE_DiffOnly = 0x200,
	SAVE_DiffCallstack = 0x400,
	SAVE_ComputeHash = 0x800,
	SAVE_CompareLinker = 0x1000,
	SAVE_BulkDataByReference = 0x2000,
	SAVE_Unversioned_Properties = 0x4000,
	SAVE_Optional = 0xFFFF8000,
	SAVE_AllowTimeout = 0x10000,
	SAVE_RehydratePayloads = 0x20000,
	SAVE_Unversioned = 0x4020
};