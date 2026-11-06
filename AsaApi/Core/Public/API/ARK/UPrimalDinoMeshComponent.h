#pragma once
#include "BulkForward.h"
#include "USkeletalMeshComponent.h"

struct UPrimalDinoMeshComponent : public USkeletalMeshComponent
{
public:
	UPrimalDinoMeshComponent() = delete;
	~UPrimalDinoMeshComponent() = delete;
	UPrimalDinoMeshComponent(const UPrimalDinoMeshComponent&) = delete;
	UPrimalDinoMeshComponent& operator=(const UPrimalDinoMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoMeshComponent"); }

	unsigned char& bUpdateBoundsWhenStationaryField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoMeshComponent.bUpdateBoundsWhenStationary"); }
	UE::Math::TVector<double>& CachedRootBonePositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalDinoMeshComponent.CachedRootBonePosition"); }
	void OnComponentCreated() { NativeCall<void>(this, "UPrimalDinoMeshComponent.OnComponentCreated()"); }
	void SetAnimUpdateParameters(FAnimUpdateRateParameters* ForParams) { NativeCall<void, FAnimUpdateRateParameters*>(this, "UPrimalDinoMeshComponent.SetAnimUpdateParameters(FAnimUpdateRateParameters*)", ForParams); }
};
