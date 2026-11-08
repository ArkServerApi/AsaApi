#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	UBaseDynamicMeshComponent() = delete;
	~UBaseDynamicMeshComponent() = delete;
	UBaseDynamicMeshComponent(const UBaseDynamicMeshComponent&) = delete;
	UBaseDynamicMeshComponent& operator=(const UBaseDynamicMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBaseDynamicMeshComponent"); }

	bool& bExplicitShowWireframeField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bExplicitShowWireframe"); }
	FLinearColor& WireframeColorField() { return *GetNativePointerField<FLinearColor*>(this, "UBaseDynamicMeshComponent.WireframeColor"); }
	EDynamicMeshComponentColorOverrideMode& ColorModeField() { return *GetNativePointerField<EDynamicMeshComponentColorOverrideMode*>(this, "UBaseDynamicMeshComponent.ColorMode"); }
	FColor& ConstantColorField() { return *GetNativePointerField<FColor*>(this, "UBaseDynamicMeshComponent.ConstantColor"); }
	bool& bTwoSidedField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bTwoSided"); }
	bool& bEnableFlatShadingField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bEnableFlatShading"); }
	bool& bEnableViewModeOverridesField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bEnableViewModeOverrides"); }
	bool& bDrawSecondaryBuffersField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bDrawSecondaryBuffers"); }
	bool& bEnableRaytracingField() { return *GetNativePointerField<bool*>(this, "UBaseDynamicMeshComponent.bEnableRaytracing"); }
	bool HasOverrideWireframeRenderMaterial() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.HasOverrideWireframeRenderMaterial()"); }
	FColor GetConstantOverrideColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UBaseDynamicMeshComponent.GetConstantOverrideColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool GetEnableRaytracing() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetEnableRaytracing()"); }
	bool HasOverrideSecondaryWireframeRenderMaterial() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.HasOverrideSecondaryWireframeRenderMaterial()"); }
	UMaterialInterface* GetOverrideWireframeRenderMaterial() { return NativeCall<UMaterialInterface*>(this, "UBaseDynamicMeshComponent.GetOverrideWireframeRenderMaterial()"); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UBaseDynamicMeshComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	void ApplyChange(const FMeshChange* Change, bool bRevert) { NativeCall<void, const FMeshChange*, bool>(this, "UBaseDynamicMeshComponent.ApplyChange(FMeshChange*,bool)", Change, bRevert); }
	void ApplyChange(const FMeshVertexChange* Change, bool bRevert) { NativeCall<void, const FMeshVertexChange*, bool>(this, "UBaseDynamicMeshComponent.ApplyChange(FMeshVertexChange*,bool)", Change, bRevert); }
	UDynamicMesh* GetDynamicMesh() { return NativeCall<UDynamicMesh*>(this, "UBaseDynamicMeshComponent.GetDynamicMesh()"); }
	void ApplyChange(const FMeshReplacementChange* Change, bool bRevert) { NativeCall<void, const FMeshReplacementChange*, bool>(this, "UBaseDynamicMeshComponent.ApplyChange(FMeshReplacementChange*,bool)", Change, bRevert); }
	UMaterialInterface* GetOverrideRenderMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UBaseDynamicMeshComponent.GetOverrideRenderMaterial(int)", MaterialIndex); }
	EDynamicMeshComponentColorOverrideMode GetColorOverrideMode() { return NativeCall<EDynamicMeshComponentColorOverrideMode>(this, "UBaseDynamicMeshComponent.GetColorOverrideMode()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBaseDynamicMeshComponent"); }
	void SetSecondaryRenderMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(this, "UBaseDynamicMeshComponent.SetSecondaryRenderMaterial(UMaterialInterface*)", Material); }
	void ClearOverrideWireframeRenderMaterial() { NativeCall<void>(this, "UBaseDynamicMeshComponent.ClearOverrideWireframeRenderMaterial()"); }
	void ClearSecondaryRenderMaterial() { NativeCall<void>(this, "UBaseDynamicMeshComponent.ClearSecondaryRenderMaterial()"); }
	bool HasOverrideRenderMaterial(int k) { return NativeCall<bool, int>(this, "UBaseDynamicMeshComponent.HasOverrideRenderMaterial(int)", k); }
	void SetSecondaryBuffersVisibility(bool bSecondaryVisibility) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetSecondaryBuffersVisibility(bool)", bSecondaryVisibility); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UBaseDynamicMeshComponent._getUObject()"); }
	static void SetDefaultVertexColorMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(nullptr, "UBaseDynamicMeshComponent.SetDefaultVertexColorMaterial(UMaterialInterface*)", Material); }
	void SetEnableWireframeRenderPass(bool bEnable) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetEnableWireframeRenderPass(bool)", bEnable); }
	void SetOverrideWireframeRenderMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(this, "UBaseDynamicMeshComponent.SetOverrideWireframeRenderMaterial(UMaterialInterface*)", Material); }
	void SetConstantOverrideColor(FColor NewColor) { NativeCall<void, FColor>(this, "UBaseDynamicMeshComponent.SetConstantOverrideColor(FColor)", NewColor); }
	bool GetFlatShadingEnabled() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetFlatShadingEnabled()"); }
	bool AllowFastUpdate() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.AllowFastUpdate()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UBaseDynamicMeshComponent.GetMaterialSlotNames()", result); }
	void ClearOverrideRenderMaterial() { NativeCall<void>(this, "UBaseDynamicMeshComponent.ClearOverrideRenderMaterial()"); }
	void ClearOverrideSecondaryWireframeRenderMaterial() { NativeCall<void>(this, "UBaseDynamicMeshComponent.ClearOverrideSecondaryWireframeRenderMaterial()"); }
	void SetOverrideRenderMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(this, "UBaseDynamicMeshComponent.SetOverrideRenderMaterial(UMaterialInterface*)", Material); }
	UMaterialInterface* GetSecondaryRenderMaterial() { return NativeCall<UMaterialInterface*>(this, "UBaseDynamicMeshComponent.GetSecondaryRenderMaterial()"); }
	void SetNumMaterials(int NumMaterials) { NativeCall<void, int>(this, "UBaseDynamicMeshComponent.SetNumMaterials(int)", NumMaterials); }
	void NotifyMaterialSetUpdated() { NativeCall<void>(this, "UBaseDynamicMeshComponent.NotifyMaterialSetUpdated()"); }
	UMaterialInterface* GetMaterialByName(FName MaterialSlotName) { return NativeCall<UMaterialInterface*, FName>(this, "UBaseDynamicMeshComponent.GetMaterialByName(FName)", MaterialSlotName); }
	void SetEnableFlatShading(bool bEnable) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetEnableFlatShading(bool)", bEnable); }
	FBaseDynamicMeshSceneProxy* GetBaseSceneProxy() { return NativeCall<FBaseDynamicMeshSceneProxy*>(this, "UBaseDynamicMeshComponent.GetBaseSceneProxy()"); }
	bool GetSecondaryBuffersVisibility() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetSecondaryBuffersVisibility()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UBaseDynamicMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode) { NativeCall<void, EDynamicMeshComponentColorOverrideMode>(this, "UBaseDynamicMeshComponent.SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode)", NewMode); }
	UMaterialInterface* GetOverrideSecondaryWireframeRenderMaterial() { return NativeCall<UMaterialInterface*>(this, "UBaseDynamicMeshComponent.GetOverrideSecondaryWireframeRenderMaterial()"); }
	void SetShadowsEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetShadowsEnabled(bool)", bEnabled); }
	void SetTwoSided(bool bEnable) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetTwoSided(bool)", bEnable); }
	bool GetEnableWireframeRenderPass() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetEnableWireframeRenderPass()"); }
	bool GetViewModeOverridesEnabled() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetViewModeOverridesEnabled()"); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UBaseDynamicMeshComponent.GetMaterial(int)", ElementIndex); }
	void NotifyMeshUpdated() { NativeCall<void>(this, "UBaseDynamicMeshComponent.NotifyMeshUpdated()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UBaseDynamicMeshComponent.GetNumMaterials()"); }
	void OnRenderingStateChanged(bool bForceImmedateRebuild) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.OnRenderingStateChanged(bool)", bForceImmedateRebuild); }
	void OnNewDistanceFieldMode() { NativeCall<void>(this, "UBaseDynamicMeshComponent.OnNewDistanceFieldMode()"); }
	void SetOverrideSecondaryWireframeRenderMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(this, "UBaseDynamicMeshComponent.SetOverrideSecondaryWireframeRenderMaterial(UMaterialInterface*)", Material); }
	void SetEnableRaytracing(bool bSetEnabled) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetEnableRaytracing(bool)", bSetEnabled); }
	bool GetShadowsEnabled() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetShadowsEnabled()"); }
	bool HasSecondaryRenderMaterial() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.HasSecondaryRenderMaterial()"); }
	void SetViewModeOverridesEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UBaseDynamicMeshComponent.SetViewModeOverridesEnabled(bool)", bEnabled); }
	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UBaseDynamicMeshComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	bool GetTwoSided() { return NativeCall<bool>(this, "UBaseDynamicMeshComponent.GetTwoSided()"); }
};
