#pragma once
#include "BulkForward.h"
#include "UAnimInstance.h"

struct UPrimalShipAnimInstance : public UAnimInstance
{
public:
	UPrimalShipAnimInstance() = delete;
	~UPrimalShipAnimInstance() = delete;
	UPrimalShipAnimInstance(const UPrimalShipAnimInstance&) = delete;
	UPrimalShipAnimInstance& operator=(const UPrimalShipAnimInstance&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalShipAnimInstance"); }

	TWeakObjectPtr<ADayCycleManager, FWeakObjectPtr>& DayCycleManagerField() { return *GetNativePointerField<TWeakObjectPtr<ADayCycleManager, FWeakObjectPtr>*>(this, "UPrimalShipAnimInstance.DayCycleManager"); }
	UE::Math::TVector<double>& WindFlowField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalShipAnimInstance.WindFlow"); }
	void UpdateWind() { NativeCall<void>(this, "UPrimalShipAnimInstance.UpdateWind()"); }
	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalShipAnimInstance.NativeUpdateAnimation(float)", DeltaSeconds); }
	void NativeInitializeAnimation() { NativeCall<void>(this, "UPrimalShipAnimInstance.NativeInitializeAnimation()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalShipAnimInstance"); }
};
