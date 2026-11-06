#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalCorpseMotionComponent.h"

struct UFoliageConeAttractionComponent : UPrimalCorpseMotionComponent
{
public:
	UFoliageConeAttractionComponent() = delete;
	~UFoliageConeAttractionComponent() = delete;
	UFoliageConeAttractionComponent(const UFoliageConeAttractionComponent&) = delete;
	UFoliageConeAttractionComponent& operator=(const UFoliageConeAttractionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFoliageConeAttractionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFoliageConeAttractionComponent"); }

	double& CurrentConeLengthField() { return *GetNativePointerField<double*>(this, "UFoliageConeAttractionComponent.CurrentConeLength"); }
	double& ConeTanHalfAngleField() { return *GetNativePointerField<double*>(this, "UFoliageConeAttractionComponent.ConeTanHalfAngle"); }
	double& ConeBaseRadiusField() { return *GetNativePointerField<double*>(this, "UFoliageConeAttractionComponent.ConeBaseRadius"); }
	double& LastUpdateTimeField() { return *GetNativePointerField<double*>(this, "UFoliageConeAttractionComponent.LastUpdateTime"); }
	int& ActiveLimitField() { return *GetNativePointerField<int*>(this, "UFoliageConeAttractionComponent.ActiveLimit"); }
	bool& bAttractionRequestedField() { return *GetNativePointerField<bool*>(this, "UFoliageConeAttractionComponent.bAttractionRequested"); }

	int ClientReleaseFoliageGeometryAttraction() { return NativeCall<int>(this, "UFoliageConeAttractionComponent.ClientReleaseFoliageGeometryAttraction()"); }
	void Shutdown() { NativeCall<void>(this, "UFoliageConeAttractionComponent.Shutdown()"); }
	void RemoveDebris(int Index, bool bDestroyControlledActor) { NativeCall<void, int, bool>(this, "UFoliageConeAttractionComponent.RemoveDebris(int,bool)", Index, bDestroyControlledActor); }
	void TickCorpse() { NativeCall<void>(this, "UFoliageConeAttractionComponent.TickCorpse()"); }
	void QueueCandidate(AActor* Actor) { NativeCall<void, AActor*>(this, "UFoliageConeAttractionComponent.QueueCandidate(AActor*)", Actor); }
	int ClientReleaseActorAttraction(AActor* Actor) { return NativeCall<int, AActor*>(this, "UFoliageConeAttractionComponent.ClientReleaseActorAttraction(AActor*)", Actor); }
	bool CanRunCosmetics() { return NativeCall<bool>(this, "UFoliageConeAttractionComponent.CanRunCosmetics()"); }
	bool ReleaseCorpseMotion(APrimalCharacter* Character, bool bConsumed) { return NativeCall<bool, APrimalCharacter*, bool>(this, "UFoliageConeAttractionComponent.ReleaseCorpseMotion(APrimalCharacter*,bool)", Character, bConsumed); }
	static bool IsUsableVisualMesh(UMeshComponent* Mesh, AActor* Actor) { return NativeCall<bool, UMeshComponent*, AActor*>(nullptr, "UFoliageConeAttractionComponent.IsUsableVisualMesh(UMeshComponent*,AActor*)", Mesh, Actor); }
	void CollectCandidates() { NativeCall<void>(this, "UFoliageConeAttractionComponent.CollectCandidates()"); }
	void StartDiscovery() { NativeCall<void>(this, "UFoliageConeAttractionComponent.StartDiscovery()"); }
	void OnRegister() { NativeCall<void>(this, "UFoliageConeAttractionComponent.OnRegister()"); }
	int CountAttractedActors() { return NativeCall<int>(this, "UFoliageConeAttractionComponent.CountAttractedActors()"); }
	bool ClientReleaseCorpseAttraction(APrimalCharacter* Corpse, bool bConsumed) { return NativeCall<bool, APrimalCharacter*, bool>(this, "UFoliageConeAttractionComponent.ClientReleaseCorpseAttraction(APrimalCharacter*,bool)", Corpse, bConsumed); }

	TWeakObjectPtr<UWorld, FWeakObjectPtr>& ObservedWorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld, FWeakObjectPtr>*>(this, "UFoliageConeAttractionComponent.ObservedWorld"); }
	FDelegateHandle& SpawnDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UFoliageConeAttractionComponent.SpawnDelegateHandle"); }
	UE::Math::TVector<double>& CurrentConeOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UFoliageConeAttractionComponent.CurrentConeOrigin"); }
	UE::Math::TVector<double>& CurrentConeDirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UFoliageConeAttractionComponent.CurrentConeDirection"); }
	UE::Math::TVector<double>& TargetWorldLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UFoliageConeAttractionComponent.TargetWorldLocation"); }
	bool CanAttachActor(AActor* Actor, USceneComponent* Parent, FName SocketName) { return NativeCall<bool, AActor*, USceneComponent*, FName>(this, "UFoliageConeAttractionComponent.CanAttachActor(AActor*,USceneComponent*,FName)", Actor, Parent, SocketName); }
	bool ClientAttractCorpse(APrimalCharacter* Corpse, USceneComponent* AttachParent, FName SocketName, float AttractionDuration, UE::Math::TVector<double>* RelativeTargetLocation, float ArcHeight, bool bUseDragPose) { if (!RelativeTargetLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APrimalCharacter *, USceneComponent *, FName, float, UE :: Math :: TVector < double >, float, bool>(this, "UFoliageConeAttractionComponent.ClientAttractCorpse(APrimalCharacter*,USceneComponent*,FName,float,UE::Math::TVector<double>,float,bool)", Corpse, AttachParent, SocketName, AttractionDuration, *RelativeTargetLocation, ArcHeight, bUseDragPose); }
	static void EvaluateConeAttractionMotion(const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& Target, float Alpha, UE::Math::TVector<double>& OutLocation, float& OutScale, float ArcHeight) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, UE::Math::TVector<double>&, float&, float>(nullptr, "UFoliageConeAttractionComponent.EvaluateConeAttractionMotion(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,float&,float)", Start, Target, Alpha, OutLocation, OutScale, ArcHeight); }
	static UE::Math::TVector<double>* LimitTreeAimRise(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Aim, const UE::Math::TVector<double>& FlatFallback, double TipHeight, double Length) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, double, double>(nullptr, "UFoliageConeAttractionComponent.LimitTreeAimRise(UE::Math::TVector<double>&,UE::Math::TVector<double>&,double,double)", result, Aim, FlatFallback, TipHeight, Length); }
	bool OverlapsCone(const UE::Math::TVector<double>& Center, double Radius) { return NativeCall<bool, const UE::Math::TVector<double>&, double>(this, "UFoliageConeAttractionComponent.OverlapsCone(UE::Math::TVector<double>&,double)", Center, Radius); }
	UE::Math::TVector<double>* GetTreeEntryDirection(UE::Math::TVector<double>* result, const UE::Math::TVector2<double>& EntryOffset) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector2<double>&>(this, "UFoliageConeAttractionComponent.GetTreeEntryDirection(UE::Math::TVector2<double>&)", result, EntryOffset); }
	int ClientAttractFoliageGeometryInCone(const UE::Math::TVector<double>& ConeOrigin, const UE::Math::TVector<double>& ConeDirection, float ConeLength, float ConeHalfAngleDegrees, float AttractionDuration, float CenterDistanceFraction, int MaxGeometryCollections, bool bDrawDebug, float StartDelay, float MaxRotationSpeedDegrees, float ArcHeight, float FragmentStagger) { return NativeCall<int, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, float, float, float, int, bool, float, float, float, float>(this, "UFoliageConeAttractionComponent.ClientAttractFoliageGeometryInCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float,float,float,int,bool,float,float,float,float)", ConeOrigin, ConeDirection, ConeLength, ConeHalfAngleDegrees, AttractionDuration, CenterDistanceFraction, MaxGeometryCollections, bDrawDebug, StartDelay, MaxRotationSpeedDegrees, ArcHeight, FragmentStagger); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UFoliageConeAttractionComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	static double EvaluateMotion(const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& Target, const UE::Math::TVector<double>& Arc, double Alpha, UE::Math::TVector<double>& OutLocation, double& OutScale) { return NativeCall<double, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, double, UE::Math::TVector<double>&, double&>(nullptr, "UFoliageConeAttractionComponent.EvaluateMotion(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,double,UE::Math::TVector<double>&,double&)", Start, Target, Arc, Alpha, OutLocation, OutScale); }
	bool ClientAttractActor(AActor* Actor, UE::Math::TVector<double>* RelativeTargetLocation, USceneComponent* AttachParent, FName SocketName, float AttractionDuration, float StartDelay, float MaxRotationSpeedDegrees, float ArcHeight) { if (!RelativeTargetLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, AActor *, UE :: Math :: TVector < double >, USceneComponent *, FName, float, float, float, float>(this, "UFoliageConeAttractionComponent.ClientAttractActor(AActor*,UE::Math::TVector<double>,USceneComponent*,FName,float,float,float,float)", Actor, *RelativeTargetLocation, AttachParent, SocketName, AttractionDuration, StartDelay, MaxRotationSpeedDegrees, ArcHeight); }
};
