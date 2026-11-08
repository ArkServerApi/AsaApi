#pragma once
#include "BulkForward.h"


struct APrimalWorldModifier : AActor
{
	// Fields

	TArray<FString, TSizedDefaultAllocator<32> >& MapExclusionListField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.MapExclusionList"); }
	TArray<FName, TSizedDefaultAllocator<32> >& PriorityTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.PriorityTags"); }
	//TArray<AInstancedFoliageActor*, TSizedDefaultAllocator<32> >& ReskinnedFoliageTrackingListField() { return *GetNativePointerField<TArray<AInstancedFoliageActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.ReskinnedFoliageTrackingList"); }
	//TArray<FFoliageReskinDefinition, TSizedDefaultAllocator<32> >& FoliageReskinListField() { return *GetNativePointerField<TArray<FFoliageReskinDefinition, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.FoliageReskinList"); }
	TArray<AStaticMeshActor*, TSizedDefaultAllocator<32> >& ReskinnedLevelStaticMeshTrackingListField() { return *GetNativePointerField<TArray<AStaticMeshActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.ReskinnedLevelStaticMeshTrackingList"); }
	//TArray<FSublevelOverrideGroup, TSizedDefaultAllocator<32> >& SublevelOverrideGroupsField() { return *GetNativePointerField<TArray<FSublevelOverrideGroup, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.SublevelOverrideGroups"); }
	//FNotifyOnFoliageSkinned& OnFoliageSkinnedField() { return *GetNativePointerField<FNotifyOnFoliageSkinned*>(this, "APrimalWorldModifier.OnFoliageSkinned"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalWorldModifier"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalWorldModifier();
	//void APrimalWorldModifier(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "APrimalWorldModifier.APrimalWorldModifier(FObjectInitializer&)", ObjectInitializer); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWorldModifier.BeginPlay()"); }
	bool HasPriority() { return NativeCall<bool>(this, "APrimalWorldModifier.HasPriority()"); }
	bool IsAllowedOnCurrentMap() { return NativeCall<bool>(this, "APrimalWorldModifier.IsAllowedOnCurrentMap()"); }
	//void TryFoliageReskin(AInstancedFoliageActor* ForFoliageActor) { NativeCall<void, AInstancedFoliageActor*>(this, "APrimalWorldModifier.TryFoliageReskin(AInstancedFoliageActor*)", ForFoliageActor); }
	void RescanForFoliage() { NativeCall<void>(this, "APrimalWorldModifier.RescanForFoliage()"); }
	//void TryStaticMeshActorReskin(AStaticMeshActor* ForStaticMeshActor, FSublevelOverrideGroup* CurrentSublevelOverrideGroup) { NativeCall<void, AStaticMeshActor*, FSublevelOverrideGroup*>(this, "APrimalWorldModifier.TryStaticMeshActorReskin(AStaticMeshActor*,FSublevelOverrideGroup&)", ForStaticMeshActor, CurrentSublevelOverrideGroup); }
	void RescanForMapStaticMeshes() { NativeCall<void>(this, "APrimalWorldModifier.RescanForMapStaticMeshes()"); }
	void TrySublevelSwaps() { NativeCall<void>(this, "APrimalWorldModifier.TrySublevelSwaps()"); }
	//void GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup* outSublevelOverrideGroup) { NativeCall<void, FSublevelOverrideGroup*>(this, "APrimalWorldModifier.GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup&)", outSublevelOverrideGroup); }

	bool& bUseMapExclusionListAsExclusiveListField() { return *GetNativePointerField<bool*>(this, "APrimalWorldModifier.bUseMapExclusionListAsExclusiveList"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalWorldModifier"); }

	TArray<AInstancedFoliageActor*, TSizedDefaultAllocator<32> >& ReskinnedFoliageTrackingListField() { return *GetNativePointerField<TArray<AInstancedFoliageActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalWorldModifier.ReskinnedFoliageTrackingList"); }
	FNotifyOnFoliageSkinned& OnFoliageSkinnedField() { return *GetNativePointerField<FNotifyOnFoliageSkinned*>(this, "APrimalWorldModifier.OnFoliageSkinned"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalWorldModifier.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BPPreFoliageScan() { NativeCall<void>(this, "APrimalWorldModifier.BPPreFoliageScan()"); }
	void DoRescanForSublevelLoaded() { NativeCall<void>(this, "APrimalWorldModifier.DoRescanForSublevelLoaded()"); }
	void TryStaticMeshActorReskin(AStaticMeshActor* ForStaticMeshActor, FSublevelOverrideGroup& CurrentSublevelOverrideGroup) { NativeCall<void, AStaticMeshActor*, FSublevelOverrideGroup&>(this, "APrimalWorldModifier.TryStaticMeshActorReskin(AStaticMeshActor*,FSublevelOverrideGroup&)", ForStaticMeshActor, CurrentSublevelOverrideGroup); }
	void BPPostInitializationHasPriority() { NativeCall<void>(this, "APrimalWorldModifier.BPPostInitializationHasPriority()"); }
	void GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup& outSublevelOverrideGroup) { NativeCall<void, FSublevelOverrideGroup&>(this, "APrimalWorldModifier.GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup&)", outSublevelOverrideGroup); }
	void BPPostFoliageScan() { NativeCall<void>(this, "APrimalWorldModifier.BPPostFoliageScan()"); }
	void TryFoliageReskin(AInstancedFoliageActor* ForFoliageActor) { NativeCall<void, AInstancedFoliageActor*>(this, "APrimalWorldModifier.TryFoliageReskin(AInstancedFoliageActor*)", ForFoliageActor); }
	void BPSkinFoliage(UHierarchicalInstancedStaticMeshComponent* FoliageInstance) { NativeCall<void, UHierarchicalInstancedStaticMeshComponent*>(this, "APrimalWorldModifier.BPSkinFoliage(UHierarchicalInstancedStaticMeshComponent*)", FoliageInstance); }
	void PreMapLoad() { NativeCall<void>(this, "APrimalWorldModifier.PreMapLoad()"); }
};