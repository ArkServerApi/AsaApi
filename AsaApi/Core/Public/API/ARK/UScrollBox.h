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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
