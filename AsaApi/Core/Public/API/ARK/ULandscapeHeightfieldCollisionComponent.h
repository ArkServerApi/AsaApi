#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	ULandscapeHeightfieldCollisionComponent() = delete;
	~ULandscapeHeightfieldCollisionComponent() = delete;
	ULandscapeHeightfieldCollisionComponent(const ULandscapeHeightfieldCollisionComponent&) = delete;
	ULandscapeHeightfieldCollisionComponent& operator=(const ULandscapeHeightfieldCollisionComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeHeightfieldCollisionComponent"); }

	int& SectionBaseXField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.SectionBaseX"); }
	int& SectionBaseYField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.SectionBaseY"); }
	int& CollisionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionSizeQuads"); }
	float& CollisionScaleField() { return *GetNativePointerField<float*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionScale"); }
	int& SimpleCollisionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.SimpleCollisionSizeQuads"); }
	bool& bCookedCollisionDataWasDeletedField() { return *GetNativePointerField<bool*>(this, "ULandscapeHeightfieldCollisionComponent.bCookedCollisionDataWasDeleted"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& CollisionQuadFlagsField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionQuadFlags"); }
	FGuid& HeightfieldGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeHeightfieldCollisionComponent.HeightfieldGuid"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& CookedCollisionDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "ULandscapeHeightfieldCollisionComponent.CookedCollisionData"); }
	int& HeightfieldRowsCountField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.HeightfieldRowsCount"); }
	int& HeightfieldColumnsCountField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.HeightfieldColumnsCount"); }
	FNavHeightfieldSamples& CachedHeightFieldSamplesField() { return *GetNativePointerField<FNavHeightfieldSamples*>(this, "ULandscapeHeightfieldCollisionComponent.CachedHeightFieldSamples"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.OnDestroyPhysicsState()"); }
	ULandscapeComponent* GetRenderComponent() { return NativeCall<ULandscapeComponent*>(this, "ULandscapeHeightfieldCollisionComponent.GetRenderComponent()"); }
	void OnUnregister() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.OnUnregister()"); }
	ECollisionChannel GetCollisionObjectType() { return NativeCall<ECollisionChannel>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionObjectType()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.OnCreatePhysicsState()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "ULandscapeHeightfieldCollisionComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "ULandscapeHeightfieldCollisionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	bool SupportsGatheringGeometrySlices() { return NativeCall<bool>(this, "ULandscapeHeightfieldCollisionComponent.SupportsGatheringGeometrySlices()"); }
	bool RecreateCollision() { return NativeCall<bool>(this, "ULandscapeHeightfieldCollisionComponent.RecreateCollision()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeHeightfieldCollisionComponent"); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "ULandscapeHeightfieldCollisionComponent.DestroyComponent(bool)", bPromoteChildren); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeHeightfieldCollisionComponent.Serialize(FArchive&)", Ar); }
	void CreateCollisionObject() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.CreateCollisionObject()"); }
	const FCollisionResponseContainer& GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer&>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionResponseToChannels()"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.PostLoad()"); }
	void PrepareGeometryExportSync() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.PrepareGeometryExportSync()"); }
	void BeginDestroy() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.BeginDestroy()"); }
	UPhysicalMaterial* GetPhysicalMaterial(float X, float Y, EHeightfieldSource HeightFieldSource) { return NativeCall<UPhysicalMaterial*, float, float, EHeightfieldSource>(this, "ULandscapeHeightfieldCollisionComponent.GetPhysicalMaterial(float,float,EHeightfieldSource)", X, Y, HeightFieldSource); }
	ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionResponseToChannel(ECollisionChannel)", Channel); }
	void OnRegister() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.OnRegister()"); }
	bool AllowsAsyncPhysicsStateCreation() { return NativeCall<bool>(this, "ULandscapeHeightfieldCollisionComponent.AllowsAsyncPhysicsStateCreation()"); }
	ENavDataGatheringMode GetGeometryGatheringMode() { return NativeCall<ENavDataGatheringMode>(this, "ULandscapeHeightfieldCollisionComponent.GetGeometryGatheringMode()"); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "ULandscapeHeightfieldCollisionComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionEnabled()"); }
};
