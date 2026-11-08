#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UWorldBuffEntryWidget : public UPrimalUserWidget
{
public:
	UWorldBuffEntryWidget() = delete;
	~UWorldBuffEntryWidget() = delete;
	UWorldBuffEntryWidget(const UWorldBuffEntryWidget&) = delete;
	UWorldBuffEntryWidget& operator=(const UWorldBuffEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWorldBuffEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWorldBuffEntryWidget"); }

	float& DefaultDisplayTimeField() { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.DefaultDisplayTime"); }
	float& ExpiringSoonDisplayTimeField() { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.ExpiringSoonDisplayTime"); }
	const FWorldBuffPersistantData*& WorldBuffDataField() { return *GetNativePointerField<const FWorldBuffPersistantData**>(this, "UWorldBuffEntryWidget.WorldBuffData"); }
	UBorder*& MainPanelField() { return *GetNativePointerField<UBorder**>(this, "UWorldBuffEntryWidget.MainPanel"); }
	UBorder*& GammaBorderField() { return *GetNativePointerField<UBorder**>(this, "UWorldBuffEntryWidget.GammaBorder"); }
	UBorder*& BetaBorderField() { return *GetNativePointerField<UBorder**>(this, "UWorldBuffEntryWidget.BetaBorder"); }
	UBorder*& AlphaBorderField() { return *GetNativePointerField<UBorder**>(this, "UWorldBuffEntryWidget.AlphaBorder"); }
	UPanelWidget*& DifficultyPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UWorldBuffEntryWidget.DifficultyPanel"); }
	UPanelWidget*& GammaIndicatorPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UWorldBuffEntryWidget.GammaIndicatorPanel"); }
	UPanelWidget*& BetaIndicatorPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UWorldBuffEntryWidget.BetaIndicatorPanel"); }
	UPanelWidget*& AlphaIndicatorPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UWorldBuffEntryWidget.AlphaIndicatorPanel"); }
	UImage*& IconImageField() { return *GetNativePointerField<UImage**>(this, "UWorldBuffEntryWidget.IconImage"); }
	UImage*& IconBackgroundImageField() { return *GetNativePointerField<UImage**>(this, "UWorldBuffEntryWidget.IconBackgroundImage"); }
	UTextBlock*& TitleTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UWorldBuffEntryWidget.TitleTextBlock"); }
	UTextBlock*& GammaTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UWorldBuffEntryWidget.GammaTextBlock"); }
	UTextBlock*& BetaTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UWorldBuffEntryWidget.BetaTextBlock"); }
	UTextBlock*& AlphaTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UWorldBuffEntryWidget.AlphaTextBlock"); }
	UTextBlock*& DescriptionTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UWorldBuffEntryWidget.DescriptionTextBlock"); }
	FString& GammaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.GammaDifficultyBonus"); }
	FString& BetaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.BetaDifficultyBonus"); }
	FString& AlphaDifficultyBonusField() { return *GetNativePointerField<FString*>(this, "UWorldBuffEntryWidget.AlphaDifficultyBonus"); }
	BitFieldValue<bool, unsigned __int32> bInitialized() { return { this, "UWorldBuffEntryWidget.bInitialized"}; }
	BitFieldValue<bool, unsigned __int32> bExpiringSoon() { return { this, "UWorldBuffEntryWidget.bExpiringSoon"}; }
	void BeginExpiring() { NativeCall<void>(this, "UWorldBuffEntryWidget.BeginExpiring()"); }
	void InitializeMe(bool bIsListEntry) { NativeCall<void, bool>(this, "UWorldBuffEntryWidget.InitializeMe(bool)", bIsListEntry); }
	void SetDifficultyValues(const FWorldBuffDefinition& WorldBuffDefinition) { NativeCall<void, const FWorldBuffDefinition&>(this, "UWorldBuffEntryWidget.SetDifficultyValues(FWorldBuffDefinition&)", WorldBuffDefinition); }
	void Collapse() { NativeCall<void>(this, "UWorldBuffEntryWidget.Collapse()"); }
	void SyncData(const FWorldBuffPersistantData& WorldBuffPersistantData, bool bIsListEntry, bool bShouldReinit, bool bDurationIsStopped) { NativeCall<void, const FWorldBuffPersistantData&, bool, bool, bool>(this, "UWorldBuffEntryWidget.SyncData(FWorldBuffPersistantData&,bool,bool,bool)", WorldBuffPersistantData, bIsListEntry, bShouldReinit, bDurationIsStopped); }
	void FadeOut() { NativeCall<void>(this, "UWorldBuffEntryWidget.FadeOut()"); }
};
