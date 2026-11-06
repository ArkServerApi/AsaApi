#pragma once


struct FItemStatInfo
{
	float RandomizerRangeMultiplier;
	float TheRandomizerPower;
	float StateModifierScale;
	float InitialValueConstant;
	float RatingValueMultiplier;
	float AbsoluteMaxValue;
	int DefaultModifierValue;
	int RandomizerRangeOverride;
	unsigned __int32 bUsed : 1;
	unsigned __int32 bCalculateAsPercent : 1;
	unsigned __int32 bDisplayAsPercent : 1;
	unsigned __int32 bRequiresSubmerged : 1;
	unsigned __int32 bPreventIfSubmerged : 1;
	unsigned __int32 bHideStatFromTooltip : 1;

	// Fields

	int& DefaultModifierValueField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.DefaultModifierValue"); }
	int& RandomizerRangeOverrideField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.RandomizerRangeOverride"); }
	float& RandomizerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RandomizerRangeMultiplier"); }
	float& TheRandomizerPowerField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.TheRandomizerPower"); }
	float& StateModifierScaleField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.StateModifierScale"); }
	float& InitialValueConstantField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.InitialValueConstant"); }
	float& RatingValueMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RatingValueMultiplier"); }
	float& AbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.AbsoluteMaxValue"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bUsedField() { return { this, "FItemStatInfo.bUsed" }; }
	BitFieldValue<bool, unsigned __int32> bCalculateAsPercentField() { return { this, "FItemStatInfo.bCalculateAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayAsPercentField() { return { this, "FItemStatInfo.bDisplayAsPercent" }; }
	BitFieldValue<bool, unsigned __int32> bRequiresSubmergedField() { return { this, "FItemStatInfo.bRequiresSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bPreventIfSubmergedField() { return { this, "FItemStatInfo.bPreventIfSubmerged" }; }
	BitFieldValue<bool, unsigned __int32> bHideStatFromTooltipField() { return { this, "FItemStatInfo.bHideStatFromTooltip" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemStatInfo>(); }
	float GetItemStatModifier(unsigned __int16 ItemStatValue) { return NativeCall<float, unsigned __int16>(this, "FItemStatInfo.GetItemStatModifier(unsignedshort)", ItemStatValue); }
	unsigned __int16 GetRandomValue(float QualityLevel, float MinRandomQuality, float* outRandonMultiplier) { return NativeCall<unsigned __int16, float, float, float*>(this, "FItemStatInfo.GetRandomValue(float,float,float*)", QualityLevel, MinRandomQuality, outRandonMultiplier); }
};