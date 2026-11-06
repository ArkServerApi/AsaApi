#pragma once
#include "BulkForward.h"
#include "UParticleSystemComponent.h"

struct UShooterLaserBeamComponent : public UParticleSystemComponent
{
public:
	UShooterLaserBeamComponent() = delete;
	~UShooterLaserBeamComponent() = delete;
	UShooterLaserBeamComponent(const UShooterLaserBeamComponent&) = delete;
	UShooterLaserBeamComponent& operator=(const UShooterLaserBeamComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterLaserBeamComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterLaserBeamComponent"); }

	bool& bIsOwnerWeaponField() { return *GetNativePointerField<bool*>(this, "UShooterLaserBeamComponent.bIsOwnerWeapon"); }
	float& LaserBeamRangeField() { return *GetNativePointerField<float*>(this, "UShooterLaserBeamComponent.LaserBeamRange"); }
	double& LastHiddenTimeField() { return *GetNativePointerField<double*>(this, "UShooterLaserBeamComponent.LastHiddenTime"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UShooterLaserBeamComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void InitializeComponent() { NativeCall<void>(this, "UShooterLaserBeamComponent.InitializeComponent()"); }
};
