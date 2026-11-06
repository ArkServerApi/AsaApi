#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UMissionListEntryWidget : public UBaseSelectableButtonWidget
{
public:
	UMissionListEntryWidget() = delete;
	~UMissionListEntryWidget() = delete;
	UMissionListEntryWidget(const UMissionListEntryWidget&) = delete;
	UMissionListEntryWidget& operator=(const UMissionListEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionListEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionListEntryWidget"); }

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionListEntryWidget.ItemLabelName"); }
	float& DistanceToDispatcherField() { return *GetNativePointerField<float*>(this, "UMissionListEntryWidget.DistanceToDispatcher"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UMissionListEntryWidget.Button"); }
	float GetDistanceToDispatcher() { return NativeCall<float>(this, "UMissionListEntryWidget.GetDistanceToDispatcher()"); }
	bool IsSelected() { return NativeCall<bool>(this, "UMissionListEntryWidget.IsSelected()"); }
	void InitializeWithClick() { NativeCall<void>(this, "UMissionListEntryWidget.InitializeWithClick()"); }
	void SetIsEnabled(bool bWithEnabled) { NativeCall<void, bool>(this, "UMissionListEntryWidget.SetIsEnabled(bool)", bWithEnabled); }
	void SetDistanceToDispatcher(float InDistance) { NativeCall<void, float>(this, "UMissionListEntryWidget.SetDistanceToDispatcher(float)", InDistance); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UMissionListEntryWidget.GetButton()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UMissionListEntryWidget.SetSelected(bool)", bSelected); }
};
