#pragma once


struct FUniqueNetId
{
	// Fields

	//FUniqueNetId_vtbl*& __vftableField() { return *GetNativePointerField<FUniqueNetId_vtbl**>(this, "FUniqueNetId.__vftable"); }

	// Bitfields

	// Functions

	unsigned int GetTypeHash() { return NativeCall<unsigned int>(this, "FUniqueNetId.GetTypeHash()"); }
	bool Compare(const FUniqueNetId* Other) { return NativeCall<bool, const FUniqueNetId*>(this, "FUniqueNetId.Compare(FUniqueNetId&)", Other); }
};