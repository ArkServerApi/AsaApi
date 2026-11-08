#pragma once


struct FPointOfInterestData
{
	// Fields

	unsigned __int8& PointTypeField() { return *GetNativePointerField<unsigned __int8*>(this, "FPointOfInterestData.PointType"); }
	FName& PointTagField() { return *GetNativePointerField<FName*>(this, "FPointOfInterestData.PointTag"); }
	FString& PointTitleField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointTitle"); }
	FString& PointDescriptionField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointDescription"); }
	UE::Math::TVector<double>& PointLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPointOfInterestData.PointLocation"); }
	UE::Math::TRotator<double>& PointRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "FPointOfInterestData.PointRotation"); }
	AActor*& PointActorField() { return *GetNativePointerField<AActor**>(this, "FPointOfInterestData.PointActor"); }
	float& PointVisibleDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDistance"); }
	float& PointVisibleDotProductRangeField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDotProductRange"); }
	UTexture2D*& PointIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPointOfInterestData.PointIcon"); }
	UParticleSystem*& ViewedPointVFXField() { return *GetNativePointerField<UParticleSystem**>(this, "FPointOfInterestData.ViewedPointVFX"); }
	USoundCue*& ViewedPointSFXField() { return *GetNativePointerField<USoundCue**>(this, "FPointOfInterestData.ViewedPointSFX"); }
	//TSubclassOf<APointOfInterestCosmeticActor_Base>& PointCosmeticActorClassField() { return *GetNativePointerField<TSubclassOf<APointOfInterestCosmeticActor_Base>*>(this, "FPointOfInterestData.PointCosmeticActorClass"); }
	UE::Math::TTransform<double>& PointCosmeticActorOffsetTransformField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "FPointOfInterestData.PointCosmeticActorOffsetTransform"); }
	USoundBase*& LocationAddedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPointOfInterestData.LocationAddedSound"); }
	USoundBase*& LocationReachedSoundField() { return *GetNativePointerField<USoundBase**>(this, "FPointOfInterestData.LocationReachedSound"); }
	UE::Math::TVector<double>& WidgetLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FPointOfInterestData.WidgetLocationOffset"); }
	float& WidgetHiddenDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.WidgetHiddenDistance"); }
	FLinearColor& IndicatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IndicatorColor"); }
	FLinearColor& IconColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IconColor"); }
	float& ProgressValueField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.ProgressValue"); }
	FString& ProgressLabelTextField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.ProgressLabelText"); }
	FLinearColor& ProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressBarColor"); }
	FLinearColor& ProgressLabelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressLabelColor"); }
	int& CharacterIDField() { return *GetNativePointerField<int*>(this, "FPointOfInterestData.CharacterID"); }
	float& AlphaMultiplierField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.AlphaMultiplier"); }
	float& ScaleMultiplierField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.ScaleMultiplier"); }
	float& SecondaryProgressValueField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.SecondaryProgressValue"); }
	FLinearColor& SecondaryProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.SecondaryProgressBarColor"); }
	int& UseDismissIndexField() { return *GetNativePointerField<int*>(this, "FPointOfInterestData.UseDismissIndex"); }
	AActor*& DismissActorActionField() { return *GetNativePointerField<AActor**>(this, "FPointOfInterestData.DismissActorAction"); }
	FString& DistanceStringField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.DistanceString"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bHidePointOfInterestTitleBar() { return { this, "FPointOfInterestData.bHidePointOfInterestTitleBar" }; }
	BitFieldValue<bool, unsigned __int32> bPointTagValidated() { return { this, "FPointOfInterestData.bPointTagValidated" }; }
	BitFieldValue<bool, unsigned __int32> bPointTagRequiresValidation() { return { this, "FPointOfInterestData.bPointTagRequiresValidation" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOffScreen() { return { this, "FPointOfInterestData.bOnlyVisibleOffScreen" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOnScreen() { return { this, "FPointOfInterestData.bOnlyVisibleOnScreen" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysVisible() { return { this, "FPointOfInterestData.bAlwaysVisible" }; }
	BitFieldValue<bool, unsigned __int32> bUsePulseAnimation() { return { this, "FPointOfInterestData.bUsePulseAnimation" }; }
	BitFieldValue<bool, unsigned __int32> bShowProgress() { return { this, "FPointOfInterestData.bShowProgress" }; }
	BitFieldValue<bool, unsigned __int32> bShowProgressLabelWhenOffScreen() { return { this, "FPointOfInterestData.bShowProgressLabelWhenOffScreen" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyVisibleOnMap() { return { this, "FPointOfInterestData.bOnlyVisibleOnMap" }; }
	BitFieldValue<bool, unsigned __int32> CharacterIsPlayer() { return { this, "FPointOfInterestData.CharacterIsPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bShowSecondaryProgress() { return { this, "FPointOfInterestData.bShowSecondaryProgress" }; }
	BitFieldValue<bool, unsigned __int32> bCanDismissPOI() { return { this, "FPointOfInterestData.bCanDismissPOI" }; }
	BitFieldValue<bool, unsigned __int32> bPreventTextClose() { return { this, "FPointOfInterestData.bPreventTextClose" }; }

	// Functions

	FPointOfInterestData* operator=(const FPointOfInterestData* __that) { return NativeCall<FPointOfInterestData*, const FPointOfInterestData*>(this, "FPointOfInterestData.operator=(FPointOfInterestData&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPointOfInterestData>(); }
	// 	bool IsPointInitialized() { return NativeCall<bool>(this, "FPointOfInterestData.IsPointInitialized()"); }
	// FUNCTION MISSING: FPointOfInterestData.IsPointInitialized()
};