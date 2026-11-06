#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UNavigationDataChunk : public UObject
{
public:
	UNavigationDataChunk() = delete;
	~UNavigationDataChunk() = delete;
	UNavigationDataChunk(const UNavigationDataChunk&) = delete;
	UNavigationDataChunk& operator=(const UNavigationDataChunk&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UNavigationDataChunk.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	FName& NavigationDataNameField() { return *GetNativePointerField<FName*>(this, "UNavigationDataChunk.NavigationDataName"); }
};
