#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UProceduralFoliageComponent : public UActorComponent
{
public:
	UProceduralFoliageComponent() = delete;
	~UProceduralFoliageComponent() = delete;
	UProceduralFoliageComponent(const UProceduralFoliageComponent&) = delete;
	UProceduralFoliageComponent& operator=(const UProceduralFoliageComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UProceduralFoliageComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UProceduralFoliageComponent"); }

	float& TileOverlapField() { return *GetNativePointerField<float*>(this, "UProceduralFoliageComponent.TileOverlap"); }
	FGuid& ProceduralGuidField() { return *GetNativePointerField<FGuid*>(this, "UProceduralFoliageComponent.ProceduralGuid"); }
	void PostEditImport() { NativeCall<void>(this, "UProceduralFoliageComponent.PostEditImport()"); }
};
