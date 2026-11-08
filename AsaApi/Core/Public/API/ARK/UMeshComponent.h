#pragma once
#include "RestoredNativeForward.h"
#include "BulkForward.h"


struct UMeshComponent : UPrimitiveComponent
{
	// Fields

	TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >& OverrideMaterialsField() { return *GetNativePointerField<TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UMeshComponent.OverrideMaterials"); }
	TObjectPtr<UMaterialInterface>& OverlayMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "UMeshComponent.OverlayMaterial"); }
	float& OverlayMaterialMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UMeshComponent.OverlayMaterialMaxDrawDistance"); }
	//TSortedMap<FName, UMeshComponent::FMaterialParameterCache, TSizedDefaultAllocator<32>, FNameFastLess>& MaterialParameterCacheField() { return *GetNativePointerField<TSortedMap<FName, UMeshComponent::FMaterialParameterCache, TSizedDefaultAllocator<32>, FNameFastLess>*>(this, "UMeshComponent.MaterialParameterCache"); }
	TSubclassOf<AActor>& DamageFXActorToSpawnField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "UMeshComponent.DamageFXActorToSpawn"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bEnableMaterialParameterCaching() { return { this, "UMeshComponent.bEnableMaterialParameterCaching" }; }
	BitFieldValue<bool, unsigned __int32> bCachedMaterialParameterIndicesAreDirty() { return { this, "UMeshComponent.bCachedMaterialParameterIndicesAreDirty" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMeshComponent"); }
	void MulticastHideInstance(int originalIndex, UE::Math::TVector<double>* HitDirection, float Damage, float TotalHealth, bool bCheckHideAttachedDecals) { NativeCall<void, int, UE::Math::TVector<double>*, float, float, bool>(this, "UMeshComponent.MulticastHideInstance(int,UE::Math::TVector<double>,float,float,bool)", originalIndex, HitDirection, Damage, TotalHealth, bCheckHideAttachedDecals); }
	void MulticastShowInstance(int originalIndex) { NativeCall<void, int>(this, "UMeshComponent.MulticastShowInstance(int)", originalIndex); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUMeshComponent();
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UMeshComponent.GetMaterial(int)", ElementIndex); }
	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UMeshComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material) { NativeCall<void, FName, UMaterialInterface*>(this, "UMeshComponent.SetMaterialByName(FName,UMaterialInterface*)", MaterialSlotName, Material); }
	//FMaterialRelevance* GetMaterialRelevance(FMaterialRelevance* result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FMaterialRelevance*, FMaterialRelevance*, ERHIFeatureLevel::Type>(this, "UMeshComponent.GetMaterialRelevance(ERHIFeatureLevel::Type)", result, InFeatureLevel); }
	int GetNumOverrideMaterials() { return NativeCall<int>(this, "UMeshComponent.GetNumOverrideMaterials()"); }
	void EmptyOverrideMaterials() { NativeCall<void>(this, "UMeshComponent.EmptyOverrideMaterials()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >* OutMaterials, __int64 bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*, __int64>(this, "UMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int CinematicTextureGroups) { NativeCall<void, float, bool, int>(this, "UMeshComponent.PrestreamTextures(float,bool,int)", Seconds, bPrioritizeCharacterTextures, CinematicTextureGroups); }
	void RegisterLODStreamingCallback(TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&& CallbackStreamingStart, TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&& CallbackStreamingDone, float TimeoutStartSecs, float TimeoutDoneSecs) { NativeCall<void, TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&&, TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&&, float, float>(this, "UMeshComponent.RegisterLODStreamingCallback(TFunction<void__cdecl(IPrimitiveComponent*,UStreamableRenderAsset*,ELODStreamingCallbackResult),TFunction<void__cdecl(IPrimitiveComponent*,UStreamableRenderAsset*,ELODStreamingCallbackResult),float,float)", std::move(CallbackStreamingStart), std::move(CallbackStreamingDone), TimeoutStartSecs, TimeoutDoneSecs); }
	void RegisterLODStreamingCallback(TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&& Callback, int LODIdx, float TimeoutSecs, bool bOnStreamIn) { NativeCall<void, TFunction<void __cdecl(IPrimitiveComponent*, UStreamableRenderAsset*, ELODStreamingCallbackResult)>&&, int, float, bool>(this, "UMeshComponent.RegisterLODStreamingCallback(TFunction<void__cdecl(IPrimitiveComponent*,UStreamableRenderAsset*,ELODStreamingCallbackResult),int,float,bool)", std::move(Callback), LODIdx, TimeoutSecs, bOnStreamIn); }
	void SetTextureForceResidentFlag(bool bForceMiplevelsToBeResident) { NativeCall<void, bool>(this, "UMeshComponent.SetTextureForceResidentFlag(bool)", bForceMiplevelsToBeResident); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >* GetMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "UMeshComponent.GetMaterials()", result); }
	void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue) { NativeCall<void, const FName, const float>(this, "UMeshComponent.SetScalarParameterValueOnMaterials(FName,float)", ParameterName, ParameterValue); }
	//     void SetVectorParameterValueOnMaterials(const FName ParameterName, const UE::Math::TVector<double>* ParameterValue) { NativeCall<void, const FName, const UE::Math::TVector<double>*>(this, "UMeshComponent.SetVectorParameterValueOnMaterials(FName,UE::Math::TVector<double>)", ParameterName, ParameterValue); }
	// FUNCTION MISSING: UMeshComponent.SetVectorParameterValueOnMaterials(FName,UE::Math::TVector<double>)
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void CacheMaterialParameterNameIndices(int a2);
	//void GetStreamingTextureInfoInner(FStreamingTextureLevelContext* LevelContext, const TArray<FStreamingTextureBuildInfo, TSizedDefaultAllocator<32> >* PreBuiltData, float ComponentScaling, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >* OutStreamingTextures) { NativeCall<void, FStreamingTextureLevelContext*, const TArray<FStreamingTextureBuildInfo, TSizedDefaultAllocator<32> >*, float, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >*>(this, "UMeshComponent.GetStreamingTextureInfoInner(FStreamingTextureLevelContext&,TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>>*,float,TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>>&)", LevelContext, PreBuiltData, ComponentScaling, OutStreamingTextures); }
	//void FMaterialParameterCache > , class TSizedDefaultAllocator<32 >> () { NativeCall<void>(this, "UMeshComponent.FMaterialParameterCache>,class TSizedDefaultAllocator<32>>()"); }
//     void Reset(int NewSize) { NativeCall<void, int>(this, "UMeshComponent.Reset(int)", NewSize); }
// FUNCTION MISSING: UMeshComponent.Reset(int)
	//UMeshComponent::FMaterialParameterCache* Emplace<class FName const&>(const FName* InKey) { return NativeCall<UMeshComponent::FMaterialParameterCache*, const FName*>(this, "UMeshComponent.Emplace<class FName const &>(FName*)", InKey); }

	BitFieldValue<bool, unsigned char> bDisablePerPixelPainting() { return { this, "UMeshComponent.bDisablePerPixelPainting"}; }
	bool IsMeshComponent() { return NativeCall<bool>(this, "UMeshComponent.IsMeshComponent()"); }
	UMaterialInterface* GetMaterialByName(FName MaterialSlotName) { return NativeCall<UMaterialInterface*, FName>(this, "UMeshComponent.GetMaterialByName(FName)", MaterialSlotName); }
	bool UseNaniteOverrideMaterials() { return NativeCall<bool>(this, "UMeshComponent.UseNaniteOverrideMaterials()"); }
	float GetOverlayMaterialMaxDrawDistance() { return NativeCall<float>(this, "UMeshComponent.GetOverlayMaterialMaxDrawDistance()"); }
	bool HasOverrideMaterials() { return NativeCall<bool>(this, "UMeshComponent.HasOverrideMaterials()"); }
	UTexture* GetMeshPaintTexture() { return NativeCall<UTexture*>(this, "UMeshComponent.GetMeshPaintTexture()"); }
	UMaterialInterface* GetDefaultOverlayMaterial() { return NativeCall<UMaterialInterface*>(this, "UMeshComponent.GetDefaultOverlayMaterial()"); }
	void SetMeshPaintTextureOverride(UTexture* OverrideTexture) { NativeCall<void, UTexture*>(this, "UMeshComponent.SetMeshPaintTextureOverride(UTexture*)", OverrideTexture); }
	void BeginDestroy() { NativeCall<void>(this, "UMeshComponent.BeginDestroy()"); }
	UMaterialInterface* GetOverlayMaterial(bool bGetMaterialSlot, int SlotIndex) { return NativeCall<UMaterialInterface*, bool, int>(this, "UMeshComponent.GetOverlayMaterial(bool,int)", bGetMaterialSlot, SlotIndex); }
	float GetDefaultOverlayMaterialMaxDrawDistance() { return NativeCall<float>(this, "UMeshComponent.GetDefaultOverlayMaterialMaxDrawDistance()"); }
	void SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial, bool bSetMaterialSlot, int SlotIndex) { NativeCall<void, UMaterialInterface*, bool, int>(this, "UMeshComponent.SetOverlayMaterial(UMaterialInterface*,bool,int)", NewOverlayMaterial, bSetMaterialSlot, SlotIndex); }
	int GetNumMaterials() { return NativeCall<int>(this, "UMeshComponent.GetNumMaterials()"); }
	void BeginPlay() { NativeCall<void>(this, "UMeshComponent.BeginPlay()"); }
	bool GetMaterialStreamingData(int MaterialIndex, FPrimitiveMaterialInfo& MaterialData) { return NativeCall<bool, int, FPrimitiveMaterialInfo&>(this, "UMeshComponent.GetMaterialStreamingData(int,FPrimitiveMaterialInfo&)", MaterialIndex, MaterialData); }
	int GetMeshPaintTextureCoordinateIndex() { return NativeCall<int>(this, "UMeshComponent.GetMeshPaintTextureCoordinateIndex()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UMeshComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void MulticastHideInstance_Implementation(int originalIndex, UE::Math::TVector<double>* HitDirection, float Damage, float TotalHealth, bool bCheckHideAttachedDecals) { if (!HitDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, float, float, bool>(this, "UMeshComponent.MulticastHideInstance_Implementation(int,UE::Math::TVector<double>,float,float,bool)", originalIndex, *HitDirection, Damage, TotalHealth, bCheckHideAttachedDecals); }
	bool PrestreamMeshLODs(float Seconds) { return NativeCall<bool, float>(this, "UMeshComponent.PrestreamMeshLODs(float)", Seconds); }
	FColor GetWireframeColorForSceneProxy() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UMeshComponent.GetWireframeColorForSceneProxy()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool BaseGetInstanceVisibility(int originalIndex) { return NativeCall<bool, int>(this, "UMeshComponent.BaseGetInstanceVisibility(int)", originalIndex); }
	void MarkCachedMaterialParameterNameIndicesDirty() { NativeCall<void>(this, "UMeshComponent.MarkCachedMaterialParameterNameIndicesDirty()"); }
	void SetMeshPaintTexture(UTexture* Texture) { NativeCall<void, UTexture*>(this, "UMeshComponent.SetMeshPaintTexture(UTexture*)", Texture); }
	void MulticastShowInstance_Implementation(int originalIndex) { NativeCall<void, int>(this, "UMeshComponent.MulticastShowInstance_Implementation(int)", originalIndex); }
};