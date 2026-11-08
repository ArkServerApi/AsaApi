#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UVisualSettingsUI : public UPrimalUI
{
public:
	UVisualSettingsUI() = delete;
	~UVisualSettingsUI() = delete;
	UVisualSettingsUI(const UVisualSettingsUI&) = delete;
	UVisualSettingsUI& operator=(const UVisualSettingsUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVisualSettingsUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVisualSettingsUI"); }

	UCustomButtonWidget*& ApplyButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UVisualSettingsUI.ApplyButton"); }
	UCustomButtonWidget*& CancelButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UVisualSettingsUI.CancelButton"); }
	UDataListValueGeneric*& GammaCorrectionSliderField() { return *GetNativePointerField<UDataListValueGeneric**>(this, "UVisualSettingsUI.GammaCorrectionSlider"); }
	UDataListValueGeneric*& HDRValueSliderField() { return *GetNativePointerField<UDataListValueGeneric**>(this, "UVisualSettingsUI.HDRValueSlider"); }
	UDataListValueGeneric*& EnableHDRCheckBoxField() { return *GetNativePointerField<UDataListValueGeneric**>(this, "UVisualSettingsUI.EnableHDRCheckBox"); }
	UComboBoxString*& OcioColorPresetComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UVisualSettingsUI.OcioColorPresetComboBox"); }
	UComboBoxString*& OcioColorViewComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UVisualSettingsUI.OcioColorViewComboBox"); }
	UComboBoxString*& OcioDisplayViewComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UVisualSettingsUI.OcioDisplayViewComboBox"); }
	bool& bIsLoadingField() { return *GetNativePointerField<bool*>(this, "UVisualSettingsUI.bIsLoading"); }
	TArray<UOpenColorIOConfiguration*, TSizedDefaultAllocator<32> >& ArrayOCIODisplayConfigurationField() { return *GetNativePointerField<TArray<UOpenColorIOConfiguration*, TSizedDefaultAllocator<32> >*>(this, "UVisualSettingsUI.ArrayOCIODisplayConfiguration"); }
	float& HDRDisplayMinLuminanceField() { return *GetNativePointerField<float*>(this, "UVisualSettingsUI.HDRDisplayMinLuminance"); }
	float& HDRDisplayMidLuminanceField() { return *GetNativePointerField<float*>(this, "UVisualSettingsUI.HDRDisplayMidLuminance"); }
	float& HDRDisplayMaxLuminanceField() { return *GetNativePointerField<float*>(this, "UVisualSettingsUI.HDRDisplayMaxLuminance"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UVisualSettingsUI.RemoveFromViewport()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UVisualSettingsUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UVisualSettingsUI.ClickedButton(UWidget*)", clickedWidget); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UVisualSettingsUI.AddToViewport(int)", ZOrder); }
	void OnVirtualCursorinit() { NativeCall<void>(this, "UVisualSettingsUI.OnVirtualCursorinit()"); }
	void ApplyDefaultSettings() { NativeCall<void>(this, "UVisualSettingsUI.ApplyDefaultSettings()"); }
	void ApplyOcioSettings() { NativeCall<void>(this, "UVisualSettingsUI.ApplyOcioSettings()"); }
};
