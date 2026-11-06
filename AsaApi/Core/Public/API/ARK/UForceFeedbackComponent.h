#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UForceFeedbackComponent : public USceneComponent
{
public:
	UForceFeedbackComponent() = delete;
	~UForceFeedbackComponent() = delete;
	UForceFeedbackComponent(const UForceFeedbackComponent&) = delete;
	UForceFeedbackComponent& operator=(const UForceFeedbackComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UForceFeedbackComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UForceFeedbackComponent"); }

	float& IntensityMultiplierField() { return *GetNativePointerField<float*>(this, "UForceFeedbackComponent.IntensityMultiplier"); }
	FForceFeedbackAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FForceFeedbackAttenuationSettings*>(this, "UForceFeedbackComponent.AttenuationOverrides"); }
	FOnForceFeedbackFinished& OnForceFeedbackFinishedField() { return *GetNativePointerField<FOnForceFeedbackFinished*>(this, "UForceFeedbackComponent.OnForceFeedbackFinished"); }
	float& PlayTimeField() { return *GetNativePointerField<float*>(this, "UForceFeedbackComponent.PlayTime"); }
	BitFieldValue<bool, unsigned char> bAutoDestroy() { return { this, "UForceFeedbackComponent.bAutoDestroy"}; }
	BitFieldValue<bool, unsigned char> bStopWhenOwnerDestroyed() { return { this, "UForceFeedbackComponent.bStopWhenOwnerDestroyed"}; }
	BitFieldValue<bool, unsigned char> bLooping() { return { this, "UForceFeedbackComponent.bLooping"}; }
	BitFieldValue<bool, unsigned char> bIgnoreTimeDilation() { return { this, "UForceFeedbackComponent.bIgnoreTimeDilation"}; }
	BitFieldValue<bool, unsigned char> bOverrideAttenuation() { return { this, "UForceFeedbackComponent.bOverrideAttenuation"}; }
	void Play(float StartTime) { NativeCall<void, float>(this, "UForceFeedbackComponent.Play(float)", StartTime); }
	void StopInternal(bool bRemoveFromManager) { NativeCall<void, bool>(this, "UForceFeedbackComponent.StopInternal(bool)", bRemoveFromManager); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UForceFeedbackComponent.IsReadyForOwnerToAutoDestroy()"); }
	void Stop() { NativeCall<void>(this, "UForceFeedbackComponent.Stop()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UForceFeedbackComponent.AdditionalStatObject()"); }
	void OnUnregister() { NativeCall<void>(this, "UForceFeedbackComponent.OnUnregister()"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UForceFeedbackComponent.Activate(bool)", bReset); }
	void Deactivate() { NativeCall<void>(this, "UForceFeedbackComponent.Deactivate()"); }
};
