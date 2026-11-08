#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UTestItemWidget : public UPrimalUserWidget
{
public:
	UTestItemWidget() = delete;
	~UTestItemWidget() = delete;
	UTestItemWidget(const UTestItemWidget&) = delete;
	UTestItemWidget& operator=(const UTestItemWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTestItemWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTestItemWidget"); }

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTestItemWidget.ItemLabelName"); }
};
