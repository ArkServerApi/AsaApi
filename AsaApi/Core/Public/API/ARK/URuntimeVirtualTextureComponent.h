#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "USceneComponent.h"

struct URuntimeVirtualTextureComponent : public USceneComponent
{
public:
	URuntimeVirtualTextureComponent() = delete;
	~URuntimeVirtualTextureComponent() = delete;
	URuntimeVirtualTextureComponent(const URuntimeVirtualTextureComponent&) = delete;
	URuntimeVirtualTextureComponent& operator=(const URuntimeVirtualTextureComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("URuntimeVirtualTextureComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("URuntimeVirtualTextureComponent"); }

	bool& bSetBoundsButtonField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bSetBoundsButton"); }
	bool& bSnapBoundsToLandscapeField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bSnapBoundsToLandscape"); }
	float& ExpandBoundsField() { return *GetNativePointerField<float*>(this, "URuntimeVirtualTextureComponent.ExpandBounds"); }
	bool& bEnableScalabilityField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bEnableScalability"); }
	unsigned int& ScalabilityGroupField() { return *GetNativePointerField<unsigned int*>(this, "URuntimeVirtualTextureComponent.ScalabilityGroup"); }
	bool& bEnableForNaniteOnlyField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bEnableForNaniteOnly"); }
	bool& bUseMinMaterialQualityField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bUseMinMaterialQuality"); }
	bool& bUseMinMaterialQualityMobileField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bUseMinMaterialQualityMobile"); }
	FPerPlatformBool& EnableInGamePerPlatformField() { return *GetNativePointerField<FPerPlatformBool*>(this, "URuntimeVirtualTextureComponent.EnableInGamePerPlatform"); }
	bool& bHidePrimitivesField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bHidePrimitives"); }
	int& StreamLowMipsField() { return *GetNativePointerField<int*>(this, "URuntimeVirtualTextureComponent.StreamLowMips"); }
	bool& bBuildStreamingMipsButtonField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bBuildStreamingMipsButton"); }
	bool& bUseStreamingMipsFixedColorField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bUseStreamingMipsFixedColor"); }
	FLinearColor& StreamingMipsFixedColorField() { return *GetNativePointerField<FLinearColor*>(this, "URuntimeVirtualTextureComponent.StreamingMipsFixedColor"); }
	bool& bUseStreamingMipsOnlyField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bUseStreamingMipsOnly"); }
	bool& bUseStreamingMipsInEditor_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bUseStreamingMipsInEditor_DEPRECATED"); }
	FRenderCommandFence& DestroyFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "URuntimeVirtualTextureComponent.DestroyFence"); }
	bool& bIncludeGrassInStreamingTextureField() { return *GetNativePointerField<bool*>(this, "URuntimeVirtualTextureComponent.bIncludeGrassInStreamingTexture"); }
	FRuntimeVirtualTextureSceneProxy*& SceneProxyField() { return *GetNativePointerField<FRuntimeVirtualTextureSceneProxy**>(this, "URuntimeVirtualTextureComponent.SceneProxy"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "URuntimeVirtualTextureComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "URuntimeVirtualTextureComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "URuntimeVirtualTextureComponent.IsReadyForFinishDestroy()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "URuntimeVirtualTextureComponent.DestroyRenderState_Concurrent()"); }
	void RequestPreload(const UE::Math::TBoxSphereBounds<double, double>& InWorldBounds, int InLevel) { NativeCall<void, const UE::Math::TBoxSphereBounds<double, double>&, int>(this, "URuntimeVirtualTextureComponent.RequestPreload(UE::Math::TBoxSphereBounds<double,double>&,int)", InWorldBounds, InLevel); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "URuntimeVirtualTextureComponent.Serialize(FArchive&)", Ar); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "URuntimeVirtualTextureComponent.ShouldCreateRenderState()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "URuntimeVirtualTextureComponent.SendRenderTransform_Concurrent()"); }
	void BeginDestroy() { NativeCall<void>(this, "URuntimeVirtualTextureComponent.BeginDestroy()"); }
};
