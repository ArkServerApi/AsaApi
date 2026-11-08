#pragma once

struct FTribeAlliance
{
	// Fields

	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "FTribeAlliance.AllianceName"); }
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeAlliance.AllianceID"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MembersTribeNameField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.MembersTribeName"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& MembersTribeIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.MembersTribeID"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& AdminsTribeIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeAlliance.AdminsTribeID"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FTribeAlliance>(); }
};