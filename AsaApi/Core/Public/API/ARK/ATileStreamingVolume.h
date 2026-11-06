#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ATileStreamingVolume : public AVolume
{
public:
	ATileStreamingVolume() = delete;
	~ATileStreamingVolume() = delete;
	ATileStreamingVolume(const ATileStreamingVolume&) = delete;
	ATileStreamingVolume& operator=(const ATileStreamingVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATileStreamingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATileStreamingVolume"); }

	TArray<FName, TSizedDefaultAllocator<32> >& StreamingLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ATileStreamingVolume.StreamingLevelNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ExcludeLevelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ATileStreamingVolume.ExcludeLevelNames"); }
	BitFieldValue<bool, unsigned __int32> bDisabled() { return { this, "ATileStreamingVolume.bDisabled"}; }
	BitFieldValue<bool, unsigned __int32> bAllowOnlySpecifiedLevels() { return { this, "ATileStreamingVolume.bAllowOnlySpecifiedLevels"}; }
	BitFieldValue<bool, unsigned __int32> bForceDoNotTriggerBlockLoading() { return { this, "ATileStreamingVolume.bForceDoNotTriggerBlockLoading"}; }
	BitFieldValue<bool, unsigned __int32> bHideOtherLevels() { return { this, "ATileStreamingVolume.bHideOtherLevels"}; }
	BitFieldValue<bool, unsigned __int32> bBlockOnLoading() { return { this, "ATileStreamingVolume.bBlockOnLoading"}; }
	BitFieldValue<bool, unsigned __int32> bEnableUpdatesWorldComp() { return { this, "ATileStreamingVolume.bEnableUpdatesWorldComp"}; }
	BitFieldValue<bool, unsigned __int32> bDestroyContainedPawnsOnStartup() { return { this, "ATileStreamingVolume.bDestroyContainedPawnsOnStartup"}; }
	BitFieldValue<bool, unsigned __int32> bForceLevelsAsDistanceStreamingEnabled() { return { this, "ATileStreamingVolume.bForceLevelsAsDistanceStreamingEnabled"}; }
	void PostLoad() { NativeCall<void>(this, "ATileStreamingVolume.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ATileStreamingVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "ATileStreamingVolume.BeginPlay()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "ATileStreamingVolume.PostDuplicate(bool)", bDuplicateForPIE); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ATileStreamingVolume.PostUnregisterAllComponents()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ATileStreamingVolume.PostInitializeComponents()"); }
};
