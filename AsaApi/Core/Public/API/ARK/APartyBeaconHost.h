#pragma once
#include "BulkForward.h"
#include "AOnlineBeaconHostObject.h"

struct APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	APartyBeaconHost() = delete;
	~APartyBeaconHost() = delete;
	APartyBeaconHost(const APartyBeaconHost&) = delete;
	APartyBeaconHost& operator=(const APartyBeaconHost&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APartyBeaconHost"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APartyBeaconHost"); }

	bool& bLogoutOnSessionTimeoutField() { return *GetNativePointerField<bool*>(this, "APartyBeaconHost.bLogoutOnSessionTimeout"); }
	bool& bIsValidationStrRequiredField() { return *GetNativePointerField<bool*>(this, "APartyBeaconHost.bIsValidationStrRequired"); }
	float& SessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "APartyBeaconHost.SessionTimeoutSecs"); }
	float& TravelSessionTimeoutSecsField() { return *GetNativePointerField<float*>(this, "APartyBeaconHost.TravelSessionTimeoutSecs"); }
	void DumpReservations() { NativeCall<void>(this, "APartyBeaconHost.DumpReservations()"); }
	bool DoesSessionMatch(const FString& SessionId) { return NativeCall<bool, const FString&>(this, "APartyBeaconHost.DoesSessionMatch(FString&)", SessionId); }
	bool PlayerHasReservation(const FUniqueNetId& PlayerId) { return NativeCall<bool, const FUniqueNetId&>(this, "APartyBeaconHost.PlayerHasReservation(FUniqueNetId&)", PlayerId); }
	int GetNumConsumedReservations() { return NativeCall<int>(this, "APartyBeaconHost.GetNumConsumedReservations()"); }
	int GetMaxReservations() { return NativeCall<int>(this, "APartyBeaconHost.GetMaxReservations()"); }
	EPartyReservationResult::Type UpdatePartyReservation(const FPartyReservation& ReservationUpdateRequest, bool bIsRemovingMembers) { return NativeCall<EPartyReservationResult::Type, const FPartyReservation&, bool>(this, "APartyBeaconHost.UpdatePartyReservation(FPartyReservation&,bool)", ReservationUpdateRequest, bIsRemovingMembers); }
	void ProcessReservationAddOrUpdateRequest(APartyBeaconClient* Client, const FString& SessionId, const FPartyReservation& ReservationRequest) { NativeCall<void, APartyBeaconClient*, const FString&, const FPartyReservation&>(this, "APartyBeaconHost.ProcessReservationAddOrUpdateRequest(APartyBeaconClient*,FString&,FPartyReservation&)", Client, SessionId, ReservationRequest); }
	bool InitFromBeaconState(UPartyBeaconState* PrevState) { return NativeCall<bool, UPartyBeaconState*>(this, "APartyBeaconHost.InitFromBeaconState(UPartyBeaconState*)", PrevState); }
	bool HasCrossplayOptOutReservation() { return NativeCall<bool>(this, "APartyBeaconHost.HasCrossplayOptOutReservation()"); }
	void SendReservationUpdates() { NativeCall<void>(this, "APartyBeaconHost.SendReservationUpdates()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APartyBeaconHost.Tick(float)", DeltaTime); }
	void PlayerRemoved(const FPlayerReservation& RemovedPlayer) { NativeCall<void, const FPlayerReservation&>(this, "APartyBeaconHost.PlayerRemoved(FPlayerReservation&)", RemovedPlayer); }
	int GetMaxPlayersPerTeam() { return NativeCall<int>(this, "APartyBeaconHost.GetMaxPlayersPerTeam()"); }
	void HandlePlayerLogout(const FUniqueNetIdRepl& PlayerId) { NativeCall<void, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.HandlePlayerLogout(FUniqueNetIdRepl&)", PlayerId); }
	bool ReconfigureTeamAndPlayerCount(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations) { return NativeCall<bool, int, int, int>(this, "APartyBeaconHost.ReconfigureTeamAndPlayerCount(int,int,int)", InNumTeams, InNumPlayersPerTeam, InNumReservations); }
	void ProcessReservationRequest(APartyBeaconClient* Client, const FString& SessionId, const FPartyReservation& ReservationRequest) { NativeCall<void, APartyBeaconClient*, const FString&, const FPartyReservation&>(this, "APartyBeaconHost.ProcessReservationRequest(APartyBeaconClient*,FString&,FPartyReservation&)", Client, SessionId, ReservationRequest); }
	void UpdatePartyLeader(const FUniqueNetIdRepl& InPartyMemberId, const FUniqueNetIdRepl& NewPartyLeaderId) { NativeCall<void, const FUniqueNetIdRepl&, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.UpdatePartyLeader(FUniqueNetIdRepl&,FUniqueNetIdRepl&)", InPartyMemberId, NewPartyLeaderId); }
	void SetCompetitiveIntegrity(bool bNewCompetitiveIntegrity) { NativeCall<void, bool>(this, "APartyBeaconHost.SetCompetitiveIntegrity(bool)", bNewCompetitiveIntegrity); }
	bool InitHostBeacon(int InTeamCount, int InTeamSize, int InMaxReservations, FName InSessionName, int InForceTeamNum, bool bInEnableRemovalRequests) { return NativeCall<bool, int, int, int, FName, int, bool>(this, "APartyBeaconHost.InitHostBeacon(int,int,int,FName,int,bool)", InTeamCount, InTeamSize, InMaxReservations, InSessionName, InForceTeamNum, bInEnableRemovalRequests); }
	bool GetPlayerValidation(const FUniqueNetId& PlayerId, FString& OutValidation) { return NativeCall<bool, const FUniqueNetId&, FString&>(this, "APartyBeaconHost.GetPlayerValidation(FUniqueNetId&,FString&)", PlayerId, OutValidation); }
	float GetSessionTimeoutSecs(const FUniqueNetIdRepl& PlayerId) { return NativeCall<float, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.GetSessionTimeoutSecs(FUniqueNetIdRepl&)", PlayerId); }
	int GetReservationPlatformCount(const FString& InPlatform, bool bIncludeMappedPlatforms) { return NativeCall<int, const FString&, bool>(this, "APartyBeaconHost.GetReservationPlatformCount(FString&,bool)", InPlatform, bIncludeMappedPlatforms); }
	bool ChangeTeam(const FUniqueNetIdRepl& PartyLeader, int NewTeamNum) { return NativeCall<bool, const FUniqueNetIdRepl&, int>(this, "APartyBeaconHost.ChangeTeam(FUniqueNetIdRepl&,int)", PartyLeader, NewTeamNum); }
	void ProcessReservationUpdateRequest(APartyBeaconClient* Client, const FString& SessionId, const FPartyReservation& ReservationUpdateRequest, bool bIsRemovingMember) { NativeCall<void, APartyBeaconClient*, const FString&, const FPartyReservation&, bool>(this, "APartyBeaconHost.ProcessReservationUpdateRequest(APartyBeaconClient*,FString&,FPartyReservation&,bool)", Client, SessionId, ReservationUpdateRequest, bIsRemovingMember); }
	void NewPlayerAdded(const FPlayerReservation& NewPlayer) { NativeCall<void, const FPlayerReservation&>(this, "APartyBeaconHost.NewPlayerAdded(FPlayerReservation&)", NewPlayer); }
	void SetTeamAssignmentMethod(FName NewAssignmentMethod) { NativeCall<void, FName>(this, "APartyBeaconHost.SetTeamAssignmentMethod(FName)", NewAssignmentMethod); }
	void PostInitProperties() { NativeCall<void>(this, "APartyBeaconHost.PostInitProperties()"); }
	void ProcessCancelReservationRequest(APartyBeaconClient* Client, const FUniqueNetIdRepl& PartyLeader) { NativeCall<void, APartyBeaconClient*, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.ProcessCancelReservationRequest(APartyBeaconClient*,FUniqueNetIdRepl&)", Client, PartyLeader); }
	bool SwapTeams(const FUniqueNetIdRepl& PartyLeader, const FUniqueNetIdRepl& OtherPartyLeader) { return NativeCall<bool, const FUniqueNetIdRepl&, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.SwapTeams(FUniqueNetIdRepl&,FUniqueNetIdRepl&)", PartyLeader, OtherPartyLeader); }
	int GetMaxAvailableTeamSize() { return NativeCall<int>(this, "APartyBeaconHost.GetMaxAvailableTeamSize()"); }
	EPartyReservationResult::Type RemovePartyReservation(const FUniqueNetIdRepl& PartyLeader) { return NativeCall<EPartyReservationResult::Type, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.RemovePartyReservation(FUniqueNetIdRepl&)", PartyLeader); }
	bool ShouldRespectCompetitiveIntegrity() { return NativeCall<bool>(this, "APartyBeaconHost.ShouldRespectCompetitiveIntegrity()"); }
	int GetReservationCount() { return NativeCall<int>(this, "APartyBeaconHost.GetReservationCount()"); }
	bool IsPlayerActive(const FUniqueNetIdRepl& PlayerId) { return NativeCall<bool, const FUniqueNetIdRepl&>(this, "APartyBeaconHost.IsPlayerActive(FUniqueNetIdRepl&)", PlayerId); }
	EPartyReservationResult::Type AddPartyReservation(const FPartyReservation& ReservationRequest) { return NativeCall<EPartyReservationResult::Type, const FPartyReservation&>(this, "APartyBeaconHost.AddPartyReservation(FPartyReservation&)", ReservationRequest); }
};
