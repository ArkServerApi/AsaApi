#pragma once
#include "BulkForward.h"
#include "ACameraActor.h"

struct ACineCameraActor : public ACameraActor
{
public:
	ACineCameraActor() = delete;
	~ACineCameraActor() = delete;
	ACineCameraActor(const ACineCameraActor&) = delete;
	ACineCameraActor& operator=(const ACineCameraActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACineCameraActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACineCameraActor"); }

	FCameraLookatTrackingSettings& LookatTrackingSettingsField() { return *GetNativePointerField<FCameraLookatTrackingSettings*>(this, "ACineCameraActor.LookatTrackingSettings"); }
	UCineCameraComponent*& CineCameraComponentField() { return *GetNativePointerField<UCineCameraComponent**>(this, "ACineCameraActor.CineCameraComponent"); }
	BitFieldValue<bool, unsigned char> bResetInterplation() { return { this, "ACineCameraActor.bResetInterplation"}; }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ACineCameraActor.Tick(float)", DeltaTime); }
	void PostInitializeComponents() { NativeCall<void>(this, "ACineCameraActor.PostInitializeComponents()"); }
	void NotifyCameraCut() { NativeCall<void>(this, "ACineCameraActor.NotifyCameraCut()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ACineCameraActor.ShouldTickIfViewportsOnly()"); }
	UE::Math::TVector<double>* GetLookatLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "ACineCameraActor.GetLookatLocation()", result); }
};
