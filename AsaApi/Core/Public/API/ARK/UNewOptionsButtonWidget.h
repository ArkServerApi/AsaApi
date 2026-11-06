#pragma once
#include "BulkForward.h"
#include "UBaseSelectableButtonWidget.h"

struct UNewOptionsButtonWidget : public UBaseSelectableButtonWidget
{
public:
	UNewOptionsButtonWidget() = delete;
	~UNewOptionsButtonWidget() = delete;
	UNewOptionsButtonWidget(const UNewOptionsButtonWidget&) = delete;
	UNewOptionsButtonWidget& operator=(const UNewOptionsButtonWidget&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
