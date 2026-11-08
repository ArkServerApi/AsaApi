#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UMissionRequirementEntryWidget : public UPrimalUserWidget
{
public:
	UMissionRequirementEntryWidget() = delete;
	~UMissionRequirementEntryWidget() = delete;
	UMissionRequirementEntryWidget(const UMissionRequirementEntryWidget&) = delete;
	UMissionRequirementEntryWidget& operator=(const UMissionRequirementEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionRequirementEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionRequirementEntryWidget"); }

	FString& DisplayTextField() { return *GetNativePointerField<FString*>(this, "UMissionRequirementEntryWidget.DisplayText"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UMissionRequirementEntryWidget.CustomTag"); }
	UTextBlock*& DisplayTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionRequirementEntryWidget.DisplayTextBlock"); }
	void SetCustomTag(FName Tag) { NativeCall<void, FName>(this, "UMissionRequirementEntryWidget.SetCustomTag(FName)", Tag); }
	bool Initialize() { return NativeCall<bool>(this, "UMissionRequirementEntryWidget.Initialize()"); }
};
