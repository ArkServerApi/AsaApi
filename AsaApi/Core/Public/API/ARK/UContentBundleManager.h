#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UContentBundleManager : public UObject
{
public:
	UContentBundleManager() = delete;
	~UContentBundleManager() = delete;
	UContentBundleManager(const UContentBundleManager&) = delete;
	UContentBundleManager& operator=(const UContentBundleManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UContentBundleManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UContentBundleManager"); }
	void DrawContentBundlesStatus(const UWorld* InWorld, UCanvas* Canvas, UE::Math::TVector2<double>& Offset) { NativeCall<void, const UWorld*, UCanvas*, UE::Math::TVector2<double>&>(this, "UContentBundleManager.DrawContentBundlesStatus(UWorld*,UCanvas*,UE::Math::TVector2<double>&)", InWorld, Canvas, Offset); }
	const FContentBundleBase* GetContentBundle(const UWorld* InWorld, const FGuid& Guid) { return NativeCall<const FContentBundleBase*, const UWorld*, const FGuid&>(this, "UContentBundleManager.GetContentBundle(UWorld*,FGuid&)", InWorld, Guid); }
	void OnWorldPartitionInitialized(UWorldPartition* InWorldPartition) { NativeCall<void, UWorldPartition*>(this, "UContentBundleManager.OnWorldPartitionInitialized(UWorldPartition*)", InWorldPartition); }
	bool CanInject() { return NativeCall<bool>(this, "UContentBundleManager.CanInject()"); }
	void OnWorldPartitionUninitialized(UWorldPartition* InWorldPartition) { NativeCall<void, UWorldPartition*>(this, "UContentBundleManager.OnWorldPartitionUninitialized(UWorldPartition*)", InWorldPartition); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UContentBundleManager.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
};
