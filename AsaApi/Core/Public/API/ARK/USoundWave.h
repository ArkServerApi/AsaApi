#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USoundBase.h"

struct USoundWave : public USoundBase
{
public:
	USoundWave() = delete;
	~USoundWave() = delete;
	USoundWave(const USoundWave&) = delete;
	USoundWave& operator=(const USoundWave&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundWave"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundWave"); }
	int& CompressionQualityField() { return *GetNativePointerField<int*>(this, "USoundWave.CompressionQuality"); }
	int& StreamingPriorityField() { return *GetNativePointerField<int*>(this, "USoundWave.StreamingPriority"); }
	FSoundModulationDefaultRoutingSettings& ModulationSettingsField() { return *GetNativePointerField<FSoundModulationDefaultRoutingSettings*>(this, "USoundWave.ModulationSettings"); }
	TArray<float, TSizedDefaultAllocator<32> >& FrequenciesToAnalyzeField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "USoundWave.FrequenciesToAnalyze"); }
	FThreadSafeCounter& PrecacheStateField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "USoundWave.PrecacheState"); }
	FThreadSafeCounter& NumSourcesPlayingField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "USoundWave.NumSourcesPlaying"); }
	float& CachedSampleRateOverrideField() { return *GetNativePointerField<float*>(this, "USoundWave.CachedSampleRateOverride"); }
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "USoundWave.SpokenText"); }
	unsigned char& SubtitleColorIndexField() { return *GetNativePointerField<unsigned char*>(this, "USoundWave.SubtitleColorIndex"); }
	float& SubtitlePriorityField() { return *GetNativePointerField<float*>(this, "USoundWave.SubtitlePriority"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "USoundWave.Volume"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "USoundWave.Pitch"); }
	int& NumChannelsField() { return *GetNativePointerField<int*>(this, "USoundWave.NumChannels"); }
	int& SampleRateField() { return *GetNativePointerField<int*>(this, "USoundWave.SampleRate"); }
	int& ResourceIDField() { return *GetNativePointerField<int*>(this, "USoundWave.ResourceID"); }
	int& TrackedMemoryUsageField() { return *GetNativePointerField<int*>(this, "USoundWave.TrackedMemoryUsage"); }
	unsigned char*& CachedRealtimeFirstBufferField() { return *GetNativePointerField<unsigned char**>(this, "USoundWave.CachedRealtimeFirstBuffer"); }
	int& NumPrecacheFramesField() { return *GetNativePointerField<int*>(this, "USoundWave.NumPrecacheFrames"); }
	int& RawPCMDataSizeField() { return *GetNativePointerField<int*>(this, "USoundWave.RawPCMDataSize"); }
	unsigned char*& RawPCMDataField() { return *GetNativePointerField<unsigned char**>(this, "USoundWave.RawPCMData"); }
	FGuid& CompressedDataGuidField() { return *GetNativePointerField<FGuid*>(this, "USoundWave.CompressedDataGuid"); }
	BitFieldValue<bool, unsigned char> bLooping() { return { this, "USoundWave.bLooping"}; }
	BitFieldValue<bool, unsigned char> bStreaming() { return { this, "USoundWave.bStreaming"}; }
	BitFieldValue<bool, unsigned char> bSeekableStreaming() { return { this, "USoundWave.bSeekableStreaming"}; }
	BitFieldValue<bool, unsigned char> bUseBinkAudio() { return { this, "USoundWave.bUseBinkAudio"}; }
	BitFieldValue<bool, unsigned char> bProcedural() { return { this, "USoundWave.bProcedural"}; }
	BitFieldValue<bool, unsigned char> bRequiresStopFade() { return { this, "USoundWave.bRequiresStopFade"}; }
	BitFieldValue<bool, unsigned char> bIsSourceBus() { return { this, "USoundWave.bIsSourceBus"}; }
	BitFieldValue<bool, unsigned char> bCanProcessAsync() { return { this, "USoundWave.bCanProcessAsync"}; }
	BitFieldValue<bool, unsigned char> bDynamicResource() { return { this, "USoundWave.bDynamicResource"}; }
	BitFieldValue<bool, unsigned char> bMature() { return { this, "USoundWave.bMature"}; }
	BitFieldValue<bool, unsigned char> bManualWordWrap() { return { this, "USoundWave.bManualWordWrap"}; }
	BitFieldValue<bool, unsigned char> bSingleLine() { return { this, "USoundWave.bSingleLine"}; }
	BitFieldValue<bool, unsigned char> bIsAmbisonics() { return { this, "USoundWave.bIsAmbisonics"}; }
	BitFieldValue<bool, unsigned char> bDecompressedFromOgg() { return { this, "USoundWave.bDecompressedFromOgg"}; }
	BitFieldValue<bool, unsigned char> bCachedSampleRateFromPlatformSettings() { return { this, "USoundWave.bCachedSampleRateFromPlatformSettings"}; }
	BitFieldValue<bool, unsigned char> bSampleRateManuallyReset() { return { this, "USoundWave.bSampleRateManuallyReset"}; }
	void SetNumFrames(unsigned int InNumFrames) { NativeCall<void, unsigned int>(this, "USoundWave.SetNumFrames(unsignedint)", InNumFrames); }
	float GetSampleRateForCurrentPlatform() { return NativeCall<float>(this, "USoundWave.GetSampleRateForCurrentPlatform()"); }
	bool IsSeekable() { return NativeCall<bool>(this, "USoundWave.IsSeekable()"); }
	void RemoveAudioResource() { NativeCall<void>(this, "USoundWave.RemoveAudioResource()"); }
	bool HasCookedAmplitudeEnvelopeData() { return NativeCall<bool>(this, "USoundWave.HasCookedAmplitudeEnvelopeData()"); }
	void ReleaseCompressedAudio() { NativeCall<void>(this, "USoundWave.ReleaseCompressedAudio()"); }
	float GetSubtitlePriority() { return NativeCall<float>(this, "USoundWave.GetSubtitlePriority()"); }
	unsigned int GetNumChunks() { return NativeCall<unsigned int>(this, "USoundWave.GetNumChunks()"); }
	UCurveTable* GetCurveData() { return NativeCall<UCurveTable*>(this, "USoundWave.GetCurveData()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USoundWave.IsReadyForFinishDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USoundWave.GetDesc()", result); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundWave.Serialize(FArchive&)", Ar); }
	void BeginGetCompressedData(FName Format, const FPlatformAudioCookOverrides* CompressionOverrides, const ITargetPlatform* InTargetPlatform) { NativeCall<void, FName, const FPlatformAudioCookOverrides*, const ITargetPlatform*>(this, "USoundWave.BeginGetCompressedData(FName,FPlatformAudioCookOverrides*,ITargetPlatform*)", Format, CompressionOverrides, InTargetPlatform); }
	bool HasCompressedData(FName Format, ITargetPlatform* TargetPlatform) { return NativeCall<bool, FName, ITargetPlatform*>(this, "USoundWave.HasCompressedData(FName,ITargetPlatform*)", Format, TargetPlatform); }
	void BeginDestroy() { NativeCall<void>(this, "USoundWave.BeginDestroy()"); }
	const unsigned char* GetResourceData() { return NativeCall<const unsigned char*>(this, "USoundWave.GetResourceData()"); }
	void InvalidateCompressedData(bool bFreeResources, bool bRebuildStreamingChunks) { NativeCall<void, bool, bool>(this, "USoundWave.InvalidateCompressedData(bool,bool)", bFreeResources, bRebuildStreamingChunks); }
	bool HasStreamingChunks() { return NativeCall<bool>(this, "USoundWave.HasStreamingChunks()"); }
	void SetSampleRate(unsigned int InSampleRate, bool bFromDecoders) { NativeCall<void, unsigned int, bool>(this, "USoundWave.SetSampleRate(unsignedint,bool)", InSampleRate, bFromDecoders); }
	void FreeResources(bool bStopSoundsUsingThisResource) { NativeCall<void, bool>(this, "USoundWave.FreeResources(bool)", bStopSoundsUsingThisResource); }
	int GetResourceSizeForFormat(FName Format) { return NativeCall<int, FName>(this, "USoundWave.GetResourceSizeForFormat(FName)", Format); }
	float GetDuration() { return NativeCall<float>(this, "USoundWave.GetDuration()"); }
	void OnBeginGenerate() { NativeCall<void>(this, "USoundWave.OnBeginGenerate()"); }
	void OnEndGenerate() { NativeCall<void>(this, "USoundWave.OnEndGenerate()"); }
	int GetResourceSize() { return NativeCall<int>(this, "USoundWave.GetResourceSize()"); }
	bool HasCookedFFTData() { return NativeCall<bool>(this, "USoundWave.HasCookedFFTData()"); }
	void PostInitProperties() { NativeCall<void>(this, "USoundWave.PostInitProperties()"); }
	void CacheInheritedLoadingBehavior() { NativeCall<void>(this, "USoundWave.CacheInheritedLoadingBehavior()"); }
	bool GetInterpolatedCookedEnvelopeDataForTime(float InTime, unsigned int& InOutLastIndex, float& OutAmplitude, bool bLoop) { return NativeCall<bool, float, unsigned int&, float&, bool>(this, "USoundWave.GetInterpolatedCookedEnvelopeDataForTime(float,unsignedint&,float&,bool)", InTime, InOutLastIndex, OutAmplitude, bLoop); }
	FName GetExporterName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "USoundWave.GetExporterName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool IsProcedurallyGenerated() { return NativeCall<bool>(this, "USoundWave.IsProcedurallyGenerated()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "USoundWave.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void FinishDestroy() { NativeCall<void>(this, "USoundWave.FinishDestroy()"); }
	int GeneratePCMData(unsigned char* PCMData, int SamplesNeeded) { return NativeCall<int, unsigned char*, int>(this, "USoundWave.GeneratePCMData(unsignedchar*,int)", PCMData, SamplesNeeded); }
	bool InitAudioResource(FName Format) { return NativeCall<bool, FName>(this, "USoundWave.InitAudioResource(FName)", Format); }
	void SerializeCuePoints(FArchive& Ar, bool bIsLoadingFromCookedArchive) { NativeCall<void, FArchive&, bool>(this, "USoundWave.SerializeCuePoints(FArchive&,bool)", Ar, bIsLoadingFromCookedArchive); }
	bool CleanupDecompressor(bool bForceWait) { return NativeCall<bool, bool>(this, "USoundWave.CleanupDecompressor(bool)", bForceWait); }
	bool IsPlayable() { return NativeCall<bool>(this, "USoundWave.IsPlayable()"); }
	unsigned int GetNumFrames() { return NativeCall<unsigned int>(this, "USoundWave.GetNumFrames()"); }
	void PostLoad() { NativeCall<void>(this, "USoundWave.PostLoad()"); }
	void RemovePlayingSource(const ISoundWaveClient*& Source) { NativeCall<void, const ISoundWaveClient*&>(this, "USoundWave.RemovePlayingSource(ISoundWaveClient*&)", Source); }
	void AddPlayingSource(const ISoundWaveClient*& Source) { NativeCall<void, const ISoundWaveClient*&>(this, "USoundWave.AddPlayingSource(ISoundWaveClient*&)", Source); }
	void SetError(const wchar_t* InErrorMsg) { NativeCall<void, const wchar_t*>(this, "USoundWave.SetError(wchar_t*)", InErrorMsg); }
	bool IsStreaming(const wchar_t* PlatformName) { return NativeCall<bool, const wchar_t*>(this, "USoundWave.IsStreaming(wchar_t*)", PlatformName); }
	FName GetRuntimeFormat() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "USoundWave.GetRuntimeFormat()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool LoadZerothChunk() { return NativeCall<bool>(this, "USoundWave.LoadZerothChunk()"); }
	bool SupportsSubtitles() { return NativeCall<bool>(this, "USoundWave.SupportsSubtitles()"); }
	unsigned int GetInterpolatedCookedEnvelopeDataForTimeInternal(float InTime, unsigned int StartingIndex, float& OutAmplitude, bool bLoop) { return NativeCall<unsigned int, float, unsigned int, float&, bool>(this, "USoundWave.GetInterpolatedCookedEnvelopeDataForTimeInternal(float,unsignedint,float&,bool)", InTime, StartingIndex, OutAmplitude, bLoop); }
	void SerializeCookedPlatformData(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundWave.SerializeCookedPlatformData(FArchive&)", Ar); }
	bool HasError() { return NativeCall<bool>(this, "USoundWave.HasError()"); }
};
