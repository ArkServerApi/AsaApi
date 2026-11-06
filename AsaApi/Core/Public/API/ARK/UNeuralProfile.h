#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNeuralProfile : public UObject
{
public:
	UNeuralProfile() = delete;
	~UNeuralProfile() = delete;
	UNeuralProfile(const UNeuralProfile&) = delete;
	UNeuralProfile& operator=(const UNeuralProfile&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FNeuralProfileStruct& SettingsField() { return *GetNativePointerField<FNeuralProfileStruct*>(this, "UNeuralProfile.Settings"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "UNeuralProfile.Guid"); }
	void BeginDestroy() { NativeCall<void>(this, "UNeuralProfile.BeginDestroy()"); }
};
