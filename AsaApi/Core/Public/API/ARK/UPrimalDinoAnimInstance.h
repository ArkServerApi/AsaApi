#pragma once
#include "BulkForward.h"
#include "UPrimalAnimInstance.h"

struct UPrimalDinoAnimInstance : public UPrimalAnimInstance
{
public:
	UPrimalDinoAnimInstance() = delete;
	~UPrimalDinoAnimInstance() = delete;
	UPrimalDinoAnimInstance(const UPrimalDinoAnimInstance&) = delete;
	UPrimalDinoAnimInstance& operator=(const UPrimalDinoAnimInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoAnimInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoAnimInstance"); }

	UE::Math::TRotator<double>& RootRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalDinoAnimInstance.RootRotOffset"); }
	float& RootYawSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.RootYawSpeed"); }
	UE::Math::TVector<double>& RootLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalDinoAnimInstance.RootLocOffset"); }
	UE::Math::TRotator<double>& AimOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UPrimalDinoAnimInstance.AimOffset"); }
	float& DinoCurrentMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.DinoCurrentMovementAnimRate"); }
	BitFieldValue<bool, unsigned char> bDinoAnimIsMoving() { return { this, "UPrimalDinoAnimInstance.bDinoAnimIsMoving"}; }
	BitFieldValue<bool, unsigned char> bCanSkipAnimGraph() { return { this, "UPrimalDinoAnimInstance.bCanSkipAnimGraph"}; }
	BitFieldValue<bool, unsigned char> bRequestAimSpace() { return { this, "UPrimalDinoAnimInstance.bRequestAimSpace"}; }
	BitFieldValue<bool, unsigned char> bResolveAimSpace() { return { this, "UPrimalDinoAnimInstance.bResolveAimSpace"}; }
	void UpdateDataForWorkerThread(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalDinoAnimInstance.UpdateDataForWorkerThread(float)", DeltaSeconds); }
	void NativeInitializeAnimation() { NativeCall<void>(this, "UPrimalDinoAnimInstance.NativeInitializeAnimation()"); }
	void PreUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalDinoAnimInstance.PreUpdateAnimation(float)", DeltaSeconds); }
	void UpdateAimSpace(APrimalDinoCharacter* dino, float DeltaSeconds) { NativeCall<void, APrimalDinoCharacter*, float>(this, "UPrimalDinoAnimInstance.UpdateAimSpace(APrimalDinoCharacter*,float)", dino, DeltaSeconds); }
};
