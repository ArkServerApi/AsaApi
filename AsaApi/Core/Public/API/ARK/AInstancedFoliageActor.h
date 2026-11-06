#pragma once
#include "BulkForward.h"
#include "AISMPartitionActor.h"

struct AInstancedFoliageActor : public AISMPartitionActor
{
public:
	AInstancedFoliageActor() = delete;
	~AInstancedFoliageActor() = delete;
	AInstancedFoliageActor(const AInstancedFoliageActor&) = delete;
	AInstancedFoliageActor& operator=(const AInstancedFoliageActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AInstancedFoliageActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AInstancedFoliageActor"); }

	TArray<FString, TSizedDefaultAllocator<32> >& BaseMeshLookupField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "AInstancedFoliageActor.BaseMeshLookup"); }
	void ForceUpdateHack() { NativeCall<void>(this, "AInstancedFoliageActor.ForceUpdateHack()"); }
	void BeginPlay() { NativeCall<void>(this, "AInstancedFoliageActor.BeginPlay()"); }
	ISMInstanceManager* GetSMInstanceManager(const FSMInstanceId& InstanceId) { return NativeCall<ISMInstanceManager*, const FSMInstanceId&>(this, "AInstancedFoliageActor.GetSMInstanceManager(FSMInstanceId&)", InstanceId); }
	float InternalTakeRadialDamage(float Damage, const FRadialDamageEvent& RadialDamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FRadialDamageEvent&, AController*, AActor*>(this, "AInstancedFoliageActor.InternalTakeRadialDamage(float,FRadialDamageEvent&,AController*,AActor*)", Damage, RadialDamageEvent, EventInstigator, DamageCauser); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "AInstancedFoliageActor.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AInstancedFoliageActor.Serialize(FArchive&)", Ar); }
	bool Primal_IncrementalUnregisterAllComponents(bool bForReregister) { return NativeCall<bool, bool>(this, "AInstancedFoliageActor.Primal_IncrementalUnregisterAllComponents(bool)", bForReregister); }
	void EndPlay(EEndPlayReason::Type Reason) { NativeCall<void, EEndPlayReason::Type>(this, "AInstancedFoliageActor.EndPlay(EEndPlayReason::Type)", Reason); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "AInstancedFoliageActor.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void GetAllFoliageTypesForSource(const UObject* InSource, TArray<UFoliageType const*, TSizedDefaultAllocator<32> >& OutFoliageTypes) { NativeCall<void, const UObject*, TArray<UFoliageType const*, TSizedDefaultAllocator<32> >&>(this, "AInstancedFoliageActor.GetAllFoliageTypesForSource(UObject*,TArray<UFoliageType*,TSizedDefaultAllocator<32>>&)", InSource, OutFoliageTypes); }
	void PostLoad() { NativeCall<void>(this, "AInstancedFoliageActor.PostLoad()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AInstancedFoliageActor.PostInitializeComponents()"); }
};
