#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UConsoleCommandButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UConsoleCommandButtonWidget() = delete;
	~UConsoleCommandButtonWidget() = delete;
	UConsoleCommandButtonWidget(const UConsoleCommandButtonWidget&) = delete;
	UConsoleCommandButtonWidget& operator=(const UConsoleCommandButtonWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UConsoleCommandButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UConsoleCommandButtonWidget"); }

	UButton*& theButtonField() { return *GetNativePointerField<UButton**>(this, "UConsoleCommandButtonWidget.theButton"); }
	UUI_ConsoleCommand*& theUIField() { return *GetNativePointerField<UUI_ConsoleCommand**>(this, "UConsoleCommandButtonWidget.theUI"); }
	UTextBlock*& textBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UConsoleCommandButtonWidget.textBlock"); }
	void SetButtonString(const FString& Status) { NativeCall<void, const FString&>(this, "UConsoleCommandButtonWidget.SetButtonString(FString&)", Status); }
	void InitializeIt() { NativeCall<void>(this, "UConsoleCommandButtonWidget.InitializeIt()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UConsoleCommandButtonWidget.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
};
