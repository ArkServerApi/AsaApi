#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ADirectionalLight : public ALight
{
public:
	ADirectionalLight() = delete;
	~ADirectionalLight() = delete;
	ADirectionalLight(const ADirectionalLight&) = delete;
	ADirectionalLight& operator=(const ADirectionalLight&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bAddedToArrayField() { return *GetNativePointerField<bool*>(this, "ADirectionalLight.bAddedToArray"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ADirectionalLight.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PostLoad() { NativeCall<void>(this, "ADirectionalLight.PostLoad()"); }
	void Destroyed() { NativeCall<void>(this, "ADirectionalLight.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "ADirectionalLight.BeginPlay()"); }
};
