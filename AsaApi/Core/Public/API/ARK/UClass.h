#pragma once


struct UClass : UStruct
{
	// Fields
	int& ClassUniqueField() { return *GetNativePointerField<int*>(this, "UClass.ClassUnique"); }
	int& FirstOwnedClassRepField() { return *GetNativePointerField<int*>(this, "UClass.FirstOwnedClassRep"); }
	bool& bLayoutChangingField() { return *GetNativePointerField<bool*>(this, "UClass.bLayoutChanging"); }
	EClassFlags& ClassFlagsField() { return *GetNativePointerField<EClassFlags*>(this, "UClass.ClassFlags"); }
	EClassCastFlags& ClassCastFlagsField() { return *GetNativePointerField<EClassCastFlags*>(this, "UClass.ClassCastFlags"); }
	UClass*& ClassWithinField() { return *GetNativePointerField<UClass**>(this, "UClass.ClassWithin"); }
	FName& ClassConfigNameField() { return *GetNativePointerField<FName*>(this, "UClass.ClassConfigName"); }
	TArray<FRepRecord, TSizedDefaultAllocator<32> >& ClassRepsField() { return *GetNativePointerField<TArray<FRepRecord, TSizedDefaultAllocator<32> >*>(this, "UClass.ClassReps"); }
	TArray<UField*, TSizedDefaultAllocator<32> >& NetFieldsField() { return *GetNativePointerField<TArray<UField*, TSizedDefaultAllocator<32> >*>(this, "UClass.NetFields"); }
	UObject*& ClassDefaultObjectField() { return *GetNativePointerField<UObject**>(this, "UClass.ClassDefaultObject"); }
	void*& SparseClassDataField() { return *GetNativePointerField<void**>(this, "UClass.SparseClassData"); }
	UScriptStruct*& SparseClassDataStructField() { return *GetNativePointerField<UScriptStruct**>(this, "UClass.SparseClassDataStruct"); }
	TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >& FuncMapField() { return *GetNativePointerField<TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >*>(this, "UClass.FuncMap"); }
	FWindowsRWLock& FuncMapLockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "UClass.FuncMapLock"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TMap<FName, UFunction*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, UFunction*, 0> >& SuperFuncMapField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FWindowsRWLock& SuperFuncMapLockField();

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsGameClass() { return { this, "UClass.bIsGameClass" }; }
	BitFieldValue<bool, unsigned __int32> bCheckedForLocalize() { return { this, "UClass.bCheckedForLocalize" }; }
	BitFieldValue<bool, unsigned __int32> bHasLocalized() { return { this, "UClass.bHasLocalized" }; }

	// Functions

