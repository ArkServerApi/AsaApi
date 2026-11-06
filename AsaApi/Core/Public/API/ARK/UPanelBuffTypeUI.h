#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UPanelBuffTypeUI : public UPrimalUserWidget
{
public:
	UPanelBuffTypeUI() = delete;
	~UPanelBuffTypeUI() = delete;
	UPanelBuffTypeUI(const UPanelBuffTypeUI&) = delete;
	UPanelBuffTypeUI& operator=(const UPanelBuffTypeUI&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UTextBlock*& BuffNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPanelBuffTypeUI.BuffNameLabel"); }
	UPrimalRichTextBlock*& BuffDescriptionLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPanelBuffTypeUI.BuffDescriptionLabel"); }
	UTextBlock*& BuffTimeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPanelBuffTypeUI.BuffTimeLabel"); }
	UImage*& BuffImageField() { return *GetNativePointerField<UImage**>(this, "UPanelBuffTypeUI.BuffImage"); }
	UImage*& BuffBGField() { return *GetNativePointerField<UImage**>(this, "UPanelBuffTypeUI.BuffBG"); }
	FHUDStatusEntry& BuffEntryField() { return *GetNativePointerField<FHUDStatusEntry*>(this, "UPanelBuffTypeUI.BuffEntry"); }
};
