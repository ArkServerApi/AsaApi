#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	UOceanCollisionComponent() = delete;
	~UOceanCollisionComponent() = delete;
	UOceanCollisionComponent(const UOceanCollisionComponent&) = delete;
	UOceanCollisionComponent& operator=(const UOceanCollisionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UOceanCollisionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UOceanCollisionComponent"); }

	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UOceanCollisionComponent.GetBodySetup()"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UOceanCollisionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UOceanCollisionComponent.IsZeroExtent()"); }
};
