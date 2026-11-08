#pragma once
#include "BulkForward.h"
#include "USplineComponent.h"

struct UCineSplineComponent : public USplineComponent
{
public:
	UCineSplineComponent() = delete;
	~UCineSplineComponent() = delete;
	UCineSplineComponent(const UCineSplineComponent&) = delete;
	UCineSplineComponent& operator=(const UCineSplineComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCineSplineComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCineSplineComponent"); }

	FCineSplineCurveDefaults& CameraSplineDefaultsField() { return *GetNativePointerField<FCineSplineCurveDefaults*>(this, "UCineSplineComponent.CameraSplineDefaults"); }
	void AddSplineDataAtPosition(float InPosition, const FCineSplinePointData& InPointData) { NativeCall<void, float, const FCineSplinePointData&>(this, "UCineSplineComponent.AddSplineDataAtPosition(float,FCineSplinePointData&)", InPosition, InPointData); }
	void UpdateSplineDataAtIndex(int InIndex, const FCineSplinePointData& InPointData) { NativeCall<void, int, const FCineSplinePointData&>(this, "UCineSplineComponent.UpdateSplineDataAtIndex(int,FCineSplinePointData&)", InIndex, InPointData); }
	bool AllowsSplinePointScaleEditing() { return NativeCall<bool>(this, "UCineSplineComponent.AllowsSplinePointScaleEditing()"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCineSplineComponent.SynchronizeProperties()"); }
	float GetInputKeyAtPosition(float InPosition) { return NativeCall<float, float>(this, "UCineSplineComponent.GetInputKeyAtPosition(float)", InPosition); }
	void PostLoad() { NativeCall<void>(this, "UCineSplineComponent.PostLoad()"); }
	void UpdateSpline() { NativeCall<void>(this, "UCineSplineComponent.UpdateSpline()"); }
	void ApplyComponentInstanceData(FCineSplineInstanceData* SplineInstanceData, bool bPostUCS) { NativeCall<void, FCineSplineInstanceData*, bool>(this, "UCineSplineComponent.ApplyComponentInstanceData(FCineSplineInstanceData*,bool)", SplineInstanceData, bPostUCS); }
};
