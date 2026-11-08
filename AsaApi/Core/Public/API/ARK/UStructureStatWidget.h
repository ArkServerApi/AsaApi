#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UStructureStatWidget : public UPrimalUI
{
public:
	UStructureStatWidget() = delete;
	~UStructureStatWidget() = delete;
	UStructureStatWidget(const UStructureStatWidget&) = delete;
	UStructureStatWidget& operator=(const UStructureStatWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStructureStatWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStructureStatWidget"); }

	FText& StatNameField() { return *GetNativePointerField<FText*>(this, "UStructureStatWidget.StatName"); }
	UTexture2D*& StatIconField() { return *GetNativePointerField<UTexture2D**>(this, "UStructureStatWidget.StatIcon"); }
	FName& StatTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatTextBlockName"); }
	FName& StatValueBlockNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatValueBlockName"); }
	FName& StatImageNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatImageName"); }
	FName& StatBarNameField() { return *GetNativePointerField<FName*>(this, "UStructureStatWidget.StatBarName"); }
	UProgressBar*& StatBarField() { return *GetNativePointerField<UProgressBar**>(this, "UStructureStatWidget.StatBar"); }
	UTextBlock*& StatTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStructureStatWidget.StatTextBlock"); }
	UTextBlock*& StatValueBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStructureStatWidget.StatValueBlock"); }
	UImage*& StatImageField() { return *GetNativePointerField<UImage**>(this, "UStructureStatWidget.StatImage"); }
	void UpdateStat(const FString& StatValue, float BarPercentage) { NativeCall<void, const FString&, float>(this, "UStructureStatWidget.UpdateStat(FString&,float)", StatValue, BarPercentage); }
	void SynchronizeProperties() { NativeCall<void>(this, "UStructureStatWidget.SynchronizeProperties()"); }
};
