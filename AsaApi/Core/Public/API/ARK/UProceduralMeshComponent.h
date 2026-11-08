#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct UProceduralMeshComponent : public UMeshComponent
{
public:
	UProceduralMeshComponent() = delete;
	~UProceduralMeshComponent() = delete;
	UProceduralMeshComponent(const UProceduralMeshComponent&) = delete;
	UProceduralMeshComponent& operator=(const UProceduralMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UProceduralMeshComponent"); }

	bool& bUseComplexAsSimpleCollisionField() { return *GetNativePointerField<bool*>(this, "UProceduralMeshComponent.bUseComplexAsSimpleCollision"); }
	bool& bUseAsyncCookingField() { return *GetNativePointerField<bool*>(this, "UProceduralMeshComponent.bUseAsyncCooking"); }
	UE::Math::TBoxSphereBounds<double, double>& LocalBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UProceduralMeshComponent.LocalBounds"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UProceduralMeshComponent._getUObject()"); }
	void UpdateLocalBounds() { NativeCall<void>(this, "UProceduralMeshComponent.UpdateLocalBounds()"); }
	bool WantsNegXTriMesh() { return NativeCall<bool>(this, "UProceduralMeshComponent.WantsNegXTriMesh()"); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UProceduralMeshComponent.GetBodySetup()"); }
	void SetProcMeshSection(int SectionIndex, const FProcMeshSection& Section) { NativeCall<void, int, const FProcMeshSection&>(this, "UProceduralMeshComponent.SetProcMeshSection(int,FProcMeshSection&)", SectionIndex, Section); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "UProceduralMeshComponent.ContainsPhysicsTriMeshData(bool)", InUseAllTriData); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UProceduralMeshComponent.CreateSceneProxy()"); }
	void FinishPhysicsAsyncCook(bool bSuccess, UBodySetup* FinishedBodySetup) { NativeCall<void, bool, UBodySetup*>(this, "UProceduralMeshComponent.FinishPhysicsAsyncCook(bool,UBodySetup*)", bSuccess, FinishedBodySetup); }
	void UpdateCollision() { NativeCall<void>(this, "UProceduralMeshComponent.UpdateCollision()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UProceduralMeshComponent"); }
	UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int& SectionIndex) { return NativeCall<UMaterialInterface*, int, int&>(this, "UProceduralMeshComponent.GetMaterialFromCollisionFaceIndex(int,int&)", FaceIndex, SectionIndex); }
	void ClearCollisionConvexMeshes() { NativeCall<void>(this, "UProceduralMeshComponent.ClearCollisionConvexMeshes()"); }
	UBodySetup* CreateBodySetupHelper() { return NativeCall<UBodySetup*>(this, "UProceduralMeshComponent.CreateBodySetupHelper()"); }
	void ClearAllMeshSections() { NativeCall<void>(this, "UProceduralMeshComponent.ClearAllMeshSections()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UProceduralMeshComponent.GetNumMaterials()"); }
	void ClearMeshSection(int SectionIndex) { NativeCall<void, int>(this, "UProceduralMeshComponent.ClearMeshSection(int)", SectionIndex); }
	bool GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates& OutTriMeshEstimates, bool bInUseAllTriData) { return NativeCall<bool, FTriMeshCollisionDataEstimates&, bool>(this, "UProceduralMeshComponent.GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates&,bool)", OutTriMeshEstimates, bInUseAllTriData); }
	void PostLoad() { NativeCall<void>(this, "UProceduralMeshComponent.PostLoad()"); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData* CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData*, bool>(this, "UProceduralMeshComponent.GetPhysicsTriMeshData(FTriMeshCollisionData*,bool)", CollisionData, InUseAllTriData); }
};
