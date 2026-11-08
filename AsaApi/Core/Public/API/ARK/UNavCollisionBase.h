#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNavCollisionBase : public UObject
{
public:
	UNavCollisionBase() = delete;
	~UNavCollisionBase() = delete;
	UNavCollisionBase(const UNavCollisionBase&) = delete;
	UNavCollisionBase& operator=(const UNavCollisionBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavCollisionBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavCollisionBase"); }
	FNavCollisionConvex& TriMeshCollisionField() { return *GetNativePointerField<FNavCollisionConvex*>(this, "UNavCollisionBase.TriMeshCollision"); }
	FNavCollisionConvex& ConvexCollisionField() { return *GetNativePointerField<FNavCollisionConvex*>(this, "UNavCollisionBase.ConvexCollision"); }
	BitFieldValue<bool, unsigned __int32> bIsDynamicObstacle() { return { this, "UNavCollisionBase.bIsDynamicObstacle"}; }
	BitFieldValue<bool, unsigned __int32> bUseSurfaceArea() { return { this, "UNavCollisionBase.bUseSurfaceArea"}; }
	BitFieldValue<bool, unsigned __int32> bHasConvexGeometry() { return { this, "UNavCollisionBase.bHasConvexGeometry"}; }
	bool HasSurfaceAreaClass() { return NativeCall<bool>(this, "UNavCollisionBase.HasSurfaceAreaClass()"); }
	void Setup(UBodySetup* BodySetup) { NativeCall<void, UBodySetup*>(this, "UNavCollisionBase.Setup(UBodySetup*)", BodySetup); }
};
