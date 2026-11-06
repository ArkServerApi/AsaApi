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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UScrollBox.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
