#pragma once


enum class EStructFlags:unsigned __int64
{
	STRUCT_NoFlags = 0x0,
	STRUCT_Native = 0x1,
	STRUCT_IdenticalNative = 0x2,
	STRUCT_HasInstancedReference = 0x4,
	STRUCT_NoExport = 0x8,
	STRUCT_Atomic = 0x10,
	STRUCT_Immutable = 0x20,
	STRUCT_AddStructReferencedObjects = 0x40,
	STRUCT_RequiredAPI = 0x200,
	STRUCT_NetSerializeNative = 0x400,
	STRUCT_SerializeNative = 0x800,
	STRUCT_CopyNative = 0x1000,
	STRUCT_IsPlainOldData = 0x2000,
	STRUCT_NoDestructor = 0x4000,
	STRUCT_ZeroConstructor = 0xFFFF8000,
	STRUCT_ExportTextItemNative = 0x10000,
	STRUCT_ImportTextItemNative = 0x20000,
	STRUCT_PostSerializeNative = 0x40000,
	STRUCT_SerializeFromMismatchedTag = 0x80000,
	STRUCT_NetDeltaSerializeNative = 0x100000,
	STRUCT_PostScriptConstruct = 0x200000,
	STRUCT_NetSharedSerialization = 0x400000,
	STRUCT_Trashed = 0x800000,
	STRUCT_NewerVersionExists = 0x1000000,
	STRUCT_CanEditChange = 0x2000000,
	STRUCT_Inherit = 0x14,
	STRUCT_ComputedFlags = 0x7FFC42
};