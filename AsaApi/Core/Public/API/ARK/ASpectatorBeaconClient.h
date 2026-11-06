#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconClient.h"

struct ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	ASpectatorBeaconClient() = delete;
	~ASpectatorBeaconClient() = delete;
	ASpectatorBeaconClient(const ASpectatorBeaconClient&) = delete;
	ASpectatorBeaconClient& operator=(const ASpectatorBeaconClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASpectatorBeaconClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASpectatorBeaconClient"); }

	FString& DestSessionIdField() { return *GetNativePointerField<FString*>(this, "ASpectatorBeaconClient.DestSessionId"); }
	FSpectatorReservation& PendingReservationField() { return *GetNativePointerField<FSpectatorReservation*>(this, "ASpectatorBeaconClient.PendingReservation"); }
	ESpectatorClientRequestType& RequestTypeField() { return *GetNativePointerField<ESpectatorClientRequestType*>(this, "ASpectatorBeaconClient.RequestType"); }
	bool& bPendingReservationSentField() { return *GetNativePointerField<bool*>(this, "ASpectatorBeaconClient.bPendingReservationSent"); }
	bool& bCancelReservationField() { return *GetNativePointerField<bool*>(this, "ASpectatorBeaconClient.bCancelReservation"); }
	FTimerHandle& CancelRPCFailsafeField() { return *GetNativePointerField<FTimerHandle*>(this, "ASpectatorBeaconClient.CancelRPCFailsafe"); }
	FTimerHandle& PendingResponseTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ASpectatorBeaconClient.PendingResponseTimerHandle"); }
	FTimerHandle& PendingCancelResponseTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ASpectatorBeaconClient.PendingCancelResponseTimerHandle"); }
	FTimerHandle& PendingReservationUpdateTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ASpectatorBeaconClient.PendingReservationUpdateTimerHandle"); }
	FTimerHandle& PendingReservationFullTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ASpectatorBeaconClient.PendingReservationFullTimerHandle"); }
	bool RequestReservation(const FOnlineSessionSearchResult& DesiredHost, const FUniqueNetIdRepl& RequestingSpectator, const FPlayerReservation& Spectator) { return NativeCall<bool, const FOnlineSessionSearchResult&, const FUniqueNetIdRepl&, const FPlayerReservation&>(this, "ASpectatorBeaconClient.RequestReservation(FOnlineSessionSearchResult&,FUniqueNetIdRepl&,FPlayerReservation&)", DesiredHost, RequestingSpectator, Spectator); }
	void CancelReservation() { NativeCall<void>(this, "ASpectatorBeaconClient.CancelReservation()"); }
	void ClearTimers(bool bCallFailSafeIfNeeded) { NativeCall<void, bool>(this, "ASpectatorBeaconClient.ClearTimers(bool)", bCallFailSafeIfNeeded); }
	bool RequestReservation(const FString& ConnectInfoStr, const FString& InSessionId, const FUniqueNetIdRepl& RequestingSpectator, const FPlayerReservation& Spectator) { return NativeCall<bool, const FString&, const FString&, const FUniqueNetIdRepl&, const FPlayerReservation&>(this, "ASpectatorBeaconClient.RequestReservation(FString&,FString&,FUniqueNetIdRepl&,FPlayerReservation&)", ConnectInfoStr, InSessionId, RequestingSpectator, Spectator); }
	void ClientReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse) { NativeCall<void, ESpectatorReservationResult::Type>(this, "ASpectatorBeaconClient.ClientReservationResponse_Implementation(ESpectatorReservationResult::Type)", ReservationResponse); }
	bool ServerCancelReservationRequest_Validate(const FUniqueNetIdRepl& SpectatorId) { return NativeCall<bool, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconClient.ServerCancelReservationRequest_Validate(FUniqueNetIdRepl&)", SpectatorId); }
	bool ServerReservationRequest_Validate(const FString& SessionId, const FSpectatorReservation& Reservation) { return NativeCall<bool, const FString&, const FSpectatorReservation&>(this, "ASpectatorBeaconClient.ServerReservationRequest_Validate(FString&,FSpectatorReservation&)", SessionId, Reservation); }
	void ClientSendReservationFull_Implementation() { NativeCall<void>(this, "ASpectatorBeaconClient.ClientSendReservationFull_Implementation()"); }
	void OnFailure() { NativeCall<void>(this, "ASpectatorBeaconClient.OnFailure()"); }
	void ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse) { NativeCall<void, ESpectatorReservationResult::Type>(this, "ASpectatorBeaconClient.ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type)", ReservationResponse); }
	void ClientCancelReservationResponse(ESpectatorReservationResult::Type ReservationResponse) { NativeCall<void, ESpectatorReservationResult::Type>(this, "ASpectatorBeaconClient.ClientCancelReservationResponse(ESpectatorReservationResult::Type)", ReservationResponse); }
	void ServerReservationRequest_Implementation(const FString& SessionId, const FSpectatorReservation& Reservation) { NativeCall<void, const FString&, const FSpectatorReservation&>(this, "ASpectatorBeaconClient.ServerReservationRequest_Implementation(FString&,FSpectatorReservation&)", SessionId, Reservation); }
	void OnConnected() { NativeCall<void>(this, "ASpectatorBeaconClient.OnConnected()"); }
	void ClientSendReservationUpdates_Implementation(int NumRemainingReservations) { NativeCall<void, int>(this, "ASpectatorBeaconClient.ClientSendReservationUpdates_Implementation(int)", NumRemainingReservations); }
	void OnCancelledComplete() { NativeCall<void>(this, "ASpectatorBeaconClient.OnCancelledComplete()"); }
	void OnCancelledFailsafe() { NativeCall<void>(this, "ASpectatorBeaconClient.OnCancelledFailsafe()"); }
	void ServerReservationRequest(const FString& SessionId, const FSpectatorReservation& Reservation) { NativeCall<void, const FString&, const FSpectatorReservation&>(this, "ASpectatorBeaconClient.ServerReservationRequest(FString&,FSpectatorReservation&)", SessionId, Reservation); }
	void ClientSendReservationUpdates(int NumRemainingReservations) { NativeCall<void, int>(this, "ASpectatorBeaconClient.ClientSendReservationUpdates(int)", NumRemainingReservations); }
	void ServerCancelReservationRequest_Implementation(const FUniqueNetIdRepl& SpectatorId) { NativeCall<void, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconClient.ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl&)", SpectatorId); }
	void ClientReservationResponse(ESpectatorReservationResult::Type ReservationResponse) { NativeCall<void, ESpectatorReservationResult::Type>(this, "ASpectatorBeaconClient.ClientReservationResponse(ESpectatorReservationResult::Type)", ReservationResponse); }
	void ClientSendReservationFull() { NativeCall<void>(this, "ASpectatorBeaconClient.ClientSendReservationFull()"); }
	void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator) { NativeCall<void, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconClient.ServerCancelReservationRequest(FUniqueNetIdRepl&)", Spectator); }
	void BeginDestroy() { NativeCall<void>(this, "ASpectatorBeaconClient.BeginDestroy()"); }
};
