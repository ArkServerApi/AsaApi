#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalShip.h"

struct APrimalPlayerFollowingShip : APrimalShip
{
public:
	APrimalPlayerFollowingShip() = delete;
	~APrimalPlayerFollowingShip() = delete;
	APrimalPlayerFollowingShip(const APrimalPlayerFollowingShip&) = delete;
	APrimalPlayerFollowingShip& operator=(const APrimalPlayerFollowingShip&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPlayerFollowingShip"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPlayerFollowingShip"); }

	float& ShipScaleField() { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipScale"); }
	int& LevelColorBandRegionField() { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LevelColorBandRegion"); }
	int& NumLevelColorBandsField() { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.NumLevelColorBands"); }

	void RefreshColorization(bool bForceRefresh) { NativeCall<void, bool>(this, "APrimalPlayerFollowingShip.RefreshColorization(bool)", bForceRefresh); }
	void Unstasis() { NativeCall<void>(this, "APrimalPlayerFollowingShip.Unstasis()"); }
	float GetThrottleForceMultiplier() { return NativeCall<float>(this, "APrimalPlayerFollowingShip.GetThrottleForceMultiplier()"); }
	void SnapToOceanSurface() { NativeCall<void>(this, "APrimalPlayerFollowingShip.SnapToOceanSurface()"); }
	void FireAtPlayer() { NativeCall<void>(this, "APrimalPlayerFollowingShip.FireAtPlayer()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalPlayerFollowingShip.PostInitializeComponents()"); }
	bool AlwaysAutoPilot() { return NativeCall<bool>(this, "APrimalPlayerFollowingShip.AlwaysAutoPilot()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalPlayerFollowingShip.Tick(float)", DeltaSeconds); }
	void SetupColorization() { NativeCall<void>(this, "APrimalPlayerFollowingShip.SetupColorization()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalPlayerFollowingShip.BeginPlay()"); }

	BitFieldValue<bool, unsigned char> bUseLevelColorBands() { return { this, "APrimalPlayerFollowingShip.bUseLevelColorBands"}; }

	FLinearColor& SailColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalPlayerFollowingShip.SailColorOverride"); }
};
