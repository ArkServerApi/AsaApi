#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

class UPrimalUI_Toast : public UPrimalUI
{
public:
	UPrimalUI_Toast() = delete;
	~UPrimalUI_Toast() = delete;
	UPrimalUI_Toast(const UPrimalUI_Toast&) = delete;
	UPrimalUI_Toast& operator=(const UPrimalUI_Toast&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalUI_Toast"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalUI_Toast"); }

	int& CounterField() { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.Counter"); }
	int& CounterMaxField() { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.CounterMax"); }
	int& ProgressCounterField() { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.ProgressCounter"); }
	bool& bWillSetCounterField() { return *GetNativePointerField<bool*>(this, "UPrimalUI_Toast.bWillSetCounter"); }
	void SetCounter(int NewCounter) { NativeCall<void, int>(this, "UPrimalUI_Toast.SetCounter(int)", NewCounter); }
	void incrementCounter_Implementation() { NativeCall<void>(this, "UPrimalUI_Toast.incrementCounter_Implementation()"); }
	void OverrideCounterStart(int num) { NativeCall<void, int>(this, "UPrimalUI_Toast.OverrideCounterStart(int)", num); }
	void InitCounter_Implementation(int NewCounterMax, bool bInWillSetCounter) { NativeCall<void, int, bool>(this, "UPrimalUI_Toast.InitCounter_Implementation(int,bool)", NewCounterMax, bInWillSetCounter); }
	void InitCounter(int NewCounterMax, bool bInWillSetCounter) { NativeCall<void, int, bool>(this, "UPrimalUI_Toast.InitCounter(int,bool)", NewCounterMax, bInWillSetCounter); }
	void incrementCounter() { NativeCall<void>(this, "UPrimalUI_Toast.incrementCounter()"); }
	void OverrideTextValueWithString(const FString& NewText, bool HideProgressBar, bool HideCounter) { NativeCall<void, const FString&, bool, bool>(this, "UPrimalUI_Toast.OverrideTextValueWithString(FString&,bool,bool)", NewText, HideProgressBar, HideCounter); }
	void SetCounter_Implementation(int NewCounter) { NativeCall<void, int>(this, "UPrimalUI_Toast.SetCounter_Implementation(int)", NewCounter); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPrimalUI_Toast.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
};
