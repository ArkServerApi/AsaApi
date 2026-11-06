#pragma once
#include "BulkForward.h"
#include "UAnimInstance.h"

struct UPrimalAnimInstance : public UAnimInstance
{
public:
	UPrimalAnimInstance() = delete;
	~UPrimalAnimInstance() = delete;
	UPrimalAnimInstance(const UPrimalAnimInstance&) = delete;
	UPrimalAnimInstance& operator=(const UPrimalAnimInstance&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAnimInstance"); }

	APrimalCharacter*& MyPrimalCharOwnerField() { return *GetNativePointerField<APrimalCharacter**>(this, "UPrimalAnimInstance.MyPrimalCharOwner"); }
	UPrimalCharacterMovement*& MyPrimalMovementCompField() { return *GetNativePointerField<UPrimalCharacterMovement**>(this, "UPrimalAnimInstance.MyPrimalMovementComp"); }
	float& CurrentDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAnimInstance.CurrentDeltaTime"); }
	UE::Math::TVector<double>& CurrentOwnerVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.CurrentOwnerVelocity"); }
	UE::Math::TVector<double>& CurrentOwnerDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.CurrentOwnerDirection"); }
	UE::Math::TVector<double>& CurrentOwnerAccelerationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.CurrentOwnerAcceleration"); }
	UE::Math::TVector<double>& CurrentMeshVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.CurrentMeshVelocity"); }
	float& CurrentMeshSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalAnimInstance.CurrentMeshSpeed"); }
	UE::Math::TVector<double>& CurrentMeshAccelerationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.CurrentMeshAcceleration"); }
	UE::Math::TVector<double>& PreviousMeshLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.PreviousMeshLocation"); }
	UE::Math::TVector<double>& PreviousMeshVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAnimInstance.PreviousMeshVelocity"); }
	bool& bCheatDisableIKField() { return *GetNativePointerField<bool*>(this, "UPrimalAnimInstance.bCheatDisableIK"); }
	TArray<FName, TSizedDefaultAllocator<32> >& DisabledLinkAnimGraphsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalAnimInstance.DisabledLinkAnimGraphs"); }
	BitFieldValue<bool, unsigned char> bEnableAnimationGroundConforming() { return { this, "UPrimalAnimInstance.bEnableAnimationGroundConforming"}; }
	void NativeInitializeAnimation() { NativeCall<void>(this, "UPrimalAnimInstance.NativeInitializeAnimation()"); }
	void UpdateDataForWorkerThread(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAnimInstance.UpdateDataForWorkerThread(float)", DeltaSeconds); }
	void BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter& BlendFilter) { NativeCall<void, FBlendFilter&>(this, "UPrimalAnimInstance.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)", BlendFilter); }
	void NativePostEvaluateAnimation() { NativeCall<void>(this, "UPrimalAnimInstance.NativePostEvaluateAnimation()"); }
	void ForceUpdateOnGameThread_Implementation(float DeltaTime) { NativeCall<void, float>(this, "UPrimalAnimInstance.ForceUpdateOnGameThread_Implementation(float)", DeltaTime); }
	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAnimInstance.NativeUpdateAnimation(float)", DeltaSeconds); }
	void RefreshCachedTraversalVars() { NativeCall<void>(this, "UPrimalAnimInstance.RefreshCachedTraversalVars()"); }
	void CacheTraversalAnimationVars(float DeltaTime) { NativeCall<void, float>(this, "UPrimalAnimInstance.CacheTraversalAnimationVars(float)", DeltaTime); }
	void ForceUpdateOnGameThread(float DeltaTime) { NativeCall<void, float>(this, "UPrimalAnimInstance.ForceUpdateOnGameThread(float)", DeltaTime); }
	void BlendSpacePlayerBase_InitializeBlendFilter(FBlendFilter& BlendFilter) { NativeCall<void, FBlendFilter&>(this, "UPrimalAnimInstance.BlendSpacePlayerBase_InitializeBlendFilter(FBlendFilter&)", BlendFilter); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAnimInstance"); }
	APrimalDinoCharacter* TryGetPawnOwnerAsDino() { return NativeCall<APrimalDinoCharacter*>(this, "UPrimalAnimInstance.TryGetPawnOwnerAsDino()"); }
	APrimalStructureTurret* TryGetOwnerAsTurret() { return NativeCall<APrimalStructureTurret*>(this, "UPrimalAnimInstance.TryGetOwnerAsTurret()"); }
};
