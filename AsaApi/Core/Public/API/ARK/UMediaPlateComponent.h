#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMediaPlateComponent : public UActorComponent
{
public:
	UMediaPlateComponent() = delete;
	~UMediaPlateComponent() = delete;
	UMediaPlateComponent(const UMediaPlateComponent&) = delete;
	UMediaPlateComponent& operator=(const UMediaPlateComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMediaPlateComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMediaPlateComponent"); }

	bool& bPlayOnOpenField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bPlayOnOpen"); }
	bool& bAutoPlayField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bAutoPlay"); }
	bool& bEnableAudioField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bEnableAudio"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "UMediaPlateComponent.StartTime"); }
	FMediaPlateResource& MediaPlateResourceField() { return *GetNativePointerField<FMediaPlateResource*>(this, "UMediaPlateComponent.MediaPlateResource"); }
	int& PlaylistIndexField() { return *GetNativePointerField<int*>(this, "UMediaPlateComponent.PlaylistIndex"); }
	FMediaSourceCacheSettings& CacheSettingsField() { return *GetNativePointerField<FMediaSourceCacheSettings*>(this, "UMediaPlateComponent.CacheSettings"); }
	bool& bIsMediaPlatePlayingField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bIsMediaPlatePlaying"); }
	float& CurrentRateField() { return *GetNativePointerField<float*>(this, "UMediaPlateComponent.CurrentRate"); }
	bool& bPlayOnlyWhenVisibleField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bPlayOnlyWhenVisible"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bLoop"); }
	EMediaTextureVisibleMipsTiles& VisibleMipsTilesCalculationsField() { return *GetNativePointerField<EMediaTextureVisibleMipsTiles*>(this, "UMediaPlateComponent.VisibleMipsTilesCalculations"); }
	float& MipMapBiasField() { return *GetNativePointerField<float*>(this, "UMediaPlateComponent.MipMapBias"); }
	bool& bIsAspectRatioAutoField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bIsAspectRatioAuto"); }
	bool& bEnableMipMapUpscalingField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bEnableMipMapUpscaling"); }
	int& MipLevelToUpscaleField() { return *GetNativePointerField<int*>(this, "UMediaPlateComponent.MipLevelToUpscale"); }
	bool& bAdaptivePoleMipUpscalingField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bAdaptivePoleMipUpscaling"); }
	float& LetterboxAspectRatioField() { return *GetNativePointerField<float*>(this, "UMediaPlateComponent.LetterboxAspectRatio"); }
	int& MatNumTexPerLayerField() { return *GetNativePointerField<int*>(this, "UMediaPlateComponent.MatNumTexPerLayer"); }
	UE::Math::TVector2<double>& MeshRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UMediaPlateComponent.MeshRange"); }
	FMediaTextureResourceSettings& MediaTextureSettingsField() { return *GetNativePointerField<FMediaTextureResourceSettings*>(this, "UMediaPlateComponent.MediaTextureSettings"); }
	double& TimeWhenPlaybackPausedField() { return *GetNativePointerField<double*>(this, "UMediaPlateComponent.TimeWhenPlaybackPaused"); }
	bool& bWantsToPlayWhenVisibleField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bWantsToPlayWhenVisible"); }
	bool& bResumeWhenOpenedField() { return *GetNativePointerField<bool*>(this, "UMediaPlateComponent.bResumeWhenOpened"); }
	void UpdateTextureLayers() { NativeCall<void>(this, "UMediaPlateComponent.UpdateTextureLayers()"); }
	void Open() { NativeCall<void>(this, "UMediaPlateComponent.Open()"); }
	bool IsAnyMediaTextureProxied() { return NativeCall<bool>(this, "UMediaPlateComponent.IsAnyMediaTextureProxied()"); }
	void Close() { NativeCall<void>(this, "UMediaPlateComponent.Close()"); }
	UMediaSource* ProxyGetMediaSourceFromIndex(int Index) { return NativeCall<UMediaSource*, int>(this, "UMediaPlateComponent.ProxyGetMediaSourceFromIndex(int)", Index); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UMediaPlateComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RefreshMediaSoundComponent() { NativeCall<void>(this, "UMediaPlateComponent.RefreshMediaSoundComponent()"); }
	bool PlayMediaSource(UMediaSource* InMediaSource, bool bInPlayOnOpen) { return NativeCall<bool, UMediaSource*, bool>(this, "UMediaPlateComponent.PlayMediaSource(UMediaSource*,bool)", InMediaSource, bInPlayOnOpen); }
	void ResumeWhenVisible() { NativeCall<void>(this, "UMediaPlateComponent.ResumeWhenVisible()"); }
	void ProxySetTextureBlend(int LayerIndex, int TextureIndex, float Blend) { NativeCall<void, int, int, float>(this, "UMediaPlateComponent.ProxySetTextureBlend(int,int,float)", LayerIndex, TextureIndex, Blend); }
	void OnRegister() { NativeCall<void>(this, "UMediaPlateComponent.OnRegister()"); }
	bool IsExternalControlAllowed() { return NativeCall<bool>(this, "UMediaPlateComponent.IsExternalControlAllowed()"); }
	const FMediaSourceCacheSettings& GetCacheSettings() { return NativeCall<const FMediaSourceCacheSettings&>(this, "UMediaPlateComponent.GetCacheSettings()"); }
	void OnUnregister() { NativeCall<void>(this, "UMediaPlateComponent.OnUnregister()"); }
	void BeginPlay() { NativeCall<void>(this, "UMediaPlateComponent.BeginPlay()"); }
	UMediaTexture* ProxyGetMediaTexture(int LayerIndex, int TextureIndex) { return NativeCall<UMediaTexture*, int, int>(this, "UMediaPlateComponent.ProxyGetMediaTexture(int,int)", LayerIndex, TextureIndex); }
	void UnregisterWithMediaTextureTracker() { NativeCall<void>(this, "UMediaPlateComponent.UnregisterWithMediaTextureTracker()"); }
	void ProxyReleaseMediaTexture(int LayerIndex, int TextureIndex) { NativeCall<void, int, int>(this, "UMediaPlateComponent.ProxyReleaseMediaTexture(int,int)", LayerIndex, TextureIndex); }
	void RefreshExternalMediaSource() { NativeCall<void>(this, "UMediaPlateComponent.RefreshExternalMediaSource()"); }
	void RefreshMediaPlateResource() { NativeCall<void>(this, "UMediaPlateComponent.RefreshMediaPlateResource()"); }
	void SwitchStates(EMediaPlateEventState State) { NativeCall<void, EMediaPlateEventState>(this, "UMediaPlateComponent.SwitchStates(EMediaPlateEventState)", State); }
	void UpdateLetterboxes() { NativeCall<void>(this, "UMediaPlateComponent.UpdateLetterboxes()"); }
	void AddLetterboxes() { NativeCall<void>(this, "UMediaPlateComponent.AddLetterboxes()"); }
	float GetProxyRate() { return NativeCall<float>(this, "UMediaPlateComponent.GetProxyRate()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UMediaPlateComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	static void SetMediaPlateResource_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UMediaPlateComponent.SetMediaPlateResource_WrapperImpl(void*,void*)", Object, InValue); }
	void EndPlay(EEndPlayReason::Type InEndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UMediaPlateComponent.EndPlay(EEndPlayReason::Type)", InEndPlayReason); }
	void RegisterWithMediaTextureTracker() { NativeCall<void>(this, "UMediaPlateComponent.RegisterWithMediaTextureTracker()"); }
	void TryActivateAspectRatioAuto() { NativeCall<void>(this, "UMediaPlateComponent.TryActivateAspectRatioAuto()"); }
	void SetAspectRatio(float AspectRatio) { NativeCall<void, float>(this, "UMediaPlateComponent.SetAspectRatio(float)", AspectRatio); }
	bool SetProxyRate(float Rate) { return NativeCall<bool, float>(this, "UMediaPlateComponent.SetProxyRate(float)", Rate); }
	void StopClockSink() { NativeCall<void>(this, "UMediaPlateComponent.StopClockSink()"); }
	bool ProxySetAspectRatio(UMediaPlayer* InMediaPlayer) { return NativeCall<bool, UMediaPlayer*>(this, "UMediaPlateComponent.ProxySetAspectRatio(UMediaPlayer*)", InMediaPlayer); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UMediaPlateComponent._getUObject()"); }
	bool IsVisible() { return NativeCall<bool>(this, "UMediaPlateComponent.IsVisible()"); }
	void BeginDestroy() { NativeCall<void>(this, "UMediaPlateComponent.BeginDestroy()"); }
	bool Previous() { return NativeCall<bool>(this, "UMediaPlateComponent.Previous()"); }
	bool Next() { return NativeCall<bool>(this, "UMediaPlateComponent.Next()"); }
	void SetNumberOfTextures(int NumTextures) { NativeCall<void, int>(this, "UMediaPlateComponent.SetNumberOfTextures(int)", NumTextures); }
};
