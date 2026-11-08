#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UDEPRECATED_DataLayer : public UObject
{
public:
	UDEPRECATED_DataLayer() = delete;
	~UDEPRECATED_DataLayer() = delete;
	UDEPRECATED_DataLayer(const UDEPRECATED_DataLayer&) = delete;
	UDEPRECATED_DataLayer& operator=(const UDEPRECATED_DataLayer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDEPRECATED_DataLayer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDEPRECATED_DataLayer"); }
	FName& DataLayerLabelField() { return *GetNativePointerField<FName*>(this, "UDEPRECATED_DataLayer.DataLayerLabel"); }
	EDataLayerRuntimeState& InitialRuntimeStateField() { return *GetNativePointerField<EDataLayerRuntimeState*>(this, "UDEPRECATED_DataLayer.InitialRuntimeState"); }
	FColor& DebugColorField() { return *GetNativePointerField<FColor*>(this, "UDEPRECATED_DataLayer.DebugColor"); }
	BitFieldValue<bool, unsigned __int32> bIsRuntime() { return { this, "UDEPRECATED_DataLayer.bIsRuntime"}; }
};
