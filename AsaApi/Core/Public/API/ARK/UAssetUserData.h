#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UAssetUserData : public UObject
{
public:
	UAssetUserData() = delete;
	~UAssetUserData() = delete;
	UAssetUserData(const UAssetUserData&) = delete;
	UAssetUserData& operator=(const UAssetUserData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAssetUserData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAssetUserData"); }
	void DrawCanvas(FCanvas& Canvas, FSceneView& View) { NativeCall<void, FCanvas&, FSceneView&>(this, "UAssetUserData.DrawCanvas(FCanvas&,FSceneView&)", Canvas, View); }
	void PostEditChangeOwner(const FPropertyChangedEvent& PropertyChangedEvent) { NativeCall<void, const FPropertyChangedEvent&>(this, "UAssetUserData.PostEditChangeOwner(FPropertyChangedEvent&)", PropertyChangedEvent); }
	bool Merge(UAssetUserData* Other) { return NativeCall<bool, UAssetUserData*>(this, "UAssetUserData.Merge(UAssetUserData*const)", Other); }
	void PostEditChangeOwner() { NativeCall<void>(this, "UAssetUserData.PostEditChangeOwner()"); }
	void Draw(FPrimitiveDrawInterface* PDI, const FSceneView* View) { NativeCall<void, FPrimitiveDrawInterface*, const FSceneView*>(this, "UAssetUserData.Draw(FPrimitiveDrawInterface*,FSceneView*)", PDI, View); }
};
