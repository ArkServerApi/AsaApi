#pragma once
#include "BulkForward.h"
#include "UTooltipSmartLayoutWidget.h"

struct UDinoListItemTooltip : public UTooltipSmartLayoutWidget
{
public:
	UDinoListItemTooltip() = delete;
	~UDinoListItemTooltip() = delete;
	UDinoListItemTooltip(const UDinoListItemTooltip&) = delete;
	UDinoListItemTooltip& operator=(const UDinoListItemTooltip&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDinoListItemTooltip"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDinoListItemTooltip"); }

	FName& fnameTitleBar_NameLabelField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameTitleBar_NameLabel"); }
	FName& fnameTitleBar_LevelLabelField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameTitleBar_LevelLabel"); }
	FName& fnameInfo_ImageNameField() { return *GetNativePointerField<FName*>(this, "UDinoListItemTooltip.fnameInfo_ImageName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameInfo_LabelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UDinoListItemTooltip.fnameInfo_LabelNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameInfo_GroupNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UDinoListItemTooltip.fnameInfo_GroupNames"); }
	float& Info_GroupFreqField() { return *GetNativePointerField<float*>(this, "UDinoListItemTooltip.Info_GroupFreq"); }
	UTextBlock*& TitleBar_NameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UDinoListItemTooltip.TitleBar_NameLabel"); }
	UWidget*& TitleBar_LevelLabelField() { return *GetNativePointerField<UWidget**>(this, "UDinoListItemTooltip.TitleBar_LevelLabel"); }
	UImage*& Info_ImageField() { return *GetNativePointerField<UImage**>(this, "UDinoListItemTooltip.Info_Image"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& Info_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UDinoListItemTooltip.Info_TextBlocks"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& Info_GroupsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UDinoListItemTooltip.Info_Groups"); }
	FARKTributeDino& ArkTributeDinoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UDinoListItemTooltip.ArkTributeDino"); }
	bool& HasValidDinoInfoField() { return *GetNativePointerField<bool*>(this, "UDinoListItemTooltip.HasValidDinoInfo"); }
	UTexture2D*& EnabledDinoTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UDinoListItemTooltip.EnabledDinoTexture"); }
	UMaterialInterface*& EnabledDinoMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "UDinoListItemTooltip.EnabledDinoMaterial"); }
	const FARKTributeDino& GetArkTributeDino() { return NativeCall<const FARKTributeDino&>(this, "UDinoListItemTooltip.GetArkTributeDino()"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UDinoListItemTooltip.UpdateToolTip(float)", DeltaSeconds); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UDinoListItemTooltip.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
};
