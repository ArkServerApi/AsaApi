#pragma once
#include "BulkForward.h"
#include "UVisual.h"

struct UWidget : public UVisual
{
public:
	UWidget() = delete;
	~UWidget() = delete;
	UWidget(const UWidget&) = delete;
	UWidget& operator=(const UWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWidget"); }

};
