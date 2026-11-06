#pragma once
#include "BulkForward.h"
#include "APhysicsVolume.h"

struct AWaterVolumeWithFlow : public APhysicsVolume
{
public:
	AWaterVolumeWithFlow() = delete;
	~AWaterVolumeWithFlow() = delete;
	AWaterVolumeWithFlow(const AWaterVolumeWithFlow&) = delete;
	AWaterVolumeWithFlow& operator=(const AWaterVolumeWithFlow&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterVolumeWithFlow"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterVolumeWithFlow"); }

	float& CellSizeField() { return *GetNativePointerField<float*>(this, "AWaterVolumeWithFlow.CellSize"); }
	UE::Math::TVector2<double>& FlowMagnitudeMinMaxField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AWaterVolumeWithFlow.FlowMagnitudeMinMax"); }
	TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >& FlowVectorsField() { return *GetNativePointerField<TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >*>(this, "AWaterVolumeWithFlow.FlowVectors"); }
	bool& bHasValidGridSizeField() { return *GetNativePointerField<bool*>(this, "AWaterVolumeWithFlow.bHasValidGridSize"); }
	FGridIndex& CachedGridSizeField() { return *GetNativePointerField<FGridIndex*>(this, "AWaterVolumeWithFlow.CachedGridSize"); }
	BitFieldValue<bool, unsigned char> bApplyBuffsOnClient() { return { this, "AWaterVolumeWithFlow.bApplyBuffsOnClient"}; }
	void BuildEverything() { NativeCall<void>(this, "AWaterVolumeWithFlow.BuildEverything()"); }
	UE::Math::TVector<double>* GetFlowVectorAtLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& Location, bool bInterpFlowVector) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&, bool>(this, "AWaterVolumeWithFlow.GetFlowVectorAtLocation(UE::Math::TVector<double>&,bool)", result, Location, bInterpFlowVector); }
	bool IsGridIndexValid(const FGridIndex& Grid) { return NativeCall<bool, const FGridIndex&>(this, "AWaterVolumeWithFlow.IsGridIndexValid(FGridIndex&)", Grid); }
	void SetStrengthFromSplineActor(AActor* InSplineActor) { NativeCall<void, AActor*>(this, "AWaterVolumeWithFlow.SetStrengthFromSplineActor(AActor*)", InSplineActor); }
	void ClearAllPaintChannels() { NativeCall<void>(this, "AWaterVolumeWithFlow.ClearAllPaintChannels()"); }
	void SetDestinationsFromSplineActor(AActor* InSplineActor) { NativeCall<void, AActor*>(this, "AWaterVolumeWithFlow.SetDestinationsFromSplineActor(AActor*)", InSplineActor); }
	bool GetGridIndexForLocation(const UE::Math::TVector<double>& Location, FGridIndex& Grid) { return NativeCall<bool, const UE::Math::TVector<double>&, FGridIndex&>(this, "AWaterVolumeWithFlow.GetGridIndexForLocation(UE::Math::TVector<double>&,FGridIndex&)", Location, Grid); }
	FColor GetPaintValueAtGridIndex(const FGridIndex& Grid) { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FGridIndex &>(this, "AWaterVolumeWithFlow.GetPaintValueAtGridIndex(FGridIndex&)", AsaReturnPointer, Grid); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void PaintObstruction() { NativeCall<void>(this, "AWaterVolumeWithFlow.PaintObstruction()"); }
	void ActorLeavingVolume(AActor* Other) { NativeCall<void, AActor*>(this, "AWaterVolumeWithFlow.ActorLeavingVolume(AActor*)", Other); }
	UE::Math::TVector<double>* GetLocationForGridIndex(UE::Math::TVector<double>* result, const FGridIndex& ForIndex) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FGridIndex&>(this, "AWaterVolumeWithFlow.GetLocationForGridIndex(FGridIndex&)", result, ForIndex); }
	void GenerateFlowField() { NativeCall<void>(this, "AWaterVolumeWithFlow.GenerateFlowField()"); }
	void SetCellSize(float NewCellSize) { NativeCall<void, float>(this, "AWaterVolumeWithFlow.SetCellSize(float)", NewCellSize); }
	void PaintDestinationFromSpline() { NativeCall<void>(this, "AWaterVolumeWithFlow.PaintDestinationFromSpline()"); }
	void SetDefaultPaintColors() { NativeCall<void>(this, "AWaterVolumeWithFlow.SetDefaultPaintColors()"); }
	void BeginPlay() { NativeCall<void>(this, "AWaterVolumeWithFlow.BeginPlay()"); }
	void PaintStrengthFromSpline() { NativeCall<void>(this, "AWaterVolumeWithFlow.PaintStrengthFromSpline()"); }
	void ActorEnteredVolume(AActor* Other) { NativeCall<void, AActor*>(this, "AWaterVolumeWithFlow.ActorEnteredVolume(AActor*)", Other); }
};
