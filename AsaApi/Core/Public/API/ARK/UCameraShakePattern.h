#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UCameraShakePattern : public UObject
{
public:
	UCameraShakePattern() = delete;
	~UCameraShakePattern() = delete;
	UCameraShakePattern(const UCameraShakePattern&) = delete;
	UCameraShakePattern& operator=(const UCameraShakePattern&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCameraShakePattern"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCameraShakePattern"); }
	void GetShakePatternInfoImpl(FCameraShakeInfo& OutInfo) { NativeCall<void, FCameraShakeInfo&>(this, "UCameraShakePattern.GetShakePatternInfoImpl(FCameraShakeInfo&)", OutInfo); }
	UCameraShakeBase* GetShakeInstance() { return NativeCall<UCameraShakeBase*>(this, "UCameraShakePattern.GetShakeInstance()"); }
	void StopShakePattern(const FCameraShakePatternStopParams& Params) { NativeCall<void, const FCameraShakePatternStopParams&>(this, "UCameraShakePattern.StopShakePattern(FCameraShakePatternStopParams&)", Params); }
	void StartShakePattern(const FCameraShakePatternStartParams& Params) { NativeCall<void, const FCameraShakePatternStartParams&>(this, "UCameraShakePattern.StartShakePattern(FCameraShakePatternStartParams&)", Params); }
	void TeardownShakePatternImpl() { NativeCall<void>(this, "UCameraShakePattern.TeardownShakePatternImpl()"); }
	void TeardownShakePattern() { NativeCall<void>(this, "UCameraShakePattern.TeardownShakePattern()"); }
	void ScrubShakePattern(const FCameraShakePatternScrubParams& Params, FCameraShakePatternUpdateResult& OutResult) { NativeCall<void, const FCameraShakePatternScrubParams&, FCameraShakePatternUpdateResult&>(this, "UCameraShakePattern.ScrubShakePattern(FCameraShakePatternScrubParams&,FCameraShakePatternUpdateResult&)", Params, OutResult); }
	void StopShakePatternImpl(const FCameraShakePatternStopParams& Params) { NativeCall<void, const FCameraShakePatternStopParams&>(this, "UCameraShakePattern.StopShakePatternImpl(FCameraShakePatternStopParams&)", Params); }
	void StartShakePatternImpl(const FCameraShakePatternStartParams& Params) { NativeCall<void, const FCameraShakePatternStartParams&>(this, "UCameraShakePattern.StartShakePatternImpl(FCameraShakePatternStartParams&)", Params); }
	bool IsFinished() { return NativeCall<bool>(this, "UCameraShakePattern.IsFinished()"); }
	void UpdateShakePattern(const FCameraShakePatternUpdateParams& Params, FCameraShakePatternUpdateResult& OutResult) { NativeCall<void, const FCameraShakePatternUpdateParams&, FCameraShakePatternUpdateResult&>(this, "UCameraShakePattern.UpdateShakePattern(FCameraShakePatternUpdateParams&,FCameraShakePatternUpdateResult&)", Params, OutResult); }
	void GetShakePatternInfo(FCameraShakeInfo& OutInfo) { NativeCall<void, FCameraShakeInfo&>(this, "UCameraShakePattern.GetShakePatternInfo(FCameraShakeInfo&)", OutInfo); }
	void UpdateShakePatternImpl(const FCameraShakePatternUpdateParams& Params, FCameraShakePatternUpdateResult& OutResult) { NativeCall<void, const FCameraShakePatternUpdateParams&, FCameraShakePatternUpdateResult&>(this, "UCameraShakePattern.UpdateShakePatternImpl(FCameraShakePatternUpdateParams&,FCameraShakePatternUpdateResult&)", Params, OutResult); }
	bool IsFinishedImpl() { return NativeCall<bool>(this, "UCameraShakePattern.IsFinishedImpl()"); }
	void ScrubShakePatternImpl(const FCameraShakePatternScrubParams& Params, FCameraShakePatternUpdateResult& OutResult) { NativeCall<void, const FCameraShakePatternScrubParams&, FCameraShakePatternUpdateResult&>(this, "UCameraShakePattern.ScrubShakePatternImpl(FCameraShakePatternScrubParams&,FCameraShakePatternUpdateResult&)", Params, OutResult); }
};
