#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureItemContainer.h"

struct APrimalStructureWatchtower : APrimalStructureItemContainer
{
public:
	APrimalStructureWatchtower() = delete;
	~APrimalStructureWatchtower() = delete;
	APrimalStructureWatchtower(const APrimalStructureWatchtower&) = delete;
	APrimalStructureWatchtower& operator=(const APrimalStructureWatchtower&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureWatchtower"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureWatchtower"); }



	void OnActivated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureWatchtower.OnActivated(AShooterPlayerController*)", PC); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureWatchtower.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalStructureWatchtower._getUObject()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureWatchtower.BeginPlay()"); }
	void OnDeactivated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureWatchtower.OnDeactivated(AShooterPlayerController*)", PC); }

	USphereComponent*& StasisComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureWatchtower.StasisComponent"); }
	UPlayerActivatableComponent*& PlayerActivatableField() { return *GetNativePointerField<UPlayerActivatableComponent**>(this, "APrimalStructureWatchtower.PlayerActivatable"); }

	FGuid& UuidField() { return *GetNativePointerField<FGuid*>(this, "APrimalStructureWatchtower.Uuid"); }
	FGuid* GetStableGUID_Implementation(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "APrimalStructureWatchtower.GetStableGUID_Implementation()", result); }
	FGuid* GetGUID(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "APrimalStructureWatchtower.GetGUID()", result); }
	bool GetStaticMinimapData_Implementation(FMinimapMarkerStaticData& OutData) { return NativeCall<bool, FMinimapMarkerStaticData&>(this, "APrimalStructureWatchtower.GetStaticMinimapData_Implementation(FMinimapMarkerStaticData&)", OutData); }
};
