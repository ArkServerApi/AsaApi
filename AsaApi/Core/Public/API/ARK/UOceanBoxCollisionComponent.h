#pragma once
#include "BulkForward.h"
#include "UBoxComponent.h"

struct UOceanBoxCollisionComponent : public UBoxComponent
{
public:
	UOceanBoxCollisionComponent() = delete;
	~UOceanBoxCollisionComponent() = delete;
	UOceanBoxCollisionComponent(const UOceanBoxCollisionComponent&) = delete;
	UOceanBoxCollisionComponent& operator=(const UOceanBoxCollisionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UOceanBoxCollisionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UOceanBoxCollisionComponent"); }

	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UOceanBoxCollisionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
};
