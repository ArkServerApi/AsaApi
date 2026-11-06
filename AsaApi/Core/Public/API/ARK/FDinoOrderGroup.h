#pragma once


struct FDinoOrderGroup
{
	// Fields

	FString& DinoOrderGroupNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderGroup.DinoOrderGroupName"); }
	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& DinoOrderClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FDinoOrderGroup.DinoOrderClasses"); }
	//TArray<FDinoOrderID, TSizedDefaultAllocator<32> >& DinoOrderIDsField() { return *GetNativePointerField<TArray<FDinoOrderID, TSizedDefaultAllocator<32> >*>(this, "FDinoOrderGroup.DinoOrderIDs"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoOrderGroup>(); }
	FDinoOrderGroup* operator=(const FDinoOrderGroup* __that) { return NativeCall<FDinoOrderGroup*, const FDinoOrderGroup*>(this, "FDinoOrderGroup.operator=(FDinoOrderGroup&)", __that); }
};