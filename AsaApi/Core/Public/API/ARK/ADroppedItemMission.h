#pragma once
#include "BulkForward.h"


struct ADroppedItemMission : ADroppedItem
{
	// Fields

	AMissionType*& OwnerMissionField() { return *GetNativePointerField<AMissionType**>(this, "ADroppedItemMission.OwnerMission"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPickupOnlyAllowMissionPlayers() { return { this, "ADroppedItemMission.bPickupOnlyAllowMissionPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bShowHUDMissionInfo() { return { this, "ADroppedItemMission.bShowHUDMissionInfo" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADroppedItemMission"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADroppedItemMission();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void OnItemPickedUp(APlayerController* ByPC, UPrimalItem* InventoryItem) { NativeCall<void, APlayerController*, UPrimalItem*>(this, "ADroppedItemMission.OnItemPickedUp(APlayerController*,UPrimalItem*)", ByPC, InventoryItem); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "ADroppedItemMission.DrawHUD(AShooterHUD*)", HUD); }
	bool IsAllowedToPickupItem_Implementation(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "ADroppedItemMission.IsAllowedToPickupItem_Implementation(APlayerController*)", PC); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ADroppedItemMission.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADroppedItemMission"); }

	void SetupDroppedItemLifeSpan() { NativeCall<void>(this, "ADroppedItemMission.SetupDroppedItemLifeSpan()"); }
	static void SetOwnerMission_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADroppedItemMission.SetOwnerMission_WrapperImpl(void*,void*)", Object, InValue); }
	AMissionType* GetOwnerMission() { return NativeCall<AMissionType*>(this, "ADroppedItemMission.GetOwnerMission()"); }
};