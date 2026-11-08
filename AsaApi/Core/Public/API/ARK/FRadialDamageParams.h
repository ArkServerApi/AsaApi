#pragma once


struct FRadialDamageParams
{
	// Fields

	float& BaseDamageField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.BaseDamage"); }
	float& MinimumDamageField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.MinimumDamage"); }
	float& InnerRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.InnerRadius"); }
	float& OuterRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.OuterRadius"); }
	float& DamageFalloffField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.DamageFalloff"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FRadialDamageParams>(); }
};