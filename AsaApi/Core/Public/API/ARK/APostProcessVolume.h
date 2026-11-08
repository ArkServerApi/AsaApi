#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APostProcessVolume : public AVolume
{
public:
	APostProcessVolume() = delete;
	~APostProcessVolume() = delete;
	APostProcessVolume(const APostProcessVolume&) = delete;
	APostProcessVolume& operator=(const APostProcessVolume&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APostProcessVolume"); }

	FPostProcessSettings& SettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "APostProcessVolume.Settings"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.Priority"); }
	float& BlendRadiusField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.BlendRadius"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.BlendWeight"); }
	FGuid& VolumeGuidField() { return *GetNativePointerField<FGuid*>(this, "APostProcessVolume.VolumeGuid"); }
	FPostprocessVolumeEnteredSignature& OnPostProcessVolumeEnteredField() { return *GetNativePointerField<FPostprocessVolumeEnteredSignature*>(this, "APostProcessVolume.OnPostProcessVolumeEntered"); }
	FPostprocessVolumeLeftSignature& OnPostProcessVolumeLeftField() { return *GetNativePointerField<FPostprocessVolumeLeftSignature*>(this, "APostProcessVolume.OnPostProcessVolumeLeft"); }
	float& GlobalExposureCompensationOffsetField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.GlobalExposureCompensationOffset"); }
	int& WhatIsSquareRootOfFourtyNineCheckingYouReallyWantOverrideLumenField() { return *GetNativePointerField<int*>(this, "APostProcessVolume.WhatIsSquareRootOfFourtyNineCheckingYouReallyWantOverrideLumen"); }
	float& ViewDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.ViewDistanceMultiplier"); }
	TEnumAsByte<EPostProcessVolumeType::Type>& VolumeTypeField() { return *GetNativePointerField<TEnumAsByte<EPostProcessVolumeType::Type>*>(this, "APostProcessVolume.VolumeType"); }
	float& MaterialWaterLineParameterValueField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.MaterialWaterLineParameterValue"); }
	FPostProcessSettings& CachedPostProcessSettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "APostProcessVolume.CachedPostProcessSettings"); }
	BitFieldValue<bool, unsigned __int32> bEnabled() { return { this, "APostProcessVolume.bEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bUnbound() { return { this, "APostProcessVolume.bUnbound"}; }
	BitFieldValue<bool, unsigned __int32> bAbsolutePriority() { return { this, "APostProcessVolume.bAbsolutePriority"}; }
	BitFieldValue<bool, unsigned __int32> bWaterPP() { return { this, "APostProcessVolume.bWaterPP"}; }
	BitFieldValue<bool, unsigned __int32> bReverseVacuumCompartmentPP() { return { this, "APostProcessVolume.bReverseVacuumCompartmentPP"}; }
	BitFieldValue<bool, unsigned __int32> bReallyWantToOverrideLumenSettingsOnlyJesseGetsToMakeThisCall() { return { this, "APostProcessVolume.bReallyWantToOverrideLumenSettingsOnlyJesseGetsToMakeThisCall"}; }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APostProcessVolume._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APostProcessVolume.Serialize(FArchive&)", Ar); }
	void BeginPlay() { NativeCall<void>(this, "APostProcessVolume.BeginPlay()"); }
	void PostInitProperties() { NativeCall<void>(this, "APostProcessVolume.PostInitProperties()"); }
	bool EncompassesPoint(UE::Math::TVector<double>* Point, float SphereRadius, float* OutDistanceToPoint, float* MaxDistanceLimit) { if (!Point) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, float *, float *>(this, "APostProcessVolume.EncompassesPoint(UE::Math::TVector<double>,float,float*,float*)", *Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "APostProcessVolume.PostRegisterAllComponents()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APostProcessVolume"); }
	void SetEnabled(bool enabled) { NativeCall<void, bool>(this, "APostProcessVolume.SetEnabled(bool)", enabled); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "APostProcessVolume.PostUnregisterAllComponents()"); }
};
