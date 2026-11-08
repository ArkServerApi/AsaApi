#pragma once


struct FWeightedObjectList
{
	// Fields

	TArray<float, TSizedDefaultAllocator<32> >& WeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FWeightedObjectList.Weights"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& AssociatedObjectsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "FWeightedObjectList.AssociatedObjects"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FWeightedObjectList>(); }
	UObject* GetRandomObject() { return NativeCall<UObject*>(this, "FWeightedObjectList.GetRandomObject()"); }
};