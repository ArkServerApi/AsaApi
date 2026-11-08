#pragma once
#include "BulkForward.h"
#include "UMassProcessor.h"

struct UPrimalMoveMassProcessor : public UMassProcessor
{
public:
	UPrimalMoveMassProcessor() = delete;
	~UPrimalMoveMassProcessor() = delete;
	UPrimalMoveMassProcessor(const UPrimalMoveMassProcessor&) = delete;
	UPrimalMoveMassProcessor& operator=(const UPrimalMoveMassProcessor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalMoveMassProcessor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalMoveMassProcessor"); }

	FMassEntityQuery& QueryField() { return *GetNativePointerField<FMassEntityQuery*>(this, "UPrimalMoveMassProcessor.Query"); }
	void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) { NativeCall<void, FMassEntityManager&, FMassExecutionContext&>(this, "UPrimalMoveMassProcessor.Execute(FMassEntityManager&,FMassExecutionContext&)", EntityManager, Context); }
	static void AdjustFloorHeight(const FMassActorFragment& ActorFrag, UE::Math::TVector<double>* CurrentLocation, FMassExecutionContext& Context, FPrimalMovementFragment& MoveFrag, UE::Math::TVector<double>& NewLocation) { if (!CurrentLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, const FMassActorFragment &, UE :: Math :: TVector < double >, FMassExecutionContext &, FPrimalMovementFragment &, UE :: Math :: TVector < double > &>(nullptr, "UPrimalMoveMassProcessor.AdjustFloorHeight(FMassActorFragment&,UE::Math::TVector<double>,FMassExecutionContext&,FPrimalMovementFragment&,UE::Math::TVector<double>&)", ActorFrag, *CurrentLocation, Context, MoveFrag, NewLocation); }
	static void FindFloor(FMassExecutionContext& Context, const AActor* InActor, UE::Math::TVector<double>* CurrentLocation, FPrimalMovementFragment& MoveFrag, FFindFloorResult& OutFloorResult) { if (!CurrentLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FMassExecutionContext &, const AActor *, UE :: Math :: TVector < double >, FPrimalMovementFragment &, FFindFloorResult &>(nullptr, "UPrimalMoveMassProcessor.FindFloor(FMassExecutionContext&,AActor*,UE::Math::TVector<double>,FPrimalMovementFragment&,FFindFloorResult&)", Context, InActor, *CurrentLocation, MoveFrag, OutFloorResult); }
	static void TwoWallAdjust(UE::Math::TVector<double>& WorldSpaceDelta, const FHitResult& Hit, const UE::Math::TVector<double>& OldHitNormal, FPrimalMovementFragment& MoveFrag) { NativeCall<void, UE::Math::TVector<double>&, const FHitResult&, const UE::Math::TVector<double>&, FPrimalMovementFragment&>(nullptr, "UPrimalMoveMassProcessor.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double>&,FPrimalMovementFragment&)", WorldSpaceDelta, Hit, OldHitNormal, MoveFrag); }
	static float SlideAlongSurface(int EntityIndex, FMassExecutionContext& Context, const FMassActorFragment& ActorFrag, FPrimalMovementFragment& MoveFrag, const UE::Math::TVector<double>& Delta, float Time, const UE::Math::TVector<double>& InNormal, FHitResult& Hit, bool bHandleImpact, UE::Math::TVector<double>& NewLocation) { return NativeCall<float, int, FMassExecutionContext&, const FMassActorFragment&, FPrimalMovementFragment&, const UE::Math::TVector<double>&, float, const UE::Math::TVector<double>&, FHitResult&, bool, UE::Math::TVector<double>&>(nullptr, "UPrimalMoveMassProcessor.SlideAlongSurface(int,FMassExecutionContext&,FMassActorFragment&,FPrimalMovementFragment&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool,UE::Math::TVector<double>&)", EntityIndex, Context, ActorFrag, MoveFrag, Delta, Time, InNormal, Hit, bHandleImpact, NewLocation); }
	static void ApplyVelocityBraking(UE::Math::TVector<double>& Velocity, float DeltaTime, float Friction, float BrakingDeceleration) { NativeCall<void, UE::Math::TVector<double>&, float, float, float>(nullptr, "UPrimalMoveMassProcessor.ApplyVelocityBraking(UE::Math::TVector<double>&,float,float,float)", Velocity, DeltaTime, Friction, BrakingDeceleration); }
};
