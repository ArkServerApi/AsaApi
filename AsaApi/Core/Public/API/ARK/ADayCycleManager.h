#pragma once
#include "BulkForward.h"


struct ADayCycleManager : AInfo
{
	// Fields

	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.CurrentTime"); }
	float& TrueSkyTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.TrueSkyTime"); }
	int& theDayNumberToMakeSerilizationWorkField() { return *GetNativePointerField<int*>(this, "ADayCycleManager.theDayNumberToMakeSerilizationWork"); }
	float& GlobalTrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalTrueSkyBrightness"); }
	UE::Math::TVector<double>& GlobalTrueSkyColorMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADayCycleManager.GlobalTrueSkyColorMultiplier"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalIBLCaptureBrightness"); }
	float& GlobalBakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalBakeAndStreamIBLMultiplier"); }
	float& GlobalGroundColorMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalGroundColorMultiplier"); }
	float& GlobalSkyColorMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalSkyColorMultiplier"); }
	float& SM4SkyLightMultField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4SkyLightMult"); }
	float& SM4DirLightMultField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4DirLightMult"); }
	UE::Math::TVector<double>& AtmosphericFogMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADayCycleManager.AtmosphericFogMultiplier"); }
	float& SkyIBLIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyIBLIntensityMultiplier"); }
	float& BaseTemperatureField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseTemperature"); }
	float& BaseWindField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseWind"); }
	float& RainAmountField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.RainAmount"); }
	float& SnowAmountField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SnowAmount"); }
	float& SkyWeatherSequenceBlend_NormalField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Normal"); }
	float& SkyWeatherSequenceBlend_HotField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Hot"); }
	float& SkyWeatherSequenceBlend_ColdField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Cold"); }
	float& SkyWeatherSequenceBlend_RainyField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Rainy"); }
	float& SkyWeatherSequenceBlend_FogField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Fog"); }
	bool& bLastReplicatedIsRainingField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bLastReplicatedIsRaining"); }
	bool& bIsRainingField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bIsRaining"); }
	USoundBase*& Sound_TransitionToMorningField() { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToMorning"); }
	USoundBase*& Sound_TransitionToMidDayField() { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToMidDay"); }
	USoundBase*& Sound_TransitionToNightField() { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToNight"); }
	float& Sound_TransitionToMorningTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMorningTime"); }
	float& Sound_TransitionToNightTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToNightTime"); }
	float& Sound_TransitionToMidDayTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMidDayTime"); }
	float& DayTimeStartField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeStart"); }
	float& DayTimeEndField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeEnd"); }
	float& DayTimeLengthMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeLengthMultiplier"); }
	//TArray<ALevelSequenceActor*, TSizedDefaultAllocator<32> >& NewLightingSequenceField() { return *GetNativePointerField<TArray<ALevelSequenceActor*, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.NewLightingSequence"); }
	int& ActiveLightingSequenceField() { return *GetNativePointerField<int*>(this, "ADayCycleManager.ActiveLightingSequence"); }
	float& LastCurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.LastCurrentTime"); }
	float& SoundLastCurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SoundLastCurrentTime"); }
	bool& bUsesWindField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUsesWind"); }
	bool& bUseBPOverrideItemAutoDecreaseDurabilityField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUseBPOverrideItemAutoDecreaseDurability"); }
	TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >& PreventBuffClassesInDayCycleLevelField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.PreventBuffClassesInDayCycleLevel"); }
	//FDayCycleManagerStartDaytime& OnStartDaytimeField() { return *GetNativePointerField<FDayCycleManagerStartDaytime*>(this, "ADayCycleManager.OnStartDaytime"); }
	//FDayCycleManagerStartNighttime& OnStartNighttimeField() { return *GetNativePointerField<FDayCycleManagerStartNighttime*>(this, "ADayCycleManager.OnStartNighttime"); }
	//FDayCycleManagerOnDayChange& OnDayChangeField() { return *GetNativePointerField<FDayCycleManagerOnDayChange*>(this, "ADayCycleManager.OnDayChange"); }
	//FDayCycleManagerOnDayChange& OnHazardChangeField() { return *GetNativePointerField<FDayCycleManagerOnDayChange*>(this, "ADayCycleManager.OnHazardChange"); }
	TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >& GenesisTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.GenesisTradableOptions"); }
	TSubclassOf<AActor>& HexagonVFXActorClassField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "ADayCycleManager.HexagonVFXActorClass"); }
	bool& bFirstDaytimeField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bFirstDaytime"); }
	TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >& GivePlayersBuffsOnSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.GivePlayersBuffsOnSpawn"); }
	TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >& GivePlayersBuffAssetsOnSpawnField() { return *GetNativePointerField<TArray<FSoftObjectPath, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.GivePlayersBuffAssetsOnSpawn"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADayCycleManager"); }
	bool AllowStructureActivation(APrimalStructure* theStructure) { return NativeCall<bool, APrimalStructure*>(this, "ADayCycleManager.AllowStructureActivation(APrimalStructure*)", theStructure); }
	bool AllowWeaponFiring(AActor* theWeaponOrStructure) { return NativeCall<bool, AActor*>(this, "ADayCycleManager.AllowWeaponFiring(AActor*)", theWeaponOrStructure); }
	FString* GetDayNumberString(FString* result, bool bIncludeDayString) { return NativeCall<FString*, FString*, bool>(this, "ADayCycleManager.GetDayNumberString(bool)", result, bIncludeDayString); }
	//float GetWeatherModifiedAmbientSoundMultiplier(ADayCycleAmbientSound* ForDayCycleAmbientSound) { return NativeCall<float, ADayCycleAmbientSound*>(this, "ADayCycleManager.GetWeatherModifiedAmbientSoundMultiplier(ADayCycleAmbientSound*)", ForDayCycleAmbientSound); }
	bool IsRainingAtLocation(UE::Math::TVector<double>* Location) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "ADayCycleManager.IsRainingAtLocation(UE::Math::TVector<double>)", Location); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADayCycleManager();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	float BPOverrideGameStateMatineePlayRate_Implementation(AActor* forMatinee, float inPlayRate) { return NativeCall<float, AActor*, float>(this, "ADayCycleManager.BPOverrideGameStateMatineePlayRate_Implementation(AActor*,float)", forMatinee, inPlayRate); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADayCycleManager.Tick(float)", DeltaSeconds); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void BeginPlay() { NativeCall<void>(this, "ADayCycleManager.BeginPlay()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ADayCycleManager.PostInitializeComponents()"); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "ADayCycleManager.DrawHUD(AShooterHUD*)", HUD); }
	float GetTemperatureAtLocation(UE::Math::TVector<double>* AtLocation, APrimalCharacter* forPrimalCharacter) { return NativeCall<float, UE::Math::TVector<double>*, APrimalCharacter*>(this, "ADayCycleManager.GetTemperatureAtLocation(UE::Math::TVector<double>,APrimalCharacter*)", AtLocation, forPrimalCharacter); }
	float GetWindAtLocation(UE::Math::TVector<double>* AtLocation, APrimalCharacter* forPrimalCharacter) { return NativeCall<float, UE::Math::TVector<double>*, APrimalCharacter*>(this, "ADayCycleManager.GetWindAtLocation(UE::Math::TVector<double>,APrimalCharacter*)", AtLocation, forPrimalCharacter); }
	void MatineeUpdated() { NativeCall<void>(this, "ADayCycleManager.MatineeUpdated()"); }
	float AdjustStructureItemInsulation_Implementation(AShooterCharacter* ForCharacter, UPrimalItem* ForPrimalItem, EPrimalItemStat::Type TypeInsulation, float insulationValue) { return NativeCall<float, AShooterCharacter*, UPrimalItem*, EPrimalItemStat::Type, float>(this, "ADayCycleManager.AdjustStructureItemInsulation_Implementation(AShooterCharacter*,UPrimalItem*,EPrimalItemStat::Type,float)", ForCharacter, ForPrimalItem, TypeInsulation, insulationValue); }
	float GetWaterLineStartZ_Implementation(UE::Math::TVector<double>* AtLocation) { return NativeCall<float, UE::Math::TVector<double>*>(this, "ADayCycleManager.GetWaterLineStartZ_Implementation(UE::Math::TVector<double>)", AtLocation); }
	float GetDeepWaterStartZ_Implementation(UE::Math::TVector<double>* AtLocation) { return NativeCall<float, UE::Math::TVector<double>*>(this, "ADayCycleManager.GetDeepWaterStartZ_Implementation(UE::Math::TVector<double>)", AtLocation); }
	void OnDCMCheat(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "ADayCycleManager.OnDCMCheat(FName,float)", CheatName, Value); }
	bool IsRainingAtLocation_Implementation(UE::Math::TVector<double>* Location) { return NativeCall<bool, UE::Math::TVector<double>*>(this, "ADayCycleManager.IsRainingAtLocation_Implementation(UE::Math::TVector<double>)", Location); }
	FString* GetDayNumberString_Implementation(FString* result, bool bIncludeDayString) { return NativeCall<FString*, FString*, bool>(this, "ADayCycleManager.GetDayNumberString_Implementation(bool)", result, bIncludeDayString); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADayCycleManager"); }

	bool& hackedDayNumberField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.hackedDayNumber"); }
	UE::Math::TVector<double>& PrimaryWindVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADayCycleManager.PrimaryWindVelocity"); }
	UE::Math::TVector<double>& GustWindVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADayCycleManager.GustWindVelocity"); }
	UE::Math::TVector<double>& DebugWindVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ADayCycleManager.DebugWindVelocity"); }
	bool& bDebugWindField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bDebugWind"); }
	float& MaxWindVelocityScaleField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.MaxWindVelocityScale"); }
	bool& bShowWindVelocityDebugField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bShowWindVelocityDebug"); }
	bool& bTailWindEnabledField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bTailWindEnabled"); }
	bool& bLastReplicatedIsSnowingField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bLastReplicatedIsSnowing"); }
	TArray<ALevelSequenceActor*, TSizedDefaultAllocator<32> >& NewLightingSequenceField() { return *GetNativePointerField<TArray<ALevelSequenceActor*, TSizedDefaultAllocator<32> >*>(this, "ADayCycleManager.NewLightingSequence"); }
	bool& bCheckForStructureActivationField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bCheckForStructureActivation"); }
	bool& bUsesWindVelocityField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUsesWindVelocity"); }
	bool& bCheckForWeaponFiringField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bCheckForWeaponFiring"); }
	bool& bHideSupplyCratesField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bHideSupplyCrates"); }
	FDayCycleManagerStartDaytime& OnStartDaytimeField() { return *GetNativePointerField<FDayCycleManagerStartDaytime*>(this, "ADayCycleManager.OnStartDaytime"); }
	FDayCycleManagerStartNighttime& OnStartNighttimeField() { return *GetNativePointerField<FDayCycleManagerStartNighttime*>(this, "ADayCycleManager.OnStartNighttime"); }
	FDayCycleManagerOnDayChange& OnDayChangeField() { return *GetNativePointerField<FDayCycleManagerOnDayChange*>(this, "ADayCycleManager.OnDayChange"); }
	FDayCycleManagerOnDayChange& OnHazardChangeField() { return *GetNativePointerField<FDayCycleManagerOnDayChange*>(this, "ADayCycleManager.OnHazardChange"); }
	bool& bWasDaytimeField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bWasDaytime"); }
	float BPAdjustTemperature(float TemperatureIn, ABiomeZoneVolume* biomeZoneVolume, const UE::Math::TVector<double>& AtLocation, APrimalCharacter* forPrimalCharacter) { return NativeCall<float, float, ABiomeZoneVolume*, const UE::Math::TVector<double>&, APrimalCharacter*>(this, "ADayCycleManager.BPAdjustTemperature(float,ABiomeZoneVolume*,UE::Math::TVector<double>&,APrimalCharacter*)", TemperatureIn, biomeZoneVolume, AtLocation, forPrimalCharacter); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ADayCycleManager._getUObject()"); }
	void SetTimeOfDay_Implementation(int hours, int minutes, int seconds) { NativeCall<void, int, int, int>(this, "ADayCycleManager.SetTimeOfDay_Implementation(int,int,int)", hours, minutes, seconds); }
	float GetWindSpeedAtLocation(UE::Math::TVector<double>* AtLocation, APrimalCharacter* forPrimalCharacter) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<float, UE :: Math :: TVector < double >, APrimalCharacter *>(this, "ADayCycleManager.GetWindSpeedAtLocation(UE::Math::TVector<double>,APrimalCharacter*)", *AtLocation, forPrimalCharacter); }
	float GetWeatherModifiedAmbientSoundMultiplier(ADayCycleAmbientSound* ForDayCycleAmbientSound) { return NativeCall<float, ADayCycleAmbientSound*>(this, "ADayCycleManager.GetWeatherModifiedAmbientSoundMultiplier(ADayCycleAmbientSound*)", ForDayCycleAmbientSound); }
	float BPOverrideGameStateMatineePlayRate(AActor* forMatinee, float inPlayRate) { return NativeCall<float, AActor*, float>(this, "ADayCycleManager.BPOverrideGameStateMatineePlayRate(AActor*,float)", forMatinee, inPlayRate); }
	float BPAdjustTemperature_Implementation(float TemperatureIn, ABiomeZoneVolume* biomeZoneVolume, const UE::Math::TVector<double>& AtLocation, APrimalCharacter* forPrimalCharacter) { return NativeCall<float, float, ABiomeZoneVolume*, const UE::Math::TVector<double>&, APrimalCharacter*>(this, "ADayCycleManager.BPAdjustTemperature_Implementation(float,ABiomeZoneVolume*,UE::Math::TVector<double>&,APrimalCharacter*)", TemperatureIn, biomeZoneVolume, AtLocation, forPrimalCharacter); }
	void BPPostDrawSpawnMap(AShooterPlayerController* ForPC, UCanvas* ItemCanvas, const UE::Math::TVector2<double>& ItemCanvasSize) { NativeCall<void, AShooterPlayerController*, UCanvas*, const UE::Math::TVector2<double>&>(this, "ADayCycleManager.BPPostDrawSpawnMap(AShooterPlayerController*,UCanvas*,UE::Math::TVector2<double>&)", ForPC, ItemCanvas, ItemCanvasSize); }
	void SetTimeOfDay(int hours, int minutes, int seconds) { NativeCall<void, int, int, int>(this, "ADayCycleManager.SetTimeOfDay(int,int,int)", hours, minutes, seconds); }
	void BPOnDCMCheat(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "ADayCycleManager.BPOnDCMCheat(FName,float)", CheatName, Value); }
	float GetWeatherModifiedAmbientSoundMultiplier_Implementation(ADayCycleAmbientSound* ForDayCycleAmbientSound) { return NativeCall<float, ADayCycleAmbientSound*>(this, "ADayCycleManager.GetWeatherModifiedAmbientSoundMultiplier_Implementation(ADayCycleAmbientSound*)", ForDayCycleAmbientSound); }
	void ShooterCharacterSpawned(AShooterCharacter* theShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "ADayCycleManager.ShooterCharacterSpawned(AShooterCharacter*)", theShooterCharacter); }
	void Destroyed() { NativeCall<void>(this, "ADayCycleManager.Destroyed()"); }
	bool IsDaytime() { return NativeCall<bool>(this, "ADayCycleManager.IsDaytime()"); }
	float AdjustStructureItemInsulation(AShooterCharacter* ForCharacter, UPrimalItem* ForPrimalItem, EPrimalItemStat::Type TypeInsulation, float insulationValue) { return NativeCall<float, AShooterCharacter*, UPrimalItem*, EPrimalItemStat::Type, float>(this, "ADayCycleManager.AdjustStructureItemInsulation(AShooterCharacter*,UPrimalItem*,EPrimalItemStat::Type,float)", ForCharacter, ForPrimalItem, TypeInsulation, insulationValue); }
	void AttemptWeaponFiring(AShooterWeapon* theWeapon) { NativeCall<void, AShooterWeapon*>(this, "ADayCycleManager.AttemptWeaponFiring(AShooterWeapon*)", theWeapon); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ADayCycleManager.ShouldTickIfViewportsOnly()"); }
	bool OverrideItemAutoDecreaseDurability(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "ADayCycleManager.OverrideItemAutoDecreaseDurability(UPrimalItem*)", anItem); }
	bool BPOverrideItemAutoDecreaseDurability(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "ADayCycleManager.BPOverrideItemAutoDecreaseDurability(UPrimalItem*)", anItem); }
	void ShooterCharacterPossessed(AShooterCharacter* theShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "ADayCycleManager.ShooterCharacterPossessed(AShooterCharacter*)", theShooterCharacter); }
};