#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UChaosPhysicalMaterial : public UObject
{
public:
	UChaosPhysicalMaterial() = delete;
	~UChaosPhysicalMaterial() = delete;
	UChaosPhysicalMaterial(const UChaosPhysicalMaterial&) = delete;
	UChaosPhysicalMaterial& operator=(const UChaosPhysicalMaterial&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosPhysicalMaterial"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosPhysicalMaterial"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.Friction"); }
	float& StaticFrictionField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.StaticFriction"); }
	float& RestitutionField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.Restitution"); }
	float& LinearEtherDragField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.LinearEtherDrag"); }
	float& AngularEtherDragField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.AngularEtherDrag"); }
	float& SleepingLinearVelocityThresholdField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.SleepingLinearVelocityThreshold"); }
	float& SleepingAngularVelocityThresholdField() { return *GetNativePointerField<float*>(this, "UChaosPhysicalMaterial.SleepingAngularVelocityThreshold"); }
};
