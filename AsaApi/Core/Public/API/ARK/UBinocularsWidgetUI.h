#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UBinocularsWidgetUI : public UPrimalUI
{
public:
	UBinocularsWidgetUI() = delete;
	~UBinocularsWidgetUI() = delete;
	UBinocularsWidgetUI(const UBinocularsWidgetUI&) = delete;
	UBinocularsWidgetUI& operator=(const UBinocularsWidgetUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBinocularsWidgetUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBinocularsWidgetUI"); }

	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& TextInfoArrayField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UBinocularsWidgetUI.TextInfoArray"); }
	FName& GamepadUnlockButtonNameField() { return *GetNativePointerField<FName*>(this, "UBinocularsWidgetUI.GamepadUnlockButtonName"); }
	UImage*& GamepadUnlockButtonField() { return *GetNativePointerField<UImage**>(this, "UBinocularsWidgetUI.GamepadUnlockButton"); }
	UPanelWidget*& InfoPanelStructureField() { return *GetNativePointerField<UPanelWidget**>(this, "UBinocularsWidgetUI.InfoPanelStructure"); }
	FString* GetCharNumStatPointsString(FString* result, APrimalCharacter* Char, EPrimalCharacterStatusValue::Type valueType) { return NativeCall<FString*, FString*, APrimalCharacter*, EPrimalCharacterStatusValue::Type>(this, "UBinocularsWidgetUI.GetCharNumStatPointsString(APrimalCharacter*,EPrimalCharacterStatusValue::Type)", result, Char, valueType); }
	float GetCharHealthCurrentStatus(APrimalCharacter* Char) { return NativeCall<float, APrimalCharacter*>(this, "UBinocularsWidgetUI.GetCharHealthCurrentStatus(APrimalCharacter*)", Char); }
	UClass* GetDinoParentClass(APrimalCharacter* Char) { return NativeCall<UClass*, APrimalCharacter*>(this, "UBinocularsWidgetUI.GetDinoParentClass(APrimalCharacter*)", Char); }
	void SetupStructureTooltip(APrimalStructure* Structure) { NativeCall<void, APrimalStructure*>(this, "UBinocularsWidgetUI.SetupStructureTooltip(APrimalStructure*)", Structure); }
	float GetCharHealthMaxStatus(APrimalCharacter* Char) { return NativeCall<float, APrimalCharacter*>(this, "UBinocularsWidgetUI.GetCharHealthMaxStatus(APrimalCharacter*)", Char); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UBinocularsWidgetUI.AddToViewport(int)", ZOrder); }
	float GetCharTorpidCurrentStatus(APrimalCharacter* Char) { return NativeCall<float, APrimalCharacter*>(this, "UBinocularsWidgetUI.GetCharTorpidCurrentStatus(APrimalCharacter*)", Char); }
	void RequestDinoAncestors(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "UBinocularsWidgetUI.RequestDinoAncestors(APrimalDinoCharacter*)", Dino); }
	float GetCharTorpidMaxStatus(APrimalCharacter* Char) { return NativeCall<float, APrimalCharacter*>(this, "UBinocularsWidgetUI.GetCharTorpidMaxStatus(APrimalCharacter*)", Char); }
	bool GetCharUsesStat(APrimalCharacter* Char, EPrimalCharacterStatusValue::Type valueType) { return NativeCall<bool, APrimalCharacter*, EPrimalCharacterStatusValue::Type>(this, "UBinocularsWidgetUI.GetCharUsesStat(APrimalCharacter*,EPrimalCharacterStatusValue::Type)", Char, valueType); }
};
