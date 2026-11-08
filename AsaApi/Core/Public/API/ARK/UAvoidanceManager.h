#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAvoidanceManager : public UObject
{
public:
	UAvoidanceManager() = delete;
	~UAvoidanceManager() = delete;
	UAvoidanceManager(const UAvoidanceManager&) = delete;
	UAvoidanceManager& operator=(const UAvoidanceManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAvoidanceManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAvoidanceManager"); }
	float& DefaultTimeToLiveField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.DefaultTimeToLive"); }
	float& LockTimeAfterAvoidField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.LockTimeAfterAvoid"); }
	float& LockTimeAfterCleanField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.LockTimeAfterClean"); }
	float& DeltaTimeToPredictField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.DeltaTimeToPredict"); }
	float& ArtificialRadiusExpansionField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.ArtificialRadiusExpansion"); }
	float& TestHeightDifference_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.TestHeightDifference_DEPRECATED"); }
	float& HeightCheckMarginField() { return *GetNativePointerField<float*>(this, "UAvoidanceManager.HeightCheckMargin"); }
	FTimerHandle& TimerHandle_RemoveOutdatedObjectsField() { return *GetNativePointerField<FTimerHandle*>(this, "UAvoidanceManager.TimerHandle_RemoveOutdatedObjects"); }
	TArray<int, TSizedDefaultAllocator<32> >& NewKeyPoolField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UAvoidanceManager.NewKeyPool"); }
	TWeakObjectPtr<UObject, FWeakObjectPtr>& EdgeProviderObField() { return *GetNativePointerField<TWeakObjectPtr<UObject, FWeakObjectPtr>*>(this, "UAvoidanceManager.EdgeProviderOb"); }
	INavEdgeProviderInterface*& EdgeProviderInterfaceField() { return *GetNativePointerField<INavEdgeProviderInterface**>(this, "UAvoidanceManager.EdgeProviderInterface"); }
	BitFieldValue<bool, unsigned __int32> bRequestedUpdateTimer() { return { this, "UAvoidanceManager.bRequestedUpdateTimer"}; }
	BitFieldValue<bool, unsigned __int32> bAutoPurgeOutdatedObjects() { return { this, "UAvoidanceManager.bAutoPurgeOutdatedObjects"}; }
	BitFieldValue<bool, unsigned __int32> bAutoPurceOutdatedObjects() { return { this, "UAvoidanceManager.bAutoPurceOutdatedObjects"}; }
	void UpdateRVO(UCharacterMovementComponent* MovementComp) { NativeCall<void, UCharacterMovementComponent*>(this, "UAvoidanceManager.UpdateRVO(UCharacterMovementComponent*)", MovementComp); }
	void OverrideToMaxWeight(int AvoidanceUID, float Duration) { NativeCall<void, int, float>(this, "UAvoidanceManager.OverrideToMaxWeight(int,float)", AvoidanceUID, Duration); }
	UE::Math::TVector<double>* GetAvoidanceVelocity_Internal(UE::Math::TVector<double>* result, const FNavAvoidanceData& inAvoidanceData, float DeltaTime, int* inIgnoreThisUID) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FNavAvoidanceData&, float, int*>(this, "UAvoidanceManager.GetAvoidanceVelocity_Internal(FNavAvoidanceData&,float,int*)", result, inAvoidanceData, DeltaTime, inIgnoreThisUID); }
	void RemoveOutdatedObjects() { NativeCall<void>(this, "UAvoidanceManager.RemoveOutdatedObjects()"); }
	int GetNewAvoidanceUID() { return NativeCall<int>(this, "UAvoidanceManager.GetNewAvoidanceUID()"); }
	bool RegisterMovementComponent(UCharacterMovementComponent* MovementComp, float AvoidanceWeight) { return NativeCall<bool, UCharacterMovementComponent*, float>(this, "UAvoidanceManager.RegisterMovementComponent(UCharacterMovementComponent*,float)", MovementComp, AvoidanceWeight); }
	void RequestUpdateTimer() { NativeCall<void>(this, "UAvoidanceManager.RequestUpdateTimer()"); }
	UE::Math::TVector<double>* GetAvoidanceVelocityIgnoringUID(UE::Math::TVector<double>* result, const FNavAvoidanceData& inAvoidanceData, float DeltaTime, int inIgnoreThisUID) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FNavAvoidanceData&, float, int>(this, "UAvoidanceManager.GetAvoidanceVelocityIgnoringUID(FNavAvoidanceData&,float,int)", result, inAvoidanceData, DeltaTime, inIgnoreThisUID); }
	void UpdateRVONoComp(int inAvoidanceUID, FNavAvoidanceData& inAvoidanceData, UE::Math::TVector<double>* InVelocity, UE::Math::TVector<double>* InLocation) { if (!InVelocity) throw std::invalid_argument("Null native value parameter"); if (!InLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, FNavAvoidanceData &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "UAvoidanceManager.UpdateRVONoComp(int,FNavAvoidanceData&,UE::Math::TVector<double>,UE::Math::TVector<double>)", inAvoidanceUID, inAvoidanceData, *InVelocity, *InLocation); }
	UE::Math::TVector<double>* GetAvoidanceVelocityForComponent(UE::Math::TVector<double>* result, UCharacterMovementComponent* MovementComp) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, UCharacterMovementComponent*>(this, "UAvoidanceManager.GetAvoidanceVelocityForComponent(UCharacterMovementComponent*)", result, MovementComp); }
	void RemoveAvoidanceObject(int AvoidanceUID) { NativeCall<void, int>(this, "UAvoidanceManager.RemoveAvoidanceObject(int)", AvoidanceUID); }
	void UpdateRVO_Internal(int inAvoidanceUID, const FNavAvoidanceData& inAvoidanceData) { NativeCall<void, int, const FNavAvoidanceData&>(this, "UAvoidanceManager.UpdateRVO_Internal(int,FNavAvoidanceData&)", inAvoidanceUID, inAvoidanceData); }
};
