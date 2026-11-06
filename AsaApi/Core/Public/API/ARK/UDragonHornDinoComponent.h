#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UDragonHornDinoComponent : public UActorComponent
{
public:
	UDragonHornDinoComponent() = delete;
	~UDragonHornDinoComponent() = delete;
	UDragonHornDinoComponent(const UDragonHornDinoComponent&) = delete;
	UDragonHornDinoComponent& operator=(const UDragonHornDinoComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDragonHornDinoComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDragonHornDinoComponent"); }

	FDragonHornDinoActionDelegate& OnDragonHornActionField() { return *GetNativePointerField<FDragonHornDinoActionDelegate*>(this, "UDragonHornDinoComponent.OnDragonHornAction"); }
	UTexture2D*& LinkIconField() { return *GetNativePointerField<UTexture2D**>(this, "UDragonHornDinoComponent.LinkIcon"); }
	float& LinkHoldSecondsField() { return *GetNativePointerField<float*>(this, "UDragonHornDinoComponent.LinkHoldSeconds"); }
	UE::Math::TVector<double>& SpawnOffsetFromPlayerField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDragonHornDinoComponent.SpawnOffsetFromPlayer"); }
	UAnimMontage*& TeleportMontageField() { return *GetNativePointerField<UAnimMontage**>(this, "UDragonHornDinoComponent.TeleportMontage"); }
	UAnimMontage*& AppearMontageField() { return *GetNativePointerField<UAnimMontage**>(this, "UDragonHornDinoComponent.AppearMontage"); }
	AShooterCharacter*& LinkedPlayerField() { return *GetNativePointerField<AShooterCharacter**>(this, "UDragonHornDinoComponent.LinkedPlayer"); }
	bool& bStoringInDragonHornField() { return *GetNativePointerField<bool*>(this, "UDragonHornDinoComponent.bStoringInDragonHorn"); }
	void SetStoringInDragonHorn(bool bStoring) { NativeCall<void, bool>(this, "UDragonHornDinoComponent.SetStoringInDragonHorn(bool)", bStoring); }
	void MulticastDragonHornFX_Implementation(unsigned char Phase) { NativeCall<void, unsigned char>(this, "UDragonHornDinoComponent.MulticastDragonHornFX_Implementation(unsignedchar)", Phase); }
	void MulticastDragonHornFX(unsigned char Phase) { NativeCall<void, unsigned char>(this, "UDragonHornDinoComponent.MulticastDragonHornFX(unsignedchar)", Phase); }
	AShooterCharacter* GetLinkedShooterCharacter() { return NativeCall<AShooterCharacter*>(this, "UDragonHornDinoComponent.GetLinkedShooterCharacter()"); }
	void NotifyDragonCryopodded() { NativeCall<void>(this, "UDragonHornDinoComponent.NotifyDragonCryopodded()"); }
	void BP_OnDragonHornAppear() { NativeCall<void>(this, "UDragonHornDinoComponent.BP_OnDragonHornAppear()"); }
	bool TryLinkDragonHorn(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "UDragonHornDinoComponent.TryLinkDragonHorn(AShooterPlayerController*)", ForPC); }
	float PlayDragonHornTeleportFX() { return NativeCall<float>(this, "UDragonHornDinoComponent.PlayDragonHornTeleportFX()"); }
	void SetLinkedPlayer(AShooterCharacter* Player) { NativeCall<void, AShooterCharacter*>(this, "UDragonHornDinoComponent.SetLinkedPlayer(AShooterCharacter*)", Player); }
	bool CanLinkDragonHorn(AShooterPlayerController* ForPC, FString& OutReason) { return NativeCall<bool, AShooterPlayerController*, FString&>(this, "UDragonHornDinoComponent.CanLinkDragonHorn(AShooterPlayerController*,FString&)", ForPC, OutReason); }
	void ClearDragonHornCooldowns(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UDragonHornDinoComponent.ClearDragonHornCooldowns(AShooterPlayerController*)", ForPC); }
	bool TryDragonHornMultiUse(AShooterPlayerController* ForPC, int UseIndex) { return NativeCall<bool, AShooterPlayerController*, int>(this, "UDragonHornDinoComponent.TryDragonHornMultiUse(AShooterPlayerController*,int)", ForPC, UseIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "UDragonHornDinoComponent.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void PlayDragonHornAppearFX() { NativeCall<void>(this, "UDragonHornDinoComponent.PlayDragonHornAppearFX()"); }
	void BP_OnDragonHornPreTeleport() { NativeCall<void>(this, "UDragonHornDinoComponent.BP_OnDragonHornPreTeleport()"); }
	APrimalDinoCharacter* GetOwnerDino() { return NativeCall<APrimalDinoCharacter*>(this, "UDragonHornDinoComponent.GetOwnerDino()"); }
};
