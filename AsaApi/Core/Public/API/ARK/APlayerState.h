#pragma once
#include "BulkForward.h"


struct APlayerState : AInfo
{
	// Fields

	float& ScoreField() { return *GetNativePointerField<float*>(this, "APlayerState.Score"); }
	int& PlayerIdField() { return *GetNativePointerField<int*>(this, "APlayerState.PlayerId"); }
	unsigned __int8& CurPingBucketField() { return *GetNativePointerField<unsigned __int8*>(this, "APlayerState.CurPingBucket"); }
	int& StartTimeField() { return *GetNativePointerField<int*>(this, "APlayerState.StartTime"); }
	TSubclassOf<ULocalMessage>& EngineMessageClassField() { return *GetNativePointerField<TSubclassOf<ULocalMessage>*>(this, "APlayerState.EngineMessageClass"); }
	float& ExactPingField() { return *GetNativePointerField<float*>(this, "APlayerState.ExactPing"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& ExactPingV2Field();
	FString& SavedNetworkAddressField() { return *GetNativePointerField<FString*>(this, "APlayerState.SavedNetworkAddress"); }
	FUniqueNetIdRepl& UniqueIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "APlayerState.UniqueId"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "APlayerState.SessionName"); }
	FOnPlayerStatePawnSet& OnPawnSetField() { return *GetNativePointerField<FOnPlayerStatePawnSet*>(this, "APlayerState.OnPawnSet"); }
	TObjectPtr<APawn>& PawnPrivateField() { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerState.PawnPrivate"); }
	FieldArray<PingAvgData, 4> PingBucketField() { return { this, "APlayerState.PingBucket" }; }
	//FieldArray<PingAvgDataV2, 4> PingBucketV2Field() { return { this, "APlayerState.PingBucketV2" }; }
	float& CurPingBucketTimestampField() { return *GetNativePointerField<float*>(this, "APlayerState.CurPingBucketTimestamp"); }
	FString& PlayerNamePrivateField() { return *GetNativePointerField<FString*>(this, "APlayerState.PlayerNamePrivate"); }
	FString& OldNamePrivateField() { return *GetNativePointerField<FString*>(this, "APlayerState.OldNamePrivate"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bShouldUpdateReplicatedPing() { return { this, "APlayerState.bShouldUpdateReplicatedPing" }; }
	BitFieldValue<bool, unsigned __int32> bIsSpectator() { return { this, "APlayerState.bIsSpectator" }; }
	BitFieldValue<bool, unsigned __int32> bOnlySpectator() { return { this, "APlayerState.bOnlySpectator" }; }
	BitFieldValue<bool, unsigned __int32> bIsABot() { return { this, "APlayerState.bIsABot" }; }
	BitFieldValue<bool, unsigned __int32> bHasBeenWelcomed() { return { this, "APlayerState.bHasBeenWelcomed" }; }
	BitFieldValue<bool, unsigned __int32> bIsInactive() { return { this, "APlayerState.bIsInactive" }; }
	BitFieldValue<bool, unsigned __int32> bFromPreviousLevel() { return { this, "APlayerState.bFromPreviousLevel" }; }
	BitFieldValue<bool, unsigned __int32> bUseCustomPlayerNames() { return { this, "APlayerState.bUseCustomPlayerNames" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("APlayerState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APlayerState"); }
	FString* GetPlayerNameCustom(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerState.GetPlayerNameCustom()", result); }
	//     bool IsSpectator() { return NativeCall<bool>(this, "APlayerState.IsSpectator()"); }
	// FUNCTION MISSING: APlayerState.IsSpectator()
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPlayerState();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void UpdatePing(float InPing) { NativeCall<void, float>(this, "APlayerState.UpdatePing(float)", InPing); }
	void RecalculateAvgPing() { NativeCall<void>(this, "APlayerState.RecalculateAvgPing()"); }
	void OverrideWith(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "APlayerState.OverrideWith(APlayerState*)", PlayerState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerState.PostInitializeComponents()"); }
	void ClientInitialize(AController* C) { NativeCall<void, AController*>(this, "APlayerState.ClientInitialize(AController*)", C); }
	void OnRep_bIsInactive() { NativeCall<void>(this, "APlayerState.OnRep_bIsInactive()"); }
	bool ShouldBroadCastWelcomeMessage(bool bExiting) { return NativeCall<bool, bool>(this, "APlayerState.ShouldBroadCastWelcomeMessage(bool)", bExiting); }
	void Destroyed() { NativeCall<void>(this, "APlayerState.Destroyed()"); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerState.GetHumanReadableName()", result); }
	void OnRep_PlayerName() { NativeCall<void>(this, "APlayerState.OnRep_PlayerName()"); }
	void SetPlayerNameInternal(const FString* S) { NativeCall<void, const FString*>(this, "APlayerState.SetPlayerNameInternal(FString&)", S); }
	void SetPlayerName(const FString* S) { NativeCall<void, const FString*>(this, "APlayerState.SetPlayerName(FString&)", S); }
	FString* GetPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerState.GetPlayerName()", result); }
	FString* GetOldPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerState.GetOldPlayerName()", result); }
	void SetOldPlayerName(const FString* S) { NativeCall<void, const FString*>(this, "APlayerState.SetOldPlayerName(FString&)", S); }
	void HandleWelcomeMessage() { NativeCall<void>(this, "APlayerState.HandleWelcomeMessage()"); }
	void OnRep_UniqueId() { NativeCall<void>(this, "APlayerState.OnRep_UniqueId()"); }
	void RegisterPlayerWithSession(bool bWasFromInvite) { NativeCall<void, bool>(this, "APlayerState.RegisterPlayerWithSession(bool)", bWasFromInvite); }
	void UnregisterPlayerWithSession() { NativeCall<void>(this, "APlayerState.UnregisterPlayerWithSession()"); }
	APlayerState* Duplicate() { return NativeCall<APlayerState*>(this, "APlayerState.Duplicate()"); }
	void SeamlessTravelTo(APlayerState* NewPlayerState) { NativeCall<void, APlayerState*>(this, "APlayerState.SeamlessTravelTo(APlayerState*)", NewPlayerState); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void SetUniqueId(const TSharedPtr<FUniqueNetId const>* InUniqueId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "APlayerState.SetUniqueId(FUniqueNetIdRepl&)", InUniqueId); }
	void SetUniqueId(FUniqueNetIdRepl* NewUniqueId) { NativeCall<void, FUniqueNetIdRepl*>(this, "APlayerState.SetUniqueId(FUniqueNetIdRepl&&)", NewUniqueId); }
	void SetPawnPrivate(APawn* InPawn) { NativeCall<void, APawn*>(this, "APlayerState.SetPawnPrivate(APawn*)", InPawn); }

	unsigned char& CompressedPingField() { return *GetNativePointerField<unsigned char*>(this, "APlayerState.CompressedPing"); }
	void DispatchOverrideWith(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "APlayerState.DispatchOverrideWith(APlayerState*)", PlayerState); }
	void OnRep_PlayerId() { NativeCall<void>(this, "APlayerState.OnRep_PlayerId()"); }
	void SetPlayerId(int NewId) { NativeCall<void, int>(this, "APlayerState.SetPlayerId(int)", NewId); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "APlayerState.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "APlayerState.GetVelocity(bool)", result, bIsForRagdoll); }
	void OnSetUniqueId() { NativeCall<void>(this, "APlayerState.OnSetUniqueId()"); }
	void SetIsOnlyASpectator(bool bNewSpectator) { NativeCall<void, bool>(this, "APlayerState.SetIsOnlyASpectator(bool)", bNewSpectator); }
	float GetPingInMilliseconds() { return NativeCall<float>(this, "APlayerState.GetPingInMilliseconds()"); }
	FString* GetNetPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "APlayerState.GetNetPlayerName()", result); }
	void OnDeactivated() { NativeCall<void>(this, "APlayerState.OnDeactivated()"); }
	void Reset() { NativeCall<void>(this, "APlayerState.Reset()"); }
	void OnReactivated() { NativeCall<void>(this, "APlayerState.OnReactivated()"); }
	bool TeleportTo(const UE::Math::TVector<double>& DestLocation, const UE::Math::TRotator<double>& DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&, bool, bool>(this, "APlayerState.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void SetIsInactive(bool bNewInactive) { NativeCall<void, bool>(this, "APlayerState.SetIsInactive(bool)", bNewInactive); }
	void CopyProperties(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "APlayerState.CopyProperties(APlayerState*)", PlayerState); }
	APlayerController* GetPlayerController() { return NativeCall<APlayerController*>(this, "APlayerState.GetPlayerController()"); }
	void OnRep_Score() { NativeCall<void>(this, "APlayerState.OnRep_Score()"); }
	void SetIsSpectator(bool bNewSpectator) { NativeCall<void, bool>(this, "APlayerState.SetIsSpectator(bool)", bNewSpectator); }
	void SetIsFromPreviousLevel(bool bNewFromPreviousLevel) { NativeCall<void, bool>(this, "APlayerState.SetIsFromPreviousLevel(bool)", bNewFromPreviousLevel); }
};