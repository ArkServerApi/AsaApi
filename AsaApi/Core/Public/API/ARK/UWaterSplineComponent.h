#pragma once
#include "BulkForward.h"
#include "USplineComponent.h"

struct UWaterSplineComponent : public USplineComponent
{
public:
	UWaterSplineComponent() = delete;
	~UWaterSplineComponent() = delete;
	UWaterSplineComponent(const UWaterSplineComponent&) = delete;
	UWaterSplineComponent& operator=(const UWaterSplineComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterSplineComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterSplineComponent"); }

	FWaterSplineCurveDefaults& WaterSplineDefaultsField() { return *GetNativePointerField<FWaterSplineCurveDefaults*>(this, "UWaterSplineComponent.WaterSplineDefaults"); }
	FWaterSplineCurveDefaults& PreviousWaterSplineDefaultsField() { return *GetNativePointerField<FWaterSplineCurveDefaults*>(this, "UWaterSplineComponent.PreviousWaterSplineDefaults"); }
	void PostLoad() { NativeCall<void>(this, "UWaterSplineComponent.PostLoad()"); }
	bool AllowsSplinePointScaleEditing() { return NativeCall<bool>(this, "UWaterSplineComponent.AllowsSplinePointScaleEditing()"); }
	TArray<ESplinePointType::Type, TSizedDefaultAllocator<32> >* GetEnabledSplinePointTypes(TArray<ESplinePointType::Type, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<ESplinePointType::Type, TSizedDefaultAllocator<32> >*, TArray<ESplinePointType::Type, TSizedDefaultAllocator<32> >*>(this, "UWaterSplineComponent.GetEnabledSplinePointTypes()", result); }
	static void __DefaultConstructor(const FObjectInitializer& X) { NativeCall<void, const FObjectInitializer&>(nullptr, "UWaterSplineComponent.__DefaultConstructor(FObjectInitializer&)", X); }
	void PostDuplicate(bool bDuplicateForPie) { NativeCall<void, bool>(this, "UWaterSplineComponent.PostDuplicate(bool)", bDuplicateForPie); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWaterSplineComponent.Serialize(FArchive&)", Ar); }
};
