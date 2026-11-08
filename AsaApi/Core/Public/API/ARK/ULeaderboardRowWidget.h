#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct ULeaderboardRowWidget : public UPrimalUI
{
public:
	ULeaderboardRowWidget() = delete;
	~ULeaderboardRowWidget() = delete;
	ULeaderboardRowWidget(const ULeaderboardRowWidget&) = delete;
	ULeaderboardRowWidget& operator=(const ULeaderboardRowWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULeaderboardRowWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULeaderboardRowWidget"); }

	bool& bIsHeaderRowField() { return *GetNativePointerField<bool*>(this, "ULeaderboardRowWidget.bIsHeaderRow"); }
	FName& ColumnContainerWidgetNameField() { return *GetNativePointerField<FName*>(this, "ULeaderboardRowWidget.ColumnContainerWidgetName"); }
	FLinearColor& DefaultLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.DefaultLeaderboardRowTextColor"); }
	FLinearColor& DefaultLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.DefaultLeaderboardRowBackgroundColor"); }
	UTexture2D*& DefaultLeaderboardRowBackgroundTextureField() { return *GetNativePointerField<UTexture2D**>(this, "ULeaderboardRowWidget.DefaultLeaderboardRowBackgroundTexture"); }
	FLinearColor& PersonalLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.PersonalLeaderboardRowTextColor"); }
	FLinearColor& PersonalLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.PersonalLeaderboardRowBackgroundColor"); }
	UTexture2D*& PersonalLeaderboardRowBackgroundTextureField() { return *GetNativePointerField<UTexture2D**>(this, "ULeaderboardRowWidget.PersonalLeaderboardRowBackgroundTexture"); }
	FLinearColor& HeaderLeaderboardRowTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.HeaderLeaderboardRowTextColor"); }
	FLinearColor& HeaderLeaderboardRowBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "ULeaderboardRowWidget.HeaderLeaderboardRowBackgroundColor"); }
	UTexture2D*& HeaderLeaderboardRowBackgroundTextureField() { return *GetNativePointerField<UTexture2D**>(this, "ULeaderboardRowWidget.HeaderLeaderboardRowBackgroundTexture"); }
	bool& IsPlayersOwnRowField() { return *GetNativePointerField<bool*>(this, "ULeaderboardRowWidget.IsPlayersOwnRow"); }
	UBorder*& LeaderboardRowOuterContainerField() { return *GetNativePointerField<UBorder**>(this, "ULeaderboardRowWidget.LeaderboardRowOuterContainer"); }
	USizeBox*& LeaderboardRowSizeBoxField() { return *GetNativePointerField<USizeBox**>(this, "ULeaderboardRowWidget.LeaderboardRowSizeBox"); }
	UHorizontalBox*& ColumnContainerField() { return *GetNativePointerField<UHorizontalBox**>(this, "ULeaderboardRowWidget.ColumnContainer"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& ColumnWidgetsField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "ULeaderboardRowWidget.ColumnWidgets"); }
	void SetupColumnWidgets(float ContainerWidth) { NativeCall<void, float>(this, "ULeaderboardRowWidget.SetupColumnWidgets(float)", ContainerWidth); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "ULeaderboardRowWidget.AddToViewport(int)", ZOrder); }
	static UTextBlock* CreateColumnWidget(APlayerController* OwningPlayer, UHorizontalBox* Container, const FLeaderboardColumnDefinition& Col, float ContainerWidth) { return NativeCall<UTextBlock*, APlayerController*, UHorizontalBox*, const FLeaderboardColumnDefinition&, float>(nullptr, "ULeaderboardRowWidget.CreateColumnWidget(APlayerController*,UHorizontalBox*,FLeaderboardColumnDefinition&,float)", OwningPlayer, Container, Col, ContainerWidth); }
	void SetRowContents(const FLeaderboardDisplayRow& RowData, float ContainerWidth, float RowHeight, bool IsHeaderRow, bool ManuallySetPlayersOwnRowStyling, bool UsePlayersOwnRowStyling) { NativeCall<void, const FLeaderboardDisplayRow&, float, float, bool, bool, bool>(this, "ULeaderboardRowWidget.SetRowContents(FLeaderboardDisplayRow&,float,float,bool,bool,bool)", RowData, ContainerWidth, RowHeight, IsHeaderRow, ManuallySetPlayersOwnRowStyling, UsePlayersOwnRowStyling); }
};
