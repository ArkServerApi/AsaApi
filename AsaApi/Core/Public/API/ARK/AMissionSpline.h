#pragma once
#include "BulkForward.h"
#include "ASplineActor.h"

struct AMissionSpline : public ASplineActor
{
public:
	AMissionSpline() = delete;
	~AMissionSpline() = delete;
	AMissionSpline(const AMissionSpline&) = delete;
	AMissionSpline& operator=(const AMissionSpline&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionSpline"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionSpline"); }

	bool& bValidateSplineField() { return *GetNativePointerField<bool*>(this, "AMissionSpline.bValidateSpline"); }
	float& SplineValidationMinTotalLengthField() { return *GetNativePointerField<float*>(this, "AMissionSpline.SplineValidationMinTotalLength"); }
	int& SplineValidationNumTracesPerSplineSegmentField() { return *GetNativePointerField<int*>(this, "AMissionSpline.SplineValidationNumTracesPerSplineSegment"); }
	float& SplineValidationDebugDrawDurationField() { return *GetNativePointerField<float*>(this, "AMissionSpline.SplineValidationDebugDrawDuration"); }
	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionSpline.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionSpline.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionSpline.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionSpline.CustomDataFloat"); }
	TArray<float, TSizedDefaultAllocator<32> >& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "AMissionSpline.CustomDataFloatArray"); }
	UE::Math::TVector<double>& CustomDataVectorField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AMissionSpline.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionSpline.CustomDataString"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionSpline.PostInitializeComponents()"); }
	bool FindLocationAndDirectionClosestToWorldLocation(const UE::Math::TVector<double>& WorldLocation, UE::Math::TVector<double>& OutLocation, UE::Math::TVector<double>& OutDirection, float& OutSplineKey) { return NativeCall<bool, const UE::Math::TVector<double>&, UE::Math::TVector<double>&, UE::Math::TVector<double>&, float&>(this, "AMissionSpline.FindLocationAndDirectionClosestToWorldLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&)", WorldLocation, OutLocation, OutDirection, OutSplineKey); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AMissionSpline.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Destroyed() { NativeCall<void>(this, "AMissionSpline.Destroyed()"); }
	void SpawnerUpdate(float DeltaTime) { NativeCall<void, float>(this, "AMissionSpline.SpawnerUpdate(float)", DeltaTime); }
};
