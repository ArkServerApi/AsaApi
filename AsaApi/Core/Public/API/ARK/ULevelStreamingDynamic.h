#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "ULevelStreaming.h"

class ULevelStreamingDynamic : public ULevelStreaming
{
public:
	ULevelStreamingDynamic() = delete;
	~ULevelStreamingDynamic() = delete;
	ULevelStreamingDynamic(const ULevelStreamingDynamic&) = delete;
	ULevelStreamingDynamic& operator=(const ULevelStreamingDynamic&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULevelStreamingDynamic"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULevelStreamingDynamic"); }
	BitFieldValue<bool, unsigned __int32> bInitiallyLoaded() { return { this, "ULevelStreamingDynamic.bInitiallyLoaded"}; }
	BitFieldValue<bool, unsigned __int32> bInitiallyVisible() { return { this, "ULevelStreamingDynamic.bInitiallyVisible"}; }
	void PostLoad() { NativeCall<void>(this, "ULevelStreamingDynamic.PostLoad()"); }
	void SetShouldBeLoaded(bool bInShouldBeLoaded) { NativeCall<void, bool>(this, "ULevelStreamingDynamic.SetShouldBeLoaded(bool)", bInShouldBeLoaded); }
	bool ShouldBeLoaded() { return NativeCall<bool>(this, "ULevelStreamingDynamic.ShouldBeLoaded()"); }
};
