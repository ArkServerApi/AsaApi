#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AOceanDinoManager : public AActor
{
public:
	AOceanDinoManager() = delete;
	~AOceanDinoManager() = delete;
	AOceanDinoManager(const AOceanDinoManager&) = delete;
	AOceanDinoManager& operator=(const AOceanDinoManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AOceanDinoManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AOceanDinoManager"); }

	float& ViewerNumDinosGatherRadiusField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosGatherRadius"); }
	float& ViewerDinoSpawnRadiusMinField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnRadiusMin"); }
	float& ViewerDinoSpawnRadiusMaxField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnRadiusMax"); }
	float& ViewerDinoSpawnViewOffsetMinField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnViewOffsetMin"); }
	float& ViewerDinoSpawnViewOffsetMaxField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerDinoSpawnViewOffsetMax"); }
	int& MaxValidSpawnPointAttemptsField() { return *GetNativePointerField<int*>(this, "AOceanDinoManager.MaxValidSpawnPointAttempts"); }
	int& MaxNumViewersToUpdatePerFrameField() { return *GetNativePointerField<int*>(this, "AOceanDinoManager.MaxNumViewersToUpdatePerFrame"); }
	float& ViewerNumDinosTargetMinPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosTargetMinPlayers"); }
	float& ViewerNumDinosTargetMaxPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.ViewerNumDinosTargetMaxPlayers"); }
	float& RaftMinViewerSpeedField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.RaftMinViewerSpeed"); }
	float& NumDinosMinPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NumDinosMinPlayers"); }
	float& NumDinosMaxPlayersField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NumDinosMaxPlayers"); }
	TArray<FName, TSizedDefaultAllocator<32> >& OceanVolumeTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AOceanDinoManager.OceanVolumeTags"); }
	TArray<FString, TSizedDefaultAllocator<32> >& BiomeZoneNamesToIncludeField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AOceanDinoManager.BiomeZoneNamesToInclude"); }
	TArray<FString, TSizedDefaultAllocator<32> >& BiomeZoneNamesToExcludeField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AOceanDinoManager.BiomeZoneNamesToExclude"); }
	float& NPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NPCLerpToMaxRandomBaseLevel"); }
	float& NPCLevelMultiplierField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.NPCLevelMultiplier"); }
	int& ForceOverrideNPCBaseLevelField() { return *GetNativePointerField<int*>(this, "AOceanDinoManager.ForceOverrideNPCBaseLevel"); }
	float& MinimumDistanceFromIslandForCreaturesField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.MinimumDistanceFromIslandForCreatures"); }
	float& MinViewerDeltaDistanceToRefreshOceanSpawnsField() { return *GetNativePointerField<float*>(this, "AOceanDinoManager.MinViewerDeltaDistanceToRefreshOceanSpawns"); }
	BitFieldValue<bool, unsigned char> bEnabled() { return { this, "AOceanDinoManager.bEnabled"}; }
	BitFieldValue<bool, unsigned char> bForceInEditor() { return { this, "AOceanDinoManager.bForceInEditor"}; }
	BitFieldValue<bool, unsigned char> bIgnoreNPCRandomClassReplacements() { return { this, "AOceanDinoManager.bIgnoreNPCRandomClassReplacements"}; }
	BitFieldValue<bool, unsigned char> bEnableDebug() { return { this, "AOceanDinoManager.bEnableDebug"}; }
	void UpdateOceanDinosForViewer(APrimalCharacter* ForViewer, int NumDinosTarget) { NativeCall<void, APrimalCharacter*, int>(this, "AOceanDinoManager.UpdateOceanDinosForViewer(APrimalCharacter*,int)", ForViewer, NumDinosTarget); }
	void BeginPlay() { NativeCall<void>(this, "AOceanDinoManager.BeginPlay()"); }
	APrimalDinoCharacter* GetDinoToUseForOcean(APrimalCharacter* ForViewer, const UE::Math::TVector<double>& AtLocation, const FOceanDinoSpawnEntry& forSpawnEntry) { return NativeCall<APrimalDinoCharacter*, APrimalCharacter*, const UE::Math::TVector<double>&, const FOceanDinoSpawnEntry&>(this, "AOceanDinoManager.GetDinoToUseForOcean(APrimalCharacter*,UE::Math::TVector<double>&,FOceanDinoSpawnEntry&)", ForViewer, AtLocation, forSpawnEntry); }
	UE::Math::TVector<double>* GetOceanDinoSpawnPointAroundViewer(UE::Math::TVector<double>* result, APrimalCharacter* ForViewer, const FOceanDinoSpawnEntry& forSpawnEntry) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, APrimalCharacter*, const FOceanDinoSpawnEntry&>(this, "AOceanDinoManager.GetOceanDinoSpawnPointAroundViewer(APrimalCharacter*,FOceanDinoSpawnEntry&)", result, ForViewer, forSpawnEntry); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AOceanDinoManager.Tick(float)", DeltaSeconds); }
};
