#pragma once
#include "BulkForward.h"
#include "UPanelWidget.h"

struct UScrollBox : public UPanelWidget
{
public:
	UScrollBox() = delete;
	~UScrollBox() = delete;
	UScrollBox(const UScrollBox&) = delete;
	UScrollBox& operator=(const UScrollBox&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UScrollBox"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UScrollBox"); }

};
