#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalItemTrait : UObject
{
public:
	UPrimalItemTrait() = delete;
	~UPrimalItemTrait() = delete;
	UPrimalItemTrait(const UPrimalItemTrait&) = delete;
	UPrimalItemTrait& operator=(const UPrimalItemTrait&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItemTrait"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItemTrait"); }



	void OnTraitInitialized_Implementation(UPrimalItem* ForItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalItemTrait.OnTraitInitialized_Implementation(UPrimalItem*)", ForItem); }
	void OnTraitRemoved(UPrimalItem* FromItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalItemTrait.OnTraitRemoved(UPrimalItem*)", FromItem); }
	void OnTraitAdded_Implementation(UPrimalItem* ToItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalItemTrait.OnTraitAdded_Implementation(UPrimalItem*)", ToItem); }
	void OnTraitInitialized(UPrimalItem* ForItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalItemTrait.OnTraitInitialized(UPrimalItem*)", ForItem); }
	void OnTraitRemoved_Implementation(UPrimalItem* FromItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalItemTrait.OnTraitRemoved_Implementation(UPrimalItem*)", FromItem); }

	BitFieldValue<bool, unsigned char> bUseBPGetTraitModifier() { return { this, "UPrimalItemTrait.bUseBPGetTraitModifier"}; }
	BitFieldValue<bool, unsigned char> bReplicateOnItemTraitEffectActivated() { return { this, "UPrimalItemTrait.bReplicateOnItemTraitEffectActivated"}; }

	UTexture2D*& IconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemTrait.Icon"); }

	FName& NameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemTrait.Name"); }
	FString& PrefixField() { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.Prefix"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.DisplayName"); }
	FString& EffectDescriptionTemplateField() { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.EffectDescriptionTemplate"); }
	FString& EffectDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.EffectDescription"); }
	FColor& EffectDescriptionColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalItemTrait.EffectDescriptionColor"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.Description"); }
	void OnTraitEffectActivated(UPrimalItem* ForItem, float Value, const FBPNetExecParams& AdditionalParams) { NativeCall<void, UPrimalItem*, float, const FBPNetExecParams&>(this, "UPrimalItemTrait.OnTraitEffectActivated(UPrimalItem*,float,FBPNetExecParams&)", ForItem, Value, AdditionalParams); }
	bool BPGetTraitModifier(const UPrimalItem* ForItem, FItemTraitModifier& OutModifier, int ModifierIndex) { return NativeCall<bool, const UPrimalItem*, FItemTraitModifier&, int>(this, "UPrimalItemTrait.BPGetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)", ForItem, OutModifier, ModifierIndex); }
	void OnTraitEffectActivated_Implementation(UPrimalItem* ForItem, float Value, const FBPNetExecParams& AdditionalParams) { NativeCall<void, UPrimalItem*, float, const FBPNetExecParams&>(this, "UPrimalItemTrait.OnTraitEffectActivated_Implementation(UPrimalItem*,float,FBPNetExecParams&)", ForItem, Value, AdditionalParams); }
	bool GetTraitModifier(const UPrimalItem* ForItem, FItemTraitModifier& OutModifier, int ModifierIndex) { return NativeCall<bool, const UPrimalItem*, FItemTraitModifier&, int>(this, "UPrimalItemTrait.GetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)", ForItem, OutModifier, ModifierIndex); }
};
