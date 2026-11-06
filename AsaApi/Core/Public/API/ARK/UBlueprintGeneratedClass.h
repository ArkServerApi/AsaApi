#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UClass.h"

class UBlueprintGeneratedClass : public UClass
{
public:
	UBlueprintGeneratedClass() = delete;
	~UBlueprintGeneratedClass() = delete;
	UBlueprintGeneratedClass(const UBlueprintGeneratedClass&) = delete;
	UBlueprintGeneratedClass& operator=(const UBlueprintGeneratedClass&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlueprintGeneratedClass"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlueprintGeneratedClass"); }
	int& NumReplicatedPropertiesField() { return *GetNativePointerField<int*>(this, "UBlueprintGeneratedClass.NumReplicatedProperties"); }
	int& FieldNotifiesStartBitNumberField() { return *GetNativePointerField<int*>(this, "UBlueprintGeneratedClass.FieldNotifiesStartBitNumber"); }
	FStructProperty*& UberGraphFramePointerPropertyField() { return *GetNativePointerField<FStructProperty**>(this, "UBlueprintGeneratedClass.UberGraphFramePointerProperty"); }
	BitFieldValue<bool, unsigned char> bHasCookedComponentInstancingData() { return { this, "UBlueprintGeneratedClass.bHasCookedComponentInstancingData"}; }
	BitFieldValue<bool, unsigned char> bSupportsDynamicInstancedReference() { return { this, "UBlueprintGeneratedClass.bSupportsDynamicInstancedReference"}; }
	BitFieldValue<bool, unsigned char> bCustomPropertyListForPostConstructionInitialized() { return { this, "UBlueprintGeneratedClass.bCustomPropertyListForPostConstructionInitialized"}; }
	BitFieldValue<bool, unsigned char> bIsDataOnlyBlueprint() { return { this, "UBlueprintGeneratedClass.bIsDataOnlyBlueprint"}; }
	static void CreateTimelineComponent(AActor* Actor, const UTimelineTemplate* TimelineTemplate) { NativeCall<void, AActor*, const UTimelineTemplate*>(nullptr, "UBlueprintGeneratedClass.CreateTimelineComponent(AActor*,UTimelineTemplate*)", Actor, TimelineTemplate); }
	void PostInitProperties() { NativeCall<void>(this, "UBlueprintGeneratedClass.PostInitProperties()"); }
	bool UseFastPathComponentInstancing() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.UseFastPathComponentInstancing()"); }
	static UDynamicBlueprintBinding* GetDynamicBindingObject(const UClass* ThisClass, UClass* BindingClass) { return NativeCall<UDynamicBlueprintBinding*, const UClass*, UClass*>(nullptr, "UBlueprintGeneratedClass.GetDynamicBindingObject(UClass*,UClass*)", ThisClass, BindingClass); }
	void CreatePersistentUberGraphFrame(UObject* Obj, bool bCreateOnlyIfEmpty, bool bSkipSuperClass, UClass* OldClass) { NativeCall<void, UObject*, bool, bool, UClass*>(this, "UBlueprintGeneratedClass.CreatePersistentUberGraphFrame(UObject*,bool,bool,UClass*)", Obj, bCreateOnlyIfEmpty, bSkipSuperClass, OldClass); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBlueprintGeneratedClass.Serialize(FArchive&)", Ar); }
	bool BuildCustomArrayPropertyListForPostConstruction(FArrayProperty* ArrayProperty, FCustomPropertyListNode*& InPropertyList, const unsigned char* DataPtr, const unsigned char* DefaultDataPtr, int StartIndex) { return NativeCall<bool, FArrayProperty*, FCustomPropertyListNode*&, const unsigned char*, const unsigned char*, int>(this, "UBlueprintGeneratedClass.BuildCustomArrayPropertyListForPostConstruction(FArrayProperty*,FCustomPropertyListNode*&,unsignedchar*,unsignedchar*,int)", ArrayProperty, InPropertyList, DataPtr, DefaultDataPtr, StartIndex); }
	void UpdateCustomPropertyListForPostConstruction() { NativeCall<void>(this, "UBlueprintGeneratedClass.UpdateCustomPropertyListForPostConstruction()"); }
	void PostInitInstance(UObject* InObj, FObjectInstancingGraph* InstanceGraph) { NativeCall<void, UObject*, FObjectInstancingGraph*>(this, "UBlueprintGeneratedClass.PostInitInstance(UObject*,FObjectInstancingGraph*)", InObj, InstanceGraph); }
	UInheritableComponentHandler* GetInheritableComponentHandler(bool bCreateIfNecessary) { return NativeCall<UInheritableComponentHandler*, bool>(this, "UBlueprintGeneratedClass.GetInheritableComponentHandler(bool)", bCreateIfNecessary); }
	void SetupObjectInitializer(FObjectInitializer& ObjectInitializer) { NativeCall<void, FObjectInitializer&>(this, "UBlueprintGeneratedClass.SetupObjectInitializer(FObjectInitializer&)", ObjectInitializer); }
	void PostLoad() { NativeCall<void>(this, "UBlueprintGeneratedClass.PostLoad()"); }
	void PostLoadDefaultObject(UObject* Object) { NativeCall<void, UObject*>(this, "UBlueprintGeneratedClass.PostLoadDefaultObject(UObject*)", Object); }
	void PostLoadInstance(UObject* InObj) { NativeCall<void, UObject*>(this, "UBlueprintGeneratedClass.PostLoadInstance(UObject*)", InObj); }
	void GetDefaultObjectPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >& OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >&>(this, "UBlueprintGeneratedClass.GetDefaultObjectPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >& OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >&>(this, "UBlueprintGeneratedClass.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.NeedsLoadForServer()"); }
	static void BindDynamicDelegates(const UClass* ThisClass, UObject* InInstance) { NativeCall<void, const UClass*, UObject*>(nullptr, "UBlueprintGeneratedClass.BindDynamicDelegates(UClass*,UObject*)", ThisClass, InInstance); }
	bool ArePropertyGuidsAvailable() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.ArePropertyGuidsAvailable()"); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UBlueprintGeneratedClass.PurgeClass(bool)", bRecompilingOnLoad); }
	static void CreateComponentsForActor(const UClass* ThisClass, AActor* Actor) { NativeCall<void, const UClass*, AActor*>(nullptr, "UBlueprintGeneratedClass.CreateComponentsForActor(UClass*,AActor*)", ThisClass, Actor); }
	static bool InitPropertyFromSubPropertyList(const FProperty* Property, const FCustomPropertyListNode* SubPropertyList, unsigned char* PropertyValue, const unsigned char* DefaultPropertyValue) { return NativeCall<bool, const FProperty*, const FCustomPropertyListNode*, unsigned char*, const unsigned char*>(nullptr, "UBlueprintGeneratedClass.InitPropertyFromSubPropertyList(FProperty*,FCustomPropertyListNode*,unsignedchar*,unsignedchar*)", Property, SubPropertyList, PropertyValue, DefaultPropertyValue); }
	bool IsFunctionImplementedInScript(FName InFunctionName) { return NativeCall<bool, FName>(this, "UBlueprintGeneratedClass.IsFunctionImplementedInScript(FName)", InFunctionName); }
	bool IsAsset() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.IsAsset()"); }
	static void InitPropertiesFromCustomList(const FCustomPropertyListNode* InPropertyList, UStruct* InStruct, unsigned char* DataPtr, const unsigned char* DefaultDataPtr) { NativeCall<void, const FCustomPropertyListNode*, UStruct*, unsigned char*, const unsigned char*>(nullptr, "UBlueprintGeneratedClass.InitPropertiesFromCustomList(FCustomPropertyListNode*,UStruct*,unsignedchar*,unsignedchar*)", InPropertyList, InStruct, DataPtr, DefaultDataPtr); }
	void InitPropertiesFromCustomList(unsigned char* DataPtr, const unsigned char* DefaultDataPtr) { NativeCall<void, unsigned char*, const unsigned char*>(this, "UBlueprintGeneratedClass.InitPropertiesFromCustomList(unsignedchar*,unsignedchar*)", DataPtr, DefaultDataPtr); }
	void Bind() { NativeCall<void>(this, "UBlueprintGeneratedClass.Bind()"); }
	void Link(FArchive& Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive&, bool>(this, "UBlueprintGeneratedClass.Link(FArchive&,bool)", Ar, bRelinkExistingProperties); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.NeedsLoadForClient()"); }
	UObject* FindArchetype(const UClass* ArchetypeClass, FName ArchetypeName) { return NativeCall<UObject*, const UClass*, FName>(this, "UBlueprintGeneratedClass.FindArchetype(UClass*,FName)", ArchetypeClass, ArchetypeName); }
	UActorComponent* FindComponentTemplateByName(const FName& TemplateName) { return NativeCall<UActorComponent*, const FName&>(this, "UBlueprintGeneratedClass.FindComponentTemplateByName(FName&)", TemplateName); }
	bool CanBeClusterRoot() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.CanBeClusterRoot()"); }
	bool BuildCustomPropertyListForPostConstruction(FCustomPropertyListNode*& InPropertyList, UStruct* InStruct, const unsigned char* DataPtr, const unsigned char* DefaultDataPtr) { return NativeCall<bool, FCustomPropertyListNode*&, UStruct*, const unsigned char*, const unsigned char*>(this, "UBlueprintGeneratedClass.BuildCustomPropertyListForPostConstruction(FCustomPropertyListNode*&,UStruct*,unsignedchar*,unsignedchar*)", InPropertyList, InStruct, DataPtr, DefaultDataPtr); }
	static bool UsePersistentUberGraphFrame() { return NativeCall<bool>(nullptr, "UBlueprintGeneratedClass.UsePersistentUberGraphFrame()"); }
	static void AddReferencedObjectsInUbergraphFrame(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UBlueprintGeneratedClass.AddReferencedObjectsInUbergraphFrame(UObject*,FReferenceCollector&)", InThis, Collector); }
	static void InitArrayPropertyFromCustomList(const FArrayProperty* ArrayProperty, const FCustomPropertyListNode* InPropertyList, unsigned char* DataPtr, const unsigned char* DefaultDataPtr) { NativeCall<void, const FArrayProperty*, const FCustomPropertyListNode*, unsigned char*, const unsigned char*>(nullptr, "UBlueprintGeneratedClass.InitArrayPropertyFromCustomList(FArrayProperty*,FCustomPropertyListNode*,unsignedchar*,unsignedchar*)", ArrayProperty, InPropertyList, DataPtr, DefaultDataPtr); }
	void DestroyPersistentUberGraphFrame(UObject* Obj, bool bSkipSuperClass) { NativeCall<void, UObject*, bool>(this, "UBlueprintGeneratedClass.DestroyPersistentUberGraphFrame(UObject*,bool)", Obj, bSkipSuperClass); }
	FGuid* FindPropertyGuidFromName(FGuid* result, FName InName) { return NativeCall<FGuid*, FGuid*, FName>(this, "UBlueprintGeneratedClass.FindPropertyGuidFromName(FName)", result, InName); }
	FName FindPropertyNameFromGuid(const FGuid& PropertyGuid) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FGuid &>(this, "UBlueprintGeneratedClass.FindPropertyNameFromGuid(FGuid&)", AsaReturnPointer, PropertyGuid); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UBlueprintGeneratedClass.NeedsLoadForEditorGame()"); }
	unsigned char* GetPersistentUberGraphFrame(UObject* Obj, UFunction* FuncToCheck) { return NativeCall<unsigned char*, UObject*, UFunction*>(this, "UBlueprintGeneratedClass.GetPersistentUberGraphFrame(UObject*,UFunction*)", Obj, FuncToCheck); }
};
