#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UMissionObjectiveEntryWidget : public UPrimalUserWidget
{
public:
	UMissionObjectiveEntryWidget() = delete;
	~UMissionObjectiveEntryWidget() = delete;
	UMissionObjectiveEntryWidget(const UMissionObjectiveEntryWidget&) = delete;
	UMissionObjectiveEntryWidget& operator=(const UMissionObjectiveEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionObjectiveEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionObjectiveEntryWidget"); }

	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionObjectiveEntryWidget.ItemLabelName"); }
	UImage*& MissionCompleteIconField() { return *GetNativePointerField<UImage**>(this, "UMissionObjectiveEntryWidget.MissionCompleteIcon"); }
	UTextBlock*& MissionObjectiveTextField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionObjectiveEntryWidget.MissionObjectiveText"); }
	UProgressBar*& ObjectiveProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UMissionObjectiveEntryWidget.ObjectiveProgressBar"); }
	void SetShowProgressBar(const bool& bInShowProgressBar) { NativeCall<void, const bool&>(this, "UMissionObjectiveEntryWidget.SetShowProgressBar(bool&)", bInShowProgressBar); }
	bool Initialize() { return NativeCall<bool>(this, "UMissionObjectiveEntryWidget.Initialize()"); }
	void SetMissionObjective(const FString& Objective) { NativeCall<void, const FString&>(this, "UMissionObjectiveEntryWidget.SetMissionObjective(FString&)", Objective); }
	void SetIsComplete(const bool& bIsComplete) { NativeCall<void, const bool&>(this, "UMissionObjectiveEntryWidget.SetIsComplete(bool&)", bIsComplete); }
};
