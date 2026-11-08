#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeGrassType : public UObject
{
public:
	ULandscapeGrassType() = delete;
	~ULandscapeGrassType() = delete;
	ULandscapeGrassType(const ULandscapeGrassType&) = delete;
	ULandscapeGrassType& operator=(const ULandscapeGrassType&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeGrassType"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeGrassType"); }
	unsigned int& StateHashField() { return *GetNativePointerField<unsigned int*>(this, "ULandscapeGrassType.StateHash"); }
	float& GrassDensity_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULandscapeGrassType.GrassDensity_DEPRECATED"); }
	float& PlacementJitter_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULandscapeGrassType.PlacementJitter_DEPRECATED"); }
	int& StartCullDistance_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "ULandscapeGrassType.StartCullDistance_DEPRECATED"); }
	int& EndCullDistance_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "ULandscapeGrassType.EndCullDistance_DEPRECATED"); }
	bool& RandomRotation_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "ULandscapeGrassType.RandomRotation_DEPRECATED"); }
	bool& AlignToSurface_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "ULandscapeGrassType.AlignToSurface_DEPRECATED"); }
	int& LayerIDField() { return *GetNativePointerField<int*>(this, "ULandscapeGrassType.LayerID"); }
	BitFieldValue<bool, unsigned __int32> bEnableDensityScaling() { return { this, "ULandscapeGrassType.bEnableDensityScaling"}; }
	void PostLoad() { NativeCall<void>(this, "ULandscapeGrassType.PostLoad()"); }
};
