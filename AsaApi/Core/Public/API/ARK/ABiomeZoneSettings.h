#pragma once


struct ABiomeZoneSettings : AActor
{
	// Fields

	FString& BiomeZoneNameField() { return *GetNativePointerField<FString*>(this, "ABiomeZoneSettings.BiomeZoneName"); }
	float& FinalTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureMultiplier"); }
	float& FinalTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureExponent"); }
	float& FinalTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureAddition"); }
	float& PreOffsetTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureMultiplier"); }
	float& PreOffsetTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureExponent"); }
	float& PreOffsetTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureAddition"); }
	float& AboveTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetThreshold"); }
	float& AboveTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetMultiplier"); }
	float& AboveTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetExponent"); }
	float& BelowTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetThreshold"); }
	float& BelowTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetMultiplier"); }
	float& BelowTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetExponent"); }
	float& AbsoluteTemperatureOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AbsoluteTemperatureOverride"); }
	float& EggRangeMaximumNumberOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggRangeMaximumNumberOverride"); }
	int& EggMaximumNumberOverrideField() { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.EggMaximumNumberOverride"); }
	float& EggChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggChanceToSpawnOverride"); }
	float& EggIntervalUnstasisChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggIntervalUnstasisChanceToSpawnOverride"); }
	TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >& OverrideEggLimitsDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>, TSizedDefaultAllocator<32> >*>(this, "ABiomeZoneSettings.OverrideEggLimitsDinoClasses"); }
	int& BiomeZonePriorityField() { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.BiomeZonePriority"); }
	float& MaxMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.MaxMultiplier"); }
	USoundBase*& OverrideCombatMusicDayField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicDay"); }
	USoundBase*& OverrideCombatMusicNightField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicNight"); }
	USoundBase*& OverrideCombatMusicDay_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicDay_Heavy"); }
	USoundBase*& OverrideCombatMusicNight_HeavyField() { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicNight_Heavy"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPreventCrops() { return { this, "ABiomeZoneSettings.bPreventCrops" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABiomeZoneSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABiomeZoneSettings"); }
};