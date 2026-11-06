#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "../Types/UUserWidget.h"

struct UPrimalUserWidget : UUserWidget
{
public:
	UPrimalUserWidget() = delete;
	~UPrimalUserWidget() = delete;
	UPrimalUserWidget(const UPrimalUserWidget&) = delete;
	UPrimalUserWidget& operator=(const UPrimalUserWidget&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalUserWidget"); }

	int& ViewportZOrderField() { return *GetNativePointerField<int*>(this, "UPrimalUserWidget.ViewportZOrder"); }
	float& DPIScalerField() { return *GetNativePointerField<float*>(this, "UPrimalUserWidget.DPIScaler"); }

	void AddToScreen(ULocalPlayer* LocalPlayer, int ZOrder) { NativeCall<void, ULocalPlayer*, int>(this, "UPrimalUserWidget.AddToScreen(ULocalPlayer*,int)", LocalPlayer, ZOrder); }
	void RemoveFromViewport() { NativeCall<void>(this, "UPrimalUserWidget.RemoveFromViewport()"); }
	void WidgetRemovedFromViewport() { NativeCall<void>(this, "UPrimalUserWidget.WidgetRemovedFromViewport()"); }
	bool IsAddedToViewport() { return NativeCall<bool>(this, "UPrimalUserWidget.IsAddedToViewport()"); }
	void OnWidgetGamepadActiveChangedBP(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUserWidget.OnWidgetGamepadActiveChangedBP(bool)", bIsGamepadActive); }
	void SetZOrderInViewport(int ZOrder) { NativeCall<void, int>(this, "UPrimalUserWidget.SetZOrderInViewport(int)", ZOrder); }
	void AddToViewport(int ZOrder) { NativeCall<void, int>(this, "UPrimalUserWidget.AddToViewport(int)", ZOrder); }
	bool HandleVirtualBack() { return NativeCall<bool>(this, "UPrimalUserWidget.HandleVirtualBack()"); }
	void RemoveFromParent() { NativeCall<void>(this, "UPrimalUserWidget.RemoveFromParent()"); }
	void WidgetAddedToViewport() { NativeCall<void>(this, "UPrimalUserWidget.WidgetAddedToViewport()"); }
	UWidget* GetOverrideHighligteableWidgetBP() { return NativeCall<UWidget*>(this, "UPrimalUserWidget.GetOverrideHighligteableWidgetBP()"); }
	void OnWidgetGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUserWidget.OnWidgetGamepadActiveChanged(bool)", bIsGamepadActive); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalUserWidget"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalUserWidget._getUObject()"); }

	bool PlayAnimationByName(const wchar_t* Name) { return NativeCall<bool, const wchar_t*>(this, "UPrimalUserWidget.PlayAnimationByName(wchar_t*)", Name); }
	void BPExecutedCommandForPrimalUI(FName CommandName, const FBPNetExecParams& ExecParams) { NativeCall<void, FName, const FBPNetExecParams&>(this, "UPrimalUserWidget.BPExecutedCommandForPrimalUI(FName,FBPNetExecParams&)", CommandName, ExecParams); }
	void ExecuteCommandForPrimalUI(FName CommandName, const FBPNetExecParams& ExecParams) { NativeCall<void, FName, const FBPNetExecParams&>(this, "UPrimalUserWidget.ExecuteCommandForPrimalUI(FName,FBPNetExecParams&)", CommandName, ExecParams); }
	bool PlayAnimationByString(const FString& Name) { return NativeCall<bool, const FString&>(this, "UPrimalUserWidget.PlayAnimationByString(FString&)", Name); }
	FString* NumCharactersThatFit(FString* result, const FString& theString, float widthThreshold, UFont* theFont) { return NativeCall<FString*, FString*, const FString&, float, UFont*>(this, "UPrimalUserWidget.NumCharactersThatFit(FString&,float,UFont*)", result, theString, widthThreshold, theFont); }
	void StopAnimationByString(const FString& Name) { NativeCall<void, const FString&>(this, "UPrimalUserWidget.StopAnimationByString(FString&)", Name); }
	void StopAnimationByName(const wchar_t* Name) { NativeCall<void, const wchar_t*>(this, "UPrimalUserWidget.StopAnimationByName(wchar_t*)", Name); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >* GetHandlesFromNamePrefix(TArray<UWidget*, TSizedDefaultAllocator<32> >* result, const FString& Name) { return NativeCall<TArray<UWidget*, TSizedDefaultAllocator<32> >*, TArray<UWidget*, TSizedDefaultAllocator<32> >*, const FString&>(this, "UPrimalUserWidget.GetHandlesFromNamePrefix(FString&)", result, Name); }
};
