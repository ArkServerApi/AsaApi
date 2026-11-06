#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UDiscordFriendActionPanelWidget : public UPrimalUserWidget
{
public:
	UDiscordFriendActionPanelWidget() = delete;
	~UDiscordFriendActionPanelWidget() = delete;
	UDiscordFriendActionPanelWidget(const UDiscordFriendActionPanelWidget&) = delete;
	UDiscordFriendActionPanelWidget& operator=(const UDiscordFriendActionPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDiscordFriendActionPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDiscordFriendActionPanelWidget"); }

	FDiscordFriendActionPanelState& CurrentStateField() { return *GetNativePointerField<FDiscordFriendActionPanelState*>(this, "UDiscordFriendActionPanelWidget.CurrentState"); }
	FDiscordFriendViewData& CurrentViewDataField() { return *GetNativePointerField<FDiscordFriendViewData*>(this, "UDiscordFriendActionPanelWidget.CurrentViewData"); }
	bool& bHasSelectionDisplayField() { return *GetNativePointerField<bool*>(this, "UDiscordFriendActionPanelWidget.bHasSelectionDisplay"); }
	void HandleMessageButtonClicked() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.HandleMessageButtonClicked()"); }
	void NativeConstruct() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.NativeConstruct()"); }
	void SetButtonLabel(UButton* Button, const FText& Label) { NativeCall<void, UButton*, const FText&>(this, "UDiscordFriendActionPanelWidget.SetButtonLabel(UButton*,FText&)", Button, Label); }
	void HandleInviteButtonClicked() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.HandleInviteButtonClicked()"); }
	UTextBlock* FindFirstTextBlock(UWidget* RootWidget) { return NativeCall<UTextBlock*, UWidget*>(this, "UDiscordFriendActionPanelWidget.FindFirstTextBlock(UWidget*)", RootWidget); }
	UWidget* GetPrimaryInteractionWidget() { return NativeCall<UWidget*>(this, "UDiscordFriendActionPanelWidget.GetPrimaryInteractionWidget()"); }
	void ClearSelectionDisplay() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.ClearSelectionDisplay()"); }
	void RefreshFromState() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.RefreshFromState()"); }
	void HandleBackButtonClicked() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.HandleBackButtonClicked()"); }
	void ClearSelectionDetails() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.ClearSelectionDetails()"); }
	void ApplySelectionDisplay(const FDiscordFriendViewData& InViewData, const FDiscordFriendActionPanelState& InState, UDiscordFriendsVisualDataAsset* InVisualDataAsset) { NativeCall<void, const FDiscordFriendViewData&, const FDiscordFriendActionPanelState&, UDiscordFriendsVisualDataAsset*>(this, "UDiscordFriendActionPanelWidget.ApplySelectionDisplay(FDiscordFriendViewData&,FDiscordFriendActionPanelState&,UDiscordFriendsVisualDataAsset*)", InViewData, InState, InVisualDataAsset); }
	void HandleBlockButtonClicked() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.HandleBlockButtonClicked()"); }
	void HandleRelationshipActionButtonClicked() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.HandleRelationshipActionButtonClicked()"); }
	void RefreshSelectionDetails() { NativeCall<void>(this, "UDiscordFriendActionPanelWidget.RefreshSelectionDetails()"); }
};
