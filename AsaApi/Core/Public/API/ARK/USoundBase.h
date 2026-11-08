#pragma once


struct USoundBase : UObject
{
	// Fields

	TObjectPtr<USoundClass>& SoundClassObjectField() { return *GetNativePointerField<TObjectPtr<USoundClass>*>(this, "USoundBase.SoundClassObject"); }
	EVirtualizationMode& VirtualizationModeField() { return *GetNativePointerField<EVirtualizationMode*>(this, "USoundBase.VirtualizationMode"); }
	TMap<unsigned int, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, int, 0> >& CurrentPlayCountField() { return *GetNativePointerField<TMap<unsigned int, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<unsigned int, int, 0> >*>(this, "USoundBase.CurrentPlayCount"); }
	TSet<TObjectPtr<USoundConcurrency>, DefaultKeyFuncs<TObjectPtr<USoundConcurrency>, 0>, FDefaultSetAllocator>& ConcurrencySetField() { return *GetNativePointerField<TSet<TObjectPtr<USoundConcurrency>, DefaultKeyFuncs<TObjectPtr<USoundConcurrency>, 0>, FDefaultSetAllocator>*>(this, "USoundBase.ConcurrencySet"); }
	//FSoundConcurrencySettings& ConcurrencyOverridesField() { return *GetNativePointerField<FSoundConcurrencySettings*>(this, "USoundBase.ConcurrencyOverrides"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "USoundBase.Duration"); }
	float& MaxDistanceField() { return *GetNativePointerField<float*>(this, "USoundBase.MaxDistance"); }
	float& TotalSamplesField() { return *GetNativePointerField<float*>(this, "USoundBase.TotalSamples"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "USoundBase.Priority"); }
	TObjectPtr<USoundAttenuation>& AttenuationSettingsField() { return *GetNativePointerField<TObjectPtr<USoundAttenuation>*>(this, "USoundBase.AttenuationSettings"); }
	//TObjectPtr<USoundSubmixBase>& SoundSubmixObjectField() { return *GetNativePointerField<TObjectPtr<USoundSubmixBase>*>(this, "USoundBase.SoundSubmixObject"); }
	//TArray<FSoundSubmixSendInfo, TSizedDefaultAllocator<32> >& SoundSubmixSendsField() { return *GetNativePointerField<TArray<FSoundSubmixSendInfo, TSizedDefaultAllocator<32> >*>(this, "USoundBase.SoundSubmixSends"); }
	//TObjectPtr<USoundEffectSourcePresetChain>& SourceEffectChainField() { return *GetNativePointerField<TObjectPtr<USoundEffectSourcePresetChain>*>(this, "USoundBase.SourceEffectChain"); }
	//TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >& BusSendsField() { return *GetNativePointerField<TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >*>(this, "USoundBase.BusSends"); }
	//TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >& PreEffectBusSendsField() { return *GetNativePointerField<TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >*>(this, "USoundBase.PreEffectBusSends"); }
	TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "USoundBase.AssetUserData"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDebugField() { return { this, "USoundBase.bDebug" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideConcurrencyField() { return { this, "USoundBase.bOverrideConcurrency" }; }
	BitFieldValue<bool, unsigned __int32> bEnableBusSendsField() { return { this, "USoundBase.bEnableBusSends" }; }
	BitFieldValue<bool, unsigned __int32> bEnableBaseSubmixField() { return { this, "USoundBase.bEnableBaseSubmix" }; }
	BitFieldValue<bool, unsigned __int32> bEnableSubmixSendsField() { return { this, "USoundBase.bEnableSubmixSends" }; }
	BitFieldValue<bool, unsigned __int32> bHasDelayNodeField() { return { this, "USoundBase.bHasDelayNode" }; }
	BitFieldValue<bool, unsigned __int32> bHasConcatenatorNodeField() { return { this, "USoundBase.bHasConcatenatorNode" }; }
	BitFieldValue<bool, unsigned __int32> bBypassVolumeScaleForPriorityField() { return { this, "USoundBase.bBypassVolumeScaleForPriority" }; }

	// Functions

	float GetDuration()const { return NativeCall<float>(this, "USoundBase.GetDuration()"); }
	//UCurveTable* GetCurveData()const { return NativeCall<UCurveTable*>(this, "USoundBase.GetCurveData()"); }
	bool GetSoundWavesWithCookedAnalysisData(TArray<USoundWave*, TSizedDefaultAllocator<32> >& OutSoundWaves) { return NativeCall<bool, TArray<USoundWave*, TSizedDefaultAllocator<32> >&>(this, "USoundBase.GetSoundWavesWithCookedAnalysisData(TArray<USoundWave*,TSizedDefaultAllocator<32>>&)", OutSoundWaves); }
	TArray<UAssetUserData*, TSizedDefaultAllocator<32> > const* GetAssetUserDataArray()const { return NativeCall<TArray<UAssetUserData*, TSizedDefaultAllocator<32> > const*>(this, "USoundBase.GetAssetUserDataArray()"); }
	bool IsPlayWhenSilent()const { return NativeCall<bool>(this, "USoundBase.IsPlayWhenSilent()"); }
	bool HasCookedFFTData()const { return NativeCall<bool>(this, "USoundBase.HasCookedFFTData()"); }
	//static void StaticRegisterNativesUSoundBase() { NativeCall<void>(this, "USoundBase.StaticRegisterNativesUSoundBase()"); }
	bool HasCookedAmplitudeEnvelopeData()const { return NativeCall<bool>(this, "USoundBase.HasCookedAmplitudeEnvelopeData()"); }
	//void Parse(FAudioDevice* AudioDevice, unsigned long NodeWaveInstanceHash, FActiveSound* ActiveSound, const FSoundParseParameters* ParseParams, TArray<FWaveInstance*, TSizedDefaultAllocator<32> >& WaveInstances) { NativeCall<void, FAudioDevice*, unsigned long, FActiveSound*, const FSoundParseParameters*, TArray<FWaveInstance*, TSizedDefaultAllocator<32> >&>(this, "USoundBase.Parse(FAudioDevice*,unsigned__int64,FActiveSound&,FSoundParseParameters&,TArray<FWaveInstance*,TSizedDefaultAllocator<32>>&)", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	//bool IsAudibleSimple(UObject* WorldContextObject, UE::Math::TVector<double> Location, USoundAttenuation* WithAttenuationSettings, FSoundAttenuationSettings* OverrideAttenuationSettings) { return NativeCall<bool, UObject*, UE::Math::TVector<double>, USoundAttenuation*, FSoundAttenuationSettings*>(this, "USoundBase.IsAudibleSimple(UObject*,UE::Math::TVector<double>,USoundAttenuation*,FSoundAttenuationSettings*)", WorldContextObject, Location, WithAttenuationSettings, OverrideAttenuationSettings); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "USoundBase.Serialize(FArchive&)", Ar); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "USoundBase.Serialize(FStructuredArchiveRecord)", Record); }
	bool CanBeClusterRoot()const { return NativeCall<bool>(this, "USoundBase.CanBeClusterRoot()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundBase"); }
	float GetSubtitlePriority()const { return NativeCall<float>(this, "USoundBase.GetSubtitlePriority()"); }
	//FSoundAttenuationSettings const* GetAttenuationSettingsToApply()const { return NativeCall<FSoundAttenuationSettings const*>(this, "USoundBase.GetAttenuationSettingsToApply()"); }
	void InitResources() { NativeCall<void>(this, "USoundBase.InitResources()"); }
	float GetMaxDistance()const { return NativeCall<float>(this, "USoundBase.GetMaxDistance()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundBase"); }
	//USoundSubmixBase* GetSoundSubmix()const { return NativeCall<USoundSubmixBase*>(this, "USoundBase.GetSoundSubmix()"); }
	bool HasConcatenatorNode()const { return NativeCall<bool>(this, "USoundBase.HasConcatenatorNode()"); }
	bool EnableSubmixSendsOnPreview()const { return NativeCall<bool>(this, "USoundBase.EnableSubmixSendsOnPreview()"); }
	//bool IsParameterValid(const FAudioParameter* InParameter) const { return NativeCall<bool, const FAudioParameter*>(this, "USoundBase.IsParameterValid(FAudioParameter&)", InParameter); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "USoundBase.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	//TSharedPtr<Audio::IParameterTransmitter, 1> CreateParameterTransmitter(Audio::FParameterTransmitterInitParams* InParams) const { return NativeCall<TSharedPtr<Audio::IParameterTransmitter, 1>, Audio::FParameterTransmitterInitParams*>(this, "USoundBase.CreateParameterTransmitter(Audio::FParameterTransmitterInitParams&&)", InParams); }
	//void GetSoundSourceBusSends(EBusSendType BusSendType, TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >& OutSends) const { NativeCall<void, EBusSendType, TArray<FSoundSourceBusSendInfo, TSizedDefaultAllocator<32> >&>(this, "USoundBase.GetSoundSourceBusSends(EBusSendType,TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>>&)", BusSendType, OutSends); }
	//void GetConcurrencyHandles(TArray<FConcurrencyHandle, TSizedDefaultAllocator<32> >& OutConcurrencyHandles) const { NativeCall<void, TArray<FConcurrencyHandle, TSizedDefaultAllocator<32> >&>(this, "USoundBase.GetConcurrencyHandles(TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>>&)", OutConcurrencyHandles); }
	bool IsLooping()const { return NativeCall<bool>(this, "USoundBase.IsLooping()"); }
	float GetVolumeMultiplier() { return NativeCall<float>(this, "USoundBase.GetVolumeMultiplier()"); }
	bool ShouldApplyInteriorVolumes() { return NativeCall<bool>(this, "USoundBase.ShouldApplyInteriorVolumes()"); }
	USoundClass* GetSoundClass()const { return NativeCall<USoundClass*>(this, "USoundBase.GetSoundClass()"); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "USoundBase.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	bool IsPlayable()const { return NativeCall<bool>(this, "USoundBase.IsPlayable()"); }
	//void InitParameters(TArray<FAudioParameter, TSizedDefaultAllocator<32> >& ParametersToInit, FName InFeatureName) { NativeCall<void, TArray<FAudioParameter, TSizedDefaultAllocator<32> >&, FName>(this, "USoundBase.InitParameters(TArray<FAudioParameter,TSizedDefaultAllocator<32>>&,FName)", ParametersToInit, InFeatureName); }
	bool HasDelayNode()const { return NativeCall<bool>(this, "USoundBase.HasDelayNode()"); }
	bool CanBeInCluster()const { return NativeCall<bool>(this, "USoundBase.CanBeInCluster()"); }
	float GetPitchMultiplier() { return NativeCall<float>(this, "USoundBase.GetPitchMultiplier()"); }
	bool IsOneShot()const { return NativeCall<bool>(this, "USoundBase.IsOneShot()"); }
	//bool ImplementsParameterInterface(TSharedPtr<Audio::FParameterInterface, 1>* InParameterInterface) const { return NativeCall<bool, TSharedPtr<Audio::FParameterInterface, 1>*>(this, "USoundBase.ImplementsParameterInterface(TSharedPtr<Audio::FParameterInterface,1>)", InParameterInterface); }
	//bool GetAllDefaultParameters(TArray<FAudioParameter, TSizedDefaultAllocator<32> >& OutParameters) const { return NativeCall<bool, TArray<FAudioParameter, TSizedDefaultAllocator<32> >&>(this, "USoundBase.GetAllDefaultParameters(TArray<FAudioParameter,TSizedDefaultAllocator<32>>&)", OutParameters); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "USoundBase.AddAssetUserData(UAssetUserData*)", InUserData); }
	//TSharedPtr<ISoundGenerator, 1> CreateSoundGenerator(const FSoundGeneratorInitParams* InParams, TArray<FAudioParameter, TSizedDefaultAllocator<32> >* InDefaultParameters) { return NativeCall<TSharedPtr<ISoundGenerator, 1>, const FSoundGeneratorInitParams*, TArray<FAudioParameter, TSizedDefaultAllocator<32> >*>(this, "USoundBase.CreateSoundGenerator(FSoundGeneratorInitParams&,TArray<FAudioParameter,TSizedDefaultAllocator<32>>&&)", InParams, InDefaultParameters); }
	//TSharedPtr<ISoundGenerator, 1> CreateSoundGenerator(const FSoundGeneratorInitParams* InParams) { return NativeCall<TSharedPtr<ISoundGenerator, 1>, const FSoundGeneratorInitParams*>(this, "USoundBase.CreateSoundGenerator(FSoundGeneratorInitParams&)", InParams); }
	bool HasAttenuationNode()const { return NativeCall<bool>(this, "USoundBase.HasAttenuationNode()"); }
	//void GetSoundSubmixSends(TArray<FSoundSubmixSendInfo, TSizedDefaultAllocator<32> >& OutSends) const { NativeCall<void, TArray<FSoundSubmixSendInfo, TSizedDefaultAllocator<32> >&>(this, "USoundBase.GetSoundSubmixSends(TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>>&)", OutSends); }
	UObject* _getUObject()const { return NativeCall<UObject*>(this, "USoundBase._getUObject()"); }
	bool SupportsSubtitles()const { return NativeCall<bool>(this, "USoundBase.SupportsSubtitles()"); }
};