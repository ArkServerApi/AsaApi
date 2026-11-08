#pragma once
#include "BulkForward.h"
#include "UWaterBodyComponent.h"

struct UWaterBodyOceanComponent : public UWaterBodyComponent
{
public:
	UWaterBodyOceanComponent() = delete;
	~UWaterBodyOceanComponent() = delete;
	UWaterBodyOceanComponent(const UWaterBodyOceanComponent&) = delete;
	UWaterBodyOceanComponent& operator=(const UWaterBodyOceanComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterBodyOceanComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterBodyOceanComponent"); }

	UE::Math::TVector<double>& CollisionExtentsField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UWaterBodyOceanComponent.CollisionExtents"); }
	UE::Math::TVector2<double>& OceanExtentsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UWaterBodyOceanComponent.OceanExtents"); }
	UE::Math::TVector2<double>& SavedZoneLocationField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UWaterBodyOceanComponent.SavedZoneLocation"); }
	bool& bCenterOnWaterZoneField() { return *GetNativePointerField<bool*>(this, "UWaterBodyOceanComponent.bCenterOnWaterZone"); }
	float& HeightOffsetField() { return *GetNativePointerField<float*>(this, "UWaterBodyOceanComponent.HeightOffset"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetCollisionComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result, bool bInOnlyEnabledComponents) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "UWaterBodyOceanComponent.GetCollisionComponents(bool)", result, bInOnlyEnabledComponents); }
	void Reset() { NativeCall<void>(this, "UWaterBodyOceanComponent.Reset()"); }
	void OnPostRegisterAllComponents() { NativeCall<void>(this, "UWaterBodyOceanComponent.OnPostRegisterAllComponents()"); }
	bool IsBodyDynamic() { return NativeCall<bool>(this, "UWaterBodyOceanComponent.IsBodyDynamic()"); }
	float GetHeightOffset() { return NativeCall<float>(this, "UWaterBodyOceanComponent.GetHeightOffset()"); }
	void SetHeightOffset(float InHeightOffset) { NativeCall<void, float>(this, "UWaterBodyOceanComponent.SetHeightOffset(float)", InHeightOffset); }
	void PostLoad() { NativeCall<void>(this, "UWaterBodyOceanComponent.PostLoad()"); }
	void OnPostActorCreated() { NativeCall<void>(this, "UWaterBodyOceanComponent.OnPostActorCreated()"); }
	void BeginUpdateWaterBody() { NativeCall<void>(this, "UWaterBodyOceanComponent.BeginUpdateWaterBody()"); }
	void OnUpdateBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyOceanComponent.OnUpdateBody(bool)", bWithExclusionVolumes); }
	UE::Math::TVector<double>* GetCollisionExtents(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UWaterBodyOceanComponent.GetCollisionExtents()", result); }
};
