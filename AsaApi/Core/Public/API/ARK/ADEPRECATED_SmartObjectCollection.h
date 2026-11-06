#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADEPRECATED_SmartObjectCollection : public AActor
{
public:
	ADEPRECATED_SmartObjectCollection() = delete;
	~ADEPRECATED_SmartObjectCollection() = delete;
	ADEPRECATED_SmartObjectCollection(const ADEPRECATED_SmartObjectCollection&) = delete;
	ADEPRECATED_SmartObjectCollection& operator=(const ADEPRECATED_SmartObjectCollection&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADEPRECATED_SmartObjectCollection"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADEPRECATED_SmartObjectCollection"); }

	bool& bRegisteredField() { return *GetNativePointerField<bool*>(this, "ADEPRECATED_SmartObjectCollection.bRegistered"); }
	void PostLoad() { NativeCall<void>(this, "ADEPRECATED_SmartObjectCollection.PostLoad()"); }
};
