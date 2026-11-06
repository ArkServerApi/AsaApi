#pragma once
#include "BulkForward.h"
#include "UWorldSubsystem.h"

struct UPrimalMassSubsystem : public UWorldSubsystem
{
public:
	UPrimalMassSubsystem() = delete;
	~UPrimalMassSubsystem() = delete;
	UPrimalMassSubsystem(const UPrimalMassSubsystem&) = delete;
	UPrimalMassSubsystem& operator=(const UPrimalMassSubsystem&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalMassSubsystem"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalMassSubsystem"); }

	FMassEntityManager*& EntityManagerField() { return *GetNativePointerField<FMassEntityManager**>(this, "UPrimalMassSubsystem.EntityManager"); }
	FMassArchetypeHandle& MassArchetypeField() { return *GetNativePointerField<FMassArchetypeHandle*>(this, "UPrimalMassSubsystem.MassArchetype"); }
	bool& bIsMassDisabledField() { return *GetNativePointerField<bool*>(this, "UPrimalMassSubsystem.bIsMassDisabled"); }
	void OnWorldBeginPlay(UWorld& InWorld) { NativeCall<void, UWorld&>(this, "UPrimalMassSubsystem.OnWorldBeginPlay(UWorld&)", InWorld); }
	void Deinitialize() { NativeCall<void>(this, "UPrimalMassSubsystem.Deinitialize()"); }
	void UpdateMovementVariables(AActor* InActor) { NativeCall<void, AActor*>(this, "UPrimalMassSubsystem.UpdateMovementVariables(AActor*)", InActor); }
	void OnMassMoverDied(APrimalCharacter* inDeadCharacter) { NativeCall<void, APrimalCharacter*>(this, "UPrimalMassSubsystem.OnMassMoverDied(APrimalCharacter*)", inDeadCharacter); }
	void OnMoveSegmentUpdated(AActor* InActor, UPathFollowingComponent* InComponent) { NativeCall<void, AActor*, UPathFollowingComponent*>(this, "UPrimalMassSubsystem.OnMoveSegmentUpdated(AActor*,UPathFollowingComponent*)", InActor, InComponent); }
	void PathUpdated(AActor* InActor, UPathFollowingComponent* InComponent) { NativeCall<void, AActor*, UPathFollowingComponent*>(this, "UPrimalMassSubsystem.PathUpdated(AActor*,UPathFollowingComponent*)", InActor, InComponent); }
	void CreateArchetypes() { NativeCall<void>(this, "UPrimalMassSubsystem.CreateArchetypes()"); }
	bool DoesSupportWorldType(EWorldType::Type WorldType) { return NativeCall<bool, EWorldType::Type>(this, "UPrimalMassSubsystem.DoesSupportWorldType(EWorldType::Type)", WorldType); }
	void TurnActorIntoMassMover(AActor* InMover) { NativeCall<void, AActor*>(this, "UPrimalMassSubsystem.TurnActorIntoMassMover(AActor*)", InMover); }
	void Initialize(FSubsystemCollectionBase& Collection) { NativeCall<void, FSubsystemCollectionBase&>(this, "UPrimalMassSubsystem.Initialize(FSubsystemCollectionBase&)", Collection); }
	void RemoveActorFromMassMover(AActor* InMover) { NativeCall<void, AActor*>(this, "UPrimalMassSubsystem.RemoveActorFromMassMover(AActor*)", InMover); }
	void PathFinished(AActor* InActor) { NativeCall<void, AActor*>(this, "UPrimalMassSubsystem.PathFinished(AActor*)", InActor); }
};
