#pragma once


struct FTribeData
{
	// Fields

	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeData.TribeName"); }
	double& LastNameChangeTimeField() { return *GetNativePointerField<double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString, TSizedDefaultAllocator<32> >& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersRankGroups"); }
	TArray<double, TSizedDefaultAllocator<32> >& SlotFreedTimeField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "FTribeData.SlotFreedTime"); }
	TArray<unsigned int, TSizedDefaultAllocator<32> >& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance, TSizedDefaultAllocator<32> >& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct, TSizedDefaultAllocator<32> >& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct, TSizedDefaultAllocator<32> >*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar, TSizedDefaultAllocator<32> >& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeWars"); }
	TArray<FString, TSizedDefaultAllocator<32> >& TribeLogField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup, TSizedDefaultAllocator<32> >& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup, TSizedDefaultAllocator<32> >*>(this, "FTribeData.TribeRankGroups"); }
	int& NumTribeDinosField() { return *GetNativePointerField<int*>(this, "FTribeData.NumTribeDinos"); }
	TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& LimitedDinoClassesField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "FTribeData.LimitedDinoClasses"); }
	TArray<int, TSizedDefaultAllocator<32> >& NumDinosOfLimitedDinoClassesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FTribeData.NumDinosOfLimitedDinoClasses"); }
	TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >& CachedTeamTameList_UpdatedOnIntervalField() { return *GetNativePointerField<TArray<FTrackedActorPlusInfoStruct, TSizedDefaultAllocator<32> >*>(this, "FTribeData.CachedTeamTameList_UpdatedOnInterval"); }
	double& LastNetworkTimeUpdatedCachedTeamTameListField() { return *GetNativePointerField<double*>(this, "FTribeData.LastNetworkTimeUpdatedCachedTeamTameList"); }
	FTeamPingData& RallyPointDataField() { return *GetNativePointerField<FTeamPingData*>(this, "FTribeData.RallyPointData"); }
	bool& bHaveRallyPointDataField() { return *GetNativePointerField<bool*>(this, "FTribeData.bHaveRallyPointData"); }
	short& ThreatLevelField() { return *GetNativePointerField<short*>(this, "FTribeData.ThreatLevel"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& MembersPlayerDataIDSet_ServerField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "FTribeData.MembersPlayerDataIDSet_Server"); }

	// Bitfields

	// Functions

	FTribeData& operator=(FTribeData* __that) { return NativeCall<FTribeData&, FTribeData*>(this, "FTribeData.operator=(FTribeData&&)", __that); }
	FTribeData& operator=(const FTribeData* __that) { return NativeCall<FTribeData&, const FTribeData*>(this, "FTribeData.operator=(FTribeData&)", __that); }
	FString* GetTribeNameWithRankGroup(FString* result, unsigned int PlayerDataID) { return NativeCall<FString*, FString*, unsigned int>(this, "FTribeData.GetTribeNameWithRankGroup(unsignedint)", result, PlayerDataID); }
	FString* GetRankNameForPlayerID(FString* result, unsigned int PlayerDataID) { return NativeCall<FString*, FString*, unsigned int>(this, "FTribeData.GetRankNameForPlayerID(unsignedint)", result, PlayerDataID); }
	int GetTribeRankGroupIndexForPlayer(unsigned int PlayerDataID) { return NativeCall<int, unsigned int>(this, "FTribeData.GetTribeRankGroupIndexForPlayer(unsignedint)", PlayerDataID); }
	FTribeAlliance* FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance*, unsigned int>(this, "FTribeData.FindTribeAlliance(unsignedint)", AllianceID); }
	void MarkTribeNameChanged(UObject* WorldContextObject) { NativeCall<void, UObject*>(this, "FTribeData.MarkTribeNameChanged(UObject*)", WorldContextObject); }
	double GetSecondsSinceLastNameChange(UObject* WorldContextObject) const { return NativeCall<double, UObject*>(this, "FTribeData.GetSecondsSinceLastNameChange(UObject*)", WorldContextObject); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup* outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup*>(this, "FTribeData.GetTribeRankGroupForPlayer(unsignedint,FTribeRankGroup&)", PlayerDataID, outRankGroup); }
	int SetThreat(int NewThreat) { return NativeCall<int, int>(this, "FTribeData.SetThreat(int)", NewThreat); }
	void RefreshTribeWars(UWorld* ForWorld) { NativeCall<void, UWorld*>(this, "FTribeData.RefreshTribeWars(UWorld*)", ForWorld); }
	float GetTribeNameChangeCooldownTime(UObject* WorldContextObject) const { return NativeCall<float, UObject*>(this, "FTribeData.GetTribeNameChangeCooldownTime(UObject*)", WorldContextObject); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex()"); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FTribeData>(); }
	void CopyFrom(const FTribeData* Source, ETribeDataExclude ExcludeFilter) { NativeCall<void, const FTribeData*, ETribeDataExclude>(this, "FTribeData.CopyFrom(FTribeData&,ETribeDataExclude)", Source, ExcludeFilter); }
	int GetBestRankGroupForRank(int Rank) const { return NativeCall<int, int>(this, "FTribeData.GetBestRankGroupForRank(int)", Rank); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith(unsignedint)", OtherTribeID); }
	bool IsTribeWarActive(int WithTribeID, UWorld* ForWorld, bool bIncludeUnstarted) const { return NativeCall<bool, int, UWorld*, bool>(this, "FTribeData.IsTribeWarActive(int,UWorld*,bool)", WithTribeID, ForWorld, bIncludeUnstarted); }
	bool HasTribeWarRequest(int WithTribeID, UWorld* ForWorld) const { return NativeCall<bool, int, UWorld*>(this, "FTribeData.HasTribeWarRequest(int,UWorld*)", WithTribeID, ForWorld); }
};