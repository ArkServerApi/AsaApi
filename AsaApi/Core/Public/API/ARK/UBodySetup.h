#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UBodySetupCore.h"

class UBodySetup : public UBodySetupCore
{
public:
	UBodySetup() = delete;
	~UBodySetup() = delete;
	UBodySetup(const UBodySetup&) = delete;
	UBodySetup& operator=(const UBodySetup&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBodySetup"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBodySetup"); }
	FKAggregateGeom& AggGeomField() { return *GetNativePointerField<FKAggregateGeom*>(this, "UBodySetup.AggGeom"); }
	FWalkableSlopeOverride& WalkableSlopeOverrideField() { return *GetNativePointerField<FWalkableSlopeOverride*>(this, "UBodySetup.WalkableSlopeOverride"); }
	FFormatContainer& CookedFormatDataField() { return *GetNativePointerField<FFormatContainer*>(this, "UBodySetup.CookedFormatData"); }
	FGuid& BodySetupGuidField() { return *GetNativePointerField<FGuid*>(this, "UBodySetup.BodySetupGuid"); }
	FBodySetupUVInfo& UVInfoField() { return *GetNativePointerField<FBodySetupUVInfo*>(this, "UBodySetup.UVInfo"); }
	TArray<int, TSizedDefaultAllocator<32> >& FaceRemapField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UBodySetup.FaceRemap"); }
	FBodyInstance& DefaultInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "UBodySetup.DefaultInstance"); }
	UE::Math::TVector<double>& BuildScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UBodySetup.BuildScale3D"); }
	BitFieldValue<bool, unsigned char> bAlwaysFullAnimWeight_DEPRECATED() { return { this, "UBodySetup.bAlwaysFullAnimWeight_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bConsiderForBounds() { return { this, "UBodySetup.bConsiderForBounds"}; }
	BitFieldValue<bool, unsigned char> bMeshCollideAll() { return { this, "UBodySetup.bMeshCollideAll"}; }
	BitFieldValue<bool, unsigned char> bDoubleSidedGeometry() { return { this, "UBodySetup.bDoubleSidedGeometry"}; }
	BitFieldValue<bool, unsigned char> bGenerateNonMirroredCollision() { return { this, "UBodySetup.bGenerateNonMirroredCollision"}; }
	BitFieldValue<bool, unsigned char> bSharedCookedData() { return { this, "UBodySetup.bSharedCookedData"}; }
	BitFieldValue<bool, unsigned char> bGenerateMirroredCollision() { return { this, "UBodySetup.bGenerateMirroredCollision"}; }
	BitFieldValue<bool, unsigned char> bSupportUVsAndFaceRemap() { return { this, "UBodySetup.bSupportUVsAndFaceRemap"}; }
	BitFieldValue<bool, unsigned char> bSupportFaceRemapOnMeshBVH() { return { this, "UBodySetup.bSupportFaceRemapOnMeshBVH"}; }
	BitFieldValue<bool, unsigned char> bSupportVertexRemap() { return { this, "UBodySetup.bSupportVertexRemap"}; }
	BitFieldValue<bool, unsigned char> bCreatedPhysicsMeshes() { return { this, "UBodySetup.bCreatedPhysicsMeshes"}; }
	BitFieldValue<bool, unsigned char> bFailedToCreatePhysicsMeshes() { return { this, "UBodySetup.bFailedToCreatePhysicsMeshes"}; }
	BitFieldValue<bool, unsigned char> bHasCookedCollisionData() { return { this, "UBodySetup.bHasCookedCollisionData"}; }
	BitFieldValue<bool, unsigned char> bHasCookedFormatProvider() { return { this, "UBodySetup.bHasCookedFormatProvider"}; }
	BitFieldValue<bool, unsigned char> bNeverNeedsCookedCollisionData() { return { this, "UBodySetup.bNeverNeedsCookedCollisionData"}; }
	float CalculateMass(const UPrimitiveComponent* Component) { return NativeCall<float, const UPrimitiveComponent*>(this, "UBodySetup.CalculateMass(UPrimitiveComponent*)", Component); }
	float GetVolume(const UE::Math::TVector<double>& Scale) { return NativeCall<float, const UE::Math::TVector<double>&>(this, "UBodySetup.GetVolume(UE::Math::TVector<double>&)", Scale); }
	void FinishDestroy() { NativeCall<void>(this, "UBodySetup.FinishDestroy()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UBodySetup.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void CopyBodyPropertiesFrom(const UBodySetup* FromSetup) { NativeCall<void, const UBodySetup*>(this, "UBodySetup.CopyBodyPropertiesFrom(UBodySetup*)", FromSetup); }
	void RemoveSimpleCollision() { NativeCall<void>(this, "UBodySetup.RemoveSimpleCollision()"); }
	UPhysicalMaterial* GetPhysMaterial() { return NativeCall<UPhysicalMaterial*>(this, "UBodySetup.GetPhysMaterial()"); }
	bool CalcUVAtLocation(const UE::Math::TVector<double>& BodySpaceLocation, int FaceIndex, int UVChannel, UE::Math::TVector2<double>& UV) { return NativeCall<bool, const UE::Math::TVector<double>&, int, int, UE::Math::TVector2<double>&>(this, "UBodySetup.CalcUVAtLocation(UE::Math::TVector<double>&,int,int,UE::Math::TVector2<double>&)", BodySpaceLocation, FaceIndex, UVChannel, UV); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBodySetup.Serialize(FArchive&)", Ar); }
	void AddCollisionFrom(const FKAggregateGeom& FromAggGeom) { NativeCall<void, const FKAggregateGeom&>(this, "UBodySetup.AddCollisionFrom(FKAggregateGeom&)", FromAggGeom); }
	void BeginDestroy() { NativeCall<void>(this, "UBodySetup.BeginDestroy()"); }
	void PostInitProperties() { NativeCall<void>(this, "UBodySetup.PostInitProperties()"); }
	void AbortPhysicsMeshAsyncCreation() { NativeCall<void>(this, "UBodySetup.AbortPhysicsMeshAsyncCreation()"); }
	void CreatePhysicsMeshes() { NativeCall<void>(this, "UBodySetup.CreatePhysicsMeshes()"); }
	void InvalidatePhysicsData() { NativeCall<void>(this, "UBodySetup.InvalidatePhysicsData()"); }
	void ClearPhysicsMeshes() { NativeCall<void>(this, "UBodySetup.ClearPhysicsMeshes()"); }
	void PostLoad() { NativeCall<void>(this, "UBodySetup.PostLoad()"); }
};
