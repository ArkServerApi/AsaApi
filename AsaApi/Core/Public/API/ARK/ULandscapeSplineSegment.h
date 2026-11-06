#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeSplineSegment : public UObject
{
public:
	ULandscapeSplineSegment() = delete;
	~ULandscapeSplineSegment() = delete;
	ULandscapeSplineSegment(const ULandscapeSplineSegment&) = delete;
	ULandscapeSplineSegment& operator=(const ULandscapeSplineSegment&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeSplineSegment"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeSplineSegment"); }
	FInterpCurveVector& SplineInfoField() { return *GetNativePointerField<FInterpCurveVector*>(this, "ULandscapeSplineSegment.SplineInfo"); }
	void PostInitProperties() { NativeCall<void>(this, "ULandscapeSplineSegment.PostInitProperties()"); }
	void FindNearest(const UE::Math::TVector<double>& InLocation, float& t, UE::Math::TVector<double>& OutLocation, UE::Math::TVector<double>& OutTangent) { NativeCall<void, const UE::Math::TVector<double>&, float&, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "ULandscapeSplineSegment.FindNearest(UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", InLocation, t, OutLocation, OutTangent); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeSplineSegment.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeSplineSegment.PostLoad()"); }
};
