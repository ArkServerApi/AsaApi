#pragma once


struct UStruct : UField
{
	// Fields

	UStruct*& SuperStructField() { return *GetNativePointerField<UStruct**>(this, "UStruct.SuperStruct"); }
	UField*& ChildrenField() { return *GetNativePointerField<UField**>(this, "UStruct.Children"); }
	FField*& ChildPropertiesField() { return *GetNativePointerField<FField**>(this, "UStruct.ChildProperties"); }
	int& PropertiesSizeField() { return *GetNativePointerField<int*>(this, "UStruct.PropertiesSize"); }
	int16& MinAlignmentField() { return *GetNativePointerField<int16*>(this, "UStruct.MinAlignment"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& ScriptField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UStruct.Script"); }
	FProperty*& PropertyLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.PropertyLink"); }
	FProperty*& RefLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.RefLink"); }
	FProperty*& DestructorLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.DestructorLink"); }
	FProperty*& PostConstructLinkField() { return *GetNativePointerField<FProperty**>(this, "UStruct.PostConstructLink"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >& ScriptAndPropertyObjectReferencesField() { return *GetNativePointerField<TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.ScriptAndPropertyObjectReferences"); }

	// Bitfields

	// Functions

	bool IsChildOf(const UStruct* SomeBase) { return NativeCall<bool, const UStruct*>(this, "UStruct.IsChildOf(UStruct*)", SomeBase); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStruct"); }
	void SerializeTaggedProperties(FArchive* Ar, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FArchive*, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeTaggedProperties(FStructuredArchiveSlot,unsignedchar*,UStruct*,unsignedchar*,UObject*)", Ar, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void SerializeBin(FArchive* Ar, void* Data) { NativeCall<void, FArchive*, void*>(this, "UStruct.SerializeBin(FStructuredArchiveSlot,void*)", Ar, Data); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t*>(this, "UStruct.GetPrefixCPP()"); }
	//bool IsChildOf<class UClass>() { return NativeCall<bool>(this, "UStruct.IsChildOf<class UClass>()"); }
	void AddCppProperty(FProperty* Property) { NativeCall<void, FProperty*>(this, "UStruct.AddCppProperty(FProperty*)", Property); }
	void StaticLink(bool bRelinkExistingProperties) { NativeCall<void, bool>(this, "UStruct.StaticLink(bool)", bRelinkExistingProperties); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	void CollectBytecodeReferencedObjects(TArray<UObject*, TSizedDefaultAllocator<32> >* OutReferencedObjects) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UStruct.CollectBytecodeReferencedObjects(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutReferencedObjects); }
	void PreloadChildren(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.PreloadChildren(FArchive&)", Ar); }
	void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive*, bool>(this, "UStruct.Link(FArchive&,bool)", Ar, bRelinkExistingProperties); }
	void InitializeStruct(void* InDest, int ArrayDim) { NativeCall<void, void*, int>(this, "UStruct.InitializeStruct(void*,int)", InDest, ArrayDim); }
	void DestroyStruct(void* Dest, int ArrayDim) { NativeCall<void, void*, int>(this, "UStruct.DestroyStruct(void*,int)", Dest, ArrayDim); }
	void SerializeBin(FStructuredArchiveSlot Slot, void* Data) { NativeCall<void, FStructuredArchiveSlot, void*>(this, "UStruct.SerializeBin(FStructuredArchiveSlot,void*)", Slot, Data); }
	void SerializeBinEx(FStructuredArchiveSlot Slot, void* Data, const void* DefaultData, UStruct* DefaultStruct) { NativeCall<void, FStructuredArchiveSlot, void*, const void*, UStruct*>(this, "UStruct.SerializeBinEx(FStructuredArchiveSlot,void*,void*,UStruct*)", Slot, Data, DefaultData, DefaultStruct); }
	void SerializeTaggedProperties(FStructuredArchiveSlot Slot, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FStructuredArchiveSlot, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeTaggedProperties(FStructuredArchiveSlot,unsignedchar*,UStruct*,unsignedchar*,UObject*)", Slot, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void SerializeVersionedTaggedProperties(FStructuredArchiveSlot Slot, unsigned __int8* Data, UStruct* DefaultsStruct, unsigned __int8* Defaults, const UObject* BreakRecursionIfFullyLoad) { NativeCall<void, FStructuredArchiveSlot, unsigned __int8*, UStruct*, unsigned __int8*, const UObject*>(this, "UStruct.SerializeVersionedTaggedProperties(FStructuredArchiveSlot,unsignedchar*,UStruct*,unsignedchar*,UObject*)", Slot, Data, DefaultsStruct, Defaults, BreakRecursionIfFullyLoad); }
	void FinishDestroy() { NativeCall<void>(this, "UStruct.FinishDestroy()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UStruct.Serialize(FStructuredArchiveRecord)", Record); }
	void SerializeProperties(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.SerializeProperties(FArchive&)", Ar); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStruct.Serialize(FStructuredArchiveRecord)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UStruct.PostLoad()"); }
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct*>(this, "UStruct.SetSuperStruct(UStruct*)", NewSuperStruct); }
	// 	FString* PropertyNameToDisplayName(FString* result, FName InName) { return NativeCall<FString*, FString*, FName>(this, "UStruct.PropertyNameToDisplayName(FString&,FName)", result, InName); }
	// FUNCTION MISSING: UStruct.PropertyNameToDisplayName(FString&,FName)
	FString* GetAuthoredNameForField(FString* result, const UField* Field) { return NativeCall<FString*, FString*, const UField*>(this, "UStruct.GetAuthoredNameForField(UField*)", result, Field); }
	FString* GetAuthoredNameForField(FString* result, const FField* Field) { return NativeCall<FString*, FString*, const FField*>(this, "UStruct.GetAuthoredNameForField(UField*)", result, Field); }
	EExprToken SerializeExpr(int* iCode, FArchive* Ar) { return NativeCall<EExprToken, int*, FArchive*>(this, "UStruct.SerializeExpr(int&,FArchive&)", iCode, Ar); }
	FProperty* FindPropertyByName(FName InName) { return NativeCall<FProperty*, FName>(this, "UStruct.FindPropertyByName(FName)", InName); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStruct"); }
};