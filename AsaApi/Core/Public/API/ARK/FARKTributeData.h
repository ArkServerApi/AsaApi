#pragma once


struct FARKTributeData
{
	// Fields

	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "FARKTributeData.ID"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DataBytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKTributeData.DataBytes"); }
	FString& DataClassNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataClassName"); }
	FString& DataTagNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataTagName"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.Name"); }
	TArray<FString, TSizedDefaultAllocator<32> >& DataStatsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FARKTributeData.DataStats"); }
	long double& LastReceiveDataTimeField() { return *GetNativePointerField<long double*>(this, "FARKTributeData.LastReceiveDataTime"); }
	unsigned int& DataID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID1"); }
	unsigned int& DataID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID2"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FARKTributeData>(); }
};