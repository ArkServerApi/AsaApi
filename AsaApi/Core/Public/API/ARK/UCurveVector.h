#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UCurveBase.h"

class UCurveVector : public UCurveBase
{
public:
	UCurveVector() = delete;
	~UCurveVector() = delete;
	UCurveVector(const UCurveVector&) = delete;
	UCurveVector& operator=(const UCurveVector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCurveVector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCurveVector"); }
	UE::Math::TVector<double>* GetVectorValue(UE::Math::TVector<double>* result, float InTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "UCurveVector.GetVectorValue(float)", result, InTime); }
};
