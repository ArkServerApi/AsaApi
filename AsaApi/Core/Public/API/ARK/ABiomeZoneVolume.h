#pragma once
#include "BulkForward.h"


struct ABiomeZoneVolume : AVolume
{
	// Fields

	FString& BiomeZoneNameField() { return *GetNativePointerField<FString*>(this, "ABiomeZoneVolume.BiomeZoneName"); }
	float& FinalTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureMultiplier"); }
	float& FinalTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureExponent"); }
	float& FinalTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureAddition"); }
	float& PreOffsetTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureMultiplier"); }
	float& PreOffsetTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureExponent"); }
	float& PreOffsetTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureAddition"); }
	float& AboveTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetThreshold"); }
	float& AboveTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetMultiplier"); }
	float& AboveTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetExponent"); }
	float& BelowTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetThreshold"); }
	float& BelowTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetMultiplier"); }
	float& BelowTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetExponent"); }
	float& AbsoluteTemperatureOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteTemperatureOverride"); }
	float& AbsoluteMaxTemperatureField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMaxTemperature"); }
	float& AbsoluteMinTemperatureField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMinTemperature"); }
	float& EggRangeMaximumNumberOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggRangeMaximumNumberOverride"); }
	int& EggMaximumNumberOverrideField() { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.EggMaximumNumberOverride"); }
	float& EggChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggChanceToSpawnOverride"); }
	float& EggIntervalUnstasisChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggIntervalUnstasisChanceToSpawnOverride"); }
	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& OverrideEggLimitsDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "ABiomeZoneVolume.OverrideEggLimitsDinoClasses"); }
	int& BiomeZonePriorityField() { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.BiomeZonePriority"); }
	float& MaxMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.MaxMultiplier"); }
	float& AbsoluteWindOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteWindOverride"); }
	float& PreOffsetWindMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindMultiplier"); }
	float& PreOffsetWindExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindExponent"); }
	float& PreOffsetWindAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindAddition"); }
	float& AboveWindOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetThreshold"); }
	float& AboveWindOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetMultiplier"); }
	float& AboveWindOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetExponent"); }
	float& BelowWindOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetThreshold"); }
	float& BelowWindOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetMultiplier"); }
	float& BelowWindOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetExponent"); }
	float& FinalWindMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindMultiplier"); }
	float& FinalWindExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindExponent"); }
	float& FinalWindAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindAddition"); }
	TArray<float, TSizedDefaultAllocator<32> >& BiomeCustomDatasField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "ABiomeZoneVolume.BiomeCustomDatas"); }
	FieldArray<float, 12> StatusAdjustmentRateMultipliersPositiveField() { return { this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersPositive" }; }
	FieldArray<float, 12> StatusAdjustmentRateMultipliersNegativeField() { return { this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersNegative" }; }
	bool& bStatusAdjustRateValuesField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bStatusAdjustRateValues"); }
	TSoftClassPtr<APrimalBuff>& BuffToGiveField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "ABiomeZoneVolume.BuffToGive"); }
	TSoftClassPtr<APrimalBuff>& BuffToPreventActiveUseField() { return *GetNativePointerField<TSoftClassPtr<APrimalBuff>*>(this, "ABiomeZoneVolume.BuffToPreventActiveUse"); }
	USoundBase*& OverrideCombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicDay"); }
	USoundBase*& OverrideCombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicDay_Heavy"); }
	USoundBase*& OverrideCombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicNight"); }
	USoundBase*& OverrideCombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicNight_Heavy"); }
	USoundBase*& ForceMusicInBiomeField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.ForceMusicInBiome"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPreventCrops() { return { this, "ABiomeZoneVolume.bPreventCrops" }; }
	BitFieldValue<bool, unsigned __int32> bIsOutside() { return { this, "ABiomeZoneVolume.bIsOutside" }; }
	BitFieldValue<bool, unsigned __int32> bRemoveBuffWhenLeavingVolume() { return { this, "ABiomeZoneVolume.bRemoveBuffWhenLeavingVolume" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABiomeZoneVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesABiomeZoneVolume();
	float GetBiomeTemperature(float GlobalTemperature) { return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeTemperature(float)", GlobalTemperature); }
	float GetBiomeWind(float GlobalWind) { return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeWind(float)", GlobalWind); }
	static ABiomeZoneVolume* GetBiomeZoneVolume(UWorld* World, const UE::Math::TVector<double>* Location) { return NativeCall<ABiomeZoneVolume*, UWorld*, const UE::Math::TVector<double>*>(nullptr, "ABiomeZoneVolume.GetBiomeZoneVolume(UWorld*,UE::Math::TVector<double>&)", World, Location); }
	void PostInitializeComponents() { NativeCall<void>(this, "ABiomeZoneVolume.PostInitializeComponents()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ABiomeZoneVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	float EggGetOverrideIntervalBetweenUnstasisChances(APrimalDinoCharacter* aChar) { return NativeCall<float, APrimalDinoCharacter*>(this, "ABiomeZoneVolume.EggGetOverrideIntervalBetweenUnstasisChances(APrimalDinoCharacter*)", aChar); }
	float EggOverrideChanceToSpawn(APrimalDinoCharacter* aChar) { return NativeCall<float, APrimalDinoCharacter*>(this, "ABiomeZoneVolume.EggOverrideChanceToSpawn(APrimalDinoCharacter*)", aChar); }
	static bool IsPointUnderwater(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, bool bFastPath, float MinimumWaterHeight, bool bIgnoreVacuumStructures, bool bIgnorePainCausingVolumes, float AdditionalZOffsetWhenOnOcean, float CheckForVolumesRadius) { return NativeCall<bool, UWorld*, UE::Math::TVector<double>*, bool, float, bool, bool, float, float>(nullptr, "ABiomeZoneVolume.IsPointUnderwater(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,float,float)", ForWorld, AtPoint, bFastPath, MinimumWaterHeight, bIgnoreVacuumStructures, bIgnorePainCausingVolumes, AdditionalZOffsetWhenOnOcean, CheckForVolumesRadius); }
	static APhysicsVolume* GetWaterVolumeAtPoint(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, bool bFastPath, float MinimumWaterHeight, bool bIgnoreVacuumStructures, bool bIgnorePainCausingVolumes, float AdditionalZOffsetWhenOnOcean, float CheckForVolumesRadius) { if (!AtPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<APhysicsVolume *, UWorld *, UE :: Math :: TVector < double >, bool, float, bool, bool, float, float>(nullptr, "ABiomeZoneVolume.GetWaterVolumeAtPoint(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,float,float)", ForWorld, *AtPoint, bFastPath, MinimumWaterHeight, bIgnoreVacuumStructures, bIgnorePainCausingVolumes, AdditionalZOffsetWhenOnOcean, CheckForVolumesRadius); }
	static __int64 IsPointInVacuumBase(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint) { return NativeCall<__int64, UWorld*, UE::Math::TVector<double>*>(nullptr, "ABiomeZoneVolume.IsPointInVacuumBase(UWorld*,UE::Math::TVector<double>)", ForWorld, AtPoint); }
	static AActor* GetPhysicsVolumeAtLocation(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint, bool bFastPath) { return NativeCall<AActor*, UWorld*, UE::Math::TVector<double>*, bool>(nullptr, "ABiomeZoneVolume.GetPhysicsVolumeAtLocation(UWorld*,UE::Math::TVector<double>,bool)", ForWorld, AtPoint, bFastPath); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ABiomeZoneVolume"); }

	EBiomeZone& BiomeZoneField() { return *GetNativePointerField<EBiomeZone*>(this, "ABiomeZoneVolume.BiomeZone"); }
	bool& bOnlyApplyAdjustmentRateValuesOutdoorsField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bOnlyApplyAdjustmentRateValuesOutdoors"); }
	bool& bDisableDayTransitionSoundsField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bDisableDayTransitionSounds"); }
	static bool IsPointUnderReverseVacuumCompartment(UWorld* ForWorld, UE::Math::TVector<double>* AtPoint) { if (!AtPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UWorld *, UE :: Math :: TVector < double >>(nullptr, "ABiomeZoneVolume.IsPointUnderReverseVacuumCompartment(UWorld*,UE::Math::TVector<double>)", ForWorld, *AtPoint); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ABiomeZoneVolume.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ABiomeZoneVolume.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	static void GetAllBiomeZones(UWorld* World, TArray<ABiomeZoneVolume*, TSizedDefaultAllocator<32> >& BiomeZones) { NativeCall<void, UWorld*, TArray<ABiomeZoneVolume*, TSizedDefaultAllocator<32> >&>(nullptr, "ABiomeZoneVolume.GetAllBiomeZones(UWorld*,TArray<ABiomeZoneVolume*,TSizedDefaultAllocator<32>>&)", World, BiomeZones); }
};