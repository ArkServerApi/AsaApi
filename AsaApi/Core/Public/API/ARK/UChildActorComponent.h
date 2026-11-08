#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UChildActorComponent : public USceneComponent
{
public:
	UChildActorComponent() = delete;
	~UChildActorComponent() = delete;
	UChildActorComponent(const UChildActorComponent&) = delete;
	UChildActorComponent& operator=(const UChildActorComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChildActorComponent"); }

	FName& ChildActorNameField() { return *GetNativePointerField<FName*>(this, "UChildActorComponent.ChildActorName"); }
	UObject*& ActorOuterField() { return *GetNativePointerField<UObject**>(this, "UChildActorComponent.ActorOuter"); }
	FChildActorComponentInstanceData*& CachedInstanceDataField() { return *GetNativePointerField<FChildActorComponentInstanceData**>(this, "UChildActorComponent.CachedInstanceData"); }
	BitFieldValue<bool, unsigned char> bChildActorIsTransient() { return { this, "UChildActorComponent.bChildActorIsTransient"}; }
	BitFieldValue<bool, unsigned char> bSetOwner() { return { this, "UChildActorComponent.bSetOwner"}; }
	BitFieldValue<bool, unsigned char> bNeedsRecreate() { return { this, "UChildActorComponent.bNeedsRecreate"}; }
	BitFieldValue<bool, unsigned char> bChildActorNameIsExact() { return { this, "UChildActorComponent.bChildActorNameIsExact"}; }
	void ApplyComponentInstanceData(FChildActorComponentInstanceData* ChildActorInstanceData, ECacheApplyPhase CacheApplyPhase) { NativeCall<void, FChildActorComponentInstanceData*, ECacheApplyPhase>(this, "UChildActorComponent.ApplyComponentInstanceData(FChildActorComponentInstanceData*,ECacheApplyPhase)", ChildActorInstanceData, CacheApplyPhase); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChildActorComponent"); }
	void TearOffChildActor() { NativeCall<void>(this, "UChildActorComponent.TearOffChildActor()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UChildActorComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void PostRepNotifies() { NativeCall<void>(this, "UChildActorComponent.PostRepNotifies()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UChildActorComponent.IsHLODRelevant()"); }
	void CreateChildActor() { NativeCall<void>(this, "UChildActorComponent.CreateChildActor()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UChildActorComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	static bool ExperimentalAllowPerInstanceChildActorProperties() { return NativeCall<bool>(nullptr, "UChildActorComponent.ExperimentalAllowPerInstanceChildActorProperties()"); }
	void OnUnregister() { NativeCall<void>(this, "UChildActorComponent.OnUnregister()"); }
	AActor* GetSpawnableChildActorTemplate() { return NativeCall<AActor*>(this, "UChildActorComponent.GetSpawnableChildActorTemplate()"); }
	void BeginPlay() { NativeCall<void>(this, "UChildActorComponent.BeginPlay()"); }
	void OnRegister() { NativeCall<void>(this, "UChildActorComponent.OnRegister()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UChildActorComponent.Serialize(FArchive&)", Ar); }
	void DestroyChildActor() { NativeCall<void>(this, "UChildActorComponent.DestroyChildActor()"); }
	bool IsChildActorReplicated() { return NativeCall<bool>(this, "UChildActorComponent.IsChildActorReplicated()"); }
	void BeginDestroy() { NativeCall<void>(this, "UChildActorComponent.BeginDestroy()"); }
};
