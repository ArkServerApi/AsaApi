#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USoundClass : public UObject
{
public:
	USoundClass() = delete;
	~USoundClass() = delete;
	USoundClass(const USoundClass&) = delete;
	USoundClass& operator=(const USoundClass&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FSoundClassProperties& PropertiesField() { return *GetNativePointerField<FSoundClassProperties*>(this, "USoundClass.Properties"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USoundClass.Serialize(FArchive&)", Ar); }
	void BeginDestroy() { NativeCall<void>(this, "USoundClass.BeginDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "USoundClass.PostLoad()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USoundClass.GetDesc()", result); }
};
