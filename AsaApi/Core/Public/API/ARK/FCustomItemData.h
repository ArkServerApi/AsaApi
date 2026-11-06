#pragma once


struct FCustomItemData
{
	FCustomItemByteArrays CustomDataBytes;
	FCustomItemDoubles CustomDataDoubles;
	TArray<FString, TSizedDefaultAllocator<32>> CustomDataStrings;
	TArray<float, TSizedDefaultAllocator<32>> CustomDataFloats;
	TArray<UObject*, TSizedDefaultAllocator<32>> CustomDataObjects;
	TArray<UClass*, TSizedDefaultAllocator<32>> CustomDataClasses;
	TArray<FName, TSizedDefaultAllocator<32>> CustomDataNames;
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32>> UniquePaintingIdMap;
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32>> PaintingRevisionMap;
	FName CustomDataName;
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32>> CustomDataSoftClasses;

	// Fields

	FCustomItemByteArrays& CustomDataBytesField() { return *GetNativePointerField<FCustomItemByteArrays*>(this, "FCustomItemData.CustomDataBytes"); }
	FCustomItemDoubles& CustomDataDoublesField() { return *GetNativePointerField<FCustomItemDoubles*>(this, "FCustomItemData.CustomDataDoubles"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CustomDataStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataStrings"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataFloats"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& CustomDataObjectsField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataObjects"); }
	TArray<UClass*, TSizedDefaultAllocator<32> >& CustomDataClassesField() { return *GetNativePointerField<TArray<UClass*, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataClasses"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CustomDataNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataNames"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& UniquePaintingIdMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.UniquePaintingIdMap"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& PaintingRevisionMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.PaintingRevisionMap"); }
	FName& CustomDataNameField() { return *GetNativePointerField<FName*>(this, "FCustomItemData.CustomDataName"); }
	TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >& CustomDataSoftClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<UObject>, TSizedDefaultAllocator<32> >*>(this, "FCustomItemData.CustomDataSoftClasses"); }

	// Bitfields

	// Functions

	bool Serialize(FArchive* Ar) { return NativeCall<bool, FArchive*>(this, "FCustomItemData.Serialize(FArchive&)", Ar); }
	FCustomItemData& operator=(FCustomItemData* __that) { return NativeCall<FCustomItemData&, FCustomItemData*>(this, "FCustomItemData.operator=(FCustomItemData&&)", __that); }
	FCustomItemData& operator=(const FCustomItemData* __that) { return NativeCall<FCustomItemData&, const FCustomItemData*>(this, "FCustomItemData.operator=(FCustomItemData&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCustomItemData>(); }
};