#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	ULakeCollisionComponent() = delete;
	~ULakeCollisionComponent() = delete;
	ULakeCollisionComponent(const ULakeCollisionComponent&) = delete;
	ULakeCollisionComponent& operator=(const ULakeCollisionComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UE::Math::TVector<double>& BoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULakeCollisionComponent.BoxExtent"); }
	void UpdateBodySetup() { NativeCall<void>(this, "ULakeCollisionComponent.UpdateBodySetup()"); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "ULakeCollisionComponent.IsZeroExtent()"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "ULakeCollisionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "ULakeCollisionComponent.GetBodySetup()"); }
};
