#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconHostObject.h"

struct ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	ASpectatorBeaconHost() = delete;
	~ASpectatorBeaconHost() = delete;
	ASpectatorBeaconHost(const ASpectatorBeaconHost&) = delete;
	ASpectatorBeaconHost& operator=(const ASpectatorBeaconHost&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASpectatorBeaconHost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASpectatorBeaconHost"); }

	bool& bLogoutOnSessionTimeoutField() { return *GetNativePointerField<bool*>(this, "ASpectatorBeaconHost.bLogoutOnSessionTimeout"); }
	bool& bIsValidationStrRequiredField() { return *GetNativePointerField<bool*>(this, "ASpectatorBeaconHost.bIsValidationStrRequired"); }
	float& SessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "ASpectatorBeaconHost.SessionTimeoutSecs"); }
	float& TravelSessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "ASpectatorBeaconHost.TravelSessionTimeoutSecs"); }
	void ProcessCancelReservationRequest(ASpectatorBeaconClient* Client, const FUniqueNetIdRepl& Spectator) { NativeCall<void, ASpectatorBeaconClient*, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconHost.ProcessCancelReservationRequest(ASpectatorBeaconClient*,FUniqueNetIdRepl&)", Client, Spectator); }
	void NewPlayerAdded(const FPlayerReservation& NewPlayer) { NativeCall<void, const FPlayerReservation&>(this, "ASpectatorBeaconHost.NewPlayerAdded(FPlayerReservation&)", NewPlayer); }
	void PostInitProperties() { NativeCall<void>(this, "ASpectatorBeaconHost.PostInitProperties()"); }
	void DumpReservations() { NativeCall<void>(this, "ASpectatorBeaconHost.DumpReservations()"); }
	bool DoesSessionMatch(const FString& SessionId) { return NativeCall<bool, const FString&>(this, "ASpectatorBeaconHost.DoesSessionMatch(FString&)", SessionId); }
	bool PlayerHasReservation(const FUniqueNetId& PlayerId) { return NativeCall<bool, const FUniqueNetId&>(this, "ASpectatorBeaconHost.PlayerHasReservation(FUniqueNetId&)", PlayerId); }
	int GetNumConsumedReservations() { return NativeCall<int>(this, "ASpectatorBeaconHost.GetNumConsumedReservations()"); }
	int GetMaxReservations() { return NativeCall<int>(this, "ASpectatorBeaconHost.GetMaxReservations()"); }
	void HandlePlayerLogout(const FUniqueNetIdRepl& PlayerId) { NativeCall<void, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconHost.HandlePlayerLogout(FUniqueNetIdRepl&)", PlayerId); }
	bool InitFromBeaconState(USpectatorBeaconState* PrevState) { return NativeCall<bool, USpectatorBeaconState*>(this, "ASpectatorBeaconHost.InitFromBeaconState(USpectatorBeaconState*)", PrevState); }
	bool InitHostBeacon(int InMaxReservations, FName InSessionName) { return NativeCall<bool, int, FName>(this, "ASpectatorBeaconHost.InitHostBeacon(int,FName)", InMaxReservations, InSessionName); }
	void ProcessReservationRequest(ASpectatorBeaconClient* Client, const FString& SessionId, const FSpectatorReservation& ReservationRequest) { NativeCall<void, ASpectatorBeaconClient*, const FString&, const FSpectatorReservation&>(this, "ASpectatorBeaconHost.ProcessReservationRequest(ASpectatorBeaconClient*,FString&,FSpectatorReservation&)", Client, SessionId, ReservationRequest); }
	int GetReservationCount() { return NativeCall<int>(this, "ASpectatorBeaconHost.GetReservationCount()"); }
	void SendReservationUpdates() { NativeCall<void>(this, "ASpectatorBeaconHost.SendReservationUpdates()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ASpectatorBeaconHost.Tick(float)", DeltaTime); }
	ESpectatorReservationResult::Type RemoveSpectatorReservation(const FUniqueNetIdRepl& Spectator) { return NativeCall<ESpectatorReservationResult::Type, const FUniqueNetIdRepl&>(this, "ASpectatorBeaconHost.RemoveSpectatorReservation(FUniqueNetIdRepl&)", Spectator); }
	ESpectatorReservationResult::Type AddSpectatorReservation(const FSpectatorReservation& ReservationRequest) { return NativeCall<ESpectatorReservationResult::Type, const FSpectatorReservation&>(this, "ASpectatorBeaconHost.AddSpectatorReservation(FSpectatorReservation&)", ReservationRequest); }
	bool GetPlayerValidation(const FUniqueNetId& PlayerId, FString& OutValidation) { return NativeCall<bool, const FUniqueNetId&, FString&>(this, "ASpectatorBeaconHost.GetPlayerValidation(FUniqueNetId&,FString&)", PlayerId, OutValidation); }
};
