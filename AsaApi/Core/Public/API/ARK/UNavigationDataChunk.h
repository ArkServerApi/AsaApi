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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavigationDataChunk"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavigationDataChunk"); }
	FName& NavigationDataNameField() { return *GetNativePointerField<FName*>(this, "UNavigationDataChunk.NavigationDataName"); }
};
