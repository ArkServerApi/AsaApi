#pragma once


struct FMultiUseEntry
{
	// Fields

	TObjectPtr<UActorComponent>& ForComponentField() { return *GetNativePointerField<TObjectPtr<UActorComponent>*>(this, "FMultiUseEntry.ForComponent"); }
	FString& UseStringField() { return *GetNativePointerField<FString*>(this, "FMultiUseEntry.UseString"); }
	int& UseIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseIndex"); }
	int& PriorityField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.Priority"); }
	TObjectPtr<AActor>& BPDrawEntryTargetRefField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "FMultiUseEntry.BPDrawEntryTargetRef"); }
	int& WheelCategoryField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.WheelCategory"); }
	FColor& DisableUseColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.DisableUseColor"); }
	FColor& UseTextColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.UseTextColor"); }
	float& EntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.EntryActivationTimer"); }
	float& DefaultEntryActivationTimerField() { return *GetNativePointerField<float*>(this, "FMultiUseEntry.DefaultEntryActivationTimer"); }
	TObjectPtr<USoundBase>& ActivationSoundField() { return *GetNativePointerField<TObjectPtr<USoundBase>*>(this, "FMultiUseEntry.ActivationSound"); }
	int& UseInventoryButtonStyleOverrideIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.UseInventoryButtonStyleOverrideIndex"); }
	int& AdditionalButtonsIndexField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.AdditionalButtonsIndex"); }
	TObjectPtr<UTexture2D>& IconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FMultiUseEntry.Icon"); }
	FColor& UseIconColorField() { return *GetNativePointerField<FColor*>(this, "FMultiUseEntry.UseIconColor"); }
	TObjectPtr<UObject>& SponsorIconObjectField() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "FMultiUseEntry.SponsorIconObject"); }
	int& OpenWheelCategoryField() { return *GetNativePointerField<int*>(this, "FMultiUseEntry.OpenWheelCategory"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHideFromUI() { return { this, "FMultiUseEntry.bHideFromUI" }; }
	BitFieldValue<bool, unsigned __int32> bDisableUse() { return { this, "FMultiUseEntry.bDisableUse" }; }
	BitFieldValue<bool, unsigned __int32> bHideActivationKey() { return { this, "FMultiUseEntry.bHideActivationKey" }; }
	BitFieldValue<bool, unsigned __int32> bRepeatMultiUse() { return { this, "FMultiUseEntry.bRepeatMultiUse" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUI() { return { this, "FMultiUseEntry.bDisplayOnInventoryUI" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUISecondary() { return { this, "FMultiUseEntry.bDisplayOnInventoryUISecondary" }; }
	BitFieldValue<bool, unsigned __int32> bHarvestable() { return { this, "FMultiUseEntry.bHarvestable" }; }
	BitFieldValue<bool, unsigned __int32> bIsSecondaryUse() { return { this, "FMultiUseEntry.bIsSecondaryUse" }; }
	BitFieldValue<bool, unsigned __int32> bPersistWheelOnActivation() { return { this, "FMultiUseEntry.bPersistWheelOnActivation" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideUseTextColor() { return { this, "FMultiUseEntry.bOverrideUseTextColor" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayOnInventoryUITertiary() { return { this, "FMultiUseEntry.bDisplayOnInventoryUITertiary" }; }
	BitFieldValue<bool, unsigned __int32> bClientSideOnly() { return { this, "FMultiUseEntry.bClientSideOnly" }; }
	BitFieldValue<bool, unsigned __int32> bPersistWheelRequiresDirectActivation() { return { this, "FMultiUseEntry.bPersistWheelRequiresDirectActivation" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry() { return { this, "FMultiUseEntry.bUseBPDrawEntry" }; }
	BitFieldValue<bool, unsigned __int32> bDrawTooltip() { return { this, "FMultiUseEntry.bDrawTooltip" }; }
	BitFieldValue<bool, unsigned __int32> bIsDynamicOption() { return { this, "FMultiUseEntry.bIsDynamicOption" }; }
	BitFieldValue<bool, unsigned __int32> bUseOldMultiUseOptionWithText() { return { this, "FMultiUseEntry.bUseOldMultiUseOptionWithText" }; }

	// Functions

	void operator=(const FMultiUseEntry* InVal) { NativeCall<void, const FMultiUseEntry*>(this, "FMultiUseEntry.operator=(FMultiUseEntry&)", InVal); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FMultiUseEntry>(); }
};