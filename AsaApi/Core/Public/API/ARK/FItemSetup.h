#pragma once


struct FItemSetup
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemSetup.ItemType"); }
	FString& ItemBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FItemSetup.ItemBlueprintPath"); }
	float& MinQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MinQuality"); }
	float& MaxQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MaxQuality"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemSetup.Quantity"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAutoEquip() { return { this, "FItemSetup.bAutoEquip" }; }
	BitFieldValue<bool, unsigned __int32> bDontStack() { return { this, "FItemSetup.bDontStack" }; }
	BitFieldValue<bool, unsigned __int32> bForceBlueprint() { return { this, "FItemSetup.bForceBlueprint" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemSetup>(); }
};