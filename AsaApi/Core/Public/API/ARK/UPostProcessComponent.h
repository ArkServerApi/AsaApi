#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPostProcessComponent : public USceneComponent
{
public:
	UPostProcessComponent() = delete;
	~UPostProcessComponent() = delete;
	UPostProcessComponent(const UPostProcessComponent&) = delete;
	UPostProcessComponent& operator=(const UPostProcessComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPostProcessComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPostProcessComponent"); }

	FPostProcessSettings& SettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "UPostProcessComponent.Settings"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.Priority"); }
	float& BlendRadiusField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.BlendRadius"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "UPostProcessComponent.BlendWeight"); }
	FGuid& VolumeGuidField() { return *GetNativePointerField<FGuid*>(this, "UPostProcessComponent.VolumeGuid"); }
	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "UPostProcessComponent.bEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bUnbound() { return { this, "UPostProcessComponent.bUnbound"}; }
	BitFieldValue<bool, unsigned __int32> bWaterPP() { return { this, "UPostProcessComponent.bWaterPP"}; }
	BitFieldValue<bool, unsigned __int32> bReverseVacuumCompartmentPP() { return { this, "UPostProcessComponent.bReverseVacuumCompartmentPP"}; }
	bool EncompassesPoint(UE::Math::TVector<double>* Point, float SphereRadius, float* OutDistanceToPoint, float* MaxDistanceLimit) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, float *, float *>(this, "UPostProcessComponent.EncompassesPoint(UE::Math::TVector<double>,float,float*,float*)", *Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
	void OnRegister() { NativeCall<void>(this, "UPostProcessComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UPostProcessComponent.OnUnregister()"); }
	void PostInitProperties() { NativeCall<void>(this, "UPostProcessComponent.PostInitProperties()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPostProcessComponent._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPostProcessComponent.Serialize(FArchive&)", Ar); }
	void SetEnabled(bool enabled) { NativeCall<void, bool>(this, "UPostProcessComponent.SetEnabled(bool)", enabled); }
};
