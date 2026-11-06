#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class ULandscapeEditLayerBase : public UObject
{
public:
	ULandscapeEditLayerBase() = delete;
	~ULandscapeEditLayerBase() = delete;
	ULandscapeEditLayerBase(const ULandscapeEditLayerBase&) = delete;
	ULandscapeEditLayerBase& operator=(const ULandscapeEditLayerBase&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ULandscapeEditLayerBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	bool NeedsPersistentTextures() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.NeedsPersistentTextures()"); }
	bool SupportsMultiple() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.SupportsMultiple()"); }
	void OnLayerRemoved() { NativeCall<void>(this, "ULandscapeEditLayerBase.OnLayerRemoved()"); }
	bool SupportsCollapsingTo() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.SupportsCollapsingTo()"); }
	bool SupportsBlueprintBrushes() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.SupportsBlueprintBrushes()"); }
	bool SupportsEditingTools() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.SupportsEditingTools()"); }
	FString* GetDefaultName(FString* result) { return NativeCall<FString*, FString*>(this, "ULandscapeEditLayerBase.GetDefaultName()", result); }
	bool SupportsBeingCollapsedAway() { return NativeCall<bool>(this, "ULandscapeEditLayerBase.SupportsBeingCollapsedAway()"); }
};
