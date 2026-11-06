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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTestItemWidget.ItemLabelName"); }
};
