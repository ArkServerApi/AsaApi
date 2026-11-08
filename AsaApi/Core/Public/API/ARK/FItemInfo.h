#pragma once


struct FItemInfo
{
	// Fields

	TBitArray<FDefaultBitArrayAllocator>& NeedsVerticalWireField() { return *GetNativePointerField<TBitArray<FDefaultBitArrayAllocator>*>(this, "FItemInfo.NeedsVerticalWire"); }
	int& ParentIndexField() { return *GetNativePointerField<int*>(this, "FItemInfo.ParentIndex"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHasChildren() { return { this, "FItemInfo.bHasChildren" }; }
	BitFieldValue<bool, unsigned __int32> bIsLastChild() { return { this, "FItemInfo.bIsLastChild" }; }

	// Functions
};