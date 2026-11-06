#pragma once
#include "BulkForward.h"


struct AARKNXWorldSettings : AWorldSettings
{
	// Fields

	FNXSettings& NXSettingsField() { return *GetNativePointerField<FNXSettings*>(this, "AARKNXWorldSettings.NXSettings"); }
	FPointLightReductionSettings& PointLightReductionField() { return *GetNativePointerField<FPointLightReductionSettings*>(this, "AARKNXWorldSettings.PointLightReduction"); }
	TMap<FName, FLayerNameArray, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FLayerNameArray, 0> >& SubmapToDataLayerMapField() { return *GetNativePointerField<TMap<FName, FLayerNameArray, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FLayerNameArray, 0> >*>(this, "AARKNXWorldSettings.SubmapToDataLayerMap"); }
	TArray<TWeakObjectPtr<UAudioComponent>, TSizedDefaultAllocator<32> >& DeferredAudioActivatesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UAudioComponent>, TSizedDefaultAllocator<32> >*>(this, "AARKNXWorldSettings.DeferredAudioActivates"); }
	TArray<TWeakObjectPtr<UHierarchicalInstancedStaticMeshComponent>, TSizedDefaultAllocator<32> >& DeferredMeshNavigationUpdatesField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UHierarchicalInstancedStaticMeshComponent>, TSizedDefaultAllocator<32> >*>(this, "AARKNXWorldSettings.DeferredMeshNavigationUpdates"); }

	// Bitfields


	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AARKNXWorldSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AARKNXWorldSettings"); }
	void BeginPlay() { NativeCall<void>(this, "AARKNXWorldSettings.BeginPlay()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AARKNXWorldSettings.Tick(float)", DeltaTime); }

	void DeferFXComponentActivation(UFXSystemComponent* ActorComp) { NativeCall<void, UFXSystemComponent*>(this, "AARKNXWorldSettings.DeferFXComponentActivation(UFXSystemComponent*)", ActorComp); }
	void RemoveDeferredActivationComponent(UActorComponent* ActorComp) { NativeCall<void, UActorComponent*>(this, "AARKNXWorldSettings.RemoveDeferredActivationComponent(UActorComponent*)", ActorComp); }
};