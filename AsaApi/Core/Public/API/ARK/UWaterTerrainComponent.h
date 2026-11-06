#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "UActorComponent.h"

struct UWaterTerrainComponent : public UActorComponent
{
public:
	UWaterTerrainComponent() = delete;
	~UWaterTerrainComponent() = delete;
	UWaterTerrainComponent(const UWaterTerrainComponent&) = delete;
	UWaterTerrainComponent& operator=(const UWaterTerrainComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterTerrainComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterTerrainComponent"); }

	void OnRegister() { NativeCall<void>(this, "UWaterTerrainComponent.OnRegister()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetTerrainPrimitives(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UWaterTerrainComponent.GetTerrainPrimitives()", result); }
	void OnUnregister() { NativeCall<void>(this, "UWaterTerrainComponent.OnUnregister()"); }
	UE::Math::TBox2<double>* GetTerrainBounds(UE::Math::TBox2<double>* result) { return NativeCall<UE::Math::TBox2<double>*, UE::Math::TBox2<double>*>(this, "UWaterTerrainComponent.GetTerrainBounds()", result); }
	bool AffectsWaterZone(AWaterZone* WaterZone) { return NativeCall<bool, AWaterZone*>(this, "UWaterTerrainComponent.AffectsWaterZone(AWaterZone*)", WaterZone); }
};
