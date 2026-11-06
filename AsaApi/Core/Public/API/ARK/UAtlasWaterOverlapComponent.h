#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UAtlasWaterOverlapComponent : public USceneComponent
{
public:
	UAtlasWaterOverlapComponent() = delete;
	~UAtlasWaterOverlapComponent() = delete;
	UAtlasWaterOverlapComponent(const UAtlasWaterOverlapComponent&) = delete;
	UAtlasWaterOverlapComponent& operator=(const UAtlasWaterOverlapComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAtlasWaterOverlapComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAtlasWaterOverlapComponent"); }

	FComponentWaterOverlapSignature& OnComponentEnterWaterField() { return *GetNativePointerField<FComponentWaterOverlapSignature*>(this, "UAtlasWaterOverlapComponent.OnComponentEnterWater"); }
	FComponentWaterOverlapSignature& OnComponentExitWaterField() { return *GetNativePointerField<FComponentWaterOverlapSignature*>(this, "UAtlasWaterOverlapComponent.OnComponentExitWater"); }
	UE::Math::TVector<double>& PreviousWorldPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UAtlasWaterOverlapComponent.PreviousWorldPosition"); }
	float& PreviousWaterHeightField() { return *GetNativePointerField<float*>(this, "UAtlasWaterOverlapComponent.PreviousWaterHeight"); }
	bool& PreviousDataValidField() { return *GetNativePointerField<bool*>(this, "UAtlasWaterOverlapComponent.PreviousDataValid"); }
	bool& bRegisteredWithOceanField() { return *GetNativePointerField<bool*>(this, "UAtlasWaterOverlapComponent.bRegisteredWithOcean"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UAtlasWaterOverlapComponent.ShouldCreatePhysicsState()"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UAtlasWaterOverlapComponent.HasValidPhysicsState()"); }
};
