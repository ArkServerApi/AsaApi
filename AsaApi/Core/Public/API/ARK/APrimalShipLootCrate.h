#pragma once
#include "GameplayForward.h"
#include "APrimalStructureItemContainer_SupplyCrate.h"

struct APrimalShipLootCrate : APrimalStructureItemContainer_SupplyCrate
{
public:
	APrimalShipLootCrate() = delete;
	~APrimalShipLootCrate() = delete;
	APrimalShipLootCrate(const APrimalShipLootCrate&) = delete;
	APrimalShipLootCrate& operator=(const APrimalShipLootCrate&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	float& ShipOverlapTimerField() { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ShipOverlapTimer"); }
	float& CheckForShipsIntervalField() { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CheckForShipsInterval"); }
	float& LootAutoPickupRadiusField() { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.LootAutoPickupRadius"); }

	void OnLootPickedUp() { NativeCall<void>(this, "APrimalShipLootCrate.OnLootPickedUp()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalShipLootCrate.Tick(float)", DeltaSeconds); }
};
