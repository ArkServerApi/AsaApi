#pragma once
#include "BulkForward.h"


struct ABasePrimalWorldSettings : AInfo
{
	// Fields

	TMap<unsigned int, TObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, TObjectPtr<AActor>, 0> >& StructureIDMapField() { return *GetNativePointerField<TMap<unsigned int, TObjectPtr<AActor>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, TObjectPtr<AActor>, 0> >*>(this, "ABasePrimalWorldSettings.StructureIDMap"); }
	FieldArray<TSet<TWeakObjectPtr<AActor>, DefaultKeyFuncs<TWeakObjectPtr<AActor>, 0>, FDefaultSetAllocator>, 6> UnstasisSetField() { return { this, "ABasePrimalWorldSettings.UnstasisSet" }; }
	std::atomic<int>& AtomicActorUnstasisListCountField() { return *GetNativePointerField<std::atomic<int>*>(this, "ABasePrimalWorldSettings.AtomicActorUnstasisListCount"); }
	TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >& QuickTickUnstasisListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.QuickTickUnstasisList"); }
	unsigned int& CurrentUnStasisedIndexField() { return *GetNativePointerField<unsigned int*>(this, "ABasePrimalWorldSettings.CurrentUnStasisedIndex"); }
	float& BaseNetStasisDistanceField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.BaseNetStasisDistance"); }
	TMap<AActor*, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<AActor*, double, 0> >& PlayerCharacterUnstasisViewpointTimestampsField() { return *GetNativePointerField<TMap<AActor*, double, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<AActor*, double, 0> >*>(this, "ABasePrimalWorldSettings.PlayerCharacterUnstasisViewpointTimestamps"); }
	TObjectPtr<APostProcessVolume>& GlobalPostProcessVolumeField() { return *GetNativePointerField<TObjectPtr<APostProcessVolume>*>(this, "ABasePrimalWorldSettings.GlobalPostProcessVolume"); }
	float& KillZIntervalMinField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMin"); }
	float& KillZIntervalMaxField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMax"); }
	FieldArray<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>, 37> ActorListSetField() { return { this, "ABasePrimalWorldSettings.ActorListSet" }; }
	FieldArray<TArray<TWeakObjectPtr<AActor>, TSizedDefaultAllocator<32> >, 37> ActorListsField() { return { this, "ABasePrimalWorldSettings.ActorLists" }; }
	TMap<UStaticMesh*, UInstancedStaticMeshComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UStaticMesh*, UInstancedStaticMeshComponent*, 0> >& TreeStumpComponentsField() { return *GetNativePointerField<TMap<UStaticMesh*, UInstancedStaticMeshComponent*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<UStaticMesh*, UInstancedStaticMeshComponent*, 0> >*>(this, "ABasePrimalWorldSettings.TreeStumpComponents"); }
	TArray<FTreeStumpCreationTime, TSizedDefaultAllocator<32> >& TreeStumpCreationTimesField() { return *GetNativePointerField<TArray<FTreeStumpCreationTime, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.TreeStumpCreationTimes"); }
	TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >& TaggedActorMapField() { return *GetNativePointerField<TMap<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, TArray<AActor*, TSizedDefaultAllocator<32> >, 0> >*>(this, "ABasePrimalWorldSettings.TaggedActorMap"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& EmptyArrayField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.EmptyArray"); }

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesABasePrimalWorldSettings();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABasePrimalWorldSettings"); }
	void AddToActorList(EActorLists ActorList, AActor* ActorToAdd) { NativeCall<void, EActorLists, AActor*>(this, "ABasePrimalWorldSettings.AddToActorList(EActorLists,AActor*)", ActorList, ActorToAdd); }
	void RemoveFromActorList(EActorLists ActorList, AActor* ActorToRemove) { NativeCall<void, EActorLists, AActor*>(this, "ABasePrimalWorldSettings.RemoveFromActorList(EActorLists,AActor*)", ActorList, ActorToRemove); }
	void ForEachActorInActorList(EActorLists ActorList, TFunctionRef<bool __cdecl(AActor*)>* Callback) { NativeCall<void, EActorLists, TFunctionRef<bool __cdecl(AActor*)>*>(this, "ABasePrimalWorldSettings.ForEachActorInActorList(EActorLists,TFunctionRef<bool__cdecl(AActor*))", ActorList, Callback); }
	void ForEachActorInActorList_Throttled(EActorLists ActorList, int MaxIterations, int* pInOutCurrentActorListOffset, TFunctionRef<bool __cdecl(AActor*)>* Callback) { NativeCall<void, EActorLists, int, int*, TFunctionRef<bool __cdecl(AActor*)>*>(this, "ABasePrimalWorldSettings.ForEachActorInActorList_Throttled(EActorLists,int,int*,TFunctionRef<bool__cdecl(AActor*))", ActorList, MaxIterations, pInOutCurrentActorListOffset, Callback); }
	int GetActorListCount(EActorLists ActorList) { return NativeCall<int, EActorLists>(this, "ABasePrimalWorldSettings.GetActorListCount(EActorLists)", ActorList); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActorList(TArray<AActor*, TSizedDefaultAllocator<32> >* result, EActorLists ActorList) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, EActorLists>(this, "ABasePrimalWorldSettings.GetActorList(EActorLists)", result, ActorList); }
	void DuringPhysxTick(float DeltaSeconds) { NativeCall<void, float>(this, "ABasePrimalWorldSettings.DuringPhysxTick(float)", DeltaSeconds); }
	void AddActorToUnstasisSet(AActor* InActor) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.AddActorToUnstasisSet(AActor*)", InActor); }
	void RemoveActorFromUnstasisSet(AActor* InActor) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.RemoveActorFromUnstasisSet(AActor*)", InActor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ABasePrimalWorldSettings.Tick(float)", DeltaSeconds); }
	void RemoveTaggedActor(AActor* anAct) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.RemoveTaggedActor(AActor*)", anAct); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActorsWithTag(FName theTag) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, FName>(this, "ABasePrimalWorldSettings.GetActorsWithTag(FName)", theTag); }
	AActor* GetActorWithTag(FName theTag) { return NativeCall<AActor*, FName>(this, "ABasePrimalWorldSettings.GetActorWithTag(FName)", theTag); }
	void UpdateTreeStumps() { NativeCall<void>(this, "ABasePrimalWorldSettings.UpdateTreeStumps()"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABasePrimalWorldSettings"); }

	bool& bSeamlessTravelWorldField() { return *GetNativePointerField<bool*>(this, "ABasePrimalWorldSettings.bSeamlessTravelWorld"); }
	bool& bForceRouteBeginPlayOnLoadField() { return *GetNativePointerField<bool*>(this, "ABasePrimalWorldSettings.bForceRouteBeginPlayOnLoad"); }
	bool& bDisableSplitscreenField() { return *GetNativePointerField<bool*>(this, "ABasePrimalWorldSettings.bDisableSplitscreen"); }
	float& GrassDensityScaleField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.GrassDensityScale"); }
	float& GrassCullDistanceScaleField() { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.GrassCullDistanceScale"); }
	FPlatformGrassQualityCollection& PlatformGrassQualitiesField() { return *GetNativePointerField<FPlatformGrassQualityCollection*>(this, "ABasePrimalWorldSettings.PlatformGrassQualities"); }
	bool& bSkipRuntimeCellsTransformerStackInPIEField() { return *GetNativePointerField<bool*>(this, "ABasePrimalWorldSettings.bSkipRuntimeCellsTransformerStackInPIE"); }
	bool& bPrimalGrassEnabledField() { return *GetNativePointerField<bool*>(this, "ABasePrimalWorldSettings.bPrimalGrassEnabled"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& EmptyArray_DepreciatedField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ABasePrimalWorldSettings.EmptyArray_Depreciated"); }
	void DestroyedPlayerCharacter(AActor* aPlayerCharacter) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.DestroyedPlayerCharacter(AActor*)", aPlayerCharacter); }
	void AddTaggedActor_WithSpecifiedTag(AActor* anAct, FName SpecifiedTag) { NativeCall<void, AActor*, FName>(this, "ABasePrimalWorldSettings.AddTaggedActor_WithSpecifiedTag(AActor*,FName)", anAct, SpecifiedTag); }
	bool IsPointReallyUnderwater(const UE::Math::TVector<double>& ThePoint, bool bIgnoreRafts) { return NativeCall<bool, const UE::Math::TVector<double>&, bool>(this, "ABasePrimalWorldSettings.IsPointReallyUnderwater(UE::Math::TVector<double>&,bool)", ThePoint, bIgnoreRafts); }
	void CleanupInvalidActors(TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& ActorArray) { NativeCall<void, TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >&>(this, "ABasePrimalWorldSettings.CleanupInvalidActors(TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>>&)", ActorArray); }
	void RemoveTaggedActor_WithSpecifiedTag(AActor* anAct, FName SpecifiedTag) { NativeCall<void, AActor*, FName>(this, "ABasePrimalWorldSettings.RemoveTaggedActor_WithSpecifiedTag(AActor*,FName)", anAct, SpecifiedTag); }
	bool IsInWorldBounds(const UE::Math::TVector<double>& Loc) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "ABasePrimalWorldSettings.IsInWorldBounds(UE::Math::TVector<double>&)", Loc); }
	UClass* GetDefaultDestroyedInstanceActor(UMeshComponent* ForMesh) { return NativeCall<UClass*, UMeshComponent*>(this, "ABasePrimalWorldSettings.GetDefaultDestroyedInstanceActor(UMeshComponent*)", ForMesh); }
	TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& GetActorsWithTag_V2(FName theTag) { return NativeCall<TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >&, FName>(this, "ABasePrimalWorldSettings.GetActorsWithTag_V2(FName)", theTag); }
	void PostLoad() { NativeCall<void>(this, "ABasePrimalWorldSettings.PostLoad()"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetActorsWithTag_V2_AsPointers(TArray<AActor*, TSizedDefaultAllocator<32> >* result, FName theTag) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*, FName>(this, "ABasePrimalWorldSettings.GetActorsWithTag_V2_AsPointers(FName)", result, theTag); }
	void OnInitWorld(UWorld* World) { NativeCall<void, UWorld*>(this, "ABasePrimalWorldSettings.OnInitWorld(UWorld*)", World); }
	APhysicsVolume* GetOceanVolume() { return NativeCall<APhysicsVolume*>(this, "ABasePrimalWorldSettings.GetOceanVolume()"); }
	bool ForceInactiveMapActorParticles() { return NativeCall<bool>(this, "ABasePrimalWorldSettings.ForceInactiveMapActorParticles()"); }
	AActor* FindSpaceBaseInstigator(const UE::Math::TVector<double>& AtLocation, float SearchRange) { return NativeCall<AActor*, const UE::Math::TVector<double>&, float>(this, "ABasePrimalWorldSettings.FindSpaceBaseInstigator(UE::Math::TVector<double>&,float)", AtLocation, SearchRange); }
	void RemoveFromActorListAtIndexFast(EActorLists ActorList, int AtIndex) { NativeCall<void, EActorLists, int>(this, "ABasePrimalWorldSettings.RemoveFromActorListAtIndexFast(EActorLists,int)", ActorList, AtIndex); }
	bool ShouldStasis(const UE::Math::TVector<double>& TestLocation, float StasisMultiplier) { return NativeCall<bool, const UE::Math::TVector<double>&, float>(this, "ABasePrimalWorldSettings.ShouldStasis(UE::Math::TVector<double>&,float)", TestLocation, StasisMultiplier); }
	void AddTaggedActor(AActor* anAct) { NativeCall<void, AActor*>(this, "ABasePrimalWorldSettings.AddTaggedActor(AActor*)", anAct); }
	bool IsActorInActorList(EActorLists ActorList, AActor* ActorRef) { return NativeCall<bool, EActorLists, AActor*>(this, "ABasePrimalWorldSettings.IsActorInActorList(EActorLists,AActor*)", ActorList, ActorRef); }
};