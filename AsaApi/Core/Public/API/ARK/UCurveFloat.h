#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UCurveBase.h"

class UCurveFloat : public UCurveBase
{
public:
	UCurveFloat() = delete;
	~UCurveFloat() = delete;
	UCurveFloat(const UCurveFloat&) = delete;
	UCurveFloat& operator=(const UCurveFloat&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCurveFloat"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCurveFloat"); }
	FRichCurve& FloatCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UCurveFloat.FloatCurve"); }
	bool& bIsEventCurveField() { return *GetNativePointerField<bool*>(this, "UCurveFloat.bIsEventCurve"); }
	float GetFloatValue(float InTime) { return NativeCall<float, float>(this, "UCurveFloat.GetFloatValue(float)", InTime); }
};
