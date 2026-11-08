#pragma once
#include "BulkForward.h"
#include "ABaseBoxTrigger.h"

struct AMissionTrigger : public ABaseBoxTrigger
{
public:
	AMissionTrigger() = delete;
	~AMissionTrigger() = delete;
	AMissionTrigger(const AMissionTrigger&) = delete;
	AMissionTrigger& operator=(const AMissionTrigger&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionTrigger"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionTrigger"); }

	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionTrigger.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionTrigger.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionTrigger.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionTrigger.CustomDataFloat"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AMissionTrigger.CustomDataFloatArray"); }
	UE::Math::TVector<double>& CustomDataVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AMissionTrigger.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionTrigger.CustomDataString"); }
	FPointOfInterestData& MyPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "AMissionTrigger.MyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior& MyPointOfInterestCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "AMissionTrigger.MyPointOfInterestCompanionBehavior"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AMissionTrigger._getUObject()"); }
	FPointOfInterestCompanionBehavior& GetMyPointOfInterestCompanionBehavior() { return NativeCall<FPointOfInterestCompanionBehavior&>(this, "AMissionTrigger.GetMyPointOfInterestCompanionBehavior()"); }
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "AMissionTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "AMissionTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }
	bool IsPointOfInterestValid_Implementation() { return NativeCall<bool>(this, "AMissionTrigger.IsPointOfInterestValid_Implementation()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMissionTrigger.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool CanBeViewed_Implementation(const AActor* ByActor) { return NativeCall<bool, const AActor*>(this, "AMissionTrigger.CanBeViewed_Implementation(AActor*)", ByActor); }
	void SetPointTagUniqueState_Implementation(bool bNewUniqueState) { NativeCall<void, bool>(this, "AMissionTrigger.SetPointTagUniqueState_Implementation(bool)", bNewUniqueState); }
	void UnviewPoint_Implementation(const AActor* UnviewedByActor) { NativeCall<void, const AActor*>(this, "AMissionTrigger.UnviewPoint_Implementation(AActor*)", UnviewedByActor); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionTrigger.PostInitializeComponents()"); }
	FPointOfInterestData& GetMyPointOfInterestData() { return NativeCall<FPointOfInterestData&>(this, "AMissionTrigger.GetMyPointOfInterestData()"); }
	void Destroyed() { NativeCall<void>(this, "AMissionTrigger.Destroyed()"); }
	void ViewPoint_Implementation(const AActor* ViewedByActor) { NativeCall<void, const AActor*>(this, "AMissionTrigger.ViewPoint_Implementation(AActor*)", ViewedByActor); }
	bool IsPointOfInterestValid() { return NativeCall<bool>(this, "AMissionTrigger.IsPointOfInterestValid()"); }
};
