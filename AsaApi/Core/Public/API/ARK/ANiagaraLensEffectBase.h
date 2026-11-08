#pragma once
#include "BulkForward.h"
#include "ANiagaraActor.h"

struct ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	ANiagaraLensEffectBase() = delete;
	~ANiagaraLensEffectBase() = delete;
	ANiagaraLensEffectBase(const ANiagaraLensEffectBase&) = delete;
	ANiagaraLensEffectBase& operator=(const ANiagaraLensEffectBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANiagaraLensEffectBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANiagaraLensEffectBase"); }

	float& BaseAuthoredFOVField() { return *GetNativePointerField<float*>(this, "ANiagaraLensEffectBase.BaseAuthoredFOV"); }
	BitFieldValue<bool, unsigned char> bAllowMultipleInstances() { return { this, "ANiagaraLensEffectBase.bAllowMultipleInstances"}; }
	BitFieldValue<bool, unsigned char> bResetWhenRetriggered() { return { this, "ANiagaraLensEffectBase.bResetWhenRetriggered"}; }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANiagaraLensEffectBase._getUObject()"); }
	void NotifyRetriggered() { NativeCall<void>(this, "ANiagaraLensEffectBase.NotifyRetriggered()"); }
	float GetBaseFOV() { return NativeCall<float>(this, "ANiagaraLensEffectBase.GetBaseFOV()"); }
	void ActivateLensEffect() { NativeCall<void>(this, "ANiagaraLensEffectBase.ActivateLensEffect()"); }
	bool ResetWhenTriggered() { return NativeCall<bool>(this, "ANiagaraLensEffectBase.ResetWhenTriggered()"); }
	bool ShouldAllowMultipleInstances() { return NativeCall<bool>(this, "ANiagaraLensEffectBase.ShouldAllowMultipleInstances()"); }
	void NotifyWillBePooled() { NativeCall<void>(this, "ANiagaraLensEffectBase.NotifyWillBePooled()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ANiagaraLensEffectBase.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void AdjustBaseFOV(float NewFOV) { NativeCall<void, float>(this, "ANiagaraLensEffectBase.AdjustBaseFOV(float)", NewFOV); }
	void RegisterCamera(APlayerCameraManager* CameraManager) { NativeCall<void, APlayerCameraManager*>(this, "ANiagaraLensEffectBase.RegisterCamera(APlayerCameraManager*)", CameraManager); }
	void DeactivateLensEffect() { NativeCall<void>(this, "ANiagaraLensEffectBase.DeactivateLensEffect()"); }
	bool IsLooping() { return NativeCall<bool>(this, "ANiagaraLensEffectBase.IsLooping()"); }
};
