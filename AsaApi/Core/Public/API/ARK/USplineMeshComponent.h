#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct USplineMeshComponent : public UStaticMeshComponent
{
public:
	USplineMeshComponent() = delete;
	~USplineMeshComponent() = delete;
	USplineMeshComponent(const USplineMeshComponent&) = delete;
	USplineMeshComponent& operator=(const USplineMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USplineMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USplineMeshComponent"); }

	FSplineMeshParams& SplineParamsField() { return *GetNativePointerField<FSplineMeshParams*>(this, "USplineMeshComponent.SplineParams"); }
	UE::Math::TVector<double>& SplineUpDirField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USplineMeshComponent.SplineUpDir"); }
	float& SplineBoundaryMinField() { return *GetNativePointerField<float*>(this, "USplineMeshComponent.SplineBoundaryMin"); }
	FGuid& CachedMeshBodySetupGuidField() { return *GetNativePointerField<FGuid*>(this, "USplineMeshComponent.CachedMeshBodySetupGuid"); }
	float& VirtualTextureMainPassMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "USplineMeshComponent.VirtualTextureMainPassMaxDrawDistance"); }
	float& SplineBoundaryMaxField() { return *GetNativePointerField<float*>(this, "USplineMeshComponent.SplineBoundaryMax"); }
	TEnumAsByte<ESplineMeshAxis::Type>& ForwardAxisField() { return *GetNativePointerField<TEnumAsByte<ESplineMeshAxis::Type>*>(this, "USplineMeshComponent.ForwardAxis"); }
	BitFieldValue<bool, unsigned char> bAllowSplineEditingPerInstance() { return { this, "USplineMeshComponent.bAllowSplineEditingPerInstance"}; }
	BitFieldValue<bool, unsigned char> bSmoothInterpRollScale() { return { this, "USplineMeshComponent.bSmoothInterpRollScale"}; }
	BitFieldValue<bool, unsigned char> bMeshDirty() { return { this, "USplineMeshComponent.bMeshDirty"}; }
	BitFieldValue<bool, unsigned char> bNeverNeedsCookedCollisionData() { return { this, "USplineMeshComponent.bNeverNeedsCookedCollisionData"}; }
	void SetStartRollDegrees(float StartRollDegrees, bool bUpdateMesh) { NativeCall<void, float, bool>(this, "USplineMeshComponent.SetStartRollDegrees(float,bool)", StartRollDegrees, bUpdateMesh); }
	void SetEndScale(UE::Math::TVector2<double>* EndScale, bool bUpdateMesh) { if (!EndScale) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, bool>(this, "USplineMeshComponent.SetEndScale(UE::Math::TVector2<double>,bool)", *EndScale, bUpdateMesh); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "USplineMeshComponent.GetBodySetup()"); }
	static void GetbNeverNeedsCookedCollisionData_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "USplineMeshComponent.GetbNeverNeedsCookedCollisionData_WrapperImpl(void*,void*)", Object, OutValue); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "USplineMeshComponent._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USplineMeshComponent.Serialize(FArchive&)", Ar); }
	static void SetbNeverNeedsCookedCollisionData_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "USplineMeshComponent.SetbNeverNeedsCookedCollisionData_WrapperImpl(void*,void*)", Object, InValue); }
	void UpdateBounds() { NativeCall<void>(this, "USplineMeshComponent.UpdateBounds()"); }
	float GetVirtualTextureMainPassMaxDrawDistance() { return NativeCall<float>(this, "USplineMeshComponent.GetVirtualTextureMainPassMaxDrawDistance()"); }
	void UpdateRenderStateAndCollision_Internal(bool bConcurrent) { NativeCall<void, bool>(this, "USplineMeshComponent.UpdateRenderStateAndCollision_Internal(bool)", bConcurrent); }
	void SetEndRoll(float EndRoll, bool bUpdateMesh) { NativeCall<void, float, bool>(this, "USplineMeshComponent.SetEndRoll(float,bool)", EndRoll, bUpdateMesh); }
	void SetStartRoll(float StartRoll, bool bUpdateMesh) { NativeCall<void, float, bool>(this, "USplineMeshComponent.SetStartRoll(float,bool)", StartRoll, bUpdateMesh); }
	void SetStartAndEnd(UE::Math::TVector<double>* StartPos, UE::Math::TVector<double>* StartTangent, UE::Math::TVector<double>* EndPos, UE::Math::TVector<double>* EndTangent, bool bUpdateMesh) { if (!StartPos) throw std::invalid_argument("Null native value parameter"); if (!StartTangent) throw std::invalid_argument("Null native value parameter"); if (!EndPos) throw std::invalid_argument("Null native value parameter"); if (!EndTangent) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, bool>(this, "USplineMeshComponent.SetStartAndEnd(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", *StartPos, *StartTangent, *EndPos, *EndTangent, bUpdateMesh); }
	void UpdateMesh() { NativeCall<void>(this, "USplineMeshComponent.UpdateMesh()"); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "USplineMeshComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
	bool SupportsDefaultCollision() { return NativeCall<bool>(this, "USplineMeshComponent.SupportsDefaultCollision()"); }
	void RecreateCollision() { NativeCall<void>(this, "USplineMeshComponent.RecreateCollision()"); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData* CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData*, bool>(this, "USplineMeshComponent.GetPhysicsTriMeshData(FTriMeshCollisionData*,bool)", CollisionData, InUseAllTriData); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "USplineMeshComponent.OnCreatePhysicsState()"); }
	void SetForwardAxis(ESplineMeshAxis::Type InForwardAxis, bool bUpdateMesh) { NativeCall<void, ESplineMeshAxis::Type, bool>(this, "USplineMeshComponent.SetForwardAxis(ESplineMeshAxis::Type,bool)", InForwardAxis, bUpdateMesh); }
	void SetEndOffset(UE::Math::TVector2<double>* EndOffset, bool bUpdateMesh) { if (!EndOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, bool>(this, "USplineMeshComponent.SetEndOffset(UE::Math::TVector2<double>,bool)", *EndOffset, bUpdateMesh); }
	bool WantsNegXTriMesh() { return NativeCall<bool>(this, "USplineMeshComponent.WantsNegXTriMesh()"); }
	FStaticMeshStaticLightingMesh* AllocateStaticLightingMesh(int LODIndex, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >& InRelevantLights) { return NativeCall<FStaticMeshStaticLightingMesh*, int, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >&>(this, "USplineMeshComponent.AllocateStaticLightingMesh(int,TArray<ULightComponent*,TSizedDefaultAllocator<32>>&)", LODIndex, InRelevantLights); }
	void SetStartOffset(UE::Math::TVector2<double>* StartOffset, bool bUpdateMesh) { if (!StartOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, bool>(this, "USplineMeshComponent.SetStartOffset(UE::Math::TVector2<double>,bool)", *StartOffset, bUpdateMesh); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "USplineMeshComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	float GetTextureStreamingTransformScale() { return NativeCall<float>(this, "USplineMeshComponent.GetTextureStreamingTransformScale()"); }
	UE::Math::TTransform<double>* CalcSliceTransform(UE::Math::TTransform<double>* result, float DistanceAlong) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, float>(this, "USplineMeshComponent.CalcSliceTransform(float)", result, DistanceAlong); }
	void SetbNeverNeedsCookedCollisionData(bool bInValue) { NativeCall<void, bool>(this, "USplineMeshComponent.SetbNeverNeedsCookedCollisionData(bool)", bInValue); }
	bool AllowsAsyncPhysicsStateCreation() { return NativeCall<bool>(this, "USplineMeshComponent.AllowsAsyncPhysicsStateCreation()"); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "USplineMeshComponent.ContainsPhysicsTriMeshData(bool)", InUseAllTriData); }
	void SetStartScale(UE::Math::TVector2<double>* StartScale, bool bUpdateMesh) { if (!StartScale) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >, bool>(this, "USplineMeshComponent.SetStartScale(UE::Math::TVector2<double>,bool)", *StartScale, bUpdateMesh); }
	bool AllowsAsyncPhysicsStateDestruction() { return NativeCall<bool>(this, "USplineMeshComponent.AllowsAsyncPhysicsStateDestruction()"); }
	bool GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates& OutTriMeshEstimates, bool bInUseAllTriData) { return NativeCall<bool, FTriMeshCollisionDataEstimates&, bool>(this, "USplineMeshComponent.GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates&,bool)", OutTriMeshEstimates, bInUseAllTriData); }
	void SetEndRollDegrees(float EndRollDegrees, bool bUpdateMesh) { NativeCall<void, float, bool>(this, "USplineMeshComponent.SetEndRollDegrees(float,bool)", EndRollDegrees, bUpdateMesh); }
	void SetSplineUpDir(const UE::Math::TVector<double>& InSplineUpDir, bool bUpdateMesh) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "USplineMeshComponent.SetSplineUpDir(UE::Math::TVector<double>&,bool)", InSplineUpDir, bUpdateMesh); }
};
