#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UDEPRECATED_ImgMediaPlaybackComponent : public UActorComponent
{
public:
	UDEPRECATED_ImgMediaPlaybackComponent() = delete;
	~UDEPRECATED_ImgMediaPlaybackComponent() = delete;
	UDEPRECATED_ImgMediaPlaybackComponent(const UDEPRECATED_ImgMediaPlaybackComponent&) = delete;
	UDEPRECATED_ImgMediaPlaybackComponent& operator=(const UDEPRECATED_ImgMediaPlaybackComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDEPRECATED_ImgMediaPlaybackComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDEPRECATED_ImgMediaPlaybackComponent"); }

	float& LODBiasField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_ImgMediaPlaybackComponent.LODBias"); }
	void RegisterWithMipMapInfo() { NativeCall<void>(this, "UDEPRECATED_ImgMediaPlaybackComponent.RegisterWithMipMapInfo()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UDEPRECATED_ImgMediaPlaybackComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "UDEPRECATED_ImgMediaPlaybackComponent.BeginPlay()"); }
};
