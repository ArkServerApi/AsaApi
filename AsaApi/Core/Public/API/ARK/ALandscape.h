#pragma once
#include "BulkForward.h"
#include "ALandscapeProxy.h"

struct ALandscape : public ALandscapeProxy
{
public:
	ALandscape() = delete;
	~ALandscape() = delete;
	ALandscape(const ALandscape&) = delete;
	ALandscape& operator=(const ALandscape&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscape"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscape"); }

	bool& bGrassEnabledField() { return *GetNativePointerField<bool*>(this, "ALandscape.bGrassEnabled"); }
	bool IsUpToDate() { return NativeCall<bool>(this, "ALandscape.IsUpToDate()"); }
	TArray<ULandscapeEditLayerBase*, TSizedDefaultAllocator<32> >* GetEditLayersBP(TArray<ULandscapeEditLayerBase*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<ULandscapeEditLayerBase*, TSizedDefaultAllocator<32> >*, TArray<ULandscapeEditLayerBase*, TSizedDefaultAllocator<32> >*>(this, "ALandscape.GetEditLayersBP()", result); }
	const ULandscapeEditLayerBase* GetEditLayerByNameBP(const FName& InLayerName) { return NativeCall<const ULandscapeEditLayerBase*, const FName&>(this, "ALandscape.GetEditLayerByNameBP(FName&)", InLayerName); }
	void PostLoad() { NativeCall<void>(this, "ALandscape.PostLoad()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetTargetLayerNames(TArray<FName, TSizedDefaultAllocator<32> >* result, bool bInIncludeVisibilityLayer) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, bool>(this, "ALandscape.GetTargetLayerNames(bool)", result, bInIncludeVisibilityLayer); }
};
