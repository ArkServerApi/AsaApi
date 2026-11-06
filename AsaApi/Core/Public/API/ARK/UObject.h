#pragma once


struct UObject : UObjectBaseUtility
{
	// Fields

	  // Bitfields

	  // Functions

	bool ProcessConsoleExec(const wchar_t* Cmd, FOutputDevice* Ar, UObject* Executor) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UObject*>(this, "UObject.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)", Cmd, Ar, Executor); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDetailedInfoInternal()", result); }
	//void ~UObject() { NativeCall<void>(this, "UObject.~UObject()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UObject"); }
	//unsigned __int64 GetResourceSizeBytes(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UObject.GetResourceSizeBytes(EResourceSizeMode::Type)", Mode); }
	bool AreAllOuterObjectsValid() { return NativeCall<bool>(this, "UObject.AreAllOuterObjectsValid()"); }
	bool IsInBlueprint() { return NativeCall<bool>(this, "UObject.IsInBlueprint()"); }
	// 	bool IsBasedOnArchetype(const UObject* const SomeObject) { return NativeCall<bool, const UObject* const>(this, "UObject.IsBasedOnArchetype(UObject*const)", SomeObject); }
	// FUNCTION MISSING: UObject.IsBasedOnArchetype(UObject*const)
	UObject* CreateDefaultSubobject(FName SubobjectFName, UClass* ReturnType, UClass* ClassToCreateByDefault, bool bIsRequired, bool bIsTransient) { return NativeCall<UObject*, FName, UClass*, UClass*, bool, bool>(this, "UObject.CreateDefaultSubobject(FName,UClass*,UClass*,bool,bool)", SubobjectFName, ReturnType, ClassToCreateByDefault, bIsRequired, bIsTransient); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject*, FName>(this, "UObject.GetDefaultSubobjectByName(FName)", ToFind); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UObject.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void PostLoad() { NativeCall<void>(this, "UObject.PostLoad()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UObject.NeedsLoadForServer()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UObject.NeedsLoadForClient()"); }
	void BeginDestroy() { NativeCall<void>(this, "UObject.BeginDestroy()"); }
	void FinishDestroy() { NativeCall<void>(this, "UObject.FinishDestroy()"); }
	// 	FString* GetDetailedInfo(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDetailedInfo()", result); }
	// FUNCTION MISSING: UObject.GetDetailedInfo()
	bool ConditionalBeginDestroy() { return NativeCall<bool>(this, "UObject.ConditionalBeginDestroy()"); }
	bool ConditionalFinishDestroy() { return NativeCall<bool>(this, "UObject.ConditionalFinishDestroy()"); }
	void ConditionalPostLoad() { NativeCall<void>(this, "UObject.ConditionalPostLoad()"); }
	void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "UObject.PostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	void ConditionalPostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "UObject.ConditionalPostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	//void PreSave(FObjectPreSaveContext SaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UObject.PreSave(FObjectPreSaveContext)", SaveContext); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >* OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UObject.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UObject.Serialize(FStructuredArchiveRecord)", Record); }
	void SerializeScriptProperties(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UObject.SerializeScriptProperties(FStructuredArchiveSlot)", Ar); }
	void SerializeScriptProperties(FStructuredArchiveSlot Slot) { NativeCall<void, FStructuredArchiveSlot>(this, "UObject.SerializeScriptProperties(FStructuredArchiveSlot)", Slot); }
	void BuildSubobjectMapping(UObject* OtherObject, TMap<UObject*, UObject*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, UObject*, 0> >* ObjectMapping) { NativeCall<void, UObject*, TMap<UObject*, UObject*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UObject*, UObject*, 0> >*>(this, "UObject.BuildSubobjectMapping(UObject*,TMap<UObject*,UObject*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*,UObject*,0>>&)", OtherObject, ObjectMapping); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void CollectDefaultSubobjects(TArray<UObject*, TSizedDefaultAllocator<32> >* OutSubobjectArray, bool bIncludeNestedSubobjects);
	bool CheckDefaultSubobjects(bool bForceCheck) { return NativeCall<bool, bool>(this, "UObject.CheckDefaultSubobjects(bool)", bForceCheck); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "UObject.CheckDefaultSubobjectsInternal()"); }
	//void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >* OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >*>(this, "UObject.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>*)", OutTags); }
	void GetAssetRegistryTags(FAssetData* Out) { NativeCall<void, FAssetData*>(this, "UObject.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>&)", Out); }
	// 	static const FName* AssetVersePathTagName() { return NativeCall<const FName*>(nullptr, "UObject.AssetVersePathTagName()"); }
	// FUNCTION MISSING: UObject.AssetVersePathTagName()
	void GetResourceSizeEx(FResourceSizeEx* CumulativeResourceSize) { NativeCall<void, FResourceSizeEx*>(this, "UObject.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	bool IsAsset() { return NativeCall<bool>(this, "UObject.IsAsset()"); }
	FPrimaryAssetId* GetPrimaryAssetId(FPrimaryAssetId* result) { return NativeCall<FPrimaryAssetId*, FPrimaryAssetId*>(this, "UObject.GetPrimaryAssetId()", result); }
	bool IsLocalizedResource() { return NativeCall<bool>(this, "UObject.IsLocalizedResource()"); }
	bool IsSafeForRootSet() { return NativeCall<bool>(this, "UObject.IsSafeForRootSet()"); }
	//void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UObject.TagSubobjects(EObjectFlags)", NewFlags); }
	void LoadConfig(UClass* ConfigClass, const wchar_t* InFilename, unsigned int PropagationFlags, FProperty* PropertyToLoad) { NativeCall<void, UClass*, const wchar_t*, unsigned int, FProperty*>(this, "UObject.LoadConfig(UClass*,wchar_t*,unsignedint,FProperty*,TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>>*)", ConfigClass, InFilename, PropagationFlags, PropertyToLoad); }
	void SaveConfig(unsigned __int64 Flags, const wchar_t* InFilename, FConfigCacheIni* Config, bool bAllowCopyToDefaultObject) { NativeCall<void, unsigned __int64, const wchar_t*, FConfigCacheIni*, bool>(this, "UObject.SaveConfig(unsigned__int64,wchar_t*,FConfigCacheIni*,bool)", Flags, InFilename, Config, bAllowCopyToDefaultObject); }
	FString* GetDefaultConfigFilename(FString* result) { return NativeCall<FString*, FString*>(this, "UObject.GetDefaultConfigFilename()", result); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsNameStableForNetworking()"); }
	bool IsFullNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsFullNameStableForNetworking()"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UObject.IsSupportedForNetworking()"); }
	void LocalizeProperty(UObject* LocBase, TArray<FString, TSizedDefaultAllocator<32> >* PropertyTagChain, FProperty* const BaseProperty, FProperty* const Property, void* const ValueAddress) { NativeCall<void, UObject*, TArray<FString, TSizedDefaultAllocator<32> >*, FProperty* const, FProperty* const, void* const>(this, "UObject.LocalizeProperty(UObject*,TArray<FString,TSizedDefaultAllocator<32>>&,FProperty*const,FProperty*const,void*const)", LocBase, PropertyTagChain, BaseProperty, Property, ValueAddress); }
	void SkipFunction(FFrame* Stack, void* const Z_Param__Result, UFunction* Function) { NativeCall<void, FFrame*, void* const, UFunction*>(this, "UObject.SkipFunction(FFrame&,void*const,UFunction*)", Stack, Z_Param__Result, Function); }
	void CallFunction(FFrame* Stack, void* const Z_Param__Result, UFunction* Function) { NativeCall<void, FFrame*, void* const, UFunction*>(this, "UObject.CallFunction(FFrame&,void*const,UFunction*)", Stack, Z_Param__Result, Function); }
	static void ProcessInternal(UObject* Context, FFrame* Stack, void* const Z_Param__Result) { NativeCall<void, UObject*, FFrame*, void* const>(nullptr, "UObject.ProcessInternal(UObject*,FFrame&,void*const)", Context, Stack, Z_Param__Result); }
	bool CallFunctionByNameWithArguments(const wchar_t* Str, FOutputDevice* Ar, UObject* Executor, bool bForceCallWithNonExec) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UObject*, bool>(this, "UObject.CallFunctionByNameWithArguments(wchar_t*,FOutputDevice&,UObject*,bool)", Str, Ar, Executor, bForceCallWithNonExec); }
	//UFunction* FindFunctionChecked(FName InName, EIncludeSuperFlag::Type a3 = EIncludeSuperFlag::IncludeSuper) { return NativeCall<UFunction*, FName, EIncludeSuperFlag::Type>(this, "UObject.FindFunctionChecked(FName)", InName, a3); }
	void ProcessEvent(UFunction* Function, void* Parms) { NativeCall<void, UFunction*, void*>(this, "UObject.ProcessEvent(UFunction*,void*)", Function, Parms); }
	void ProcessContextOpcode(FFrame* Stack, void* const Z_Param__Result, bool bCanFailSilently) { NativeCall<void, FFrame*, void* const, bool>(this, "UObject.ProcessContextOpcode(FFrame&,void*const,bool)", Stack, Z_Param__Result, bCanFailSilently); }
	//void execIntZero(FBehaviorTreeSearchData* SearchData, EBTNodeResult::Type* NodeResult) { NativeCall<void, FBehaviorTreeSearchData*, EBTNodeResult::Type*>(this, "UObject.execIntZero(FBehaviorTreeSearchData*,EBTNodeResult::Type*)", SearchData, NodeResult); }
	UObject* GetArchetype() { return NativeCall<UObject*>(this, "UObject.GetArchetype()"); }
	bool IsInOrOwnedBy(const UObject* SomeOuter) { return NativeCall<bool, const UObject*>(this, "UObject.IsInOrOwnedBy(UObject*)", SomeOuter); }
	//void UObject() { NativeCall<void>(this, "UObject.UObject()"); }
	void SetLinker(FLinkerLoad* LinkerLoad, int LinkerIndex, bool bShouldDetachExisting, bool bSilenceLogs) { NativeCall<void, FLinkerLoad*, int, bool, bool>(this, "UObject.SetLinker(FLinkerLoad*,int,bool,bool)", LinkerLoad, LinkerIndex, bShouldDetachExisting, bSilenceLogs); }

	ARK_API FProperty* FindProperty(FName name);

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UObject"); }
};