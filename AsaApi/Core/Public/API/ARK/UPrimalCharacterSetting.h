#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalCharacterSetting : public UObject
{
public:
	UPrimalCharacterSetting() = delete;
	~UPrimalCharacterSetting() = delete;
	UPrimalCharacterSetting(const UPrimalCharacterSetting&) = delete;
	UPrimalCharacterSetting& operator=(const UPrimalCharacterSetting&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FCharacterPreset& CharacterSettingField() { return *GetNativePointerField<FCharacterPreset*>(this, "UPrimalCharacterSetting.CharacterSetting"); }
};
