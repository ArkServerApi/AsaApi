#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USubUVAnimation : public UObject
{
public:
	USubUVAnimation() = delete;
	~USubUVAnimation() = delete;
	USubUVAnimation(const USubUVAnimation&) = delete;
	USubUVAnimation& operator=(const USubUVAnimation&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USubUVAnimation"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USubUVAnimation"); }
	int& SubImages_HorizontalField() { return *GetNativePointerField<int*>(this, "USubUVAnimation.SubImages_Horizontal"); }
	int& SubImages_VerticalField() { return *GetNativePointerField<int*>(this, "USubUVAnimation.SubImages_Vertical"); }
	float& AlphaThresholdField() { return *GetNativePointerField<float*>(this, "USubUVAnimation.AlphaThreshold"); }
	FSubUVDerivedData& DerivedDataField() { return *GetNativePointerField<FSubUVDerivedData*>(this, "USubUVAnimation.DerivedData"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USubUVAnimation.ReleaseFence"); }
	FSubUVBoundingGeometryBuffer*& BoundingGeometryBufferField() { return *GetNativePointerField<FSubUVBoundingGeometryBuffer**>(this, "USubUVAnimation.BoundingGeometryBuffer"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USubUVAnimation.IsReadyForFinishDestroy()"); }
	void BeginDestroy() { NativeCall<void>(this, "USubUVAnimation.BeginDestroy()"); }
	void PostInitProperties() { NativeCall<void>(this, "USubUVAnimation.PostInitProperties()"); }
	void PostLoad() { NativeCall<void>(this, "USubUVAnimation.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USubUVAnimation.Serialize(FArchive&)", Ar); }
	void FinishDestroy() { NativeCall<void>(this, "USubUVAnimation.FinishDestroy()"); }
};
