#pragma once


struct FLootTableEntry
{
	// Fields

	TEnumAsByte<enum ELootItemType::Type>& LootItemTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELootItemType::Type>*>(this, "FLootTableEntry.LootItemType"); }
	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& LootItemClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FLootTableEntry.LootItemClasses"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FLootTableEntry.Weight"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QuantityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QuantityCurve"); }
	int& MinQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MinQuantity"); }
	int& MaxQuantityField() { return *GetNativePointerField<int*>(this, "FLootTableEntry.MaxQuantity"); }
	TEnumAsByte<enum ESimpleCurve::Type>& QualityCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FLootTableEntry.QualityCurve"); }
	UE::Math::TVector2<double>& QualityRangeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FLootTableEntry.QualityRange"); }

	// Bitfields

	// Functions

	UScriptStruct* StaticStruct() { return FindScriptStruct<FLootTableEntry>(); }
};