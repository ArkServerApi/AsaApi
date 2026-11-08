#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UCameraShakeSourceComponent : public USceneComponent
{
public:
	UCameraShakeSourceComponent() = delete;
	~UCameraShakeSourceComponent() = delete;
	UCameraShakeSourceComponent(const UCameraShakeSourceComponent&) = delete;
	UCameraShakeSourceComponent& operator=(const UCameraShakeSourceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraShakeSourceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraShakeSourceComponent"); }

	ECameraShakeAttenuation& AttenuationField() { return *GetNativePointerField<ECameraShakeAttenuation*>(this, "UCameraShakeSourceComponent.Attenuation"); }
	float& InnerAttenuationRadiusField() { return *GetNativePointerField<float*>(this, "UCameraShakeSourceComponent.InnerAttenuationRadius"); }
	float& OuterAttenuationRadiusField() { return *GetNativePointerField<float*>(this, "UCameraShakeSourceComponent.OuterAttenuationRadius"); }
	bool& bAutoStartField() { return *GetNativePointerField<bool*>(this, "UCameraShakeSourceComponent.bAutoStart"); }
	float GetAttenuationFactor(const UE::Math::TVector<double>& Location) { return NativeCall<float, const UE::Math::TVector<double>&>(this, "UCameraShakeSourceComponent.GetAttenuationFactor(UE::Math::TVector<double>&)", Location); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UCameraShakeSourceComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Start() { NativeCall<void>(this, "UCameraShakeSourceComponent.Start()"); }
	void StartCameraShake(const FCameraShakeSourceComponentStartParams& Params) { NativeCall<void, const FCameraShakeSourceComponentStartParams&>(this, "UCameraShakeSourceComponent.StartCameraShake(FCameraShakeSourceComponentStartParams&)", Params); }
	void BeginPlay() { NativeCall<void>(this, "UCameraShakeSourceComponent.BeginPlay()"); }
	void OnRegister() { NativeCall<void>(this, "UCameraShakeSourceComponent.OnRegister()"); }
	void StopAllCameraShakes(bool bImmediately) { NativeCall<void, bool>(this, "UCameraShakeSourceComponent.StopAllCameraShakes(bool)", bImmediately); }
};
