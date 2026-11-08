#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct ALooseCameraSpringBuff : APrimalBuff
{
public:
	ALooseCameraSpringBuff() = delete;
	~ALooseCameraSpringBuff() = delete;
	ALooseCameraSpringBuff(const ALooseCameraSpringBuff&) = delete;
	ALooseCameraSpringBuff& operator=(const ALooseCameraSpringBuff&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALooseCameraSpringBuff"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALooseCameraSpringBuff"); }

	float& HoldDurationField() { return *GetNativePointerField<float*>(this, "ALooseCameraSpringBuff.HoldDuration"); }
	float& BlendTimeField() { return *GetNativePointerField<float*>(this, "ALooseCameraSpringBuff.BlendTime"); }
	float& ForwardAlignStrengthField() { return *GetNativePointerField<float*>(this, "ALooseCameraSpringBuff.ForwardAlignStrength"); }

	void Stop() { NativeCall<void>(this, "ALooseCameraSpringBuff.Stop()"); }
	void SetupForInstigator() { NativeCall<void>(this, "ALooseCameraSpringBuff.SetupForInstigator()"); }
	void Start() { NativeCall<void>(this, "ALooseCameraSpringBuff.Start()"); }
	void NetDeactivate_Implementation() { NativeCall<void>(this, "ALooseCameraSpringBuff.NetDeactivate_Implementation()"); }
	void OnOwnerTeleported() { NativeCall<void>(this, "ALooseCameraSpringBuff.OnOwnerTeleported()"); }
	APlayerController* GetPlayerController() { return NativeCall<APlayerController*>(this, "ALooseCameraSpringBuff.GetPlayerController()"); }

	FPrimalCameraInterpParams& LooseSpringParamsField() { return *GetNativePointerField<FPrimalCameraInterpParams*>(this, "ALooseCameraSpringBuff.LooseSpringParams"); }
	FCameraEffectHandle& CameraEffectHandleField() { return *GetNativePointerField<FCameraEffectHandle*>(this, "ALooseCameraSpringBuff.CameraEffectHandle"); }
	UE::Math::TVector<double>& TargetAlignmentDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ALooseCameraSpringBuff.TargetAlignmentDirection"); }
};
