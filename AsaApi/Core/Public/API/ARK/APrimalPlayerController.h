#pragma once
#include "BulkForward.h"


struct APrimalPlayerController : APlayerController
{
	// Fields

	float& LastTeleportDistanceField() { return *GetNativePointerField<float*>(this, "APrimalPlayerController.LastTeleportDistance"); }
	UE::Math::TRotator<double>& PreviousRotationInputField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalPlayerController.PreviousRotationInput"); }
	UE::Math::TVector<double>& LastCharacterMovementTeleportUnstasisLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalPlayerController.LastCharacterMovementTeleportUnstasisLocation"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bLockedInputUI() { return { this, "APrimalPlayerController.bLockedInputUI" }; }
	BitFieldValue<bool, unsigned __int32> bPossessedAnyPawn() { return { this, "APrimalPlayerController.bPossessedAnyPawn" }; }
	BitFieldValue<bool, unsigned __int32> bCheatPlayer() { return { this, "APrimalPlayerController.bCheatPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bForceSpawnedNotification() { return { this, "APrimalPlayerController.bForceSpawnedNotification" }; }
	BitFieldValue<bool, unsigned __int32> bShowExtendedInfoKey() { return { this, "APrimalPlayerController.bShowExtendedInfoKey" }; }
	BitFieldValue<bool, unsigned __int32> bIsAdmin() { return { this, "APrimalPlayerController.bIsAdmin" }; }
	BitFieldValue<bool, unsigned __int32> bForceShowMouseCursor() { return { this, "APrimalPlayerController.bForceShowMouseCursor" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPlayerController"); }
	void ClientProcessNetExecCommandBP(AActor* ForActor, FName CommandName, FBPNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FBPNetExecParams*>(this, "APrimalPlayerController.ClientProcessNetExecCommandBP(AActor*,FName,FBPNetExecParams)", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandUnreliableBP(AActor* ForActor, FName CommandName, FBPNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FBPNetExecParams*>(this, "APrimalPlayerController.ClientProcessNetExecCommandUnreliableBP(AActor*,FName,FBPNetExecParams)", ForActor, CommandName, ExecParams); }
	void PropertyServerToClients(AActor* ActorToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, AActor*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.PropertyServerToClients(AActor*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ActorToRep, PropertyRepIndex, ReplicationData); }
	void PropertyServerToClientsUnreliable(AActor* ActorToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, AActor*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.PropertyServerToClientsUnreliable(AActor*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ActorToRep, PropertyRepIndex, ReplicationData); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalPlayerController();
	void ClientSetHUD_Implementation(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "APrimalPlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)", NewHUDClass); }
	void ClientProcessNetExecCommand_Implementation(AActor* ForActor, FName CommandName, FNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FNetExecParams*>(this, "APrimalPlayerController.ClientProcessNetExecCommand_Implementation(AActor*,FName,FNetExecParams)", ForActor, CommandName, ExecParams); }
	void ServerProcessNetExecCommand_Implementation(AActor* ForActor, FName CommandName, FBPNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FBPNetExecParams*>(this, "APrimalPlayerController.ServerProcessNetExecCommand_Implementation(AActor*,FName,FBPNetExecParams)", ForActor, CommandName, ExecParams); }
	void ServerProcessNetExecCommandUnreliable_Implementation(AActor* ForActor, FName CommandName, FBPNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FBPNetExecParams*>(this, "APrimalPlayerController.ServerProcessNetExecCommandUnreliable_Implementation(AActor*,FName,FBPNetExecParams)", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandBP_Implementation(AActor* ForActor, FName CommandName, FBPNetExecParams* ExecParams) { NativeCall<void, AActor*, FName, FBPNetExecParams*>(this, "APrimalPlayerController.ClientProcessNetExecCommandBP_Implementation(AActor*,FName,FBPNetExecParams)", ForActor, CommandName, ExecParams); }
	void ClientProcessSimpleNetExecCommandBP_Implementation(AActor* ForActor, FName CommandName) { NativeCall<void, AActor*, FName>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandBP_Implementation(AActor*,FName)", ForActor, CommandName); }
	void ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(AActor* ForActor, FName CommandName) { NativeCall<void, AActor*, FName>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(AActor*,FName)", ForActor, CommandName); }
	void PropertyServerToClients_Implementation(AActor* ActorToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, AActor*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.PropertyServerToClients_Implementation(AActor*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ActorToRep, PropertyRepIndex, ReplicationData); }
	void PropertyServerToClientsUnreliable_Implementation(AActor* ActorToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, AActor*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.PropertyServerToClientsUnreliable_Implementation(AActor*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ActorToRep, PropertyRepIndex, ReplicationData); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPlayerController"); }

	void ComponentPropertyServerToClientsUnreliable_Implementation(UActorComponent* ComponentToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, UActorComponent*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.ComponentPropertyServerToClientsUnreliable_Implementation(UActorComponent*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ComponentToRep, PropertyRepIndex, ReplicationData); }
	UE::Math::TVector<double>* GetLevelStreamingPawnViewLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalPlayerController.GetLevelStreamingPawnViewLocation()", result); }
	void ClientProcessSimpleNetExecCommandBP(AActor* ForActor, FName CommandName) { NativeCall<void, AActor*, FName>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandBP(AActor*,FName)", ForActor, CommandName); }
	void ClientTeleportSucceeded_Implementation(UE::Math::TVector<double>* TeleportLoc, UE::Math::TRotator<double>* TeleportRot, bool bSimpleTeleport) { if (!TeleportLoc) throw std::invalid_argument("Null native value parameter"); if (!TeleportRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, bool>(this, "APrimalPlayerController.ClientTeleportSucceeded_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool)", *TeleportLoc, *TeleportRot, bSimpleTeleport); }
	void ClientSendNetExecCommandToServer(AActor* ForActor, FName CommandName, const FBPNetExecParams& ExecParams, bool bIsReliable) { NativeCall<void, AActor*, FName, const FBPNetExecParams&, bool>(this, "APrimalPlayerController.ClientSendNetExecCommandToServer(AActor*,FName,FBPNetExecParams&,bool)", ForActor, CommandName, ExecParams, bIsReliable); }
	void BPServerRestartPlayer() { NativeCall<void>(this, "APrimalPlayerController.BPServerRestartPlayer()"); }
	void HandleRespawned(APawn* NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn*, bool>(this, "APrimalPlayerController.HandleRespawned(APawn*,bool)", NewPawn, IsFirstSpawn); }
	void ComponentPropertyServerToClients_Implementation(UActorComponent* ComponentToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, UActorComponent*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.ComponentPropertyServerToClients_Implementation(UActorComponent*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ComponentToRep, PropertyRepIndex, ReplicationData); }
	void ClientProcessSimpleNetExecCommandUnreliableBP(AActor* ForActor, FName CommandName) { NativeCall<void, AActor*, FName>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandUnreliableBP(AActor*,FName)", ForActor, CommandName); }
	void ClientNotifyReconnected(APawn* NewPawn) { NativeCall<void, APawn*>(this, "APrimalPlayerController.ClientNotifyReconnected(APawn*)", NewPawn); }
	bool NetConnectionHasActiveActor(AActor* AnActor) { return NativeCall<bool, AActor*>(this, "APrimalPlayerController.NetConnectionHasActiveActor(AActor*)", AnActor); }
	void ClientNotifyRespawned_Implementation(APawn* NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn*, bool>(this, "APrimalPlayerController.ClientNotifyRespawned_Implementation(APawn*,bool)", NewPawn, IsFirstSpawn); }
	void ClientNotifyReconnected_Implementation(APawn* NewPawn) { NativeCall<void, APawn*>(this, "APrimalPlayerController.ClientNotifyReconnected_Implementation(APawn*)", NewPawn); }
	int GetCurrentMultiUseWheelCategory() { return NativeCall<int>(this, "APrimalPlayerController.GetCurrentMultiUseWheelCategory()"); }
	void HandleRespawned_Implementation(APawn* NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn*, bool>(this, "APrimalPlayerController.HandleRespawned_Implementation(APawn*,bool)", NewPawn, IsFirstSpawn); }
	void ComponentPropertyServerToClientsUnreliable(UActorComponent* ComponentToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, UActorComponent*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.ComponentPropertyServerToClientsUnreliable(UActorComponent*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ComponentToRep, PropertyRepIndex, ReplicationData); }
	void ClientNotifyRespawned(APawn* NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn*, bool>(this, "APrimalPlayerController.ClientNotifyRespawned(APawn*,bool)", NewPawn, IsFirstSpawn); }
	void ComponentPropertyServerToClients(UActorComponent* ComponentToRep, const FPrimalMulticastRepIndex& PropertyRepIndex, const TArray<unsigned char, TSizedDefaultAllocator<32> >& ReplicationData) { NativeCall<void, UActorComponent*, const FPrimalMulticastRepIndex&, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalPlayerController.ComponentPropertyServerToClients(UActorComponent*,FPrimalMulticastRepIndex&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", ComponentToRep, PropertyRepIndex, ReplicationData); }
	bool IsLocallyControlledByPlayer() { return NativeCall<bool>(this, "APrimalPlayerController.IsLocallyControlledByPlayer()"); }
	void SetCurrentMultiUseWheelCategory(int Category) { NativeCall<void, int>(this, "APrimalPlayerController.SetCurrentMultiUseWheelCategory(int)", Category); }
	bool IsSavingData() { return NativeCall<bool>(this, "APrimalPlayerController.IsSavingData()"); }
};