#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeSplineControlPoint : public UObject
{
public:
	ULandscapeSplineControlPoint() = delete;
	~ULandscapeSplineControlPoint() = delete;
	ULandscapeSplineControlPoint(const ULandscapeSplineControlPoint&) = delete;
	ULandscapeSplineControlPoint& operator=(const ULandscapeSplineControlPoint&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeSplineControlPoint"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeSplineControlPoint"); }
	UE::Math::TVector<double>& LocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULandscapeSplineControlPoint.Location"); }
	UE::Math::TRotator<double>& RotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "ULandscapeSplineControlPoint.Rotation"); }
	float& WidthField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.Width"); }
	float& LayerWidthRatioField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.LayerWidthRatio"); }
	float& SideFalloffField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.SideFalloff"); }
	float& LeftSideFalloffFactorField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.LeftSideFalloffFactor"); }
	float& RightSideFalloffFactorField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.RightSideFalloffFactor"); }
	float& LeftSideLayerFalloffFactorField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.LeftSideLayerFalloffFactor"); }
	float& RightSideLayerFalloffFactorField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.RightSideLayerFalloffFactor"); }
	float& EndFalloffField() { return *GetNativePointerField<float*>(this, "ULandscapeSplineControlPoint.EndFalloff"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeSplineControlPoint.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeSplineControlPoint.Serialize(FArchive&)", Ar); }
};
