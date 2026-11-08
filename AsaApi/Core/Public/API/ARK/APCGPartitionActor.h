#pragma once
#include "BulkForward.h"
#include "APartitionActor.h"

struct APCGPartitionActor : public APartitionActor
{
public:
	APCGPartitionActor() = delete;
	~APCGPartitionActor() = delete;
	APCGPartitionActor(const APCGPartitionActor&) = delete;
	APCGPartitionActor& operator=(const APCGPartitionActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGPartitionActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGPartitionActor"); }

	FGuid& PCGGuidField() { return *GetNativePointerField<FGuid*>(this, "APCGPartitionActor.PCGGuid"); }
	unsigned int& PCGGridSizeField() { return *GetNativePointerField<unsigned int*>(this, "APCGPartitionActor.PCGGridSize"); }
	bool& bUse2DGridField() { return *GetNativePointerField<bool*>(this, "APCGPartitionActor.bUse2DGrid"); }
	unsigned int& RuntimeGridDescriptorHashField() { return *GetNativePointerField<unsigned int*>(this, "APCGPartitionActor.RuntimeGridDescriptorHash"); }
	bool& bIsRegisteredField() { return *GetNativePointerField<bool*>(this, "APCGPartitionActor.bIsRegistered"); }
	bool& bIsRuntimeGeneratedField() { return *GetNativePointerField<bool*>(this, "APCGPartitionActor.bIsRuntimeGenerated"); }
	bool& bWasPostCreatedLoadedField() { return *GetNativePointerField<bool*>(this, "APCGPartitionActor.bWasPostCreatedLoaded"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "APCGPartitionActor.PostUnregisterAllComponents()"); }
	void RemapGraphInstance(const UPCGComponent* OldOriginalComponent, UPCGComponent* NewOriginalComponent) { NativeCall<void, const UPCGComponent*, UPCGComponent*>(this, "APCGPartitionActor.RemapGraphInstance(UPCGComponent*,UPCGComponent*)", OldOriginalComponent, NewOriginalComponent); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APCGPartitionActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PostCreation(const FPCGGridDescriptor& GridDescriptor) { NativeCall<void, const FPCGGridDescriptor&>(this, "APCGPartitionActor.PostCreation(FPCGGridDescriptor&)", GridDescriptor); }
	void PostLoad() { NativeCall<void>(this, "APCGPartitionActor.PostLoad()"); }
	bool RemoveGraphInstance(UPCGComponent* OriginalComponent) { return NativeCall<bool, UPCGComponent*>(this, "APCGPartitionActor.RemoveGraphInstance(UPCGComponent*)", OriginalComponent); }
	bool Teleport(const UE::Math::TVector<double>& NewLocation) { return NativeCall<bool, const UE::Math::TVector<double>&>(this, "APCGPartitionActor.Teleport(UE::Math::TVector<double>&)", NewLocation); }
	UPCGComponent* GetOriginalComponent(const UPCGComponent* LocalComponent) { return NativeCall<UPCGComponent*, const UPCGComponent*>(this, "APCGPartitionActor.GetOriginalComponent(UPCGComponent*)", LocalComponent); }
	bool HasLocalPCGComponents() { return NativeCall<bool>(this, "APCGPartitionActor.HasLocalPCGComponents()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APCGPartitionActor.Serialize(FArchive&)", Ar); }
	void BeginDestroy() { NativeCall<void>(this, "APCGPartitionActor.BeginDestroy()"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& Origin, UE::Math::TVector<double>& BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "APCGPartitionActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	UPCGComponent* GetLocalComponent(const UPCGComponent* OriginalComponent, bool bRebuildMappingOnNullEntries) { return NativeCall<UPCGComponent*, const UPCGComponent*, bool>(this, "APCGPartitionActor.GetLocalComponent(UPCGComponent*,bool)", OriginalComponent, bRebuildMappingOnNullEntries); }
	UPCGComponent* GetLocalComponent(const UPCGComponent* OriginalComponent) { return NativeCall<UPCGComponent*, const UPCGComponent*>(this, "APCGPartitionActor.GetLocalComponent(UPCGComponent*)", OriginalComponent); }
	void RemoveLocalComponent(UPCGComponent* LocalComponent) { NativeCall<void, UPCGComponent*>(this, "APCGPartitionActor.RemoveLocalComponent(UPCGComponent*)", LocalComponent); }
	void RebuildOriginalToLocal() { NativeCall<void>(this, "APCGPartitionActor.RebuildOriginalToLocal()"); }
	void AddGraphInstance(UPCGComponent* OriginalComponent) { NativeCall<void, UPCGComponent*>(this, "APCGPartitionActor.AddGraphInstance(UPCGComponent*)", OriginalComponent); }
	void BeginPlay() { NativeCall<void>(this, "APCGPartitionActor.BeginPlay()"); }
	void UnregisterPCG() { NativeCall<void>(this, "APCGPartitionActor.UnregisterPCG()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "APCGPartitionActor.PostRegisterAllComponents()"); }
	bool CleanupDeadGraphInstancesInternal(bool bCleanupTest, TArray<UPCGComponent*, TSizedDefaultAllocator<32> >* OutRemovedLocalComponents) { return NativeCall<bool, bool, TArray<UPCGComponent*, TSizedDefaultAllocator<32> >*>(this, "APCGPartitionActor.CleanupDeadGraphInstancesInternal(bool,TArray<UPCGComponent*,TSizedDefaultAllocator<32>>*)", bCleanupTest, OutRemovedLocalComponents); }
};
