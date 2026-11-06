#pragma once
#include "BulkForward.h"


struct APointOfInterestActor : AActor
{
	// Fields

	USceneComponent*& PointRootCompField() { return *GetNativePointerField<USceneComponent**>(this, "APointOfInterestActor.PointRootComp"); }
	USphereComponent*& PointUseSphereCompField() { return *GetNativePointerField<USphereComponent**>(this, "APointOfInterestActor.PointUseSphereComp"); }
	//UTextRenderComponent*& PointTextCompField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APointOfInterestActor.PointTextComp"); }
	//UTextRenderComponent*& PointTitleTextCompField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APointOfInterestActor.PointTitleTextComp"); }
	FPointOfInterestData& MyPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "APointOfInterestActor.MyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior& MyPointOfInterestCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "APointOfInterestActor.MyPointOfInterestCompanionBehavior"); }
	UE::Math::TVector<double>& UseSphereLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APointOfInterestActor.UseSphereLocOffset"); }
	float& UseSphereRadiusField() { return *GetNativePointerField<float*>(this, "APointOfInterestActor.UseSphereRadius"); }
	float& TitleTextZOffsetField() { return *GetNativePointerField<float*>(this, "APointOfInterestActor.TitleTextZOffset"); }
	APointOfInterestManagerList*& MyPointManagerField() { return *GetNativePointerField<APointOfInterestManagerList**>(this, "APointOfInterestActor.MyPointManager"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHasBeenViewed() { return { this, "APointOfInterestActor.bHasBeenViewed" }; }
	BitFieldValue<bool, unsigned __int32> bSyncWithPointManager() { return { this, "APointOfInterestActor.bSyncWithPointManager" }; }
	BitFieldValue<bool, unsigned __int32> bPreventViewMultiUseEntry() { return { this, "APointOfInterestActor.bPreventViewMultiUseEntry" }; }
	BitFieldValue<bool, unsigned __int32> bDebugPointActor_Persistent() { return { this, "APointOfInterestActor.bDebugPointActor_Persistent" }; }
	BitFieldValue<bool, unsigned __int32> bDebugPointActor_Single() { return { this, "APointOfInterestActor.bDebugPointActor_Single" }; }
	BitFieldValue<bool, unsigned __int32> bDebugPointActor_ClearDebugLines() { return { this, "APointOfInterestActor.bDebugPointActor_ClearDebugLines" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("APointOfInterestActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APointOfInterestActor"); }
	bool IsPointOfInterestValid() { return NativeCall<bool>(this, "APointOfInterestActor.IsPointOfInterestValid()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPointOfInterestActor();
	void OnConstruction(const UE::Math::TTransform<double>* Transform) { NativeCall<void, const UE::Math::TTransform<double>*>(this, "APointOfInterestActor.OnConstruction(UE::Math::TTransform<double>&)", Transform); }
	void BeginPlay() { NativeCall<void>(this, "APointOfInterestActor.BeginPlay()"); }
	void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APointOfInterestActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APointOfInterestActor.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void RefreshPointData_Implementation() { NativeCall<void>(this, "APointOfInterestActor.RefreshPointData_Implementation()"); }
	FPointOfInterestData* GetPointOfInterestData_Implementation(FPointOfInterestData* result) { return NativeCall<FPointOfInterestData*, FPointOfInterestData*>(this, "APointOfInterestActor.GetPointOfInterestData_Implementation()", result); }
	FPointOfInterestCompanionBehavior* GetPointCompanionBehaviorData_Implementation(FPointOfInterestCompanionBehavior* result) { return NativeCall<FPointOfInterestCompanionBehavior*, FPointOfInterestCompanionBehavior*>(this, "APointOfInterestActor.GetPointCompanionBehaviorData_Implementation()", result); }
	bool CanBeViewed_Implementation(const AActor* ByActor) { return NativeCall<bool, const AActor*>(this, "APointOfInterestActor.CanBeViewed_Implementation(AActor*)", ByActor); }
	void ViewPoint_Implementation(const AActor* ViewedByActor) { NativeCall<void, const AActor*>(this, "APointOfInterestActor.ViewPoint_Implementation(AActor*)", ViewedByActor); }
	void SetPointTagUniqueState_Implementation(bool bNewUniqueState) { NativeCall<void, bool>(this, "APointOfInterestActor.SetPointTagUniqueState_Implementation(bool)", bNewUniqueState); }
	bool IsPointOfInterestValid_Implementation() { return NativeCall<bool>(this, "APointOfInterestActor.IsPointOfInterestValid_Implementation()"); }

	UTextRenderComponent*& PointTextCompField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APointOfInterestActor.PointTextComp"); }
	UTextRenderComponent*& PointTitleTextCompField() { return *GetNativePointerField<UTextRenderComponent**>(this, "APointOfInterestActor.PointTitleTextComp"); }
	void UnviewPoint_Implementation(const AActor* UnviewedByActor) { NativeCall<void, const AActor*>(this, "APointOfInterestActor.UnviewPoint_Implementation(AActor*)", UnviewedByActor); }
	void SetPointManagerRef(APointOfInterestManagerList* NewManager) { NativeCall<void, APointOfInterestManagerList*>(this, "APointOfInterestActor.SetPointManagerRef(APointOfInterestManagerList*)", NewManager); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APointOfInterestActor.ShouldTickIfViewportsOnly()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APointOfInterestActor._getUObject()"); }
	FPointOfInterestData& GetMyPointOfInterestData() { return NativeCall<FPointOfInterestData&>(this, "APointOfInterestActor.GetMyPointOfInterestData()"); }
	FPointOfInterestCompanionBehavior& GetMyPointOfInterestCompanionBehavior() { return NativeCall<FPointOfInterestCompanionBehavior&>(this, "APointOfInterestActor.GetMyPointOfInterestCompanionBehavior()"); }
	void RefreshPointData() { NativeCall<void>(this, "APointOfInterestActor.RefreshPointData()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APointOfInterestActor.Tick(float)", DeltaSeconds); }
};