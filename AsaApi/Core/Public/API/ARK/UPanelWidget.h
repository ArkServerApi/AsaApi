#pragma once
#include "BulkForward.h"
#include "UWidget.h"

struct UPanelWidget : public UWidget
{
public:
	UPanelWidget() = delete;
	~UPanelWidget() = delete;
	UPanelWidget(const UPanelWidget&) = delete;
	UPanelWidget& operator=(const UPanelWidget&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UPanelWidget.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
