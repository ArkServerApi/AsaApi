#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UDiscordNotificationEntryWidget : public UPrimalUserWidget
{
public:
	UDiscordNotificationEntryWidget() = delete;
	~UDiscordNotificationEntryWidget() = delete;
	UDiscordNotificationEntryWidget(const UDiscordNotificationEntryWidget&) = delete;
	UDiscordNotificationEntryWidget& operator=(const UDiscordNotificationEntryWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDiscordNotificationEntryWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDiscordNotificationEntryWidget"); }

	UWidgetAnimation* FindAnimationByName(FName AnimationName) { return NativeCall<UWidgetAnimation*, FName>(this, "UDiscordNotificationEntryWidget.FindAnimationByName(FName)", AnimationName); }
	float GetExitAnimationDuration() { return NativeCall<float>(this, "UDiscordNotificationEntryWidget.GetExitAnimationDuration()"); }
	void PlayExitAnimation() { NativeCall<void>(this, "UDiscordNotificationEntryWidget.PlayExitAnimation()"); }
	void PlayEnterAnimation() { NativeCall<void>(this, "UDiscordNotificationEntryWidget.PlayEnterAnimation()"); }
	void SetNotificationDisplay(const FText& InDisplayText, int InNotificationCount) { NativeCall<void, const FText&, int>(this, "UDiscordNotificationEntryWidget.SetNotificationDisplay(FText&,int)", InDisplayText, InNotificationCount); }
};
