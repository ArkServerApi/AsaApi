#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UWorldPartitionStreamingSourceComponent : public UActorComponent
{
public:
	UWorldPartitionStreamingSourceComponent() = delete;
	~UWorldPartitionStreamingSourceComponent() = delete;
	UWorldPartitionStreamingSourceComponent(const UWorldPartitionStreamingSourceComponent&) = delete;
	UWorldPartitionStreamingSourceComponent& operator=(const UWorldPartitionStreamingSourceComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldPartitionStreamingSourceComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldPartitionStreamingSourceComponent"); }

	EStreamingSourceTargetBehavior& TargetBehaviorField() { return *GetNativePointerField<EStreamingSourceTargetBehavior*>(this, "UWorldPartitionStreamingSourceComponent.TargetBehavior"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TargetGridsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UWorldPartitionStreamingSourceComponent.TargetGrids"); }
	FName& TargetGrid_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "UWorldPartitionStreamingSourceComponent.TargetGrid_DEPRECATED"); }
	FColor& DebugColorField() { return *GetNativePointerField<FColor*>(this, "UWorldPartitionStreamingSourceComponent.DebugColor"); }
	EStreamingSourcePriority& PriorityField() { return *GetNativePointerField<EStreamingSourcePriority*>(this, "UWorldPartitionStreamingSourceComponent.Priority"); }
	EStreamingSourceTargetState& TargetStateField() { return *GetNativePointerField<EStreamingSourceTargetState*>(this, "UWorldPartitionStreamingSourceComponent.TargetState"); }
	bool& bStreamingSourceEnabledField() { return *GetNativePointerField<bool*>(this, "UWorldPartitionStreamingSourceComponent.bStreamingSourceEnabled"); }
	void PostLoad() { NativeCall<void>(this, "UWorldPartitionStreamingSourceComponent.PostLoad()"); }
	bool GetStreamingSource(FWorldPartitionStreamingSource& OutStreamingSource) { return NativeCall<bool, FWorldPartitionStreamingSource&>(this, "UWorldPartitionStreamingSourceComponent.GetStreamingSource(FWorldPartitionStreamingSource&)", OutStreamingSource); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWorldPartitionStreamingSourceComponent.Serialize(FArchive&)", Ar); }
	void OnRegister() { NativeCall<void>(this, "UWorldPartitionStreamingSourceComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UWorldPartitionStreamingSourceComponent.OnUnregister()"); }
	const UObject* GetStreamingSourceOwner() { return NativeCall<const UObject*>(this, "UWorldPartitionStreamingSourceComponent.GetStreamingSourceOwner()"); }
};
