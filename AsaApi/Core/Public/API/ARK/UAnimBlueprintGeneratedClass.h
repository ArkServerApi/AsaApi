#include "EngineInterfaceDispatch.h"
#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UBlueprintGeneratedClass.h"

class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	UAnimBlueprintGeneratedClass() = delete;
	~UAnimBlueprintGeneratedClass() = delete;
	UAnimBlueprintGeneratedClass(const UAnimBlueprintGeneratedClass&) = delete;
	UAnimBlueprintGeneratedClass& operator=(const UAnimBlueprintGeneratedClass&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimBlueprintGeneratedClass"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimBlueprintGeneratedClass"); }
	TArray<FName, TSizedDefaultAllocator<32> >& SyncGroupNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UAnimBlueprintGeneratedClass.SyncGroupNames"); }
	FStructProperty*& MutableNodeDataPropertyField() { return *GetNativePointerField<FStructProperty**>(this, "UAnimBlueprintGeneratedClass.MutableNodeDataProperty"); }
	bool& bPrimalBadAnimBPField() { return *GetNativePointerField<bool*>(this, "UAnimBlueprintGeneratedClass.bPrimalBadAnimBP"); }
	int GetAnimNodePropertyCount(const UScriptStruct* InNodeType) { return NativeCall<int, const UScriptStruct*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetAnimNodePropertyCount(UScriptStruct*)", InNodeType); }
	void Link(FArchive& Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive&, bool>(this, "UAnimBlueprintGeneratedClass.Link(FArchive&,bool)", Ar, bRelinkExistingProperties); }
	const TArray<FName, TSizedDefaultAllocator<32> >& GetSyncGroupNames_Direct() { return NativeCall<const TArray<FName, TSizedDefaultAllocator<32> >&>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetSyncGroupNames_Direct()"); }
	void PostLoad() { NativeCall<void>(this, "UAnimBlueprintGeneratedClass.PostLoad()"); }
	const void* GetMutableNodeValueRaw(int InIndex, const UObject* InObject) { return NativeCall<const void*, int, const UObject*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetMutableNodeValueRaw(int,UObject*)", InIndex, InObject); }
	const void* GetConstantNodeData() { return NativeCall<const void*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetConstantNodeData()"); }
	void PostLoadDefaultObject(UObject* Object) { NativeCall<void, UObject*>(this, "UAnimBlueprintGeneratedClass.PostLoadDefaultObject(UObject*)", Object); }
	void BuildConstantProperties() { NativeCall<void>(this, "UAnimBlueprintGeneratedClass.BuildConstantProperties()"); }
	int GetSyncGroupIndex(FName SyncGroupName) { return NativeCall<int, FName>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetSyncGroupIndex(FName)", SyncGroupName); }
	const TArray<FName, TSizedDefaultAllocator<32> >& GetSyncGroupNames() { return NativeCall<const TArray<FName, TSizedDefaultAllocator<32> >&>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetSyncGroupNames()"); }
	void GenerateAnimationBlueprintFunctions() { NativeCall<void>(this, "UAnimBlueprintGeneratedClass.GenerateAnimationBlueprintFunctions()"); }
	const FAnimSubsystem* FindSubsystem(UScriptStruct* InSubsystemType) { return NativeCall<const FAnimSubsystem*, UScriptStruct*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.FindSubsystem(UScriptStruct*)", InSubsystemType); }
	const void* GetConstantNodeValueRaw(int InIndex) { return NativeCall<const void*, int>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetConstantNodeValueRaw(int)", InIndex); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UAnimBlueprintGeneratedClass.PurgeClass(bool)", bRecompilingOnLoad); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "UAnimBlueprintGeneratedClass.CanBeInCluster()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAnimBlueprintGeneratedClass.Serialize(FArchive&)", Ar); }
	USkeleton* GetTargetSkeleton() { return NativeCall<USkeleton*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetTargetSkeleton()"); }
	FAnimBlueprintMutableData* GetMutableNodeData(UObject* InObject) { return NativeCall<FAnimBlueprintMutableData*, UObject*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetMutableNodeData(UObject*)", InObject); }
	const FAnimBlueprintMutableData* GetMutableNodeData(const UObject* InObject) { return NativeCall<const FAnimBlueprintMutableData*, const UObject*>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetMutableNodeData(UObject*)", InObject); }
	void LinkFunctionsToDefaultObjectNodes(UObject* DefaultObject) { NativeCall<void, UObject*>(this, "UAnimBlueprintGeneratedClass.LinkFunctionsToDefaultObjectNodes(UObject*)", DefaultObject); }
	int GetAnimNodePropertyIndex(const UScriptStruct* InNodeType, FName InPropertyName) { return NativeCall<int, const UScriptStruct*, FName>(AsaAnimInterfaceReceiver(this), "UAnimBlueprintGeneratedClass.GetAnimNodePropertyIndex(UScriptStruct*,FName)", InNodeType, InPropertyName); }
	unsigned char* GetPersistentUberGraphFrame(UObject* Obj, UFunction* FuncToCheck) { return NativeCall<unsigned char*, UObject*, UFunction*>(this, "UAnimBlueprintGeneratedClass.GetPersistentUberGraphFrame(UObject*,UFunction*)", Obj, FuncToCheck); }
};
