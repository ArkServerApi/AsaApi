#pragma once


struct FAggroEntry
{
	// Fields

	TWeakObjectPtr<AActor const >& AttackerField() { return *GetNativePointerField<TWeakObjectPtr<AActor const >*>(this, "FAggroEntry.Attacker"); }
	float& AggroFactorField() { return *GetNativePointerField<float*>(this, "FAggroEntry.AggroFactor"); }
	long double& LastAggroHitTimeField() { return *GetNativePointerField<long double*>(this, "FAggroEntry.LastAggroHitTime"); }

	// Bitfields

	// Functions
};