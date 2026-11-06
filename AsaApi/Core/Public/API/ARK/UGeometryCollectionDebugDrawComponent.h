#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	UGeometryCollectionDebugDrawComponent() = delete;
	~UGeometryCollectionDebugDrawComponent() = delete;
	UGeometryCollectionDebugDrawComponent(const UGeometryCollectionDebugDrawComponent&) = delete;
	UGeometryCollectionDebugDrawComponent& operator=(const UGeometryCollectionDebugDrawComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UGeometryCollectionComponent*& GeometryCollectionComponentField() { return *GetNativePointerField<UGeometryCollectionComponent**>(this, "UGeometryCollectionDebugDrawComponent.GeometryCollectionComponent"); }
};
