#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionReplay : public AActor
{
public:
	AWorldPartitionReplay() = delete;
	~AWorldPartitionReplay() = delete;
	AWorldPartitionReplay(const AWorldPartitionReplay&) = delete;
	AWorldPartitionReplay& operator=(const AWorldPartitionReplay&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionReplay"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionReplay"); }

	TArray<FName, TSizedDefaultAllocator<32> >& StreamingSourceNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AWorldPartitionReplay.StreamingSourceNames"); }
	static void Uninitialize(UWorld* World) { NativeCall<void, UWorld*>(nullptr, "AWorldPartitionReplay.Uninitialize(UWorld*)", World); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "AWorldPartitionReplay.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void RewindForReplay() { NativeCall<void>(this, "AWorldPartitionReplay.RewindForReplay()"); }
	static void Initialize(UWorld* World) { NativeCall<void, UWorld*>(nullptr, "AWorldPartitionReplay.Initialize(UWorld*)", World); }
	static bool IsRecordingEnabled(const UWorld* World) { return NativeCall<bool, const UWorld*>(nullptr, "AWorldPartitionReplay.IsRecordingEnabled(UWorld*)", World); }
};
