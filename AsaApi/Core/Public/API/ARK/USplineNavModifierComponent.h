#pragma once
#include "BulkForward.h"
#include "UNavModifierComponent.h"

struct USplineNavModifierComponent : public UNavModifierComponent
{
public:
	USplineNavModifierComponent() = delete;
	~USplineNavModifierComponent() = delete;
	USplineNavModifierComponent(const USplineNavModifierComponent&) = delete;
	USplineNavModifierComponent& operator=(const USplineNavModifierComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USplineNavModifierComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USplineNavModifierComponent"); }

	bool& bUpdateNavDataOnSplineChangeField() { return *GetNativePointerField<bool*>(this, "USplineNavModifierComponent.bUpdateNavDataOnSplineChange"); }
	FComponentReference& AttachedSplineField() { return *GetNativePointerField<FComponentReference*>(this, "USplineNavModifierComponent.AttachedSpline"); }
	double& StrokeWidthField() { return *GetNativePointerField<double*>(this, "USplineNavModifierComponent.StrokeWidth"); }
	double& StrokeHeightField() { return *GetNativePointerField<double*>(this, "USplineNavModifierComponent.StrokeHeight"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "USplineNavModifierComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	void CalculateBounds() { NativeCall<void>(this, "USplineNavModifierComponent.CalculateBounds()"); }
};
