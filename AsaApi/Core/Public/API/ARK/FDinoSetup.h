#pragma once


struct FDinoSetup
{
	// Fields

	TSubclassOf<APrimalDinoCharacter>& DinoTypeField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoType"); }
	TSoftClassPtr<APrimalDinoCharacter>& DinoSoftReferenceField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "FDinoSetup.DinoSoftReference"); }
	FString& DinoBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoBlueprintPath"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoName"); }
	int& DinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoSetup.DinoLevel"); }
	FieldArray<unsigned __int8, 12> BasePointsPerStatField() { return { this, "FDinoSetup.BasePointsPerStat" }; }
	FieldArray<unsigned __int8, 12> PlayerAddedPointsPerStatField() { return { this, "FDinoSetup.PlayerAddedPointsPerStat" }; }
	UE::Math::TVector<double>& SpawnOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FDinoSetup.SpawnOffset"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >& PrioritizeStatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, TSizedDefaultAllocator<32> >*>(this, "FDinoSetup.PrioritizeStats"); }
	TArray<FItemSetup, TSizedDefaultAllocator<32> >& TamedDinoInventoryField() { return *GetNativePointerField<TArray<FItemSetup, TSizedDefaultAllocator<32> >*>(this, "FDinoSetup.TamedDinoInventory"); }
	TSubclassOf<UPrimalItem>& SaddleTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FDinoSetup.SaddleType"); }
	TSoftClassPtr<UPrimalItem>& SaddleSoftReferenceField() { return *GetNativePointerField<TSoftClassPtr<UPrimalItem>*>(this, "FDinoSetup.SaddleSoftReference"); }
	FString& SaddleBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FDinoSetup.SaddleBlueprintPath"); }
	float& SaddleQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleQuality"); }
	float& SaddleMinRandomQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleMinRandomQuality"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetup.RandomWeight"); }
	float& WildRandomScaleOverrideField() { return *GetNativePointerField<float*>(this, "FDinoSetup.WildRandomScaleOverride"); }
	float& DinoImprintingQualityField() { return *GetNativePointerField<float*>(this, "FDinoSetup.DinoImprintingQuality"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsTamed() { return { this, "FDinoSetup.bIsTamed" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaxTameLimit() { return { this, "FDinoSetup.bIgnoreMaxTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bPreventSpawningAtTameLimit() { return { this, "FDinoSetup.bPreventSpawningAtTameLimit" }; }
	BitFieldValue<bool, unsigned __int32> bBlockTamedDialog() { return { this, "FDinoSetup.bBlockTamedDialog" }; }
	BitFieldValue<bool, unsigned __int32> bAutoEquipSaddle() { return { this, "FDinoSetup.bAutoEquipSaddle" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel() { return { this, "FDinoSetup.bUseFixedSpawnLevel" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoSetup>(); }
	FDinoSetup* operator=(const FDinoSetup* __that) { return NativeCall<FDinoSetup*, const FDinoSetup*>(this, "FDinoSetup.operator=(FDinoSetup&)", __that); }
	FDinoSetup* operator=(FDinoSetup* __that) { return NativeCall<FDinoSetup*, FDinoSetup*>(this, "FDinoSetup.operator=(FDinoSetup&)", __that); }
	// 	void SetBaseLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetBaseLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
	// FUNCTION MISSING: FDinoSetup.SetBaseLevels(EPrimalCharacterStatusValue::Type,int)
	// 	void SetConstantSaddleQuality(float Quality) { NativeCall<void, float>(this, "FDinoSetup.SetConstantSaddleQuality(float)", Quality); }
	// FUNCTION MISSING: FDinoSetup.SetConstantSaddleQuality(float)
	// 	void SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type StatusType, int Value) { NativeCall<void, EPrimalCharacterStatusValue::Type, int>(this, "FDinoSetup.SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type,int)", StatusType, Value); }
	// FUNCTION MISSING: FDinoSetup.SetPlayerAddedLevels(EPrimalCharacterStatusValue::Type,int)
};