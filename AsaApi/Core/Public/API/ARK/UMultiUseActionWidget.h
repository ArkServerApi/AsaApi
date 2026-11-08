#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UMultiUseActionWidget : public UPrimalUserWidget
{
public:
	UMultiUseActionWidget() = delete;
	~UMultiUseActionWidget() = delete;
	UMultiUseActionWidget(const UMultiUseActionWidget&) = delete;
	UMultiUseActionWidget& operator=(const UMultiUseActionWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMultiUseActionWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMultiUseActionWidget"); }

	UTextBlock*& MultiUseLabelText1Field() { return *GetNativePointerField<UTextBlock**>(this, "UMultiUseActionWidget.MultiUseLabelText1"); }
	UTextBlock*& MultiUseLabelText2Field() { return *GetNativePointerField<UTextBlock**>(this, "UMultiUseActionWidget.MultiUseLabelText2"); }
	UImage*& MultiUseGamepadIcon1Field() { return *GetNativePointerField<UImage**>(this, "UMultiUseActionWidget.MultiUseGamepadIcon1"); }
	UImage*& MultiUseGamepadIcon2Field() { return *GetNativePointerField<UImage**>(this, "UMultiUseActionWidget.MultiUseGamepadIcon2"); }
	UWidget*& MainPanelField() { return *GetNativePointerField<UWidget**>(this, "UMultiUseActionWidget.MainPanel"); }
	UWidget*& ImageLineField() { return *GetNativePointerField<UWidget**>(this, "UMultiUseActionWidget.ImageLine"); }
	UImage*& MultiUseActionIconField() { return *GetNativePointerField<UImage**>(this, "UMultiUseActionWidget.MultiUseActionIcon"); }
	TWeakObjectPtr<UObject, FWeakObjectPtr>& ActorTargetRefField() { return *GetNativePointerField<TWeakObjectPtr<UObject, FWeakObjectPtr>*>(this, "UMultiUseActionWidget.ActorTargetRef"); }
	void Update() { NativeCall<void>(this, "UMultiUseActionWidget.Update()"); }
	void Init(UObject* ActorTargetRefInfo) { NativeCall<void, UObject*>(this, "UMultiUseActionWidget.Init(UObject*)", ActorTargetRefInfo); }
};
