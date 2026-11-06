#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASOTFNotificationDisplay : public AActor
{
public:
	ASOTFNotificationDisplay() = delete;
	~ASOTFNotificationDisplay() = delete;
	ASOTFNotificationDisplay(const ASOTFNotificationDisplay&) = delete;
	ASOTFNotificationDisplay& operator=(const ASOTFNotificationDisplay&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASOTFNotificationDisplay"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASOTFNotificationDisplay"); }

	ASOTFNotification*& NotificationSystemField() { return *GetNativePointerField<ASOTFNotification**>(this, "ASOTFNotificationDisplay.NotificationSystem"); }
	FBannerTextInfo& BannerTextField() { return *GetNativePointerField<FBannerTextInfo*>(this, "ASOTFNotificationDisplay.BannerText"); }
	double& LastScrollingTextActivationTimeField() { return *GetNativePointerField<double*>(this, "ASOTFNotificationDisplay.LastScrollingTextActivationTime"); }
	TArray<FPlayerPreviewImage*, TSizedDefaultAllocator<32> >& PlayerImagesField() { return *GetNativePointerField<TArray<FPlayerPreviewImage*, TSizedDefaultAllocator<32> >*>(this, "ASOTFNotificationDisplay.PlayerImages"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ASOTFNotificationDisplay.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Stop() { NativeCall<void>(this, "ASOTFNotificationDisplay.Stop()"); }
	void CleanUp() { NativeCall<void>(this, "ASOTFNotificationDisplay.CleanUp()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ASOTFNotificationDisplay.Tick(float)", DeltaSeconds); }
	void Play() { NativeCall<void>(this, "ASOTFNotificationDisplay.Play()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ASOTFNotificationDisplay.PostInitializeComponents()"); }
};
