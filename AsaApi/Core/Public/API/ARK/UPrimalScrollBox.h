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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalScrollBox"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalScrollBox"); }

	UWidget* GetFirstWidgetWithinVisibleScrollboxFrame() { return NativeCall<UWidget*>(this, "UPrimalScrollBox.GetFirstWidgetWithinVisibleScrollboxFrame()"); }
};
