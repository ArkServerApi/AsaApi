#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UDecalComponent : public USceneComponent
{
public:
	UDecalComponent() = delete;
	~UDecalComponent() = delete;
	UDecalComponent(const UDecalComponent&) = delete;
	UDecalComponent& operator=(const UDecalComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDecalComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDecalComponent"); }

	int& SortOrderField() { return *GetNativePointerField<int*>(this, "UDecalComponent.SortOrder"); }
	float& FadeScreenSizeField() { return *GetNativePointerField<float*>(this, "UDecalComponent.FadeScreenSize"); }
	float& FadeStartDelayField() { return *GetNativePointerField<float*>(this, "UDecalComponent.FadeStartDelay"); }
	float& FadeDurationField() { return *GetNativePointerField<float*>(this, "UDecalComponent.FadeDuration"); }
	float& FadeInDurationField() { return *GetNativePointerField<float*>(this, "UDecalComponent.FadeInDuration"); }
	float& FadeInStartDelayField() { return *GetNativePointerField<float*>(this, "UDecalComponent.FadeInStartDelay"); }
	UE::Math::TVector<double>& DecalSizeField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UDecalComponent.DecalSize"); }
	FLinearColor& DecalColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDecalComponent.DecalColor"); }
	FDeferredDecalProxy*& SceneProxyField() { return *GetNativePointerField<FDeferredDecalProxy**>(this, "UDecalComponent.SceneProxy"); }
	FTimerHandle& TimerHandle_DestroyDecalComponentField() { return *GetNativePointerField<FTimerHandle*>(this, "UDecalComponent.TimerHandle_DestroyDecalComponent"); }
	FPSOPrecacheComponentData& PSOPrecacheComponentDataField() { return *GetNativePointerField<FPSOPrecacheComponentData*>(this, "UDecalComponent.PSOPrecacheComponentData"); }
	int& ExtraSpawnDataField() { return *GetNativePointerField<int*>(this, "UDecalComponent.ExtraSpawnData"); }
	BitFieldValue<bool, unsigned char> bDestroyOwnerAfterFade() { return { this, "UDecalComponent.bDestroyOwnerAfterFade"}; }
	FDeferredDecalProxy* CreateSceneProxy() { return NativeCall<FDeferredDecalProxy*>(this, "UDecalComponent.CreateSceneProxy()"); }
	void SetDecalMaterial(UMaterialInterface* NewDecalMaterial) { NativeCall<void, UMaterialInterface*>(this, "UDecalComponent.SetDecalMaterial(UMaterialInterface*)", NewDecalMaterial); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UDecalComponent.GetMaterial(int)", ElementIndex); }
	void PostLoad() { NativeCall<void>(this, "UDecalComponent.PostLoad()"); }
	void PrecachePSOs() { NativeCall<void>(this, "UDecalComponent.PrecachePSOs()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDecalComponent.Serialize(FArchive&)", Ar); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UDecalComponent.IsPostLoadThreadSafe()"); }
	void SetLifeSpan(float LifeSpan) { NativeCall<void, float>(this, "UDecalComponent.SetLifeSpan(float)", LifeSpan); }
	void BeginPlay() { NativeCall<void>(this, "UDecalComponent.BeginPlay()"); }
	void OnRegister() { NativeCall<void>(this, "UDecalComponent.OnRegister()"); }
	UMaterialInterface* GetDecalMaterial() { return NativeCall<UMaterialInterface*>(this, "UDecalComponent.GetDecalMaterial()"); }
	void SetMaterial(int ElementIndex, UMaterialInterface* InMaterial) { NativeCall<void, int, UMaterialInterface*>(this, "UDecalComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, InMaterial); }
	int GetNumMaterials() { return NativeCall<int>(this, "UDecalComponent.GetNumMaterials()"); }
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "UDecalComponent.CreateDynamicMaterialInstance()"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UDecalComponent.SendRenderTransform_Concurrent()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UDecalComponent.AdditionalStatObject()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UDecalComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void LifeSpanCallback() { NativeCall<void>(this, "UDecalComponent.LifeSpanCallback()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UDecalComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UDecalComponent.DestroyRenderState_Concurrent()"); }
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade) { NativeCall<void, float, float, bool>(this, "UDecalComponent.SetFadeOut(float,float,bool)", StartDelay, Duration, DestroyOwnerAfterFade); }
};
