#pragma once


struct FPrimalWheeledCharSparseClassData : FPrimalDinoCharacterSparseClassData
{
	// Fields

	//UPrimalWheeledVehicleDustType*& DustTypeField() { return *GetNativePointerField<UPrimalWheeledVehicleDustType**>(this, "FPrimalWheeledCharSparseClassData.DustType"); }
	USoundCue*& SkidSoundField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.SkidSound"); }
	USoundCue*& HonkSoundField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.HonkSound"); }
	USoundCue*& SkidSoundStopField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.SkidSoundStop"); }
	USoundCue*& LandingSoundField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.LandingSound"); }
	USoundCue*& ImpactSoundField() { return *GetNativePointerField<USoundCue**>(this, "FPrimalWheeledCharSparseClassData.ImpactSound"); }
	float& SkidFadeoutTimeField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidFadeoutTime"); }
	float& SkidThresholdVelocityField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThresholdVelocity"); }
	float& SlipThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SlipThreshold"); }
	float& SkidThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThreshold"); }
	float& SkidDurationRequiredForStopSoundField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidDurationRequiredForStopSound"); }
	float& SpringCompressionLandingThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SpringCompressionLandingThreshold"); }
	bool& bSimulationInterpolationField() { return *GetNativePointerField<bool*>(this, "FPrimalWheeledCharSparseClassData.bSimulationInterpolation"); }
	TObjectPtr<UTexture2D>& FlipMultiuseIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalWheeledCharSparseClassData.FlipMultiuseIcon"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalWheeledCharSparseClassData>(); }


	UPrimalWheeledVehicleDustType*& DustTypeField() { return *GetNativePointerField<UPrimalWheeledVehicleDustType**>(this, "FPrimalWheeledCharSparseClassData.DustType"); }
	std::add_const_t<UPrimalWheeledVehicleDustType *>& DustTypeField() const { return *GetNativePointerField<UPrimalWheeledVehicleDustType **>(this, "FPrimalWheeledCharSparseClassData.DustType"); }
	std::add_const_t<USoundCue *>& SkidSoundField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalWheeledCharSparseClassData.SkidSound"); }
	std::add_const_t<USoundCue *>& HonkSoundField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalWheeledCharSparseClassData.HonkSound"); }
	std::add_const_t<USoundCue *>& SkidSoundStopField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalWheeledCharSparseClassData.SkidSoundStop"); }
	std::add_const_t<USoundCue *>& LandingSoundField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalWheeledCharSparseClassData.LandingSound"); }
	std::add_const_t<USoundCue *>& ImpactSoundField() const { return *GetNativePointerField<USoundCue **>(this, "FPrimalWheeledCharSparseClassData.ImpactSound"); }
	std::add_const_t<float>& SkidFadeoutTimeField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidFadeoutTime"); }
	std::add_const_t<float>& SkidThresholdVelocityField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThresholdVelocity"); }
	std::add_const_t<float>& SlipThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SlipThreshold"); }
	std::add_const_t<float>& SkidThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidThreshold"); }
	std::add_const_t<float>& SkidDurationRequiredForStopSoundField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SkidDurationRequiredForStopSound"); }
	std::add_const_t<float>& SpringCompressionLandingThresholdField() const { return *GetNativePointerField<float*>(this, "FPrimalWheeledCharSparseClassData.SpringCompressionLandingThreshold"); }
	std::add_const_t<bool>& bSimulationInterpolationField() const { return *GetNativePointerField<bool*>(this, "FPrimalWheeledCharSparseClassData.bSimulationInterpolation"); }
};