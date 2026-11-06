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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPanelWidget"); }

};
