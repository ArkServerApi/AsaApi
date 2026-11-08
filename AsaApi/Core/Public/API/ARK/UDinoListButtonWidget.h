#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UDinoListButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UDinoListButtonWidget() = delete;
	~UDinoListButtonWidget() = delete;
	UDinoListButtonWidget(const UDinoListButtonWidget&) = delete;
	UDinoListButtonWidget& operator=(const UDinoListButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDinoListButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDinoListButtonWidget"); }

	FName& ContextMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ContextMenuAnchorName"); }
	FName& DinoStatusLabelNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.DinoStatusLabelName"); }
	FName& ExpirationLabelNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ExpirationLabelName"); }
	FName& ExpirationLabelParentNameField() { return *GetNativePointerField<FName*>(this, "UDinoListButtonWidget.ExpirationLabelParentName"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UDinoListButtonWidget.Button"); }
	UTextBlock*& DinoStatusLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoListButtonWidget.DinoStatusLabel"); }
	UTextBlock*& ExpirationLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoListButtonWidget.ExpirationLabel"); }
	UWidget*& ExpirationLabelParentField() { return *GetNativePointerField<UWidget**>(this, "UDinoListButtonWidget.ExpirationLabelParent"); }
	USizeBox*& SelectedMarkerField() { return *GetNativePointerField<USizeBox**>(this, "UDinoListButtonWidget.SelectedMarker"); }
	FARKTributeDino& DinoInfoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UDinoListButtonWidget.DinoInfo"); }
	UMenuAnchor*& ContextMenuAnchorField() { return *GetNativePointerField<UMenuAnchor**>(this, "UDinoListButtonWidget.ContextMenuAnchor"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UDinoListButtonWidget.bAllowButtonClick"); }
	bool& bIsReadyToUploadField() { return *GetNativePointerField<bool*>(this, "UDinoListButtonWidget.bIsReadyToUpload"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UDinoListButtonWidget.bSelectOnClicked"}; }
	void OnAfterContextMenuCreated(UWidget* ContextMenu) { NativeCall<void, UWidget*>(this, "UDinoListButtonWidget.OnAfterContextMenuCreated(UWidget*)", ContextMenu); }
	void SetDinoExpiration(const FString& Expiration) { NativeCall<void, const FString&>(this, "UDinoListButtonWidget.SetDinoExpiration(FString&)", Expiration); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UDinoListButtonWidget.GetButton()"); }
	void Update() { NativeCall<void>(this, "UDinoListButtonWidget.Update()"); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDinoListButtonWidget.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void InitializeWithClick(bool bCanExpire) { NativeCall<void, bool>(this, "UDinoListButtonWidget.InitializeWithClick(bool)", bCanExpire); }
	void SetButtonString(const FString& Status) { NativeCall<void, const FString&>(this, "UDinoListButtonWidget.SetButtonString(FString&)", Status); }
	FString* GetDisplayString(FString* result) { return NativeCall<FString*, FString*>(this, "UDinoListButtonWidget.GetDisplayString()", result); }
	bool IsValidForUpload() { return NativeCall<bool>(this, "UDinoListButtonWidget.IsValidForUpload()"); }
	UWidget* OnGetContextMenuContent() { return NativeCall<UWidget*>(this, "UDinoListButtonWidget.OnGetContextMenuContent()"); }
	const FARKTributeDino& GetDinoInfo() { return NativeCall<const FARKTributeDino&>(this, "UDinoListButtonWidget.GetDinoInfo()"); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDinoListButtonWidget.SetSelected(bool)", bSelected); }
	void SetSelectedMarkerVisibility(bool bVisible) { NativeCall<void, bool>(this, "UDinoListButtonWidget.SetSelectedMarkerVisibility(bool)", bVisible); }
	void ForceSetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDinoListButtonWidget.ForceSetSelected(bool)", bSelected); }
	static int GetSelectedDinoListWidgetIndex(const TArray<UDinoListButtonWidget*, TSizedDefaultAllocator<32> >& ListWidgets, UDinoListButtonWidget** OutSelected) { return NativeCall<int, const TArray<UDinoListButtonWidget*, TSizedDefaultAllocator<32> >&, UDinoListButtonWidget**>(nullptr, "UDinoListButtonWidget.GetSelectedDinoListWidgetIndex(TArray<UDinoListButtonWidget*,TSizedDefaultAllocator<32>>&,UDinoListButtonWidget**)", ListWidgets, OutSelected); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UDinoListButtonWidget.InitializeMe(bool)", bCanExpire); }
	void SetDinoInfo(APrimalDinoCharacter& dinoCharacter) { NativeCall<void, APrimalDinoCharacter&>(this, "UDinoListButtonWidget.SetDinoInfo(APrimalDinoCharacter&)", dinoCharacter); }
	void SetDinoInfo(const FARKTributeDino& info) { NativeCall<void, const FARKTributeDino&>(this, "UDinoListButtonWidget.SetDinoInfo(FARKTributeDino&)", info); }
	bool IsSelected() { return NativeCall<bool>(this, "UDinoListButtonWidget.IsSelected()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UDinoListButtonWidget.ClickedButton(UWidget*)", clickedWidget); }
};
