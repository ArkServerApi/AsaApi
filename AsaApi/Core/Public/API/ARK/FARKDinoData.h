#pragma once


struct FARKDinoData
{
	TArray<unsigned char> DinoData;
	TArray<FPaintingKeyValue> UniquePaintingIdMap;
	TArray<FPaintingKeyValue> PaintingRevisionMap;
	FString DinoNameInMap;
	FString DinoName;
	UClass* DinoClass;
	bool bNetInfoFromClient;

	// Fields

	UClass*& DinoClassField() { return *GetNativePointerField<UClass**>(this, "FARKDinoData.DinoClass"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DinoDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.DinoData"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoNameInMap"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoName"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FARKDinoData.bNetInfoFromClient"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& UniquePaintingIdMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.UniquePaintingIdMap"); }
	TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >& PaintingRevisionMapField() { return *GetNativePointerField<TArray<FPaintingKeyValue, TSizedDefaultAllocator<32> >*>(this, "FARKDinoData.PaintingRevisionMap"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FARKDinoData>(); }
	bool NetSerialize(FArchive* Ar, UPackageMap* Map, bool& bOutSuccess) { return NativeCall<bool, FArchive*, UPackageMap*, bool&>(this, "FARKDinoData.NetSerialize(FArchive&,UPackageMap*,bool&)", Ar, Map, bOutSuccess); }
};