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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
