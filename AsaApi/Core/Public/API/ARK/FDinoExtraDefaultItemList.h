#pragma once


struct FDinoExtraDefaultItemList
{
	// Fields

	int& MinimumDinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoExtraDefaultItemList.MinimumDinoLevel"); }
	float& ChanceToGiveField() { return *GetNativePointerField<float*>(this, "FDinoExtraDefaultItemList.ChanceToGive"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& DefaultItemsToGiveField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FDinoExtraDefaultItemList.DefaultItemsToGive"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoExtraDefaultItemList>(); }
};