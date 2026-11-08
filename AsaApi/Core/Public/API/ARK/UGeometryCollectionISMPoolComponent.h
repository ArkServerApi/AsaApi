#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	UGeometryCollectionISMPoolComponent() = delete;
	~UGeometryCollectionISMPoolComponent() = delete;
	UGeometryCollectionISMPoolComponent(const UGeometryCollectionISMPoolComponent&) = delete;
	UGeometryCollectionISMPoolComponent& operator=(const UGeometryCollectionISMPoolComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeometryCollectionISMPoolComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeometryCollectionISMPoolComponent"); }

	unsigned int& NextMeshGroupIdField() { return *GetNativePointerField<unsigned int*>(this, "UGeometryCollectionISMPoolComponent.NextMeshGroupId"); }
	FGeometryCollectionISMPool& PoolField() { return *GetNativePointerField<FGeometryCollectionISMPool*>(this, "UGeometryCollectionISMPoolComponent.Pool"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UGeometryCollectionISMPoolComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGeometryCollectionISMPoolComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
