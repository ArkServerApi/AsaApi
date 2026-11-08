#pragma once
#include "BulkForward.h"
#include "APrimalDinoCharacter.h"

struct AVRMainBoss_Character : public APrimalDinoCharacter
{
public:
	AVRMainBoss_Character() = delete;
	~AVRMainBoss_Character() = delete;
	AVRMainBoss_Character(const AVRMainBoss_Character&) = delete;
	AVRMainBoss_Character& operator=(const AVRMainBoss_Character&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AVRMainBoss_Character"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AVRMainBoss_Character"); }

	AMissionType*& CurrentMissionField() { return *GetNativePointerField<AMissionType**>(this, "AVRMainBoss_Character.CurrentMission"); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AVRMainBoss_Character.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
};
