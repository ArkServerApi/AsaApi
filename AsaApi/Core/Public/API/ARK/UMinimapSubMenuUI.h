#pragma once
#include "BulkForward.h"
#include "UPrimalSubMenuUI.h"

class UMinimapSubMenuUI : public UPrimalSubMenuUI
{
public:
	UMinimapSubMenuUI() = delete;
	~UMinimapSubMenuUI() = delete;
	UMinimapSubMenuUI(const UMinimapSubMenuUI&) = delete;
	UMinimapSubMenuUI& operator=(const UMinimapSubMenuUI&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UMinimapSubMenuUI.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
};
