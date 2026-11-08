#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UTribeMemberButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UTribeMemberButtonWidget() = delete;
	~UTribeMemberButtonWidget() = delete;
	UTribeMemberButtonWidget(const UTribeMemberButtonWidget&) = delete;
	UTribeMemberButtonWidget& operator=(const UTribeMemberButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTribeMemberButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTribeMemberButtonWidget"); }

	int& IndexField() { return *GetNativePointerField<int*>(this, "UTribeMemberButtonWidget.Index"); }
	UCustomButtonWidget*& ButtonField() { return *GetNativePointerField<UCustomButtonWidget**>(this, "UTribeMemberButtonWidget.Button"); }
	UTextBlock*& PlayerNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeMemberButtonWidget.PlayerNameLabel"); }
	UTextBlock*& PlayerLevelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeMemberButtonWidget.PlayerLevelLabel"); }
	UTextBlock*& GroupRankLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeMemberButtonWidget.GroupRankLabel"); }
	UTextBlock*& OwnershipLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeMemberButtonWidget.OwnershipLabel"); }
	UTextBlock*& OnlineStatusLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UTribeMemberButtonWidget.OnlineStatusLabel"); }
	UWidget*& ExpirationLabelParentField() { return *GetNativePointerField<UWidget**>(this, "UTribeMemberButtonWidget.ExpirationLabelParent"); }
	BitFieldValue<bool, unsigned char> bSelectOnClicked() { return { this, "UTribeMemberButtonWidget.bSelectOnClicked"}; }
	void SetTribeOwnership(const FString& TribeOwnership) { NativeCall<void, const FString&>(this, "UTribeMemberButtonWidget.SetTribeOwnership(FString&)", TribeOwnership); }
	FString* GetPlayerName(FString* result) { return NativeCall<FString*, FString*>(this, "UTribeMemberButtonWidget.GetPlayerName()", result); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTribeMemberButtonWidget.SetSelected(bool)", bSelected); }
	void SetGroupRank(const FString& GroupRank) { NativeCall<void, const FString&>(this, "UTribeMemberButtonWidget.SetGroupRank(FString&)", GroupRank); }
	int GetIndex() { return NativeCall<int>(this, "UTribeMemberButtonWidget.GetIndex()"); }
	void InitializeMe() { NativeCall<void>(this, "UTribeMemberButtonWidget.InitializeMe()"); }
	void SetPlayerLevel(const FString& PlayerLevel) { NativeCall<void, const FString&>(this, "UTribeMemberButtonWidget.SetPlayerLevel(FString&)", PlayerLevel); }
	void SetIndex(const int& Idx) { NativeCall<void, const int&>(this, "UTribeMemberButtonWidget.SetIndex(int&)", Idx); }
	void ClickedSecondaryButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeMemberButtonWidget.ClickedSecondaryButton(UWidget*)", clickedWidget); }
	void SetOnlineStatus(const FString& OnlineStatus) { NativeCall<void, const FString&>(this, "UTribeMemberButtonWidget.SetOnlineStatus(FString&)", OnlineStatus); }
	UCustomButtonWidget* GetButton() { return NativeCall<UCustomButtonWidget*>(this, "UTribeMemberButtonWidget.GetButton()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UTribeMemberButtonWidget.ClickedButton(UWidget*)", clickedWidget); }
	void SetPlayerName(const FString& PlayerName) { NativeCall<void, const FString&>(this, "UTribeMemberButtonWidget.SetPlayerName(FString&)", PlayerName); }
	bool IsSelected() { return NativeCall<bool>(this, "UTribeMemberButtonWidget.IsSelected()"); }
};