	UObject* GetDefaultObject(bool bCreateIfNeeded) { return NativeCall<UObject*, bool>(this, "UClass.GetDefaultObject(bool)", bCreateIfNeeded); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UClass"); }
	void SerializeDefaultObject(UObject* Object, FArchive* Ar) { NativeCall<void, UObject*, FArchive*>(this, "UClass.SerializeDefaultObject(UObject*,FStructuredArchiveSlot)", Object, Ar); }
	void PostLoadDefaultObject(UObject* Object) { NativeCall<void, UObject*>(this, "UClass.PostLoadDefaultObject(UObject*)", Object); }
	void PostInitProperties() { NativeCall<void>(this, "UClass.PostInitProperties()"); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject*, FName>(this, "UClass.GetDefaultSubobjectByName(FName)", ToFind); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UClass.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	UObject* CreateDefaultObject() { return NativeCall<UObject*>(this, "UClass.CreateDefaultObject()"); }
	static FFeedbackContext* GetDefaultPropertiesFeedbackContext() { return NativeCall<FFeedbackContext*>(nullptr, "UClass.GetDefaultPropertiesFeedbackContext()"); }
	FName* GetDefaultObjectName(FName* result) { return NativeCall<FName*, FName*>(this, "UClass.GetDefaultObjectName()", result); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* Name) { NativeCall<void, UClass*, const wchar_t*, const wchar_t*>(this, "UClass.DeferredRegister(UClass*,wchar_t*,wchar_t*)", UClassStaticClass, PackageName, Name); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UClass.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void Bind() { NativeCall<void>(this, "UClass.Bind()"); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t*>(this, "UClass.GetPrefixCPP()"); }
	void FinishDestroy() { NativeCall<void>(this, "UClass.FinishDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "UClass.PostLoad()"); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UClass.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive*, bool>(this, "UClass.Link(FArchive&,bool)", Ar, bRelinkExistingProperties); }
	void SetUpRuntimeReplicationData() { NativeCall<void>(this, "UClass.SetUpRuntimeReplicationData()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateRuntimeReplicationData();
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct*>(this, "UClass.SetSuperStruct(UStruct*)", NewSuperStruct); }
	bool IsStructTrashed() { return NativeCall<bool>(this, "UClass.IsStructTrashed()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UClass.Serialize(FArchive&)", Ar); }
	bool ImplementsInterface(const UClass* SomeInterface) { return NativeCall<bool, const UClass*>(this, "UClass.ImplementsInterface(UClass*)", SomeInterface); }
	void SerializeDefaultObject(UObject* Object, FStructuredArchiveSlot Slot) { NativeCall<void, UObject*, FStructuredArchiveSlot>(this, "UClass.SerializeDefaultObject(UObject*,FStructuredArchiveSlot)", Object, Slot); }
	void SerializeSparseClassData(FStructuredArchiveSlot Slot) { NativeCall<void, FStructuredArchiveSlot>(this, "UClass.SerializeSparseClassData(FStructuredArchiveSlot)", Slot); }
	const void* GetArchetypeForSparseClassData(EGetSparseClassDataMethod GetMethod) { return NativeCall<const void*, EGetSparseClassDataMethod>(this, "UClass.GetArchetypeForSparseClassData(EGetSparseClassDataMethod)", GetMethod); }
	UObject* GetArchetypeForCDO() { return NativeCall<UObject*>(this, "UClass.GetArchetypeForCDO()"); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UClass.PurgeClass(bool)", bRecompilingOnLoad); }
	bool HasProperty(FProperty* InProperty) { return NativeCall<bool, FProperty*>(this, "UClass.HasProperty(FProperty*)", InProperty); }
	void* CreateSparseClassData() { return NativeCall<void*>(this, "UClass.CreateSparseClassData()"); }
	void CleanupSparseClassData() { NativeCall<void>(this, "UClass.CleanupSparseClassData()"); }
	const void* GetSparseClassData(const EGetSparseClassDataMethod GetMethod) { return NativeCall<const void*, const EGetSparseClassDataMethod>(this, "UClass.GetSparseClassData(EGetSparseClassDataMethod)", GetMethod); }
	void SetSparseClassDataStruct(UScriptStruct* InSparseClassDataStruct) { NativeCall<void, UScriptStruct*>(this, "UClass.SetSparseClassDataStruct(UScriptStruct*)", InSparseClassDataStruct); }
	void ClearFunctionMapsCaches() { NativeCall<void>(this, "UClass.ClearFunctionMapsCaches()"); }
	UFunction* FindFunctionByName(FName InName, EIncludeSuperFlag::Type IncludeSuper) { return NativeCall<UFunction*, FName, EIncludeSuperFlag::Type>(this, "UClass.FindFunctionByName(FName,EIncludeSuperFlag::Type)", InName, IncludeSuper); }
	static void AssembleReferenceTokenStreams() { NativeCall<void>(nullptr, "UClass.AssembleReferenceTokenStreams()"); }
	const FString* GetConfigName(const FString* result) { return NativeCall<const FString*, const FString*>(this, "UClass.GetConfigName()", result); }
	//static UField* TryFindTypeSlow(UClass* TypeClass, const FString* InPathNameOrShortName, EFindFirstObjectOptions InOptions) { return NativeCall<UField*, UClass*, const FString*, EFindFirstObjectOptions>(nullptr, "UClass.TryFindTypeSlow(UClass*,FString&,EFindFirstObjectOptions)", TypeClass, InPathNameOrShortName, InOptions); }
	void AssembleReferenceTokenStream(bool bForce) { NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStream(bool)", bForce); }
	void AssembleReferenceTokenStreamInternal(bool bForce) { NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStreamInternal(bool)", bForce); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UClass"); }
};