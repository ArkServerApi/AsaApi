#pragma once
#include "BulkForward.h"
#include "UWaterBodyComponent.h"

struct UWaterBodyLakeComponent : public UWaterBodyComponent
{
public:
	UWaterBodyLakeComponent() = delete;
	~UWaterBodyLakeComponent() = delete;
	UWaterBodyLakeComponent(const UWaterBodyLakeComponent&) = delete;
	UWaterBodyLakeComponent& operator=(const UWaterBodyLakeComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void Reset() { NativeCall<void>(this, "UWaterBodyLakeComponent.Reset()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetCollisionComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result, bool bInOnlyEnabledComponents) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "UWaterBodyLakeComponent.GetCollisionComponents(bool)", result, bInOnlyEnabledComponents); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetStandardRenderableComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyLakeComponent.GetStandardRenderableComponents()", result); }
	void OnUpdateBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyLakeComponent.OnUpdateBody(bool)", bWithExclusionVolumes); }
};
