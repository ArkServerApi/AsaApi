#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	UHoudiniInstancedActorComponent() = delete;
	~UHoudiniInstancedActorComponent() = delete;
	UHoudiniInstancedActorComponent(const UHoudiniInstancedActorComponent&) = delete;
	UHoudiniInstancedActorComponent& operator=(const UHoudiniInstancedActorComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniInstancedActorComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniInstancedActorComponent"); }

	void OnComponentCreated() { NativeCall<void>(this, "UHoudiniInstancedActorComponent.OnComponentCreated()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UHoudiniInstancedActorComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UHoudiniInstancedActorComponent.Serialize(FArchive&)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UHoudiniInstancedActorComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void ClearAllInstances() { NativeCall<void>(this, "UHoudiniInstancedActorComponent.ClearAllInstances()"); }
};
