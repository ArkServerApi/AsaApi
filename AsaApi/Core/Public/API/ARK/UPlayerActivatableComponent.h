#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPlayerActivatableComponent : public UActorComponent
{
public:
	UPlayerActivatableComponent() = delete;
	~UPlayerActivatableComponent() = delete;
	UPlayerActivatableComponent(const UPlayerActivatableComponent&) = delete;
	UPlayerActivatableComponent& operator=(const UPlayerActivatableComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPlayerActivatableComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPlayerActivatableComponent"); }

	bool& bFlagAsRevealedField() { return *GetNativePointerField<bool*>(this, "UPlayerActivatableComponent.bFlagAsRevealed"); }
	bool& bIssueClientRPCField() { return *GetNativePointerField<bool*>(this, "UPlayerActivatableComponent.bIssueClientRPC"); }
	bool& bActiveByDefaultField() { return *GetNativePointerField<bool*>(this, "UPlayerActivatableComponent.bActiveByDefault"); }
	FDelegateHandle& PlayerDataUpdatedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UPlayerActivatableComponent.PlayerDataUpdatedHandle"); }
	void BeginPlay() { NativeCall<void>(this, "UPlayerActivatableComponent.BeginPlay()"); }
	void ActivateByDefaultFor(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPlayerActivatableComponent.ActivateByDefaultFor(AShooterPlayerController*)", PC); }
	void HandlePlayerDataUpdated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "UPlayerActivatableComponent.HandlePlayerDataUpdated(AShooterPlayerController*)", PC); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPlayerActivatableComponent._getUObject()"); }
	void SetIsActive_Implementation(AShooterPlayerController* PC, bool bValue) { NativeCall<void, AShooterPlayerController*, bool>(this, "UPlayerActivatableComponent.SetIsActive_Implementation(AShooterPlayerController*,bool)", PC, bValue); }
	bool IsActive_Implementation(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPlayerActivatableComponent.IsActive_Implementation(AShooterPlayerController*)", PC); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPlayerActivatableComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool HasAuthorityToActivate_Implementation(AShooterPlayerController* PC) { return NativeCall<bool, AShooterPlayerController*>(this, "UPlayerActivatableComponent.HasAuthorityToActivate_Implementation(AShooterPlayerController*)", PC); }
};
