#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UDataListValueGeneric : public UPrimalUserWidget
{
public:
	UDataListValueGeneric() = delete;
	~UDataListValueGeneric() = delete;
	UDataListValueGeneric(const UDataListValueGeneric&) = delete;
	UDataListValueGeneric& operator=(const UDataListValueGeneric&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListValueGeneric"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListValueGeneric"); }

	FOnFloatValueGenericChangedEvent& OnValueChangedField() { return *GetNativePointerField<FOnFloatValueGenericChangedEvent*>(this, "UDataListValueGeneric.OnValueChanged"); }
	FOnEditableOverridedValueCommittedEvent& OnTextCommittedField() { return *GetNativePointerField<FOnEditableOverridedValueCommittedEvent*>(this, "UDataListValueGeneric.OnTextCommitted"); }
	FText& OptionSelectedTextField() { return *GetNativePointerField<FText*>(this, "UDataListValueGeneric.OptionSelectedText"); }
	bool& bShowOverrideValueField() { return *GetNativePointerField<bool*>(this, "UDataListValueGeneric.bShowOverrideValue"); }
	FText& OverridedOptionSelectedTextField() { return *GetNativePointerField<FText*>(this, "UDataListValueGeneric.OverridedOptionSelectedText"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListValueGeneric.Color"); }
	UE::Math::TVector2<double>& ColorPickerValueField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "UDataListValueGeneric.ColorPickerValue"); }
	int& widgetFramesField() { return *GetNativePointerField<int*>(this, "UDataListValueGeneric.widgetFrames"); }
	void HandleOnValueChanged(float InValue) { NativeCall<void, float>(this, "UDataListValueGeneric.HandleOnValueChanged(float)", InValue); }
	void SetFloatValue(float Value) { NativeCall<void, float>(this, "UDataListValueGeneric.SetFloatValue(float)", Value); }
	USlider* HasExpandedSlider() { return NativeCall<USlider*>(this, "UDataListValueGeneric.HasExpandedSlider()"); }
	void SetIsSelectedBP(bool Selected) { NativeCall<void, bool>(this, "UDataListValueGeneric.SetIsSelectedBP(bool)", Selected); }
	void HandleOnOverrideValueChanged(const FText& Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText&, ETextCommit::Type>(this, "UDataListValueGeneric.HandleOnOverrideValueChanged(FText&,ETextCommit::Type)", Text, CommitMethod); }
	void SetOverridedFloatValue(float Value) { NativeCall<void, float>(this, "UDataListValueGeneric.SetOverridedFloatValue(float)", Value); }
	void UpdateColorPicker(UE::Math::TVector2<double>* ColorPickerSliderValue) { if (!ColorPickerSliderValue) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector2 < double >>(this, "UDataListValueGeneric.UpdateColorPicker(UE::Math::TVector2<double>)", *ColorPickerSliderValue); }
	void SetParameterValue(const FString& Value, bool bPreventCallParent) { NativeCall<void, const FString&, bool>(this, "UDataListValueGeneric.SetParameterValue(FString&,bool)", Value, bPreventCallParent); }
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UDataListValueGeneric.NativeTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void CloseSlider() { NativeCall<void>(this, "UDataListValueGeneric.CloseSlider()"); }
	void FocusOnWidget() { NativeCall<void>(this, "UDataListValueGeneric.FocusOnWidget()"); }
	float GetFloatValue() { return NativeCall<float>(this, "UDataListValueGeneric.GetFloatValue()"); }
	void OnOverridedParameterValue(const FString& Value, bool bPreventCallParent) { NativeCall<void, const FString&, bool>(this, "UDataListValueGeneric.OnOverridedParameterValue(FString&,bool)", Value, bPreventCallParent); }
	float GetOverridedFloatValue() { return NativeCall<float>(this, "UDataListValueGeneric.GetOverridedFloatValue()"); }
	UWidget* CycleDataValues(UWidget* CurrentHighlighted, int Dir) { return NativeCall<UWidget*, UWidget*, int>(this, "UDataListValueGeneric.CycleDataValues(UWidget*,int)", CurrentHighlighted, Dir); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >* GetAllValueWidgets(TArray<UWidget*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UWidget*, TSizedDefaultAllocator<32> >*, TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UDataListValueGeneric.GetAllValueWidgets()", result); }
	bool GetIsSelectedBP() { return NativeCall<bool>(this, "UDataListValueGeneric.GetIsSelectedBP()"); }
	void SetIntValue(int Value) { NativeCall<void, int>(this, "UDataListValueGeneric.SetIntValue(int)", Value); }
	bool GetBoolValue() { return NativeCall<bool>(this, "UDataListValueGeneric.GetBoolValue()"); }
	bool IsExpanded() { return NativeCall<bool>(this, "UDataListValueGeneric.IsExpanded()"); }
	int GetIntValue() { return NativeCall<int>(this, "UDataListValueGeneric.GetIntValue()"); }
	void SetBoolValue(bool Value) { NativeCall<void, bool>(this, "UDataListValueGeneric.SetBoolValue(bool)", Value); }
	void InitializeMe() { NativeCall<void>(this, "UDataListValueGeneric.InitializeMe()"); }
	void ExecuteCommandForPrimalUI(FName CommandName, const FBPNetExecParams& ExecParams) { NativeCall<void, FName, const FBPNetExecParams&>(this, "UDataListValueGeneric.ExecuteCommandForPrimalUI(FName,FBPNetExecParams&)", CommandName, ExecParams); }
};
