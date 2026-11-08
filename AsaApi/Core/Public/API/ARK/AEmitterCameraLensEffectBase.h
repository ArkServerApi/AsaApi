#pragma once
#include "BulkForward.h"
#include "AEmitter.h"

struct AEmitterCameraLensEffectBase : public AEmitter
{
public:
	AEmitterCameraLensEffectBase() = delete;
	~AEmitterCameraLensEffectBase() = delete;
	AEmitterCameraLensEffectBase(const AEmitterCameraLensEffectBase&) = delete;
	AEmitterCameraLensEffectBase& operator=(const AEmitterCameraLensEffectBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AEmitterCameraLensEffectBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AEmitterCameraLensEffectBase"); }

	float& BaseFOVField() { return *GetNativePointerField<float*>(this, "AEmitterCameraLensEffectBase.BaseFOV"); }
	float& DistFromCamera_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "AEmitterCameraLensEffectBase.DistFromCamera_DEPRECATED"); }
	BitFieldValue<bool, unsigned char> bAllowMultipleInstances() { return { this, "AEmitterCameraLensEffectBase.bAllowMultipleInstances"}; }
	BitFieldValue<bool, unsigned char> bResetWhenRetriggered() { return { this, "AEmitterCameraLensEffectBase.bResetWhenRetriggered"}; }
	bool ShouldAllowMultipleInstances() { return NativeCall<bool>(this, "AEmitterCameraLensEffectBase.ShouldAllowMultipleInstances()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AEmitterCameraLensEffectBase.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void RegisterCamera(APlayerCameraManager* C) { NativeCall<void, APlayerCameraManager*>(this, "AEmitterCameraLensEffectBase.RegisterCamera(APlayerCameraManager*)", C); }
	bool ResetWhenTriggered() { return NativeCall<bool>(this, "AEmitterCameraLensEffectBase.ResetWhenTriggered()"); }
	void ActivateLensEffect() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.ActivateLensEffect()"); }
	float GetBaseFOV() { return NativeCall<float>(this, "AEmitterCameraLensEffectBase.GetBaseFOV()"); }
	void UpdateLocation(const UE::Math::TVector<double>& CamLoc, const UE::Math::TRotator<double>& CamRot, float CamFOVDeg) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, float>(this, "AEmitterCameraLensEffectBase.UpdateLocation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float)", CamLoc, CamRot, CamFOVDeg); }
	void NotifyRetriggered() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.NotifyRetriggered()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AEmitterCameraLensEffectBase._getUObject()"); }
	void AdjustBaseFOV(float NewFOV) { NativeCall<void, float>(this, "AEmitterCameraLensEffectBase.AdjustBaseFOV(float)", NewFOV); }
	void PostLoad() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.PostLoad()"); }
	void DeactivateLensEffect() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.DeactivateLensEffect()"); }
	bool IsLooping() { return NativeCall<bool>(this, "AEmitterCameraLensEffectBase.IsLooping()"); }
	void NotifyWillBePooled() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.NotifyWillBePooled()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.PostInitializeComponents()"); }
};
