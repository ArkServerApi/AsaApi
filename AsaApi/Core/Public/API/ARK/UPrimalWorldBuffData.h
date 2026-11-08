#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalWorldBuffData : UObject
{
public:
	UPrimalWorldBuffData() = delete;
	~UPrimalWorldBuffData() = delete;
	UPrimalWorldBuffData(const UPrimalWorldBuffData&) = delete;
	UPrimalWorldBuffData& operator=(const UPrimalWorldBuffData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWorldBuffData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWorldBuffData"); }

	bool& bWorldBuffsAreSuspendedField() { return *GetNativePointerField<bool*>(this, "UPrimalWorldBuffData.bWorldBuffsAreSuspended"); }

	void UpdateWorldBuffPeristantData(UWorld* World) { NativeCall<void, UWorld*>(this, "UPrimalWorldBuffData.UpdateWorldBuffPeristantData(UWorld*)", World); }
	static void UnsuspendWorldBuffs() { NativeCall<void>(nullptr, "UPrimalWorldBuffData.UnsuspendWorldBuffs()"); }
	static void SuspendWorldBuffs() { NativeCall<void>(nullptr, "UPrimalWorldBuffData.SuspendWorldBuffs()"); }
	void CheckWorldBuffsToClear() { NativeCall<void>(this, "UPrimalWorldBuffData.CheckWorldBuffsToClear()"); }
	void PostDynamicConfigUpdate() { NativeCall<void>(this, "UPrimalWorldBuffData.PostDynamicConfigUpdate()"); }
	void InitFromLoad() { NativeCall<void>(this, "UPrimalWorldBuffData.InitFromLoad()"); }
	void AuthorityTick(UWorld* world, float DeltaSeconds) { NativeCall<void, UWorld*, float>(this, "UPrimalWorldBuffData.AuthorityTick(UWorld*,float)", world, DeltaSeconds); }
	static UPrimalWorldBuffData* GetWorldBuffData() { return NativeCall<UPrimalWorldBuffData*>(nullptr, "UPrimalWorldBuffData.GetWorldBuffData()"); }
	void ApplyWorldBuffSettings(UWorld* World) { NativeCall<void, UWorld*>(this, "UPrimalWorldBuffData.ApplyWorldBuffSettings(UWorld*)", World); }

	TArray<UPrimalWorldBuffCustomImplement*, TSizedDefaultAllocator<32> >& ConstructedWorldBuffImplementsField() { return *GetNativePointerField<TArray<UPrimalWorldBuffCustomImplement*, TSizedDefaultAllocator<32> >*>(this, "UPrimalWorldBuffData.ConstructedWorldBuffImplements"); }
	static void AddWorldBuff(UObject* WorldContextObject, FName WorldBuffIdentifier, int StacksToGive) { NativeCall<void, UObject*, FName, int>(nullptr, "UPrimalWorldBuffData.AddWorldBuff(UObject*,FName,int)", WorldContextObject, WorldBuffIdentifier, StacksToGive); }
	static float GetPropertyFromObject(UWorld* World, UObject* containerObject, const FName& propertyName) { return NativeCall<float, UWorld*, UObject*, const FName&>(nullptr, "UPrimalWorldBuffData.GetPropertyFromObject(UWorld*,UObject*,FName&)", World, containerObject, propertyName); }
	static bool CanActivateWorldBuff(UObject* WorldContextObject, FName WorldBuffIdentifier, TArray<FName, TSizedDefaultAllocator<32> >& OutWorldBuffsToBeReplaced) { return NativeCall<bool, UObject*, FName, TArray<FName, TSizedDefaultAllocator<32> >&>(nullptr, "UPrimalWorldBuffData.CanActivateWorldBuff(UObject*,FName,TArray<FName,TSizedDefaultAllocator<32>>&)", WorldContextObject, WorldBuffIdentifier, OutWorldBuffsToBeReplaced); }
	static void RemoveWorldBuff(UObject* WorldContextObject, const FName& WorldBuffIdentifier) { NativeCall<void, UObject*, const FName&>(nullptr, "UPrimalWorldBuffData.RemoveWorldBuff(UObject*,FName&)", WorldContextObject, WorldBuffIdentifier); }
	static void ApplyPropertyToObject(UObject* containerObject, const FName& propertyName, const float& value, bool bIsReplicated) { NativeCall<void, UObject*, const FName&, const float&, bool>(nullptr, "UPrimalWorldBuffData.ApplyPropertyToObject(UObject*,FName&,float&,bool)", containerObject, propertyName, value, bIsReplicated); }
	static bool GetWorldBuffDefinitionByName(FName WorldBuffIdentifier, FWorldBuffDefinition& outWorldBuffDefinition) { return NativeCall<bool, FName, FWorldBuffDefinition&>(nullptr, "UPrimalWorldBuffData.GetWorldBuffDefinitionByName(FName,FWorldBuffDefinition&)", WorldBuffIdentifier, outWorldBuffDefinition); }
};
