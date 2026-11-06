#pragma once
#include "BulkForward.h"
#include "UMovementComponent.h"

struct URotatingMovementComponent : public UMovementComponent
{
public:
	URotatingMovementComponent() = delete;
	~URotatingMovementComponent() = delete;
	URotatingMovementComponent(const URotatingMovementComponent&) = delete;
	URotatingMovementComponent& operator=(const URotatingMovementComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URotatingMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URotatingMovementComponent"); }

	UE::Math::TRotator<double>& RotationRateField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "URotatingMovementComponent.RotationRate"); }
	UE::Math::TVector<double>& PivotTranslationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "URotatingMovementComponent.PivotTranslation"); }
	BitFieldValue<bool, unsigned __int32> bRotationInLocalSpace() { return { this, "URotatingMovementComponent.bRotationInLocalSpace"}; }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "URotatingMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
