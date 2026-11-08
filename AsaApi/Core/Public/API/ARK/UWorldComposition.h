#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UWorldComposition : public UObject
{
public:
	UWorldComposition() = delete;
	~UWorldComposition() = delete;
	UWorldComposition(const UWorldComposition&) = delete;
	UWorldComposition& operator=(const UWorldComposition&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldComposition"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldComposition"); }
	FString& WorldRootField() { return *GetNativePointerField<FString*>(this, "UWorldComposition.WorldRoot"); }
	double& TilesStreamingTimeThresholdField() { return *GetNativePointerField<double*>(this, "UWorldComposition.TilesStreamingTimeThreshold"); }
	bool& bLoadAllTilesDuringCinematicField() { return *GetNativePointerField<bool*>(this, "UWorldComposition.bLoadAllTilesDuringCinematic"); }
	bool& bRebaseOriginIn3DSpaceField() { return *GetNativePointerField<bool*>(this, "UWorldComposition.bRebaseOriginIn3DSpace"); }
	float& RebaseOriginDistanceField() { return *GetNativePointerField<float*>(this, "UWorldComposition.RebaseOriginDistance"); }
	double& LastTimeSwitchedContainedVolumesField() { return *GetNativePointerField<double*>(this, "UWorldComposition.LastTimeSwitchedContainedVolumes"); }
	int& LastContainedVolumesNumField() { return *GetNativePointerField<int*>(this, "UWorldComposition.LastContainedVolumesNum"); }
	bool& bHasHadNonZeroUpdateField() { return *GetNativePointerField<bool*>(this, "UWorldComposition.bHasHadNonZeroUpdate"); }
	UE::Math::TVector<double>& BigJumpLastLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UWorldComposition.BigJumpLastLocation"); }
	void UpdateStreamingState(const UE::Math::TVector<double>* InLocations, int Num) { NativeCall<void, const UE::Math::TVector<double>*, int>(this, "UWorldComposition.UpdateStreamingState(UE::Math::TVector<double>*,int)", InLocations, Num); }
	void OnLevelAddedToWorld(ULevel* InLevel) { NativeCall<void, ULevel*>(this, "UWorldComposition.OnLevelAddedToWorld(ULevel*)", InLevel); }
	bool IsDistanceDependentLevel(FName PackageName) { return NativeCall<bool, FName>(this, "UWorldComposition.IsDistanceDependentLevel(FName)", PackageName); }
	void CaclulateTilesAbsolutePositions() { NativeCall<void>(this, "UWorldComposition.CaclulateTilesAbsolutePositions()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UWorldComposition.GetWorld()"); }
	bool CommitTileStreamingState(UWorld* PersistentWorld, int TileIdx, bool bShouldBeLoaded, bool bShouldBeVisible, bool bShouldBlock, int LODIdx, int CurrentVisibleCount, int CurrentlyLoaded, bool bAnyTiledVolumes) { return NativeCall<bool, UWorld*, int, bool, bool, bool, int, int, int, bool>(this, "UWorldComposition.CommitTileStreamingState(UWorld*,int,bool,bool,bool,int,int,int,bool)", PersistentWorld, TileIdx, bShouldBeLoaded, bShouldBeVisible, bShouldBlock, LODIdx, CurrentVisibleCount, CurrentlyLoaded, bAnyTiledVolumes); }
	void UpdateTileVolumes() { NativeCall<void>(this, "UWorldComposition.UpdateTileVolumes()"); }
	FWorldCompositionTile* FindTileByName(const FName& InPackageName) { return NativeCall<FWorldCompositionTile*, const FName&>(this, "UWorldComposition.FindTileByName(FName&)", InPackageName); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWorldComposition.Serialize(FArchive&)", Ar); }
	void PopulateStreamingLevels() { NativeCall<void>(this, "UWorldComposition.PopulateStreamingLevels()"); }
	void SetTileUnstreamable(const FString& InTileName) { NativeCall<void, const FString&>(this, "UWorldComposition.SetTileUnstreamable(FString&)", InTileName); }
	static void OnLevelPostLoad(ULevel* InLevel) { NativeCall<void, ULevel*>(nullptr, "UWorldComposition.OnLevelPostLoad(ULevel*)", InLevel); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorldComposition.PostDuplicate(bool)", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UWorldComposition.PostLoad()"); }
	void FixupForPIE(int PIEInstanceID) { NativeCall<void, int>(this, "UWorldComposition.FixupForPIE(int)", PIEInstanceID); }
	void OnLevelRemovedFromWorld(ULevel* InLevel) { NativeCall<void, ULevel*>(this, "UWorldComposition.OnLevelRemovedFromWorld(ULevel*)", InLevel); }
};
