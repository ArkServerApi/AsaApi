#pragma once


struct FItemCount
{
	// Fields

	FString& StringRefField() { return *GetNativePointerField<FString*>(this, "FItemCount.StringRef"); }
	int& StackSizeField() { return *GetNativePointerField<int*>(this, "FItemCount.StackSize"); }
	int& NumStacksField() { return *GetNativePointerField<int*>(this, "FItemCount.NumStacks"); }
	float& QualityField() { return *GetNativePointerField<float*>(this, "FItemCount.Quality"); }
	bool& bAutoSlotField() { return *GetNativePointerField<bool*>(this, "FItemCount.bAutoSlot"); }
	int& SlotField() { return *GetNativePointerField<int*>(this, "FItemCount.Slot"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static FItemCount* InSlot(FItemCount* result, int Slot, const FString* StringRef, int StackSize, int NumStacks, float Quality);
};