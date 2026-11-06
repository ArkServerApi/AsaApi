#pragma once
#include "BulkForward.h"
#include "UScrollBox.h"

struct UPrimalScrollBox : public UScrollBox
{
public:
	UPrimalScrollBox() = delete;
	~UPrimalScrollBox() = delete;
	UPrimalScrollBox(const UPrimalScrollBox&) = delete;
	UPrimalScrollBox& operator=(const UPrimalScrollBox&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UWidget* GetFirstWidgetWithinVisibleScrollboxFrame() { return NativeCall<UWidget*>(this, "UPrimalScrollBox.GetFirstWidgetWithinVisibleScrollboxFrame()"); }
};
