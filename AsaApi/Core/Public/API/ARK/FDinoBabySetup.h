#pragma once


struct FDinoBabySetup
{
	// Fields

	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoBabySetup.DinoNameTag"); }
	//TArray<FBoneModifierRangeArray, TSizedDefaultAllocator<32> >& BabyBoneModifierRangesField() { return *GetNativePointerField<TArray<FBoneModifierRangeArray, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.BabyBoneModifierRanges"); }
	TArray<float, TSizedDefaultAllocator<32> >& WildRandomScaleRangeWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.WildRandomScaleRangeWeights"); }
	//TArray<FRandValueRange, TSizedDefaultAllocator<32> >& WildRandomScaleRangesField() { return *GetNativePointerField<TArray<FRandValueRange, TSizedDefaultAllocator<32> >*>(this, "FDinoBabySetup.WildRandomScaleRanges"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoBabySetup>(); }
};