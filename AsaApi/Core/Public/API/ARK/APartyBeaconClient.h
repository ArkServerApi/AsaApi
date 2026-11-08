#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconClient.h"

struct APartyBeaconClient : public AOnlineBeaconClient
{
public:
	APartyBeaconClient() = delete;
	~APartyBeaconClient() = delete;
	APartyBeaconClient(const APartyBeaconClient&) = delete;
	APartyBeaconClient& operator=(const APartyBeaconClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APartyBeaconClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APartyBeaconClient"); }

	FString& DestSessionIdField() { return *GetNativePointerField<FString*>(this, "APartyBeaconClient.DestSessionId"); }
	FPartyReservation& PendingReservationField() { return *GetNativePointerField<FPartyReservation*>(this, "APartyBeaconClient.PendingReservation"); }
	EClientRequestType& RequestTypeField() { return *GetNativePointerField<EClientRequestType*>(this, "APartyBeaconClient.RequestType"); }
	bool& bPendingReservationSentField() { return *GetNativePointerField<bool*>(this, "APartyBeaconClient.bPendingReservationSent"); }
	bool& bCancelReservationField() { return *GetNativePointerField<bool*>(this, "APartyBeaconClient.bCancelReservation"); }
	FTimerHandle& CancelRPCFailsafeField() { return *GetNativePointerField<FTimerHandle*>(this, "APartyBeaconClient.CancelRPCFailsafe"); }
	FTimerHandle& PendingResponseTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APartyBeaconClient.PendingResponseTimerHandle"); }
	FTimerHandle& PendingCancelResponseTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APartyBeaconClient.PendingCancelResponseTimerHandle"); }
	FTimerHandle& PendingReservationUpdateTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APartyBeaconClient.PendingReservationUpdateTimerHandle"); }
	FTimerHandle& PendingReservationFullTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APartyBeaconClient.PendingReservationFullTimerHandle"); }
	bool ServerAddOrUpdateReservationRequest_Validate(const FString& SessionId, const FPartyReservation& Reservation) { return NativeCall<bool, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerAddOrUpdateReservationRequest_Validate(FString&,FPartyReservation&)", SessionId, Reservation); }
	void CancelReservation() { NativeCall<void>(this, "APartyBeaconClient.CancelReservation()"); }
	bool ServerCancelReservationRequest_Validate(const FUniqueNetIdRepl& PartyLeader) { return NativeCall<bool, const FUniqueNetIdRepl&>(this, "APartyBeaconClient.ServerCancelReservationRequest_Validate(FUniqueNetIdRepl&)", PartyLeader); }
	void OnFailure() { NativeCall<void>(this, "APartyBeaconClient.OnFailure()"); }
	void ServerReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& Reservation) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerReservationRequest_Implementation(FString&,FPartyReservation&)", SessionId, Reservation); }
	void ClientSendReservationFull_Implementation() { NativeCall<void>(this, "APartyBeaconClient.ClientSendReservationFull_Implementation()"); }
	bool ServerRemoveMemberFromReservationRequest_Validate(const FString& SessionId, const FPartyReservation& ReservationUpdate) { return NativeCall<bool, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerRemoveMemberFromReservationRequest_Validate(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void OnConnected() { NativeCall<void>(this, "APartyBeaconClient.OnConnected()"); }
	void ClientSendReservationUpdates_Implementation(int NumRemainingReservations) { NativeCall<void, int>(this, "APartyBeaconClient.ClientSendReservationUpdates_Implementation(int)", NumRemainingReservations); }
	void ServerUpdateReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerUpdateReservationRequest(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void ServerReservationRequest(const FString& SessionId, const FPartyReservation& Reservation) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerReservationRequest(FString&,FPartyReservation&)", SessionId, Reservation); }
	void ServerAddOrUpdateReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& Reservation) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerAddOrUpdateReservationRequest_Implementation(FString&,FPartyReservation&)", SessionId, Reservation); }
	void OnCancelledComplete() { NativeCall<void>(this, "APartyBeaconClient.OnCancelledComplete()"); }
	void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type)", ReservationResponse); }
	void ClearTimers(bool bCallFailSafeIfNeeded) { NativeCall<void, bool>(this, "APartyBeaconClient.ClearTimers(bool)", bCallFailSafeIfNeeded); }
	void ServerUpdateReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& ReservationUpdate) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerUpdateReservationRequest_Implementation(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientReservationResponse_Implementation(EPartyReservationResult::Type)", ReservationResponse); }
	bool ServerReservationRequest_Validate(const FString& SessionId, const FPartyReservation& Reservation) { return NativeCall<bool, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerReservationRequest_Validate(FString&,FPartyReservation&)", SessionId, Reservation); }
	void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, const FPartyReservation& ReservationUpdate) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerRemoveMemberFromReservationRequest_Implementation(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void ClientSendReservationFull() { NativeCall<void>(this, "APartyBeaconClient.ClientSendReservationFull()"); }
	void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader) { NativeCall<void, const FUniqueNetIdRepl&>(this, "APartyBeaconClient.ServerCancelReservationRequest(FUniqueNetIdRepl&)", PartyLeader); }
	void ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientCancelReservationResponse(EPartyReservationResult::Type)", ReservationResponse); }
	void ServerRemoveMemberFromReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerRemoveMemberFromReservationRequest(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void BeginDestroy() { NativeCall<void>(this, "APartyBeaconClient.BeginDestroy()"); }
	bool ServerUpdateReservationRequest_Validate(const FString& SessionId, const FPartyReservation& ReservationUpdate) { return NativeCall<bool, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerUpdateReservationRequest_Validate(FString&,FPartyReservation&)", SessionId, ReservationUpdate); }
	void ClientSendReservationUpdates(int NumRemainingReservations) { NativeCall<void, int>(this, "APartyBeaconClient.ClientSendReservationUpdates(int)", NumRemainingReservations); }
	void ServerAddOrUpdateReservationRequest(const FString& SessionId, const FPartyReservation& Reservation) { NativeCall<void, const FString&, const FPartyReservation&>(this, "APartyBeaconClient.ServerAddOrUpdateReservationRequest(FString&,FPartyReservation&)", SessionId, Reservation); }
	void ServerCancelReservationRequest_Implementation(const FUniqueNetIdRepl& PartyLeader) { NativeCall<void, const FUniqueNetIdRepl&>(this, "APartyBeaconClient.ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl&)", PartyLeader); }
	void ClientReservationResponse(EPartyReservationResult::Type ReservationResponse) { NativeCall<void, EPartyReservationResult::Type>(this, "APartyBeaconClient.ClientReservationResponse(EPartyReservationResult::Type)", ReservationResponse); }
	void OnCancelledFailsafe() { NativeCall<void>(this, "APartyBeaconClient.OnCancelledFailsafe()"); }
};
