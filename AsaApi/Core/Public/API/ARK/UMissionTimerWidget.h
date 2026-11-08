#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UMissionTimerWidget : public UPrimalUserWidget
{
public:
	UMissionTimerWidget() = delete;
	~UMissionTimerWidget() = delete;
	UMissionTimerWidget(const UMissionTimerWidget&) = delete;
	UMissionTimerWidget& operator=(const UMissionTimerWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMissionTimerWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMissionTimerWidget"); }

	UTextBlock*& TimeTextField() { return *GetNativePointerField<UTextBlock**>(this, "UMissionTimerWidget.TimeText"); }
	UProgressBar*& TimeRemainingProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UMissionTimerWidget.TimeRemainingProgressBar"); }
	bool Initialize() { return NativeCall<bool>(this, "UMissionTimerWidget.Initialize()"); }
	void SetTimeText(const FString& InTime) { NativeCall<void, const FString&>(this, "UMissionTimerWidget.SetTimeText(FString&)", InTime); }
	void SetTimer(const float& MissionStartTime, const float& MissionDuration, const FString& BPTimerText, EMissionTimerMode::Type TimerType) { NativeCall<void, const float&, const float&, const FString&, EMissionTimerMode::Type>(this, "UMissionTimerWidget.SetTimer(float&,float&,FString&,EMissionTimerMode::Type)", MissionStartTime, MissionDuration, BPTimerText, TimerType); }
};
