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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNewOptionsButtonWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNewOptionsButtonWidget"); }

};
