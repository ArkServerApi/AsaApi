#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "USceneComponent.h"

struct UStereoLayerComponent : public USceneComponent
{
public:
	UStereoLayerComponent() = delete;
	~UStereoLayerComponent() = delete;
	UStereoLayerComponent(const UStereoLayerComponent&) = delete;
	UStereoLayerComponent& operator=(const UStereoLayerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStereoLayerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStereoLayerComponent"); }

	TArray<FName, TSizedDefaultAllocator<32> >& AdditionalFlagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UStereoLayerComponent.AdditionalFlags"); }
	UE::Math::TVector2<double>& QuadSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UStereoLayerComponent.QuadSize"); }
	UE::Math::TBox2<double>& UVRectField() { return *GetNativePointerField<UE::Math::TBox2<double>*>(this, "UStereoLayerComponent.UVRect"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "UStereoLayerComponent.Priority"); }
	unsigned int& LayerIdField() { return *GetNativePointerField<unsigned int*>(this, "UStereoLayerComponent.LayerId"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "UStereoLayerComponent.bIsDirty"); }
	bool& bTextureNeedsUpdateField() { return *GetNativePointerField<bool*>(this, "UStereoLayerComponent.bTextureNeedsUpdate"); }
	bool& bLastVisibleField() { return *GetNativePointerField<bool*>(this, "UStereoLayerComponent.bLastVisible"); }
	BitFieldValue<bool, unsigned __int32> bLiveTexture() { return { this, "UStereoLayerComponent.bLiveTexture"}; }
	BitFieldValue<bool, unsigned __int32> bSupportsDepth() { return { this, "UStereoLayerComponent.bSupportsDepth"}; }
	BitFieldValue<bool, unsigned __int32> bNoAlphaChannel() { return { this, "UStereoLayerComponent.bNoAlphaChannel"}; }
	BitFieldValue<bool, unsigned __int32> bQuadPreserveTextureRatio() { return { this, "UStereoLayerComponent.bQuadPreserveTextureRatio"}; }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UStereoLayerComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void PostLoad() { NativeCall<void>(this, "UStereoLayerComponent.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UStereoLayerComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void OnUnregister() { NativeCall<void>(this, "UStereoLayerComponent.OnUnregister()"); }
	bool LayerRequiresTexture() { return NativeCall<bool>(this, "UStereoLayerComponent.LayerRequiresTexture()"); }
};
