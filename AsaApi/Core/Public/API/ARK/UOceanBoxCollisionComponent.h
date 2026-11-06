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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UOceanBoxCollisionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
};
