#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UCurveBase.h"

class UCurveLinearColor : public UCurveBase
{
public:
	UCurveLinearColor() = delete;
	~UCurveLinearColor() = delete;
	UCurveLinearColor(const UCurveLinearColor&) = delete;
	UCurveLinearColor& operator=(const UCurveLinearColor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCurveLinearColor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCurveLinearColor"); }
	float& AdjustHueField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustHue"); }
	float& AdjustSaturationField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustSaturation"); }
	float& AdjustBrightnessField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustBrightness"); }
	float& AdjustBrightnessCurveField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustBrightnessCurve"); }
	float& AdjustVibranceField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustVibrance"); }
	float& AdjustMinAlphaField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustMinAlpha"); }
	float& AdjustMaxAlphaField() { return *GetNativePointerField<float*>(this, "UCurveLinearColor.AdjustMaxAlpha"); }
	void PostLoad() { NativeCall<void>(this, "UCurveLinearColor.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UCurveLinearColor.Serialize(FArchive&)", Ar); }
};
