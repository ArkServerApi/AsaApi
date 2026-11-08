#pragma once


enum class EBulkDataFlags:unsigned int
{
	BULKDATA_None = 0x0,
	BULKDATA_PayloadAtEndOfFile = 0x1,
	BULKDATA_SerializeCompressedZLIB = 0x2,
	BULKDATA_ForceSingleElementSerialization = 0x4,
	BULKDATA_SingleUse = 0x8,
	BULKDATA_Unused = 0x20,
	BULKDATA_ForceInlinePayload = 0x40,
	BULKDATA_SerializeCompressed = 0x2,
	BULKDATA_ForceStreamPayload = 0x80,
	BULKDATA_PayloadInSeperateFile = 0x100,
	BULKDATA_SerializeCompressedBitWindow = 0x200,
	BULKDATA_Force_NOT_InlinePayload = 0x400,
	BULKDATA_OptionalPayload = 0x800,
	BULKDATA_MemoryMappedPayload = 0x1000,
	BULKDATA_Size64Bit = 0x2000,
	BULKDATA_DuplicateNonOptionalPayload = 0x4000,
	BULKDATA_BadDataVersion = 0xFFFF8000,
	BULKDATA_NoOffsetFixUp = 0x10000,
	BULKDATA_WorkspaceDomainPayload = 0x20000,
	BULKDATA_LazyLoadable = 0x40000,
	BULKDATA_UsesIoDispatcher = 0x80000000,
	BULKDATA_DataIsMemoryMapped = 0x40000000,
	BULKDATA_HasAsyncReadPending = 0x20000000,
	BULKDATA_AlwaysAllowDiscard = 0x10000000
};