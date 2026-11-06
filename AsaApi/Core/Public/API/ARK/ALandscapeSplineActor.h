#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALandscapeSplineActor : public AActor
{
public:
	ALandscapeSplineActor() = delete;
	~ALandscapeSplineActor() = delete;
	ALandscapeSplineActor(const ALandscapeSplineActor&) = delete;
	ALandscapeSplineActor& operator=(const ALandscapeSplineActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeSplineActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeSplineActor"); }

	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ALandscapeSplineActor.LandscapeGuid"); }
	UE::Math::TTransform<double>* LandscapeActorToWorld(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "ALandscapeSplineActor.LandscapeActorToWorld()", result); }
	ULandscapeInfo* GetLandscapeInfo() { return NativeCall<ULandscapeInfo*>(this, "ALandscapeSplineActor.GetLandscapeInfo()"); }
	FGuid* GetLandscapeGuid(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "ALandscapeSplineActor.GetLandscapeGuid()", result); }
	bool IsSplineOwnerValid() { return NativeCall<bool>(this, "ALandscapeSplineActor.IsSplineOwnerValid()"); }
	void UpdateSharedProperties(ULandscapeInfo* InLandscapeInfo) { NativeCall<void, ULandscapeInfo*>(this, "ALandscapeSplineActor.UpdateSharedProperties(ULandscapeInfo*)", InLandscapeInfo); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALandscapeSplineActor._getUObject()"); }
	ULandscapeSplinesComponent* GetSplinesComponent() { return NativeCall<ULandscapeSplinesComponent*>(this, "ALandscapeSplineActor.GetSplinesComponent()"); }
};
