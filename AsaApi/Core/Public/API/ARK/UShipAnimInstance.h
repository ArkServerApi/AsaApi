#pragma once
#include "BulkForward.h"
#include "UPrimalShipAnimInstance.h"

struct UShipAnimInstance : public UPrimalShipAnimInstance
{
public:
	UShipAnimInstance() = delete;
	~UShipAnimInstance() = delete;
	UShipAnimInstance(const UShipAnimInstance&) = delete;
	UShipAnimInstance& operator=(const UShipAnimInstance&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShipAnimInstance"); }

	float& WindSpeedField() { return *GetNativePointerField<float*>(this, "UShipAnimInstance.WindSpeed"); }
	UE::Math::TVector<double>& AnchorBaseSocketLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UShipAnimInstance.AnchorBaseSocketLocation"); }
	FName& AnchorBaseNameField() { return *GetNativePointerField<FName*>(this, "UShipAnimInstance.AnchorBaseName"); }
	float& AnchorDistanceField() { return *GetNativePointerField<float*>(this, "UShipAnimInstance.AnchorDistance"); }
	float& DefaultDeepAnchorField() { return *GetNativePointerField<float*>(this, "UShipAnimInstance.DefaultDeepAnchor"); }
	int& AnchorRopeAlphaPrimativeDataIndexField() { return *GetNativePointerField<int*>(this, "UShipAnimInstance.AnchorRopeAlphaPrimativeDataIndex"); }
	void NativeInitializeAnimation() { NativeCall<void>(this, "UShipAnimInstance.NativeInitializeAnimation()"); }
	void UpdateAnchorDistance_Implementation(float DeltaSeconds, float& NewAnchorDistance) { NativeCall<void, float, float&>(this, "UShipAnimInstance.UpdateAnchorDistance_Implementation(float,float&)", DeltaSeconds, NewAnchorDistance); }
	void UpdateWind() { NativeCall<void>(this, "UShipAnimInstance.UpdateWind()"); }
	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UShipAnimInstance.NativeUpdateAnimation(float)", DeltaSeconds); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShipAnimInstance"); }
	void UpdateAnchorDistance(float DeltaSeconds, float& NewAnchorDistance) { NativeCall<void, float, float&>(this, "UShipAnimInstance.UpdateAnchorDistance(float,float&)", DeltaSeconds, NewAnchorDistance); }
};
