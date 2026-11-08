#pragma once
#include "BulkForward.h"


struct APhysicsVolume : AVolume
{
	// Fields

	float& TerminalVelocityField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.TerminalVelocity"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "APhysicsVolume.Priority"); }
	float& FluidFrictionField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.FluidFriction"); }
	float& WaterDensityField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDensity"); }
	float& WaterDampingField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDamping"); }
	float& PhysicsMinWalkableFloorZField() { return *GetNativePointerField<float*>(this, "APhysicsVolume.PhysicsMinWalkableFloorZ"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bWaterVolume() { return { this, "APhysicsVolume.bWaterVolume" }; }
	BitFieldValue<bool, unsigned __int32> bPhysicsOnContact() { return { this, "APhysicsVolume.bPhysicsOnContact" }; }
	BitFieldValue<bool, unsigned __int32> bOceanVolume() { return { this, "APhysicsVolume.bOceanVolume" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWaterSubmersion() { return { this, "APhysicsVolume.bPreventWaterSubmersion" }; }
	BitFieldValue<bool, unsigned __int32> bDynamicWaterVolume() { return { this, "APhysicsVolume.bDynamicWaterVolume" }; }
	BitFieldValue<bool, unsigned __int32> bDontSetWaterNavCollision() { return { this, "APhysicsVolume.bDontSetWaterNavCollision" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("APhysicsVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APhysicsVolume"); }
	float GetVolumeZAtPosition(UE::Math::TVector2<double>* Position) { return NativeCall<float, UE::Math::TVector2<double>*>(this, "APhysicsVolume.GetVolumeZAtPosition(UE::Math::TVector2<double>)", Position); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPhysicsVolume();
	void PostInitializeComponents() { NativeCall<void>(this, "APhysicsVolume.PostInitializeComponents()"); }
	void Destroyed() { NativeCall<void>(this, "APhysicsVolume.Destroyed()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APhysicsVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool IsOverlapInVolume(const USceneComponent* TestComponent) { return NativeCall<bool, const USceneComponent*>(this, "APhysicsVolume.IsOverlapInVolume(USceneComponent&)", TestComponent); }
	float GetGravityZ() { return NativeCall<float>(this, "APhysicsVolume.GetGravityZ()"); }
	float GetVolumeZAtPosition2D(UE::Math::TVector2<double>* Position) { return NativeCall<float, UE::Math::TVector2<double>*>(this, "APhysicsVolume.GetVolumeZAtPosition2D(UE::Math::TVector2<double>)", Position); }

	void ActorEnteredVolume(AActor* Other) { NativeCall<void, AActor*>(this, "APhysicsVolume.ActorEnteredVolume(AActor*)", Other); }
	void ApplyBuoyanceToBody(float WaterSurfaceLevel, FBodyInstance* Body) { NativeCall<void, float, FBodyInstance*>(this, "APhysicsVolume.ApplyBuoyanceToBody(float,FBodyInstance*)", WaterSurfaceLevel, Body); }
	bool IsOceanVolume() { return NativeCall<bool>(this, "APhysicsVolume.IsOceanVolume()"); }
	void ActorLeavingVolume(AActor* Other) { NativeCall<void, AActor*>(this, "APhysicsVolume.ActorLeavingVolume(AActor*)", Other); }
	bool IsPhysicsVolume() { return NativeCall<bool>(this, "APhysicsVolume.IsPhysicsVolume()"); }
};